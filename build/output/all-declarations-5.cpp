#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

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
//
//     @equatableExtensionAST.weak generic code implementation
//
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
//
//Class for element of '@semanticInstructionListAST' list
//
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

void GGS_semanticInstructionListAST::enterElement (const GGS_semanticInstructionListAST_2E_element & inValue,
                                                   Compiler * /* inCompiler */
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

void GGS_semanticInstructionListAST::addAssign_operation (const GGS_semanticInstructionAST & inOperand0
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

void GGS_semanticInstructionListAST::plusAssign_operation (const GGS_semanticInstructionListAST inOperand,
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

cEnumerator_semanticInstructionListAST::cEnumerator_semanticInstructionListAST (const GGS_semanticInstructionListAST & inEnumeratedObject,
                                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST_2E_element cEnumerator_semanticInstructionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_semanticInstructionListAST * p = (const cCollectionElement_semanticInstructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionAST cEnumerator_semanticInstructionListAST::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_semanticInstructionListAST * p = (const cCollectionElement_semanticInstructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
  return p->mObject.mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//
//     @semanticInstructionListAST generic code implementation
//
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
//
//     @extensionGetterAST.weak generic code implementation
//
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
//
//Class for element of '@semanticInstructionListForGeneration' list
//
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

void GGS_semanticInstructionListForGeneration::enterElement (const GGS_semanticInstructionListForGeneration_2E_element & inValue,
                                                             Compiler * /* inCompiler */
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

void GGS_semanticInstructionListForGeneration::addAssign_operation (const GGS_semanticInstructionForGeneration & inOperand0
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

void GGS_semanticInstructionListForGeneration::plusAssign_operation (const GGS_semanticInstructionListForGeneration inOperand,
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

cEnumerator_semanticInstructionListForGeneration::cEnumerator_semanticInstructionListForGeneration (const GGS_semanticInstructionListForGeneration & inEnumeratedObject,
                                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration_2E_element cEnumerator_semanticInstructionListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_semanticInstructionListForGeneration * p = (const cCollectionElement_semanticInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionForGeneration cEnumerator_semanticInstructionListForGeneration::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_semanticInstructionListForGeneration * p = (const cCollectionElement_semanticInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
  return p->mObject.mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//
//     @semanticInstructionListForGeneration generic code implementation
//
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
//
//     @extensionMethodAST.weak generic code implementation
//
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
//
//     @extensionSetterAST.weak generic code implementation
//
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
//
//     @initializerAST.weak generic code implementation
//
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
//
//     @overridingAbstractExtensionGetterAST.weak generic code implementation
//
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
//
//     @overridingAbstractExtensionMethodAST.weak generic code implementation
//
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
//
//     @overridingAbstractExtensionSetterAST.weak generic code implementation
//
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
//
//     @overridingExtensionGetterAST.weak generic code implementation
//
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
//
//     @overridingExtensionMethodAST.weak generic code implementation
//
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
//
//     @overridingExtensionSetterAST.weak generic code implementation
//
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
//
//     @typeKindEnum generic code implementation
//
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

cMapElement_propertyMap::cMapElement_propertyMap (const GGS_propertyMap_2E_element & inValue
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mAccessControl (inValue.mProperty_mAccessControl),
mProperty_mIsConstant (inValue.mProperty_mIsConstant),
mProperty_mPropertyType (inValue.mProperty_mPropertyType) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_propertyMap::cMapElement_propertyMap (const GGS_lstring & inKey,
                                                  const GGS_AccessControl & in_mAccessControl,
                                                  const GGS_bool & in_mIsConstant,
                                                  const GGS_unifiedTypeMapEntry & in_mPropertyType
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mAccessControl (in_mAccessControl),
mProperty_mIsConstant (in_mIsConstant),
mProperty_mPropertyType (in_mPropertyType) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_propertyMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_propertyMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_propertyMap (mProperty_lkey, mProperty_mAccessControl, mProperty_mIsConstant, mProperty_mPropertyType COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_propertyMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAccessControl" ":") ;
  mProperty_mAccessControl.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsConstant" ":") ;
  mProperty_mIsConstant.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPropertyType" ":") ;
  mProperty_mPropertyType.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap::GGS_propertyMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap::GGS_propertyMap (const GGS_propertyMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap & GGS_propertyMap::operator = (const GGS_propertyMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap GGS_propertyMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_propertyMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap GGS_propertyMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_propertyMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element_3F_ GGS_propertyMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_propertyMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_propertyMap * p = (cMapElement_propertyMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_propertyMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_propertyMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mAccessControl = p->mProperty_mAccessControl ;
      element.mProperty_mIsConstant = p->mProperty_mIsConstant ;
      element.mProperty_mPropertyType = p->mProperty_mPropertyType ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap GGS_propertyMap::class_func_mapWithMapToOverride (const GGS_propertyMap & inMapToOverride
                                                                  COMMA_LOCATION_ARGS) {
  GGS_propertyMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap GGS_propertyMap::getter_overriddenMap (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_propertyMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::enterElement (const GGS_propertyMap_2E_element & inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * p = nullptr ;
  macroMyNew (p, cMapElement_propertyMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@propertyMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::addAssign_operation (const GGS_lstring & inKey,
                                           const GGS_AccessControl & inArgument0,
                                           const GGS_bool & inArgument1,
                                           const GGS_unifiedTypeMapEntry & inArgument2,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * p = nullptr ;
  macroMyNew (p, cMapElement_propertyMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@propertyMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap GGS_propertyMap::add_operation (const GGS_propertyMap & inOperand,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  GGS_propertyMap result = *this ;
  cEnumerator_propertyMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mAccessControl (HERE), enumerator.current_mIsConstant (HERE), enumerator.current_mPropertyType (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::setter_insertKey (GGS_lstring inKey,
                                        GGS_AccessControl inArgument0,
                                        GGS_bool inArgument1,
                                        GGS_unifiedTypeMapEntry inArgument2,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * p = nullptr ;
  macroMyNew (p, cMapElement_propertyMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' property has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_propertyMap_searchKey = "the '%K' property is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::method_searchKey (GGS_lstring inKey,
                                        GGS_AccessControl & outArgument0,
                                        GGS_bool & outArgument1,
                                        GGS_unifiedTypeMapEntry & outArgument2,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) performSearch (inKey,
                                                                                       inCompiler,
                                                                                       kSearchErrorMessage_propertyMap_searchKey
                                                                                       COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    outArgument0 = p->mProperty_mAccessControl ;
    outArgument1 = p->mProperty_mIsConstant ;
    outArgument2 = p->mProperty_mPropertyType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl GGS_propertyMap::getter_mAccessControlForKey (const GGS_string & inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) attributes ;
  GGS_AccessControl result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    result = p->mProperty_mAccessControl ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyMap::getter_mIsConstantForKey (const GGS_string & inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    result = p->mProperty_mIsConstant ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_propertyMap::getter_mPropertyTypeForKey (const GGS_string & inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) attributes ;
  GGS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    result = p->mProperty_mPropertyType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::setter_setMAccessControlForKey (GGS_AccessControl inAttributeValue,
                                                      GGS_string inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyMap * p = (cMapElement_propertyMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    p->mProperty_mAccessControl = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::setter_setMIsConstantForKey (GGS_bool inAttributeValue,
                                                   GGS_string inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyMap * p = (cMapElement_propertyMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    p->mProperty_mIsConstant = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::setter_setMPropertyTypeForKey (GGS_unifiedTypeMapEntry inAttributeValue,
                                                     GGS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyMap * p = (cMapElement_propertyMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    p->mProperty_mPropertyType = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_propertyMap * GGS_propertyMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                              const GGS_string & inKey
                                                                              COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * result = (cMapElement_propertyMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_propertyMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_propertyMap::cEnumerator_propertyMap (const GGS_propertyMap & inEnumeratedObject,
                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element cEnumerator_propertyMap::current (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return GGS_propertyMap_2E_element (p->mProperty_lkey, p->mProperty_mAccessControl, p->mProperty_mIsConstant, p->mProperty_mPropertyType) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_propertyMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl cEnumerator_propertyMap::current_mAccessControl (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mProperty_mAccessControl ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_propertyMap::current_mIsConstant (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mProperty_mIsConstant ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry cEnumerator_propertyMap::current_mPropertyType (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mProperty_mPropertyType ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertyMap generic code implementation
//
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

cMapElement_classFunctionMap::cMapElement_classFunctionMap (const GGS_classFunctionMap_2E_element & inValue
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mArgumentTypeList (inValue.mProperty_mArgumentTypeList),
mProperty_mHasCompilerArgument (inValue.mProperty_mHasCompilerArgument),
mProperty_mReturnedType (inValue.mProperty_mReturnedType) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_classFunctionMap::cMapElement_classFunctionMap (const GGS_lstring & inKey,
                                                            const GGS_functionSignature & in_mArgumentTypeList,
                                                            const GGS_bool & in_mHasCompilerArgument,
                                                            const GGS_unifiedTypeMapEntry & in_mReturnedType
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mArgumentTypeList (in_mArgumentTypeList),
mProperty_mHasCompilerArgument (in_mHasCompilerArgument),
mProperty_mReturnedType (in_mReturnedType) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_classFunctionMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_classFunctionMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_classFunctionMap (mProperty_lkey, mProperty_mArgumentTypeList, mProperty_mHasCompilerArgument, mProperty_mReturnedType COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_classFunctionMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mArgumentTypeList" ":") ;
  mProperty_mArgumentTypeList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mHasCompilerArgument" ":") ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mReturnedType" ":") ;
  mProperty_mReturnedType.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap::GGS_classFunctionMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap::GGS_classFunctionMap (const GGS_classFunctionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap & GGS_classFunctionMap::operator = (const GGS_classFunctionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap GGS_classFunctionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_classFunctionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap GGS_classFunctionMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_classFunctionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap_2E_element_3F_ GGS_classFunctionMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_classFunctionMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_classFunctionMap * p = (cMapElement_classFunctionMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_classFunctionMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_classFunctionMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mArgumentTypeList = p->mProperty_mArgumentTypeList ;
      element.mProperty_mHasCompilerArgument = p->mProperty_mHasCompilerArgument ;
      element.mProperty_mReturnedType = p->mProperty_mReturnedType ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap GGS_classFunctionMap::class_func_mapWithMapToOverride (const GGS_classFunctionMap & inMapToOverride
                                                                            COMMA_LOCATION_ARGS) {
  GGS_classFunctionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap GGS_classFunctionMap::getter_overriddenMap (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_classFunctionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classFunctionMap::enterElement (const GGS_classFunctionMap_2E_element & inValue,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_classFunctionMap * p = nullptr ;
  macroMyNew (p, cMapElement_classFunctionMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@classFunctionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classFunctionMap::addAssign_operation (const GGS_lstring & inKey,
                                                const GGS_functionSignature & inArgument0,
                                                const GGS_bool & inArgument1,
                                                const GGS_unifiedTypeMapEntry & inArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_classFunctionMap * p = nullptr ;
  macroMyNew (p, cMapElement_classFunctionMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@classFunctionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap GGS_classFunctionMap::add_operation (const GGS_classFunctionMap & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_classFunctionMap result = *this ;
  cEnumerator_classFunctionMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mArgumentTypeList (HERE), enumerator.current_mHasCompilerArgument (HERE), enumerator.current_mReturnedType (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classFunctionMap::setter_insertKey (GGS_lstring inKey,
                                             GGS_functionSignature inArgument0,
                                             GGS_bool inArgument1,
                                             GGS_unifiedTypeMapEntry inArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_classFunctionMap * p = nullptr ;
  macroMyNew (p, cMapElement_classFunctionMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' class function has been already defined" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_classFunctionMap_searchKey = "the '%K' class function is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_classFunctionMap::method_searchKey (GGS_lstring inKey,
                                             GGS_functionSignature & outArgument0,
                                             GGS_bool & outArgument1,
                                             GGS_unifiedTypeMapEntry & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_classFunctionMap * p = (const cMapElement_classFunctionMap *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kSearchErrorMessage_classFunctionMap_searchKey
                                                                                                 COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_classFunctionMap) ;
    outArgument0 = p->mProperty_mArgumentTypeList ;
    outArgument1 = p->mProperty_mHasCompilerArgument ;
    outArgument2 = p->mProperty_mReturnedType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_classFunctionMap::setter_insertOrReplace (GGS_lstring inKey,
                                                   GGS_functionSignature inArgument0,
                                                   GGS_bool inArgument1,
                                                   GGS_unifiedTypeMapEntry inArgument2
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  cMapElement_classFunctionMap * p = nullptr ;
  macroMyNew (p, cMapElement_classFunctionMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  performInsertOrReplace (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature GGS_classFunctionMap::getter_mArgumentTypeListForKey (const GGS_string & inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_classFunctionMap * p = (const cMapElement_classFunctionMap *) attributes ;
  GGS_functionSignature result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_classFunctionMap) ;
    result = p->mProperty_mArgumentTypeList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classFunctionMap::getter_mHasCompilerArgumentForKey (const GGS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_classFunctionMap * p = (const cMapElement_classFunctionMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_classFunctionMap) ;
    result = p->mProperty_mHasCompilerArgument ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_classFunctionMap::getter_mReturnedTypeForKey (const GGS_string & inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_classFunctionMap * p = (const cMapElement_classFunctionMap *) attributes ;
  GGS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_classFunctionMap) ;
    result = p->mProperty_mReturnedType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classFunctionMap::setter_setMArgumentTypeListForKey (GGS_functionSignature inAttributeValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_classFunctionMap * p = (cMapElement_classFunctionMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_classFunctionMap) ;
    p->mProperty_mArgumentTypeList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_classFunctionMap::setter_setMHasCompilerArgumentForKey (GGS_bool inAttributeValue,
                                                                 GGS_string inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_classFunctionMap * p = (cMapElement_classFunctionMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_classFunctionMap) ;
    p->mProperty_mHasCompilerArgument = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_classFunctionMap::setter_setMReturnedTypeForKey (GGS_unifiedTypeMapEntry inAttributeValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_classFunctionMap * p = (cMapElement_classFunctionMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_classFunctionMap) ;
    p->mProperty_mReturnedType = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_classFunctionMap * GGS_classFunctionMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                        const GGS_string & inKey
                                                                                        COMMA_LOCATION_ARGS) {
  cMapElement_classFunctionMap * result = (cMapElement_classFunctionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_classFunctionMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_classFunctionMap::cEnumerator_classFunctionMap (const GGS_classFunctionMap & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap_2E_element cEnumerator_classFunctionMap::current (LOCATION_ARGS) const {
  const cMapElement_classFunctionMap * p = (const cMapElement_classFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classFunctionMap) ;
  return GGS_classFunctionMap_2E_element (p->mProperty_lkey, p->mProperty_mArgumentTypeList, p->mProperty_mHasCompilerArgument, p->mProperty_mReturnedType) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_classFunctionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature cEnumerator_classFunctionMap::current_mArgumentTypeList (LOCATION_ARGS) const {
  const cMapElement_classFunctionMap * p = (const cMapElement_classFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classFunctionMap) ;
  return p->mProperty_mArgumentTypeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_classFunctionMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  const cMapElement_classFunctionMap * p = (const cMapElement_classFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classFunctionMap) ;
  return p->mProperty_mHasCompilerArgument ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry cEnumerator_classFunctionMap::current_mReturnedType (LOCATION_ARGS) const {
  const cMapElement_classFunctionMap * p = (const cMapElement_classFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classFunctionMap) ;
  return p->mProperty_mReturnedType ;
}

//--------------------------------------------------------------------------------------------------
//
//     @classFunctionMap generic code implementation
//
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

cMapElement_getterMap::cMapElement_getterMap (const GGS_getterMap_2E_element & inValue
                                              COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mKind (inValue.mProperty_mKind),
mProperty_mArgumentTypeList (inValue.mProperty_mArgumentTypeList),
mProperty_mDeclarationLocation (inValue.mProperty_mDeclarationLocation),
mProperty_mHasCompilerArgument (inValue.mProperty_mHasCompilerArgument),
mProperty_mReturnedType (inValue.mProperty_mReturnedType),
mProperty_mQualifier (inValue.mProperty_mQualifier),
mProperty_mGetterNameThatObsoletesInvokationName (inValue.mProperty_mGetterNameThatObsoletesInvokationName) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_getterMap::cMapElement_getterMap (const GGS_lstring & inKey,
                                              const GGS_methodKind & in_mKind,
                                              const GGS_functionSignature & in_mArgumentTypeList,
                                              const GGS_location & in_mDeclarationLocation,
                                              const GGS_bool & in_mHasCompilerArgument,
                                              const GGS_unifiedTypeMapEntry & in_mReturnedType,
                                              const GGS_methodQualifier & in_mQualifier,
                                              const GGS_string & in_mGetterNameThatObsoletesInvokationName
                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mKind (in_mKind),
mProperty_mArgumentTypeList (in_mArgumentTypeList),
mProperty_mDeclarationLocation (in_mDeclarationLocation),
mProperty_mHasCompilerArgument (in_mHasCompilerArgument),
mProperty_mReturnedType (in_mReturnedType),
mProperty_mQualifier (in_mQualifier),
mProperty_mGetterNameThatObsoletesInvokationName (in_mGetterNameThatObsoletesInvokationName) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_getterMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_getterMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_getterMap (mProperty_lkey, mProperty_mKind, mProperty_mArgumentTypeList, mProperty_mDeclarationLocation, mProperty_mHasCompilerArgument, mProperty_mReturnedType, mProperty_mQualifier, mProperty_mGetterNameThatObsoletesInvokationName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_getterMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mKind" ":") ;
  mProperty_mKind.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mArgumentTypeList" ":") ;
  mProperty_mArgumentTypeList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDeclarationLocation" ":") ;
  mProperty_mDeclarationLocation.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mHasCompilerArgument" ":") ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mReturnedType" ":") ;
  mProperty_mReturnedType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mQualifier" ":") ;
  mProperty_mQualifier.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGetterNameThatObsoletesInvokationName" ":") ;
  mProperty_mGetterNameThatObsoletesInvokationName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap::GGS_getterMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap::GGS_getterMap (const GGS_getterMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap & GGS_getterMap::operator = (const GGS_getterMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap GGS_getterMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_getterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap GGS_getterMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_getterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap_2E_element_3F_ GGS_getterMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_getterMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_getterMap * p = (cMapElement_getterMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_getterMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_getterMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mKind = p->mProperty_mKind ;
      element.mProperty_mArgumentTypeList = p->mProperty_mArgumentTypeList ;
      element.mProperty_mDeclarationLocation = p->mProperty_mDeclarationLocation ;
      element.mProperty_mHasCompilerArgument = p->mProperty_mHasCompilerArgument ;
      element.mProperty_mReturnedType = p->mProperty_mReturnedType ;
      element.mProperty_mQualifier = p->mProperty_mQualifier ;
      element.mProperty_mGetterNameThatObsoletesInvokationName = p->mProperty_mGetterNameThatObsoletesInvokationName ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap GGS_getterMap::class_func_mapWithMapToOverride (const GGS_getterMap & inMapToOverride
                                                              COMMA_LOCATION_ARGS) {
  GGS_getterMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap GGS_getterMap::getter_overriddenMap (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_getterMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_getterMap::enterElement (const GGS_getterMap_2E_element & inValue,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cMapElement_getterMap * p = nullptr ;
  macroMyNew (p, cMapElement_getterMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@getterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_getterMap::addAssign_operation (const GGS_lstring & inKey,
                                         const GGS_methodKind & inArgument0,
                                         const GGS_functionSignature & inArgument1,
                                         const GGS_location & inArgument2,
                                         const GGS_bool & inArgument3,
                                         const GGS_unifiedTypeMapEntry & inArgument4,
                                         const GGS_methodQualifier & inArgument5,
                                         const GGS_string & inArgument6,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_getterMap * p = nullptr ;
  macroMyNew (p, cMapElement_getterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@getterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap GGS_getterMap::add_operation (const GGS_getterMap & inOperand,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  GGS_getterMap result = *this ;
  cEnumerator_getterMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mKind (HERE), enumerator.current_mArgumentTypeList (HERE), enumerator.current_mDeclarationLocation (HERE), enumerator.current_mHasCompilerArgument (HERE), enumerator.current_mReturnedType (HERE), enumerator.current_mQualifier (HERE), enumerator.current_mGetterNameThatObsoletesInvokationName (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_getterMap::setter_insertKey (GGS_lstring inKey,
                                      GGS_methodKind inArgument0,
                                      GGS_functionSignature inArgument1,
                                      GGS_location inArgument2,
                                      GGS_bool inArgument3,
                                      GGS_unifiedTypeMapEntry inArgument4,
                                      GGS_methodQualifier inArgument5,
                                      GGS_string inArgument6,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cMapElement_getterMap * p = nullptr ;
  macroMyNew (p, cMapElement_getterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' getter is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_getterMap_searchKey = "the '%K' getter is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_getterMap::method_searchKey (GGS_lstring inKey,
                                      GGS_methodKind & outArgument0,
                                      GGS_functionSignature & outArgument1,
                                      GGS_location & outArgument2,
                                      GGS_bool & outArgument3,
                                      GGS_unifiedTypeMapEntry & outArgument4,
                                      GGS_methodQualifier & outArgument5,
                                      GGS_string & outArgument6,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) performSearch (inKey,
                                                                                   inCompiler,
                                                                                   kSearchErrorMessage_getterMap_searchKey
                                                                                   COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_getterMap) ;
    outArgument0 = p->mProperty_mKind ;
    outArgument1 = p->mProperty_mArgumentTypeList ;
    outArgument2 = p->mProperty_mDeclarationLocation ;
    outArgument3 = p->mProperty_mHasCompilerArgument ;
    outArgument4 = p->mProperty_mReturnedType ;
    outArgument5 = p->mProperty_mQualifier ;
    outArgument6 = p->mProperty_mGetterNameThatObsoletesInvokationName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getterMap::setter_insertOrReplace (GGS_lstring inKey,
                                            GGS_methodKind inArgument0,
                                            GGS_functionSignature inArgument1,
                                            GGS_location inArgument2,
                                            GGS_bool inArgument3,
                                            GGS_unifiedTypeMapEntry inArgument4,
                                            GGS_methodQualifier inArgument5,
                                            GGS_string inArgument6
                                            COMMA_UNUSED_LOCATION_ARGS) {
  cMapElement_getterMap * p = nullptr ;
  macroMyNew (p, cMapElement_getterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  performInsertOrReplace (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodKind GGS_getterMap::getter_mKindForKey (const GGS_string & inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) attributes ;
  GGS_methodKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature GGS_getterMap::getter_mArgumentTypeListForKey (const GGS_string & inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) attributes ;
  GGS_functionSignature result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    result = p->mProperty_mArgumentTypeList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_getterMap::getter_mDeclarationLocationForKey (const GGS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) attributes ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    result = p->mProperty_mDeclarationLocation ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_getterMap::getter_mHasCompilerArgumentForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    result = p->mProperty_mHasCompilerArgument ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_getterMap::getter_mReturnedTypeForKey (const GGS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) attributes ;
  GGS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    result = p->mProperty_mReturnedType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier GGS_getterMap::getter_mQualifierForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) attributes ;
  GGS_methodQualifier result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    result = p->mProperty_mQualifier ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_getterMap::getter_mGetterNameThatObsoletesInvokationNameForKey (const GGS_string & inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) attributes ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    result = p->mProperty_mGetterNameThatObsoletesInvokationName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_getterMap::setter_setMKindForKey (GGS_methodKind inAttributeValue,
                                           GGS_string inKey,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_getterMap * p = (cMapElement_getterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    p->mProperty_mKind = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getterMap::setter_setMArgumentTypeListForKey (GGS_functionSignature inAttributeValue,
                                                       GGS_string inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_getterMap * p = (cMapElement_getterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    p->mProperty_mArgumentTypeList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getterMap::setter_setMDeclarationLocationForKey (GGS_location inAttributeValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_getterMap * p = (cMapElement_getterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    p->mProperty_mDeclarationLocation = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getterMap::setter_setMHasCompilerArgumentForKey (GGS_bool inAttributeValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_getterMap * p = (cMapElement_getterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    p->mProperty_mHasCompilerArgument = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getterMap::setter_setMReturnedTypeForKey (GGS_unifiedTypeMapEntry inAttributeValue,
                                                   GGS_string inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_getterMap * p = (cMapElement_getterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    p->mProperty_mReturnedType = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getterMap::setter_setMQualifierForKey (GGS_methodQualifier inAttributeValue,
                                                GGS_string inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_getterMap * p = (cMapElement_getterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    p->mProperty_mQualifier = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getterMap::setter_setMGetterNameThatObsoletesInvokationNameForKey (GGS_string inAttributeValue,
                                                                            GGS_string inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_getterMap * p = (cMapElement_getterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    p->mProperty_mGetterNameThatObsoletesInvokationName = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_getterMap * GGS_getterMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                          const GGS_string & inKey
                                                                          COMMA_LOCATION_ARGS) {
  cMapElement_getterMap * result = (cMapElement_getterMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_getterMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_getterMap::cEnumerator_getterMap (const GGS_getterMap & inEnumeratedObject,
                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap_2E_element cEnumerator_getterMap::current (LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_getterMap) ;
  return GGS_getterMap_2E_element (p->mProperty_lkey, p->mProperty_mKind, p->mProperty_mArgumentTypeList, p->mProperty_mDeclarationLocation, p->mProperty_mHasCompilerArgument, p->mProperty_mReturnedType, p->mProperty_mQualifier, p->mProperty_mGetterNameThatObsoletesInvokationName) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_getterMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodKind cEnumerator_getterMap::current_mKind (LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_getterMap) ;
  return p->mProperty_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature cEnumerator_getterMap::current_mArgumentTypeList (LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_getterMap) ;
  return p->mProperty_mArgumentTypeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location cEnumerator_getterMap::current_mDeclarationLocation (LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_getterMap) ;
  return p->mProperty_mDeclarationLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_getterMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_getterMap) ;
  return p->mProperty_mHasCompilerArgument ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry cEnumerator_getterMap::current_mReturnedType (LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_getterMap) ;
  return p->mProperty_mReturnedType ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier cEnumerator_getterMap::current_mQualifier (LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_getterMap) ;
  return p->mProperty_mQualifier ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_getterMap::current_mGetterNameThatObsoletesInvokationName (LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_getterMap) ;
  return p->mProperty_mGetterNameThatObsoletesInvokationName ;
}

//--------------------------------------------------------------------------------------------------
//
//     @getterMap generic code implementation
//
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

cMapElement_setterMap::cMapElement_setterMap (const GGS_setterMap_2E_element & inValue
                                              COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mKind (inValue.mProperty_mKind),
mProperty_mParameterList (inValue.mProperty_mParameterList),
mProperty_mHasCompilerArgument (inValue.mProperty_mHasCompilerArgument),
mProperty_mQualifier (inValue.mProperty_mQualifier),
mProperty_mErrorMessage (inValue.mProperty_mErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_setterMap::cMapElement_setterMap (const GGS_lstring & inKey,
                                              const GGS_methodKind & in_mKind,
                                              const GGS_formalParameterSignature & in_mParameterList,
                                              const GGS_bool & in_mHasCompilerArgument,
                                              const GGS_methodQualifier & in_mQualifier,
                                              const GGS_string & in_mErrorMessage
                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mKind (in_mKind),
mProperty_mParameterList (in_mParameterList),
mProperty_mHasCompilerArgument (in_mHasCompilerArgument),
mProperty_mQualifier (in_mQualifier),
mProperty_mErrorMessage (in_mErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_setterMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_setterMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_setterMap (mProperty_lkey, mProperty_mKind, mProperty_mParameterList, mProperty_mHasCompilerArgument, mProperty_mQualifier, mProperty_mErrorMessage COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_setterMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mKind" ":") ;
  mProperty_mKind.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mParameterList" ":") ;
  mProperty_mParameterList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mHasCompilerArgument" ":") ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mQualifier" ":") ;
  mProperty_mQualifier.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mErrorMessage" ":") ;
  mProperty_mErrorMessage.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap::GGS_setterMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap::GGS_setterMap (const GGS_setterMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap & GGS_setterMap::operator = (const GGS_setterMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap GGS_setterMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_setterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap GGS_setterMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_setterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap_2E_element_3F_ GGS_setterMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_setterMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_setterMap * p = (cMapElement_setterMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_setterMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_setterMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mKind = p->mProperty_mKind ;
      element.mProperty_mParameterList = p->mProperty_mParameterList ;
      element.mProperty_mHasCompilerArgument = p->mProperty_mHasCompilerArgument ;
      element.mProperty_mQualifier = p->mProperty_mQualifier ;
      element.mProperty_mErrorMessage = p->mProperty_mErrorMessage ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap GGS_setterMap::class_func_mapWithMapToOverride (const GGS_setterMap & inMapToOverride
                                                              COMMA_LOCATION_ARGS) {
  GGS_setterMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap GGS_setterMap::getter_overriddenMap (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_setterMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_setterMap::enterElement (const GGS_setterMap_2E_element & inValue,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cMapElement_setterMap * p = nullptr ;
  macroMyNew (p, cMapElement_setterMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@setterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_setterMap::addAssign_operation (const GGS_lstring & inKey,
                                         const GGS_methodKind & inArgument0,
                                         const GGS_formalParameterSignature & inArgument1,
                                         const GGS_bool & inArgument2,
                                         const GGS_methodQualifier & inArgument3,
                                         const GGS_string & inArgument4,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_setterMap * p = nullptr ;
  macroMyNew (p, cMapElement_setterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@setterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap GGS_setterMap::add_operation (const GGS_setterMap & inOperand,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  GGS_setterMap result = *this ;
  cEnumerator_setterMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mKind (HERE), enumerator.current_mParameterList (HERE), enumerator.current_mHasCompilerArgument (HERE), enumerator.current_mQualifier (HERE), enumerator.current_mErrorMessage (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_setterMap::setter_insertKey (GGS_lstring inKey,
                                      GGS_methodKind inArgument0,
                                      GGS_formalParameterSignature inArgument1,
                                      GGS_bool inArgument2,
                                      GGS_methodQualifier inArgument3,
                                      GGS_string inArgument4,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cMapElement_setterMap * p = nullptr ;
  macroMyNew (p, cMapElement_setterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' setter is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_setterMap_searchKey = "the '%K' setter is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_setterMap::method_searchKey (GGS_lstring inKey,
                                      GGS_methodKind & outArgument0,
                                      GGS_formalParameterSignature & outArgument1,
                                      GGS_bool & outArgument2,
                                      GGS_methodQualifier & outArgument3,
                                      GGS_string & outArgument4,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) performSearch (inKey,
                                                                                   inCompiler,
                                                                                   kSearchErrorMessage_setterMap_searchKey
                                                                                   COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_setterMap) ;
    outArgument0 = p->mProperty_mKind ;
    outArgument1 = p->mProperty_mParameterList ;
    outArgument2 = p->mProperty_mHasCompilerArgument ;
    outArgument3 = p->mProperty_mQualifier ;
    outArgument4 = p->mProperty_mErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_setterMap::setter_insertOrReplace (GGS_lstring inKey,
                                            GGS_methodKind inArgument0,
                                            GGS_formalParameterSignature inArgument1,
                                            GGS_bool inArgument2,
                                            GGS_methodQualifier inArgument3,
                                            GGS_string inArgument4
                                            COMMA_UNUSED_LOCATION_ARGS) {
  cMapElement_setterMap * p = nullptr ;
  macroMyNew (p, cMapElement_setterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  performInsertOrReplace (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodKind GGS_setterMap::getter_mKindForKey (const GGS_string & inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) attributes ;
  GGS_methodKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_setterMap::getter_mParameterListForKey (const GGS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) attributes ;
  GGS_formalParameterSignature result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    result = p->mProperty_mParameterList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_setterMap::getter_mHasCompilerArgumentForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    result = p->mProperty_mHasCompilerArgument ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier GGS_setterMap::getter_mQualifierForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) attributes ;
  GGS_methodQualifier result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    result = p->mProperty_mQualifier ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_setterMap::getter_mErrorMessageForKey (const GGS_string & inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) attributes ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    result = p->mProperty_mErrorMessage ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_setterMap::setter_setMKindForKey (GGS_methodKind inAttributeValue,
                                           GGS_string inKey,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_setterMap * p = (cMapElement_setterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    p->mProperty_mKind = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_setterMap::setter_setMParameterListForKey (GGS_formalParameterSignature inAttributeValue,
                                                    GGS_string inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_setterMap * p = (cMapElement_setterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    p->mProperty_mParameterList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_setterMap::setter_setMHasCompilerArgumentForKey (GGS_bool inAttributeValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_setterMap * p = (cMapElement_setterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    p->mProperty_mHasCompilerArgument = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_setterMap::setter_setMQualifierForKey (GGS_methodQualifier inAttributeValue,
                                                GGS_string inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_setterMap * p = (cMapElement_setterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    p->mProperty_mQualifier = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_setterMap::setter_setMErrorMessageForKey (GGS_string inAttributeValue,
                                                   GGS_string inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_setterMap * p = (cMapElement_setterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    p->mProperty_mErrorMessage = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_setterMap * GGS_setterMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                          const GGS_string & inKey
                                                                          COMMA_LOCATION_ARGS) {
  cMapElement_setterMap * result = (cMapElement_setterMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_setterMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_setterMap::cEnumerator_setterMap (const GGS_setterMap & inEnumeratedObject,
                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap_2E_element cEnumerator_setterMap::current (LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_setterMap) ;
  return GGS_setterMap_2E_element (p->mProperty_lkey, p->mProperty_mKind, p->mProperty_mParameterList, p->mProperty_mHasCompilerArgument, p->mProperty_mQualifier, p->mProperty_mErrorMessage) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_setterMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodKind cEnumerator_setterMap::current_mKind (LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_setterMap) ;
  return p->mProperty_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature cEnumerator_setterMap::current_mParameterList (LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_setterMap) ;
  return p->mProperty_mParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_setterMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_setterMap) ;
  return p->mProperty_mHasCompilerArgument ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier cEnumerator_setterMap::current_mQualifier (LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_setterMap) ;
  return p->mProperty_mQualifier ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_setterMap::current_mErrorMessage (LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_setterMap) ;
  return p->mProperty_mErrorMessage ;
}

//--------------------------------------------------------------------------------------------------
//
//     @setterMap generic code implementation
//
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

cMapElement_instanceMethodMap::cMapElement_instanceMethodMap (const GGS_instanceMethodMap_2E_element & inValue
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mKind (inValue.mProperty_mKind),
mProperty_mParameterList (inValue.mProperty_mParameterList),
mProperty_mDeclarationLocation (inValue.mProperty_mDeclarationLocation),
mProperty_mHasCompilerArgument (inValue.mProperty_mHasCompilerArgument),
mProperty_mQualifier (inValue.mProperty_mQualifier),
mProperty_mErrorMessage (inValue.mProperty_mErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_instanceMethodMap::cMapElement_instanceMethodMap (const GGS_lstring & inKey,
                                                              const GGS_methodKind & in_mKind,
                                                              const GGS_formalParameterSignature & in_mParameterList,
                                                              const GGS_location & in_mDeclarationLocation,
                                                              const GGS_bool & in_mHasCompilerArgument,
                                                              const GGS_methodQualifier & in_mQualifier,
                                                              const GGS_string & in_mErrorMessage
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mKind (in_mKind),
mProperty_mParameterList (in_mParameterList),
mProperty_mDeclarationLocation (in_mDeclarationLocation),
mProperty_mHasCompilerArgument (in_mHasCompilerArgument),
mProperty_mQualifier (in_mQualifier),
mProperty_mErrorMessage (in_mErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_instanceMethodMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_instanceMethodMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_instanceMethodMap (mProperty_lkey, mProperty_mKind, mProperty_mParameterList, mProperty_mDeclarationLocation, mProperty_mHasCompilerArgument, mProperty_mQualifier, mProperty_mErrorMessage COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_instanceMethodMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mKind" ":") ;
  mProperty_mKind.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mParameterList" ":") ;
  mProperty_mParameterList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDeclarationLocation" ":") ;
  mProperty_mDeclarationLocation.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mHasCompilerArgument" ":") ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mQualifier" ":") ;
  mProperty_mQualifier.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mErrorMessage" ":") ;
  mProperty_mErrorMessage.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap::GGS_instanceMethodMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap::GGS_instanceMethodMap (const GGS_instanceMethodMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap & GGS_instanceMethodMap::operator = (const GGS_instanceMethodMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap GGS_instanceMethodMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_instanceMethodMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap GGS_instanceMethodMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_instanceMethodMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap_2E_element_3F_ GGS_instanceMethodMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_instanceMethodMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_instanceMethodMap * p = (cMapElement_instanceMethodMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_instanceMethodMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_instanceMethodMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mKind = p->mProperty_mKind ;
      element.mProperty_mParameterList = p->mProperty_mParameterList ;
      element.mProperty_mDeclarationLocation = p->mProperty_mDeclarationLocation ;
      element.mProperty_mHasCompilerArgument = p->mProperty_mHasCompilerArgument ;
      element.mProperty_mQualifier = p->mProperty_mQualifier ;
      element.mProperty_mErrorMessage = p->mProperty_mErrorMessage ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap GGS_instanceMethodMap::class_func_mapWithMapToOverride (const GGS_instanceMethodMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GGS_instanceMethodMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap GGS_instanceMethodMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_instanceMethodMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap::enterElement (const GGS_instanceMethodMap_2E_element & inValue,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_instanceMethodMap * p = nullptr ;
  macroMyNew (p, cMapElement_instanceMethodMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@instanceMethodMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap::addAssign_operation (const GGS_lstring & inKey,
                                                 const GGS_methodKind & inArgument0,
                                                 const GGS_formalParameterSignature & inArgument1,
                                                 const GGS_location & inArgument2,
                                                 const GGS_bool & inArgument3,
                                                 const GGS_methodQualifier & inArgument4,
                                                 const GGS_string & inArgument5,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_instanceMethodMap * p = nullptr ;
  macroMyNew (p, cMapElement_instanceMethodMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@instanceMethodMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap GGS_instanceMethodMap::add_operation (const GGS_instanceMethodMap & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_instanceMethodMap result = *this ;
  cEnumerator_instanceMethodMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mKind (HERE), enumerator.current_mParameterList (HERE), enumerator.current_mDeclarationLocation (HERE), enumerator.current_mHasCompilerArgument (HERE), enumerator.current_mQualifier (HERE), enumerator.current_mErrorMessage (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap::setter_insertKey (GGS_lstring inKey,
                                              GGS_methodKind inArgument0,
                                              GGS_formalParameterSignature inArgument1,
                                              GGS_location inArgument2,
                                              GGS_bool inArgument3,
                                              GGS_methodQualifier inArgument4,
                                              GGS_string inArgument5,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_instanceMethodMap * p = nullptr ;
  macroMyNew (p, cMapElement_instanceMethodMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' instance method is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_instanceMethodMap_searchKey = "the '%K' instance method is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap::method_searchKey (GGS_lstring inKey,
                                              GGS_methodKind & outArgument0,
                                              GGS_formalParameterSignature & outArgument1,
                                              GGS_location & outArgument2,
                                              GGS_bool & outArgument3,
                                              GGS_methodQualifier & outArgument4,
                                              GGS_string & outArgument5,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_instanceMethodMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    outArgument0 = p->mProperty_mKind ;
    outArgument1 = p->mProperty_mParameterList ;
    outArgument2 = p->mProperty_mDeclarationLocation ;
    outArgument3 = p->mProperty_mHasCompilerArgument ;
    outArgument4 = p->mProperty_mQualifier ;
    outArgument5 = p->mProperty_mErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_instanceMethodMap_searchInheritedKey = "as the '%K' method is tagged as 'override', it should be declared in the super class" ;

//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap::method_searchInheritedKey (GGS_lstring inKey,
                                                       GGS_methodKind & outArgument0,
                                                       GGS_formalParameterSignature & outArgument1,
                                                       GGS_location & outArgument2,
                                                       GGS_bool & outArgument3,
                                                       GGS_methodQualifier & outArgument4,
                                                       GGS_string & outArgument5,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_instanceMethodMap_searchInheritedKey
                                                                                                   COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    outArgument0 = p->mProperty_mKind ;
    outArgument1 = p->mProperty_mParameterList ;
    outArgument2 = p->mProperty_mDeclarationLocation ;
    outArgument3 = p->mProperty_mHasCompilerArgument ;
    outArgument4 = p->mProperty_mQualifier ;
    outArgument5 = p->mProperty_mErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_methodKind GGS_instanceMethodMap::getter_mKindForKey (const GGS_string & inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) attributes ;
  GGS_methodKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_instanceMethodMap::getter_mParameterListForKey (const GGS_string & inKey,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) attributes ;
  GGS_formalParameterSignature result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    result = p->mProperty_mParameterList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_instanceMethodMap::getter_mDeclarationLocationForKey (const GGS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) attributes ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    result = p->mProperty_mDeclarationLocation ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_instanceMethodMap::getter_mHasCompilerArgumentForKey (const GGS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    result = p->mProperty_mHasCompilerArgument ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier GGS_instanceMethodMap::getter_mQualifierForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) attributes ;
  GGS_methodQualifier result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    result = p->mProperty_mQualifier ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_instanceMethodMap::getter_mErrorMessageForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) attributes ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    result = p->mProperty_mErrorMessage ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap::setter_setMKindForKey (GGS_methodKind inAttributeValue,
                                                   GGS_string inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_instanceMethodMap * p = (cMapElement_instanceMethodMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    p->mProperty_mKind = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap::setter_setMParameterListForKey (GGS_formalParameterSignature inAttributeValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_instanceMethodMap * p = (cMapElement_instanceMethodMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    p->mProperty_mParameterList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap::setter_setMDeclarationLocationForKey (GGS_location inAttributeValue,
                                                                  GGS_string inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_instanceMethodMap * p = (cMapElement_instanceMethodMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    p->mProperty_mDeclarationLocation = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap::setter_setMHasCompilerArgumentForKey (GGS_bool inAttributeValue,
                                                                  GGS_string inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_instanceMethodMap * p = (cMapElement_instanceMethodMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    p->mProperty_mHasCompilerArgument = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap::setter_setMQualifierForKey (GGS_methodQualifier inAttributeValue,
                                                        GGS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_instanceMethodMap * p = (cMapElement_instanceMethodMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    p->mProperty_mQualifier = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap::setter_setMErrorMessageForKey (GGS_string inAttributeValue,
                                                           GGS_string inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_instanceMethodMap * p = (cMapElement_instanceMethodMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    p->mProperty_mErrorMessage = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_instanceMethodMap * GGS_instanceMethodMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                          const GGS_string & inKey
                                                                                          COMMA_LOCATION_ARGS) {
  cMapElement_instanceMethodMap * result = (cMapElement_instanceMethodMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_instanceMethodMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_instanceMethodMap::cEnumerator_instanceMethodMap (const GGS_instanceMethodMap & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap_2E_element cEnumerator_instanceMethodMap::current (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return GGS_instanceMethodMap_2E_element (p->mProperty_lkey, p->mProperty_mKind, p->mProperty_mParameterList, p->mProperty_mDeclarationLocation, p->mProperty_mHasCompilerArgument, p->mProperty_mQualifier, p->mProperty_mErrorMessage) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_instanceMethodMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodKind cEnumerator_instanceMethodMap::current_mKind (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return p->mProperty_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature cEnumerator_instanceMethodMap::current_mParameterList (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return p->mProperty_mParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location cEnumerator_instanceMethodMap::current_mDeclarationLocation (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return p->mProperty_mDeclarationLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_instanceMethodMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return p->mProperty_mHasCompilerArgument ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier cEnumerator_instanceMethodMap::current_mQualifier (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return p->mProperty_mQualifier ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_instanceMethodMap::current_mErrorMessage (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return p->mProperty_mErrorMessage ;
}

//--------------------------------------------------------------------------------------------------
//
//     @instanceMethodMap generic code implementation
//
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

cMapElement_classMethodMap::cMapElement_classMethodMap (const GGS_classMethodMap_2E_element & inValue
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mParameterList (inValue.mProperty_mParameterList),
mProperty_mHasCompilerArgument (inValue.mProperty_mHasCompilerArgument) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_classMethodMap::cMapElement_classMethodMap (const GGS_lstring & inKey,
                                                        const GGS_formalParameterSignature & in_mParameterList,
                                                        const GGS_bool & in_mHasCompilerArgument
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mParameterList (in_mParameterList),
mProperty_mHasCompilerArgument (in_mHasCompilerArgument) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_classMethodMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_classMethodMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_classMethodMap (mProperty_lkey, mProperty_mParameterList, mProperty_mHasCompilerArgument COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_classMethodMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mParameterList" ":") ;
  mProperty_mParameterList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mHasCompilerArgument" ":") ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap::GGS_classMethodMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap::GGS_classMethodMap (const GGS_classMethodMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap & GGS_classMethodMap::operator = (const GGS_classMethodMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap GGS_classMethodMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_classMethodMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap GGS_classMethodMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_classMethodMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap_2E_element_3F_ GGS_classMethodMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_classMethodMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_classMethodMap * p = (cMapElement_classMethodMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_classMethodMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_classMethodMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mParameterList = p->mProperty_mParameterList ;
      element.mProperty_mHasCompilerArgument = p->mProperty_mHasCompilerArgument ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap GGS_classMethodMap::class_func_mapWithMapToOverride (const GGS_classMethodMap & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GGS_classMethodMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap GGS_classMethodMap::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_classMethodMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMethodMap::enterElement (const GGS_classMethodMap_2E_element & inValue,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  cMapElement_classMethodMap * p = nullptr ;
  macroMyNew (p, cMapElement_classMethodMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@classMethodMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMethodMap::addAssign_operation (const GGS_lstring & inKey,
                                              const GGS_formalParameterSignature & inArgument0,
                                              const GGS_bool & inArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_classMethodMap * p = nullptr ;
  macroMyNew (p, cMapElement_classMethodMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@classMethodMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap GGS_classMethodMap::add_operation (const GGS_classMethodMap & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_classMethodMap result = *this ;
  cEnumerator_classMethodMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mParameterList (HERE), enumerator.current_mHasCompilerArgument (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMethodMap::setter_insertKey (GGS_lstring inKey,
                                           GGS_formalParameterSignature inArgument0,
                                           GGS_bool inArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_classMethodMap * p = nullptr ;
  macroMyNew (p, cMapElement_classMethodMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' type proc is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_classMethodMap_searchKey = "the '%K' type proc is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_classMethodMap::method_searchKey (GGS_lstring inKey,
                                           GGS_formalParameterSignature & outArgument0,
                                           GGS_bool & outArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_classMethodMap * p = (const cMapElement_classMethodMap *) performSearch (inKey,
                                                                                             inCompiler,
                                                                                             kSearchErrorMessage_classMethodMap_searchKey
                                                                                             COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_classMethodMap) ;
    outArgument0 = p->mProperty_mParameterList ;
    outArgument1 = p->mProperty_mHasCompilerArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_classMethodMap::setter_insertOrReplace (GGS_lstring inKey,
                                                 GGS_formalParameterSignature inArgument0,
                                                 GGS_bool inArgument1
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cMapElement_classMethodMap * p = nullptr ;
  macroMyNew (p, cMapElement_classMethodMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  performInsertOrReplace (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_classMethodMap::getter_mParameterListForKey (const GGS_string & inKey,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_classMethodMap * p = (const cMapElement_classMethodMap *) attributes ;
  GGS_formalParameterSignature result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_classMethodMap) ;
    result = p->mProperty_mParameterList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classMethodMap::getter_mHasCompilerArgumentForKey (const GGS_string & inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_classMethodMap * p = (const cMapElement_classMethodMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_classMethodMap) ;
    result = p->mProperty_mHasCompilerArgument ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMethodMap::setter_setMParameterListForKey (GGS_formalParameterSignature inAttributeValue,
                                                         GGS_string inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_classMethodMap * p = (cMapElement_classMethodMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_classMethodMap) ;
    p->mProperty_mParameterList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_classMethodMap::setter_setMHasCompilerArgumentForKey (GGS_bool inAttributeValue,
                                                               GGS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_classMethodMap * p = (cMapElement_classMethodMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_classMethodMap) ;
    p->mProperty_mHasCompilerArgument = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_classMethodMap * GGS_classMethodMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                    const GGS_string & inKey
                                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_classMethodMap * result = (cMapElement_classMethodMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_classMethodMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_classMethodMap::cEnumerator_classMethodMap (const GGS_classMethodMap & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap_2E_element cEnumerator_classMethodMap::current (LOCATION_ARGS) const {
  const cMapElement_classMethodMap * p = (const cMapElement_classMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classMethodMap) ;
  return GGS_classMethodMap_2E_element (p->mProperty_lkey, p->mProperty_mParameterList, p->mProperty_mHasCompilerArgument) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_classMethodMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature cEnumerator_classMethodMap::current_mParameterList (LOCATION_ARGS) const {
  const cMapElement_classMethodMap * p = (const cMapElement_classMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classMethodMap) ;
  return p->mProperty_mParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_classMethodMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  const cMapElement_classMethodMap * p = (const cMapElement_classMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classMethodMap) ;
  return p->mProperty_mHasCompilerArgument ;
}

//--------------------------------------------------------------------------------------------------
//
//     @classMethodMap generic code implementation
//
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

cMapElement_subscriptMap::cMapElement_subscriptMap (const GGS_subscriptMap_2E_element & inValue
                                                    COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_argumentTypeList (inValue.mProperty_argumentTypeList),
mProperty_valueType (inValue.mProperty_valueType) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_subscriptMap::cMapElement_subscriptMap (const GGS_lstring & inKey,
                                                    const GGS_functionSignature & in_argumentTypeList,
                                                    const GGS_unifiedTypeMapEntry & in_valueType
                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_argumentTypeList (in_argumentTypeList),
mProperty_valueType (in_valueType) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_subscriptMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_subscriptMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_subscriptMap (mProperty_lkey, mProperty_argumentTypeList, mProperty_valueType COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_subscriptMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("argumentTypeList" ":") ;
  mProperty_argumentTypeList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("valueType" ":") ;
  mProperty_valueType.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap::GGS_subscriptMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap::GGS_subscriptMap (const GGS_subscriptMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap & GGS_subscriptMap::operator = (const GGS_subscriptMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap GGS_subscriptMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_subscriptMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap GGS_subscriptMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_subscriptMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap_2E_element_3F_ GGS_subscriptMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_subscriptMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_subscriptMap * p = (cMapElement_subscriptMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_subscriptMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_subscriptMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_argumentTypeList = p->mProperty_argumentTypeList ;
      element.mProperty_valueType = p->mProperty_valueType ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap GGS_subscriptMap::class_func_mapWithMapToOverride (const GGS_subscriptMap & inMapToOverride
                                                                    COMMA_LOCATION_ARGS) {
  GGS_subscriptMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap GGS_subscriptMap::getter_overriddenMap (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_subscriptMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscriptMap::enterElement (const GGS_subscriptMap_2E_element & inValue,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  cMapElement_subscriptMap * p = nullptr ;
  macroMyNew (p, cMapElement_subscriptMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@subscriptMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscriptMap::addAssign_operation (const GGS_lstring & inKey,
                                            const GGS_functionSignature & inArgument0,
                                            const GGS_unifiedTypeMapEntry & inArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_subscriptMap * p = nullptr ;
  macroMyNew (p, cMapElement_subscriptMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@subscriptMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap GGS_subscriptMap::add_operation (const GGS_subscriptMap & inOperand,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_subscriptMap result = *this ;
  cEnumerator_subscriptMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_argumentTypeList (HERE), enumerator.current_valueType (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscriptMap::setter_insertKey (GGS_lstring inKey,
                                         GGS_functionSignature inArgument0,
                                         GGS_unifiedTypeMapEntry inArgument1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_subscriptMap * p = nullptr ;
  macroMyNew (p, cMapElement_subscriptMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' subscript has been already defined" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_subscriptMap_searchKey = "the '%K' subscript is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_subscriptMap::method_searchKey (GGS_lstring inKey,
                                         GGS_functionSignature & outArgument0,
                                         GGS_unifiedTypeMapEntry & outArgument1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  const cMapElement_subscriptMap * p = (const cMapElement_subscriptMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kSearchErrorMessage_subscriptMap_searchKey
                                                                                         COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_subscriptMap) ;
    outArgument0 = p->mProperty_argumentTypeList ;
    outArgument1 = p->mProperty_valueType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature GGS_subscriptMap::getter_argumentTypeListForKey (const GGS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_subscriptMap * p = (const cMapElement_subscriptMap *) attributes ;
  GGS_functionSignature result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_subscriptMap) ;
    result = p->mProperty_argumentTypeList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_subscriptMap::getter_valueTypeForKey (const GGS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_subscriptMap * p = (const cMapElement_subscriptMap *) attributes ;
  GGS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_subscriptMap) ;
    result = p->mProperty_valueType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscriptMap::setter_setArgumentTypeListForKey (GGS_functionSignature inAttributeValue,
                                                         GGS_string inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_subscriptMap * p = (cMapElement_subscriptMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_subscriptMap) ;
    p->mProperty_argumentTypeList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_subscriptMap::setter_setValueTypeForKey (GGS_unifiedTypeMapEntry inAttributeValue,
                                                  GGS_string inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_subscriptMap * p = (cMapElement_subscriptMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_subscriptMap) ;
    p->mProperty_valueType = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_subscriptMap * GGS_subscriptMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                const GGS_string & inKey
                                                                                COMMA_LOCATION_ARGS) {
  cMapElement_subscriptMap * result = (cMapElement_subscriptMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_subscriptMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_subscriptMap::cEnumerator_subscriptMap (const GGS_subscriptMap & inEnumeratedObject,
                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap_2E_element cEnumerator_subscriptMap::current (LOCATION_ARGS) const {
  const cMapElement_subscriptMap * p = (const cMapElement_subscriptMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_subscriptMap) ;
  return GGS_subscriptMap_2E_element (p->mProperty_lkey, p->mProperty_argumentTypeList, p->mProperty_valueType) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_subscriptMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature cEnumerator_subscriptMap::current_argumentTypeList (LOCATION_ARGS) const {
  const cMapElement_subscriptMap * p = (const cMapElement_subscriptMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_subscriptMap) ;
  return p->mProperty_argumentTypeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry cEnumerator_subscriptMap::current_valueType (LOCATION_ARGS) const {
  const cMapElement_subscriptMap * p = (const cMapElement_subscriptMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_subscriptMap) ;
  return p->mProperty_valueType ;
}

//--------------------------------------------------------------------------------------------------
//
//     @subscriptMap generic code implementation
//
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
//
//Class for element of '@enumerationDescriptorList' list
//
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

void GGS_enumerationDescriptorList::enterElement (const GGS_enumerationDescriptorList_2E_element & inValue,
                                                  Compiler * /* inCompiler */
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

void GGS_enumerationDescriptorList::addAssign_operation (const GGS_unifiedTypeMapEntry & inOperand0,
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

void GGS_enumerationDescriptorList::plusAssign_operation (const GGS_enumerationDescriptorList inOperand,
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

cEnumerator_enumerationDescriptorList::cEnumerator_enumerationDescriptorList (const GGS_enumerationDescriptorList & inEnumeratedObject,
                                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDescriptorList_2E_element cEnumerator_enumerationDescriptorList::current (LOCATION_ARGS) const {
  const cCollectionElement_enumerationDescriptorList * p = (const cCollectionElement_enumerationDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry cEnumerator_enumerationDescriptorList::current_mEnumeratedType (LOCATION_ARGS) const {
  const cCollectionElement_enumerationDescriptorList * p = (const cCollectionElement_enumerationDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
  return p->mObject.mProperty_mEnumeratedType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_enumerationDescriptorList::current_mEnumerationName (LOCATION_ARGS) const {
  const cCollectionElement_enumerationDescriptorList * p = (const cCollectionElement_enumerationDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
  return p->mObject.mProperty_mEnumerationName ;
}




//--------------------------------------------------------------------------------------------------
//
//     @enumerationDescriptorList generic code implementation
//
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

GGS_typeFeatures GGS_typeFeatures::class_func_supportWithAccessor (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 30) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_plusEqualOperatorWithFieldListNeedsCompilerArg (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 31) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_generateEnumerationHelperMethods (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 32) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_doNotGenererateObjectCompare (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 33) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 34) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_generateCopyConstructorAndAssignmentOperator (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 35) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_generateSynthetizedInitializer (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 36) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_clonable (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 37) ;
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

void GGS_typeFeatures::andAssign_operation (const GGS_typeFeatures inOperand,
                                            class Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags &= inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeFeatures::orAssign_operation (const GGS_typeFeatures inOperand,
                                           class Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags |= inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeFeatures::xorAssign_operation (const GGS_typeFeatures inOperand,
                                            class Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags ^= inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeFeatures::minusAssign_operation (const GGS_typeFeatures inOperand,
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
    result = GGS_typeFeatures (uint64_t (0x3FFFFFFFFF) ^ mFlags) ;
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
      ioString.appendCString (" supportWithAccessor") ;
    }
    if ((mFlags & (uint64_t (1) << 31)) != 0) {
      ioString.appendCString (" plusEqualOperatorWithFieldListNeedsCompilerArg") ;
    }
    if ((mFlags & (uint64_t (1) << 32)) != 0) {
      ioString.appendCString (" generateEnumerationHelperMethods") ;
    }
    if ((mFlags & (uint64_t (1) << 33)) != 0) {
      ioString.appendCString (" doNotGenererateObjectCompare") ;
    }
    if ((mFlags & (uint64_t (1) << 34)) != 0) {
      ioString.appendCString (" generateDescriptionGetterUtilityMethod") ;
    }
    if ((mFlags & (uint64_t (1) << 35)) != 0) {
      ioString.appendCString (" generateCopyConstructorAndAssignmentOperator") ;
    }
    if ((mFlags & (uint64_t (1) << 36)) != 0) {
      ioString.appendCString (" generateSynthetizedInitializer") ;
    }
    if ((mFlags & (uint64_t (1) << 37)) != 0) {
      ioString.appendCString (" clonable") ;
    }
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeFeatures generic code implementation
//
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
//
//Class for element of '@functionSignature' list
//
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

void GGS_functionSignature::enterElement (const GGS_functionSignature_2E_element & inValue,
                                          Compiler * /* inCompiler */
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

void GGS_functionSignature::addAssign_operation (const GGS_lstring & inOperand0,
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

void GGS_functionSignature::plusAssign_operation (const GGS_functionSignature inOperand,
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

cEnumerator_functionSignature::cEnumerator_functionSignature (const GGS_functionSignature & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature_2E_element cEnumerator_functionSignature::current (LOCATION_ARGS) const {
  const cCollectionElement_functionSignature * p = (const cCollectionElement_functionSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionSignature) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_functionSignature::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_functionSignature * p = (const cCollectionElement_functionSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionSignature) ;
  return p->mObject.mProperty_mFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry cEnumerator_functionSignature::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_functionSignature * p = (const cCollectionElement_functionSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionSignature) ;
  return p->mObject.mProperty_mFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_functionSignature::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_functionSignature * p = (const cCollectionElement_functionSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionSignature) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_functionSignature::current_isConstant (LOCATION_ARGS) const {
  const cCollectionElement_functionSignature * p = (const cCollectionElement_functionSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionSignature) ;
  return p->mObject.mProperty_isConstant ;
}




//--------------------------------------------------------------------------------------------------
//
//     @functionSignature generic code implementation
//
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
//
//     @headerKind generic code implementation
//
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
//
//Extension Getter '@typeKindEnum string'
//
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
      GGS_bool extractedValue_3824_isReference_0 ;
      temp_0.getAssociatedValuesFor_classType (extractedValue_3824_isReference_0) ;
      GGS_string temp_1 ;
      const enumGalgasBool test_2 = extractedValue_3824_isReference_0.boolEnum () ;
      if (kBoolTrue == test_2) {
        temp_1 = GGS_string ("reference class") ;
      }else if (kBoolFalse == test_2) {
        temp_1 = GGS_string ("value class") ;
      }
      result_result = temp_1 ;
    }
    break ;
  case GGS_typeKindEnum::Enumeration::enum_enumType:
    {
      GGS_constantIndexMap extractedValue_3930__0 ;
      temp_0.getAssociatedValuesFor_enumType (extractedValue_3930__0) ;
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
      GGS_unifiedTypeMapEntry extractedValue_4519__0 ;
      temp_0.getAssociatedValuesFor_weakReferenceType (extractedValue_4519__0) ;
      result_result = GGS_string ("weak reference") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@typeFeatures generateCppObjectComparison'
//
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_generateCppObjectComparison (const GGS_typeFeatures & inObject,
                                                      Compiler *
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_result ; // Returned variable
  const GGS_typeFeatures temp_0 = inObject ;
  result_result = temp_0.getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("unified-type-definition.galgas", 148)).operator_or (GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("unified-type-definition.galgas", 148)) COMMA_SOURCE_FILE ("unified-type-definition.galgas", 148)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("unified-type-definition.galgas", 148)) COMMA_SOURCE_FILE ("unified-type-definition.galgas", 148)) COMMA_SOURCE_FILE ("unified-type-definition.galgas", 148)) ;
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

void GGS_localVariableAttributes::andAssign_operation (const GGS_localVariableAttributes inOperand,
                                                       class Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags &= inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localVariableAttributes::orAssign_operation (const GGS_localVariableAttributes inOperand,
                                                      class Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags |= inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localVariableAttributes::xorAssign_operation (const GGS_localVariableAttributes inOperand,
                                                       class Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags ^= inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localVariableAttributes::minusAssign_operation (const GGS_localVariableAttributes inOperand,
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
//
//     @localVariableAttributes generic code implementation
//
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
//
//     @localVarValuation generic code implementation
//
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

cMapElement_scopeLocalVarMap::cMapElement_scopeLocalVarMap (const GGS_scopeLocalVarMap_2E_element & inValue
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mType (inValue.mProperty_mType),
mProperty_mCppName (inValue.mProperty_mCppName),
mProperty_mNameForCheckingFormalParameterUsing (inValue.mProperty_mNameForCheckingFormalParameterUsing),
mProperty_mAttributes (inValue.mProperty_mAttributes),
mProperty_mState (inValue.mProperty_mState) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_scopeLocalVarMap::cMapElement_scopeLocalVarMap (const GGS_lstring & inKey,
                                                            const GGS_unifiedTypeMapEntry & in_mType,
                                                            const GGS_string & in_mCppName,
                                                            const GGS_string & in_mNameForCheckingFormalParameterUsing,
                                                            const GGS_localVariableAttributes & in_mAttributes,
                                                            const GGS_localVarValuation & in_mState
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mType (in_mType),
mProperty_mCppName (in_mCppName),
mProperty_mNameForCheckingFormalParameterUsing (in_mNameForCheckingFormalParameterUsing),
mProperty_mAttributes (in_mAttributes),
mProperty_mState (in_mState) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_scopeLocalVarMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_scopeLocalVarMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_scopeLocalVarMap (mProperty_lkey, mProperty_mType, mProperty_mCppName, mProperty_mNameForCheckingFormalParameterUsing, mProperty_mAttributes, mProperty_mState COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_scopeLocalVarMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mType" ":") ;
  mProperty_mType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mCppName" ":") ;
  mProperty_mCppName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNameForCheckingFormalParameterUsing" ":") ;
  mProperty_mNameForCheckingFormalParameterUsing.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAttributes" ":") ;
  mProperty_mAttributes.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mState" ":") ;
  mProperty_mState.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap::GGS_scopeLocalVarMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap::GGS_scopeLocalVarMap (const GGS_scopeLocalVarMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap & GGS_scopeLocalVarMap::operator = (const GGS_scopeLocalVarMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap GGS_scopeLocalVarMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_scopeLocalVarMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap GGS_scopeLocalVarMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_scopeLocalVarMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap_2E_element_3F_ GGS_scopeLocalVarMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_scopeLocalVarMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_scopeLocalVarMap * p = (cMapElement_scopeLocalVarMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_scopeLocalVarMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_scopeLocalVarMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mType = p->mProperty_mType ;
      element.mProperty_mCppName = p->mProperty_mCppName ;
      element.mProperty_mNameForCheckingFormalParameterUsing = p->mProperty_mNameForCheckingFormalParameterUsing ;
      element.mProperty_mAttributes = p->mProperty_mAttributes ;
      element.mProperty_mState = p->mProperty_mState ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap GGS_scopeLocalVarMap::class_func_mapWithMapToOverride (const GGS_scopeLocalVarMap & inMapToOverride
                                                                            COMMA_LOCATION_ARGS) {
  GGS_scopeLocalVarMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap GGS_scopeLocalVarMap::getter_overriddenMap (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_scopeLocalVarMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeLocalVarMap::enterElement (const GGS_scopeLocalVarMap_2E_element & inValue,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_scopeLocalVarMap * p = nullptr ;
  macroMyNew (p, cMapElement_scopeLocalVarMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@scopeLocalVarMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeLocalVarMap::addAssign_operation (const GGS_lstring & inKey,
                                                const GGS_unifiedTypeMapEntry & inArgument0,
                                                const GGS_string & inArgument1,
                                                const GGS_string & inArgument2,
                                                const GGS_localVariableAttributes & inArgument3,
                                                const GGS_localVarValuation & inArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_scopeLocalVarMap * p = nullptr ;
  macroMyNew (p, cMapElement_scopeLocalVarMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@scopeLocalVarMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap GGS_scopeLocalVarMap::add_operation (const GGS_scopeLocalVarMap & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_scopeLocalVarMap result = *this ;
  cEnumerator_scopeLocalVarMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mType (HERE), enumerator.current_mCppName (HERE), enumerator.current_mNameForCheckingFormalParameterUsing (HERE), enumerator.current_mAttributes (HERE), enumerator.current_mState (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeLocalVarMap::setter_insertKey (GGS_lstring inKey,
                                             GGS_unifiedTypeMapEntry inArgument0,
                                             GGS_string inArgument1,
                                             GGS_string inArgument2,
                                             GGS_localVariableAttributes inArgument3,
                                             GGS_localVarValuation inArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_scopeLocalVarMap * p = nullptr ;
  macroMyNew (p, cMapElement_scopeLocalVarMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' local variable is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_scopeLocalVarMap_searchKey = "there is no '%K' local variable" ;

//--------------------------------------------------------------------------------------------------

void GGS_scopeLocalVarMap::method_searchKey (GGS_lstring inKey,
                                             GGS_unifiedTypeMapEntry & outArgument0,
                                             GGS_string & outArgument1,
                                             GGS_string & outArgument2,
                                             GGS_localVariableAttributes & outArgument3,
                                             GGS_localVarValuation & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_scopeLocalVarMap * p = (const cMapElement_scopeLocalVarMap *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kSearchErrorMessage_scopeLocalVarMap_searchKey
                                                                                                 COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
    outArgument0 = p->mProperty_mType ;
    outArgument1 = p->mProperty_mCppName ;
    outArgument2 = p->mProperty_mNameForCheckingFormalParameterUsing ;
    outArgument3 = p->mProperty_mAttributes ;
    outArgument4 = p->mProperty_mState ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeLocalVarMap::setter_removeKey (GGS_lstring inKey,
                                             GGS_unifiedTypeMapEntry & outArgument0,
                                             GGS_string & outArgument1,
                                             GGS_string & outArgument2,
                                             GGS_localVariableAttributes & outArgument3,
                                             GGS_localVarValuation & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "there is no '%K' local variable" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_scopeLocalVarMap * p = (cMapElement_scopeLocalVarMap *) attributes.ptr () ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
    outArgument0 = p->mProperty_mType ;
    outArgument1 = p->mProperty_mCppName ;
    outArgument2 = p->mProperty_mNameForCheckingFormalParameterUsing ;
    outArgument3 = p->mProperty_mAttributes ;
    outArgument4 = p->mProperty_mState ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_scopeLocalVarMap::getter_mTypeForKey (const GGS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_scopeLocalVarMap * p = (const cMapElement_scopeLocalVarMap *) attributes ;
  GGS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
    result = p->mProperty_mType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_scopeLocalVarMap::getter_mCppNameForKey (const GGS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_scopeLocalVarMap * p = (const cMapElement_scopeLocalVarMap *) attributes ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
    result = p->mProperty_mCppName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_scopeLocalVarMap::getter_mNameForCheckingFormalParameterUsingForKey (const GGS_string & inKey,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_scopeLocalVarMap * p = (const cMapElement_scopeLocalVarMap *) attributes ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
    result = p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableAttributes GGS_scopeLocalVarMap::getter_mAttributesForKey (const GGS_string & inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_scopeLocalVarMap * p = (const cMapElement_scopeLocalVarMap *) attributes ;
  GGS_localVariableAttributes result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
    result = p->mProperty_mAttributes ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation GGS_scopeLocalVarMap::getter_mStateForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_scopeLocalVarMap * p = (const cMapElement_scopeLocalVarMap *) attributes ;
  GGS_localVarValuation result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
    result = p->mProperty_mState ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeLocalVarMap::setter_setMTypeForKey (GGS_unifiedTypeMapEntry inAttributeValue,
                                                  GGS_string inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_scopeLocalVarMap * p = (cMapElement_scopeLocalVarMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
    p->mProperty_mType = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeLocalVarMap::setter_setMCppNameForKey (GGS_string inAttributeValue,
                                                     GGS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_scopeLocalVarMap * p = (cMapElement_scopeLocalVarMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
    p->mProperty_mCppName = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeLocalVarMap::setter_setMNameForCheckingFormalParameterUsingForKey (GGS_string inAttributeValue,
                                                                                 GGS_string inKey,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_scopeLocalVarMap * p = (cMapElement_scopeLocalVarMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
    p->mProperty_mNameForCheckingFormalParameterUsing = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeLocalVarMap::setter_setMAttributesForKey (GGS_localVariableAttributes inAttributeValue,
                                                        GGS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_scopeLocalVarMap * p = (cMapElement_scopeLocalVarMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
    p->mProperty_mAttributes = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeLocalVarMap::setter_setMStateForKey (GGS_localVarValuation inAttributeValue,
                                                   GGS_string inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_scopeLocalVarMap * p = (cMapElement_scopeLocalVarMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
    p->mProperty_mState = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_scopeLocalVarMap * GGS_scopeLocalVarMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                        const GGS_string & inKey
                                                                                        COMMA_LOCATION_ARGS) {
  cMapElement_scopeLocalVarMap * result = (cMapElement_scopeLocalVarMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_scopeLocalVarMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_scopeLocalVarMap::cEnumerator_scopeLocalVarMap (const GGS_scopeLocalVarMap & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap_2E_element cEnumerator_scopeLocalVarMap::current (LOCATION_ARGS) const {
  const cMapElement_scopeLocalVarMap * p = (const cMapElement_scopeLocalVarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
  return GGS_scopeLocalVarMap_2E_element (p->mProperty_lkey, p->mProperty_mType, p->mProperty_mCppName, p->mProperty_mNameForCheckingFormalParameterUsing, p->mProperty_mAttributes, p->mProperty_mState) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_scopeLocalVarMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry cEnumerator_scopeLocalVarMap::current_mType (LOCATION_ARGS) const {
  const cMapElement_scopeLocalVarMap * p = (const cMapElement_scopeLocalVarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
  return p->mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_scopeLocalVarMap::current_mCppName (LOCATION_ARGS) const {
  const cMapElement_scopeLocalVarMap * p = (const cMapElement_scopeLocalVarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
  return p->mProperty_mCppName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_scopeLocalVarMap::current_mNameForCheckingFormalParameterUsing (LOCATION_ARGS) const {
  const cMapElement_scopeLocalVarMap * p = (const cMapElement_scopeLocalVarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
  return p->mProperty_mNameForCheckingFormalParameterUsing ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableAttributes cEnumerator_scopeLocalVarMap::current_mAttributes (LOCATION_ARGS) const {
  const cMapElement_scopeLocalVarMap * p = (const cMapElement_scopeLocalVarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
  return p->mProperty_mAttributes ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation cEnumerator_scopeLocalVarMap::current_mState (LOCATION_ARGS) const {
  const cMapElement_scopeLocalVarMap * p = (const cMapElement_scopeLocalVarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
  return p->mProperty_mState ;
}

//--------------------------------------------------------------------------------------------------
//
//     @scopeLocalVarMap generic code implementation
//
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

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@localVarMapListForLLVM' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_localVarMapListForLLVM : public cCollectionElement {
  public: GGS_localVarMapListForLLVM_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_localVarMapListForLLVM (const GGS_scopeLocalVarMap & in_mMap
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_localVarMapListForLLVM (const GGS_localVarMapListForLLVM_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_localVarMapListForLLVM::cCollectionElement_localVarMapListForLLVM (const GGS_scopeLocalVarMap & in_mMap
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMap) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_localVarMapListForLLVM::cCollectionElement_localVarMapListForLLVM (const GGS_localVarMapListForLLVM_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mMap) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_localVarMapListForLLVM::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_localVarMapListForLLVM::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_localVarMapListForLLVM (mObject.mProperty_mMap COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_localVarMapListForLLVM::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mMap" ":") ;
  mObject.mProperty_mMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarMapListForLLVM::GGS_localVarMapListForLLVM (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarMapListForLLVM::GGS_localVarMapListForLLVM (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarMapListForLLVM GGS_localVarMapListForLLVM::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_localVarMapListForLLVM (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarMapListForLLVM GGS_localVarMapListForLLVM::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_localVarMapListForLLVM (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarMapListForLLVM::enterElement (const GGS_localVarMapListForLLVM_2E_element & inValue,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_localVarMapListForLLVM (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarMapListForLLVM GGS_localVarMapListForLLVM::class_func_listWithValue (const GGS_scopeLocalVarMap & inOperand0
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_localVarMapListForLLVM result ;
  if (inOperand0.isValid ()) {
    result = GGS_localVarMapListForLLVM (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_localVarMapListForLLVM::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarMapListForLLVM::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GGS_scopeLocalVarMap & in_mMap
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_localVarMapListForLLVM * p = nullptr ;
  macroMyNew (p, cCollectionElement_localVarMapListForLLVM (in_mMap COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarMapListForLLVM::addAssign_operation (const GGS_scopeLocalVarMap & inOperand0
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_localVarMapListForLLVM (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarMapListForLLVM::setter_append (const GGS_scopeLocalVarMap inOperand0,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_localVarMapListForLLVM (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarMapListForLLVM::setter_insertAtIndex (const GGS_scopeLocalVarMap inOperand0,
                                                       const GGS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_localVarMapListForLLVM (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarMapListForLLVM::setter_removeAtIndex (GGS_scopeLocalVarMap & outOperand0,
                                                       const GGS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_localVarMapListForLLVM * p = (cCollectionElement_localVarMapListForLLVM *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_localVarMapListForLLVM) ;
      outOperand0 = p->mObject.mProperty_mMap ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarMapListForLLVM::setter_popFirst (GGS_scopeLocalVarMap & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localVarMapListForLLVM * p = (cCollectionElement_localVarMapListForLLVM *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localVarMapListForLLVM) ;
    outOperand0 = p->mObject.mProperty_mMap ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarMapListForLLVM::setter_popLast (GGS_scopeLocalVarMap & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localVarMapListForLLVM * p = (cCollectionElement_localVarMapListForLLVM *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localVarMapListForLLVM) ;
    outOperand0 = p->mObject.mProperty_mMap ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarMapListForLLVM::method_first (GGS_scopeLocalVarMap & outOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localVarMapListForLLVM * p = (cCollectionElement_localVarMapListForLLVM *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localVarMapListForLLVM) ;
    outOperand0 = p->mObject.mProperty_mMap ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarMapListForLLVM::method_last (GGS_scopeLocalVarMap & outOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localVarMapListForLLVM * p = (cCollectionElement_localVarMapListForLLVM *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localVarMapListForLLVM) ;
    outOperand0 = p->mObject.mProperty_mMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_localVarMapListForLLVM GGS_localVarMapListForLLVM::add_operation (const GGS_localVarMapListForLLVM & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_localVarMapListForLLVM result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarMapListForLLVM GGS_localVarMapListForLLVM::getter_subListWithRange (const GGS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_localVarMapListForLLVM result = GGS_localVarMapListForLLVM::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarMapListForLLVM GGS_localVarMapListForLLVM::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_localVarMapListForLLVM result = GGS_localVarMapListForLLVM::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarMapListForLLVM GGS_localVarMapListForLLVM::getter_subListToIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_localVarMapListForLLVM result = GGS_localVarMapListForLLVM::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarMapListForLLVM::plusAssign_operation (const GGS_localVarMapListForLLVM inOperand,
                                                       Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarMapListForLLVM::setter_setMMapAtIndex (GGS_scopeLocalVarMap inOperand,
                                                        GGS_uint inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_localVarMapListForLLVM * p = (cCollectionElement_localVarMapListForLLVM *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localVarMapListForLLVM) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mMap = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap GGS_localVarMapListForLLVM::getter_mMapAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localVarMapListForLLVM * p = (cCollectionElement_localVarMapListForLLVM *) attributes.ptr () ;
  GGS_scopeLocalVarMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localVarMapListForLLVM) ;
    result = p->mObject.mProperty_mMap ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_localVarMapListForLLVM::cEnumerator_localVarMapListForLLVM (const GGS_localVarMapListForLLVM & inEnumeratedObject,
                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarMapListForLLVM_2E_element cEnumerator_localVarMapListForLLVM::current (LOCATION_ARGS) const {
  const cCollectionElement_localVarMapListForLLVM * p = (const cCollectionElement_localVarMapListForLLVM *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localVarMapListForLLVM) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap cEnumerator_localVarMapListForLLVM::current_mMap (LOCATION_ARGS) const {
  const cCollectionElement_localVarMapListForLLVM * p = (const cCollectionElement_localVarMapListForLLVM *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localVarMapListForLLVM) ;
  return p->mObject.mProperty_mMap ;
}




//--------------------------------------------------------------------------------------------------
//
//     @localVarMapListForLLVM generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVarMapListForLLVM ("localVarMapListForLLVM",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_localVarMapListForLLVM::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVarMapListForLLVM ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVarMapListForLLVM::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVarMapListForLLVM (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarMapListForLLVM GGS_localVarMapListForLLVM::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_localVarMapListForLLVM result ;
  const GGS_localVarMapListForLLVM * p = (const GGS_localVarMapListForLLVM *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVarMapListForLLVM *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVarMapListForLLVM", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum overrideKind
//--------------------------------------------------------------------------------------------------

GGS_overrideKind::GGS_overrideKind (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_overrideKind GGS_overrideKind::class_func_selectOverrideFirstBranch (const GGS_currentVarManager & inAssociatedValue0
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_overrideKind result ;
  result.mEnum = Enumeration::enum_selectOverrideFirstBranch ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_overrideKind_2E_selectOverrideFirstBranch (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind GGS_overrideKind::class_func_selectOverrideNextBranches (const GGS_currentVarManager & inAssociatedValue0,
                                                                          const GGS_currentVarManager & inAssociatedValue1
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_overrideKind result ;
  result.mEnum = Enumeration::enum_selectOverrideNextBranches ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_overrideKind_2E_selectOverrideNextBranches (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind GGS_overrideKind::class_func_repeatOverride (UNUSED_LOCATION_ARGS) {
  GGS_overrideKind result ;
  result.mEnum = Enumeration::enum_repeatOverride ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind::method_extractSelectOverrideFirstBranch (GGS_currentVarManager & outAssociatedValue_savedManager,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selectOverrideFirstBranch) {
    outAssociatedValue_savedManager.drop () ;
    String s ;
    s.appendCString ("method @overrideKind.selectOverrideFirstBranch invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_overrideKind_2E_selectOverrideFirstBranch *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_savedManager = ptr->mProperty_savedManager ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind::method_extractSelectOverrideNextBranches (GGS_currentVarManager & outAssociatedValue_savedManager,
                                                                 GGS_currentVarManager & outAssociatedValue_referenceManager,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selectOverrideNextBranches) {
    outAssociatedValue_savedManager.drop () ;
    outAssociatedValue_referenceManager.drop () ;
    String s ;
    s.appendCString ("method @overrideKind.selectOverrideNextBranches invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_overrideKind_2E_selectOverrideNextBranches *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_savedManager = ptr->mProperty_savedManager ;
    outAssociatedValue_referenceManager = ptr->mProperty_referenceManager ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ GGS_overrideKind::getter_getSelectOverrideFirstBranch (UNUSED_LOCATION_ARGS) const {
  GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ result ;
  if (mEnum == Enumeration::enum_selectOverrideFirstBranch) {
    const auto ptr = (const GGS_overrideKind_2E_selectOverrideFirstBranch *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_overrideKind_2E_selectOverrideFirstBranch (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind::getAssociatedValuesFor_selectOverrideFirstBranch (GGS_currentVarManager & out_savedManager) const {
  const auto ptr = (const GGS_overrideKind_2E_selectOverrideFirstBranch *) mAssociatedValues.associatedValuesPointer () ;
  out_savedManager = ptr->mProperty_savedManager ;
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideNextBranches_3F_ GGS_overrideKind::getter_getSelectOverrideNextBranches (UNUSED_LOCATION_ARGS) const {
  GGS_overrideKind_2E_selectOverrideNextBranches_3F_ result ;
  if (mEnum == Enumeration::enum_selectOverrideNextBranches) {
    const auto ptr = (const GGS_overrideKind_2E_selectOverrideNextBranches *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_overrideKind_2E_selectOverrideNextBranches (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind::getAssociatedValuesFor_selectOverrideNextBranches (GGS_currentVarManager & out_savedManager,
                                                                          GGS_currentVarManager & out_referenceManager) const {
  const auto ptr = (const GGS_overrideKind_2E_selectOverrideNextBranches *) mAssociatedValues.associatedValuesPointer () ;
  out_savedManager = ptr->mProperty_savedManager ;
  out_referenceManager = ptr->mProperty_referenceManager ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_overrideKind [4] = {
  "(not built)",
  "selectOverrideFirstBranch",
  "selectOverrideNextBranches",
  "repeatOverride"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_overrideKind::getter_isSelectOverrideFirstBranch (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selectOverrideFirstBranch == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_overrideKind::getter_isSelectOverrideNextBranches (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selectOverrideNextBranches == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_overrideKind::getter_isRepeatOverride (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_repeatOverride == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("<enum @overrideKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_overrideKind [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @overrideKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overrideKind ("overrideKind",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_overrideKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_overrideKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_overrideKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind GGS_overrideKind::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_overrideKind result ;
  const GGS_overrideKind * p = (const GGS_overrideKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_overrideKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overrideKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@openedOverrideList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_openedOverrideList : public cCollectionElement {
  public: GGS_openedOverrideList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_openedOverrideList (const GGS_overrideKind & in_mOverrideKind
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_openedOverrideList (const GGS_openedOverrideList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_openedOverrideList::cCollectionElement_openedOverrideList (const GGS_overrideKind & in_mOverrideKind
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOverrideKind) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_openedOverrideList::cCollectionElement_openedOverrideList (const GGS_openedOverrideList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOverrideKind) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_openedOverrideList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_openedOverrideList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_openedOverrideList (mObject.mProperty_mOverrideKind COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_openedOverrideList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOverrideKind" ":") ;
  mObject.mProperty_mOverrideKind.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_openedOverrideList::GGS_openedOverrideList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_openedOverrideList::GGS_openedOverrideList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_openedOverrideList GGS_openedOverrideList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_openedOverrideList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_openedOverrideList GGS_openedOverrideList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_openedOverrideList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_openedOverrideList::enterElement (const GGS_openedOverrideList_2E_element & inValue,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_openedOverrideList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_openedOverrideList GGS_openedOverrideList::class_func_listWithValue (const GGS_overrideKind & inOperand0
                                                                         COMMA_LOCATION_ARGS) {
  GGS_openedOverrideList result ;
  if (inOperand0.isValid ()) {
    result = GGS_openedOverrideList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_openedOverrideList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_openedOverrideList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GGS_overrideKind & in_mOverrideKind
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_openedOverrideList * p = nullptr ;
  macroMyNew (p, cCollectionElement_openedOverrideList (in_mOverrideKind COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_openedOverrideList::addAssign_operation (const GGS_overrideKind & inOperand0
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_openedOverrideList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_openedOverrideList::setter_append (const GGS_overrideKind inOperand0,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_openedOverrideList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_openedOverrideList::setter_insertAtIndex (const GGS_overrideKind inOperand0,
                                                   const GGS_uint inInsertionIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_openedOverrideList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_openedOverrideList::setter_removeAtIndex (GGS_overrideKind & outOperand0,
                                                   const GGS_uint inRemoveIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_openedOverrideList * p = (cCollectionElement_openedOverrideList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_openedOverrideList) ;
      outOperand0 = p->mObject.mProperty_mOverrideKind ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_openedOverrideList::setter_popFirst (GGS_overrideKind & outOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_openedOverrideList * p = (cCollectionElement_openedOverrideList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_openedOverrideList) ;
    outOperand0 = p->mObject.mProperty_mOverrideKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_openedOverrideList::setter_popLast (GGS_overrideKind & outOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_openedOverrideList * p = (cCollectionElement_openedOverrideList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_openedOverrideList) ;
    outOperand0 = p->mObject.mProperty_mOverrideKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_openedOverrideList::method_first (GGS_overrideKind & outOperand0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_openedOverrideList * p = (cCollectionElement_openedOverrideList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_openedOverrideList) ;
    outOperand0 = p->mObject.mProperty_mOverrideKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_openedOverrideList::method_last (GGS_overrideKind & outOperand0,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_openedOverrideList * p = (cCollectionElement_openedOverrideList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_openedOverrideList) ;
    outOperand0 = p->mObject.mProperty_mOverrideKind ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_openedOverrideList GGS_openedOverrideList::add_operation (const GGS_openedOverrideList & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_openedOverrideList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_openedOverrideList GGS_openedOverrideList::getter_subListWithRange (const GGS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_openedOverrideList result = GGS_openedOverrideList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_openedOverrideList GGS_openedOverrideList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_openedOverrideList result = GGS_openedOverrideList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_openedOverrideList GGS_openedOverrideList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_openedOverrideList result = GGS_openedOverrideList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_openedOverrideList::plusAssign_operation (const GGS_openedOverrideList inOperand,
                                                   Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_openedOverrideList::setter_setMOverrideKindAtIndex (GGS_overrideKind inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_openedOverrideList * p = (cCollectionElement_openedOverrideList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_openedOverrideList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOverrideKind = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind GGS_openedOverrideList::getter_mOverrideKindAtIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_openedOverrideList * p = (cCollectionElement_openedOverrideList *) attributes.ptr () ;
  GGS_overrideKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_openedOverrideList) ;
    result = p->mObject.mProperty_mOverrideKind ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_openedOverrideList::cEnumerator_openedOverrideList (const GGS_openedOverrideList & inEnumeratedObject,
                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_openedOverrideList_2E_element cEnumerator_openedOverrideList::current (LOCATION_ARGS) const {
  const cCollectionElement_openedOverrideList * p = (const cCollectionElement_openedOverrideList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_openedOverrideList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_overrideKind cEnumerator_openedOverrideList::current_mOverrideKind (LOCATION_ARGS) const {
  const cCollectionElement_openedOverrideList * p = (const cCollectionElement_openedOverrideList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_openedOverrideList) ;
  return p->mObject.mProperty_mOverrideKind ;
}




//--------------------------------------------------------------------------------------------------
//
//     @openedOverrideList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_openedOverrideList ("openedOverrideList",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_openedOverrideList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_openedOverrideList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_openedOverrideList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_openedOverrideList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_openedOverrideList GGS_openedOverrideList::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_openedOverrideList result ;
  const GGS_openedOverrideList * p = (const GGS_openedOverrideList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_openedOverrideList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("openedOverrideList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_currentVarManager::GGS_currentVarManager (void) :
mProperty_mLocalVarMap (),
mProperty_mSubMaps () {
}

//--------------------------------------------------------------------------------------------------

GGS_currentVarManager::~ GGS_currentVarManager (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_currentVarManager GGS_currentVarManager::init (Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_currentVarManager result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_currentVarManager::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mLocalVarMap = GGS_scopeLocalVarMap::init (inCompiler COMMA_HERE) ;
  mProperty_mSubMaps = GGS_localVarMapListForLLVM::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_currentVarManager::GGS_currentVarManager (const GGS_scopeLocalVarMap & inOperand0,
                                              const GGS_localVarMapListForLLVM & inOperand1) :
mProperty_mLocalVarMap (inOperand0),
mProperty_mSubMaps (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_currentVarManager GGS_currentVarManager::class_func_new (Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_currentVarManager result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_currentVarManager::isValid (void) const {
  return mProperty_mLocalVarMap.isValid () && mProperty_mSubMaps.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_currentVarManager::drop (void) {
  mProperty_mLocalVarMap.drop () ;
  mProperty_mSubMaps.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_currentVarManager::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @currentVarManager:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLocalVarMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSubMaps.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @currentVarManager generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_currentVarManager ("currentVarManager",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_currentVarManager::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_currentVarManager ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_currentVarManager::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_currentVarManager (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_currentVarManager GGS_currentVarManager::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_currentVarManager result ;
  const GGS_currentVarManager * p = (const GGS_currentVarManager *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_currentVarManager *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("currentVarManager", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@currentVarManager checkSelfObjectIsFullyInitialized'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkSelfObjectIsFullyInitialized (const GGS_currentVarManager inObject,
                                                        const GGS_location constinArgument_inErrorLocation,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_fullyInitialized_18599 = GGS_bool (true) ;
  const GGS_currentVarManager temp_0 = inObject ;
  cEnumerator_scopeLocalVarMap enumerator_18643 (temp_0.readProperty_mLocalVarMap (), EnumerationOrder::up) ;
  bool bool_1 = var_fullyInitialized_18599.isValidAndTrue () ;
  if (enumerator_18643.hasCurrentObject () && bool_1) {
    while (enumerator_18643.hasCurrentObject () && bool_1) {
      GGS_stringlist var_keyComponents_18690 = enumerator_18643.current (HERE).readProperty_lkey ().readProperty_string ().getter_componentsSeparatedByString (GGS_string (".") COMMA_SOURCE_FILE ("variable-manager.galgas", 424)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GGS_bool test_3 = GGS_bool (ComparisonKind::equal, var_keyComponents_18690.getter_count (SOURCE_FILE ("variable-manager.galgas", 425)).objectCompare (GGS_uint (uint32_t (2U)))) ;
        if (kBoolTrue == test_3.boolEnum ()) {
          test_3 = GGS_bool (ComparisonKind::equal, var_keyComponents_18690.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 425)).objectCompare (GGS_string ("self"))) ;
        }
        test_2 = test_3.boolEnum () ;
        if (kBoolTrue == test_2) {
          var_fullyInitialized_18599 = enumerator_18643.current (HERE).readProperty_mState ().getter_isDeclared (SOURCE_FILE ("variable-manager.galgas", 426)).operator_not (SOURCE_FILE ("variable-manager.galgas", 426)) ;
        }
      }
      enumerator_18643.gotoNextObject () ;
      if (enumerator_18643.hasCurrentObject ()) {
        bool_1 = var_fullyInitialized_18599.isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_fullyInitialized_18599.operator_not (SOURCE_FILE ("variable-manager.galgas", 429)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid call, self is not fully initialized"), fixItArray5  COMMA_SOURCE_FILE ("variable-manager.galgas", 430)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@currentVarManager neutralAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_neutralAccess (GGS_currentVarManager & ioObject,
                                    const GGS_lstring constinArgument_inVarName,
                                    GGS_unifiedTypeMapEntry & outArgument_outType,
                                    GGS_string & outArgument_outCppName,
                                    GGS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_currentVarManager temp_1 = ioObject ;
    const GGS_scopeLocalVarMap_2E_element var_varDescriptor_20052 = temp_1.readProperty_mLocalVarMap ().readSubscript__3F_ (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!temp_1.readProperty_mLocalVarMap ().readSubscript__3F_ (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      outArgument_outType = var_varDescriptor_20052.readProperty_mType () ;
      outArgument_outCppName = var_varDescriptor_20052.readProperty_mCppName () ;
      outArgument_outNameForCheckingFormalParameterUsing = var_varDescriptor_20052.readProperty_mNameForCheckingFormalParameterUsing () ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    extensionSetter_neutralAccess (ioObject.mProperty_mSubMaps, constinArgument_inVarName, GGS_uint (uint32_t (0U)), outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 462)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarMapListForLLVM neutralAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_neutralAccess (GGS_localVarMapListForLLVM & ioObject,
                                    const GGS_lstring constinArgument_inVarName,
                                    const GGS_uint constinArgument_inIndex,
                                    GGS_unifiedTypeMapEntry & outArgument_outType,
                                    GGS_string & outArgument_outCppName,
                                    GGS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_localVarMapListForLLVM temp_1 = ioObject ;
    test_0 = GGS_bool (ComparisonKind::greaterOrEqual, constinArgument_inIndex.objectCompare (temp_1.getter_count (SOURCE_FILE ("variable-manager.galgas", 479)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inVarName.readProperty_location (), GGS_string ("'").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 480)).add_operation (GGS_string ("' variable is not declared"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 480)), fixItArray2  COMMA_SOURCE_FILE ("variable-manager.galgas", 480)) ;
      outArgument_outType.drop () ; // Release error dropped variable
      outArgument_outCppName.drop () ; // Release error dropped variable
      outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    const GGS_localVarMapListForLLVM temp_3 = ioObject ;
    GGS_scopeLocalVarMap var_localMap_21212 = temp_3.getter_mMapAtIndex (constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 483)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      const GGS_scopeLocalVarMap_2E_element var_varDescriptor_21262 = var_localMap_21212.readSubscript__3F_ (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!var_localMap_21212.readSubscript__3F_ (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_4 = kBoolFalse ;
      }
      if (kBoolTrue == test_4) {
        outArgument_outType = var_varDescriptor_21262.readProperty_mType () ;
        outArgument_outCppName = var_varDescriptor_21262.readProperty_mCppName () ;
        outArgument_outNameForCheckingFormalParameterUsing = var_varDescriptor_21262.readProperty_mNameForCheckingFormalParameterUsing () ;
      }
    }
    if (kBoolFalse == test_4) {
      {
      extensionSetter_neutralAccess (ioObject, constinArgument_inVarName, constinArgument_inIndex.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 490)), outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 490)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@currentVarManager searchForDropAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForDropAccess (GGS_currentVarManager & ioObject,
                                          const GGS_lstring constinArgument_inVarName,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_currentVarManager temp_1 = ioObject ;
    const GGS_scopeLocalVarMap_2E_element var_varDescriptor_22264 = temp_1.readProperty_mLocalVarMap ().readSubscript__3F_ (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!temp_1.readProperty_mLocalVarMap ().readSubscript__3F_ (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      extensionMethod_checkFinalState (var_varDescriptor_22264.readProperty_mState (), constinArgument_inVarName, var_varDescriptor_22264.readProperty_mAttributes (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 512)) ;
      {
      GGS_unifiedTypeMapEntry joker_22602_5 ; // Joker input parameter
      GGS_string joker_22602_4 ; // Joker input parameter
      GGS_string joker_22602_3 ; // Joker input parameter
      GGS_localVariableAttributes joker_22602_2 ; // Joker input parameter
      GGS_localVarValuation joker_22602_1 ; // Joker input parameter
      ioObject.mProperty_mLocalVarMap.setter_removeKey (constinArgument_inVarName, joker_22602_5, joker_22602_4, joker_22602_3, joker_22602_2, joker_22602_1, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 513)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GGS_bool var_found_22622 = GGS_bool (false) ;
    const GGS_currentVarManager temp_2 = ioObject ;
    cEnumerator_localVarMapListForLLVM enumerator_22645 (temp_2.readProperty_mSubMaps (), EnumerationOrder::up) ;
    bool bool_3 = var_found_22622.operator_not (SOURCE_FILE ("variable-manager.galgas", 516)).isValidAndTrue () ;
    if (enumerator_22645.hasCurrentObject () && bool_3) {
      while (enumerator_22645.hasCurrentObject () && bool_3) {
        var_found_22622 = enumerator_22645.current_mMap (HERE).getter_hasKey (constinArgument_inVarName.readProperty_string () COMMA_SOURCE_FILE ("variable-manager.galgas", 517)) ;
        enumerator_22645.gotoNextObject () ;
        if (enumerator_22645.hasCurrentObject ()) {
          bool_3 = var_found_22622.operator_not (SOURCE_FILE ("variable-manager.galgas", 516)).isValidAndTrue () ;
        }
      }
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_found_22622.boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (constinArgument_inVarName.readProperty_location (), GGS_string ("variable '").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 520)).add_operation (GGS_string ("' is not declared in current scope, but in an overrided scope"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 520)), fixItArray5  COMMA_SOURCE_FILE ("variable-manager.galgas", 520)) ;
      }
    }
    if (kBoolFalse == test_4) {
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inVarName.readProperty_location (), GGS_string ("variable '").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 522)).add_operation (GGS_string ("' is not declared"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 522)), fixItArray6  COMMA_SOURCE_FILE ("variable-manager.galgas", 522)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@currentVarManager searchForWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForWriteAccess (GGS_currentVarManager & ioObject,
                                           const GGS_lstring constinArgument_inVarName,
                                           GGS_unifiedTypeMapEntry & outArgument_outType,
                                           GGS_string & outArgument_outCppName,
                                           GGS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_currentVarManager temp_1 = ioObject ;
    const GGS_scopeLocalVarMap_2E_element var_varDescriptor_24057 = temp_1.readProperty_mLocalVarMap ().readSubscript__3F_ (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!temp_1.readProperty_mLocalVarMap ().readSubscript__3F_ (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      GGS_localVarValuation var_newValuation_24346 = var_varDescriptor_24057.readProperty_mState () ;
      {
      extensionSetter_writeTransition (var_newValuation_24346, constinArgument_inVarName, GGS_bool (false), var_varDescriptor_24057.readProperty_mAttributes (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 558)) ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, var_newValuation_24346.objectCompare (var_varDescriptor_24057.readProperty_mState ())).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioObject.mProperty_mLocalVarMap.setter_setMStateForKey (var_newValuation_24346, constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 560)) ;
          }
        }
      }
      outArgument_outType = var_varDescriptor_24057.readProperty_mType () ;
      outArgument_outCppName = var_varDescriptor_24057.readProperty_mCppName () ;
      outArgument_outNameForCheckingFormalParameterUsing = var_varDescriptor_24057.readProperty_mNameForCheckingFormalParameterUsing () ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    extensionSetter_writeAccessInSubMap (ioObject.mProperty_mSubMaps, constinArgument_inVarName, GGS_uint (uint32_t (0U)), outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 566)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarMapListForLLVM writeAccessInSubMap'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_writeAccessInSubMap (GGS_localVarMapListForLLVM & ioObject,
                                          const GGS_lstring constinArgument_inVarName,
                                          const GGS_uint constinArgument_inIndex,
                                          GGS_unifiedTypeMapEntry & outArgument_outType,
                                          GGS_string & outArgument_outCppName,
                                          GGS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_localVarMapListForLLVM temp_1 = ioObject ;
    test_0 = GGS_bool (ComparisonKind::greaterOrEqual, constinArgument_inIndex.objectCompare (temp_1.getter_count (SOURCE_FILE ("variable-manager.galgas", 577)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inVarName.readProperty_location (), GGS_string ("'").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 578)).add_operation (GGS_string ("' variable is not declared"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 578)), fixItArray2  COMMA_SOURCE_FILE ("variable-manager.galgas", 578)) ;
      outArgument_outType.drop () ; // Release error dropped variable
      outArgument_outCppName.drop () ; // Release error dropped variable
      outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    const GGS_localVarMapListForLLVM temp_3 = ioObject ;
    GGS_scopeLocalVarMap var_localMap_25591 = temp_3.getter_mMapAtIndex (constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 581)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      const GGS_scopeLocalVarMap_2E_element var_varDescriptor_25641 = var_localMap_25591.readSubscript__3F_ (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!var_localMap_25591.readSubscript__3F_ (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_4 = kBoolFalse ;
      }
      if (kBoolTrue == test_4) {
        GGS_localVarValuation var_newValuation_25935 = var_varDescriptor_25641.readProperty_mState () ;
        {
        extensionSetter_writeTransition (var_newValuation_25935, constinArgument_inVarName, GGS_bool (true), var_varDescriptor_25641.readProperty_mAttributes (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 592)) ;
        }
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::notEqual, var_newValuation_25935.objectCompare (var_varDescriptor_25641.readProperty_mState ())).boolEnum () ;
          if (kBoolTrue == test_5) {
            {
            var_localMap_25591.setter_setMStateForKey (var_newValuation_25935, constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 594)) ;
            }
            {
            ioObject.setter_setMMapAtIndex (var_localMap_25591, constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 595)) ;
            }
          }
        }
        outArgument_outType = var_varDescriptor_25641.readProperty_mType () ;
        outArgument_outCppName = var_varDescriptor_25641.readProperty_mCppName () ;
        outArgument_outNameForCheckingFormalParameterUsing = var_varDescriptor_25641.readProperty_mNameForCheckingFormalParameterUsing () ;
      }
    }
    if (kBoolFalse == test_4) {
      {
      extensionSetter_writeAccessInSubMap (ioObject, constinArgument_inVarName, constinArgument_inIndex.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 601)), outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 601)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarValuation writeTransition'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_writeTransition (GGS_localVarValuation & ioObject,
                                      const GGS_lstring constinArgument_inVarName,
                                      const GGS_bool constinArgument_inOverridenMap,
                                      const GGS_localVariableAttributes constinArgument_inAttributes,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVarValuation temp_0 = ioObject ;
  switch (temp_0.enumValue ()) {
  case GGS_localVarValuation::Enumeration::invalid:
    break ;
  case GGS_localVarValuation::Enumeration::enum_invalid:
    break ;
  case GGS_localVarValuation::Enumeration::enum_declared:
    {
      GGS_bool extractedValue_27005__0 ;
      temp_0.getAssociatedValuesFor_declared (extractedValue_27005__0) ;
      ioObject = GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas", 614)) ;
    }
    break ;
  case GGS_localVarValuation::Enumeration::enum_initialized:
    {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = constinArgument_inAttributes.getter_contains (GGS_localVariableAttributes::class_func_warnsOnAnyAcces (SOURCE_FILE ("variable-manager.galgas", 616)) COMMA_SOURCE_FILE ("variable-manager.galgas", 616)).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticWarning (constinArgument_inVarName.readProperty_location (), GGS_string ("formal parameter has been declared as unused"), fixItArray2  COMMA_SOURCE_FILE ("variable-manager.galgas", 617)) ;
        }
      }
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = constinArgument_inAttributes.getter_contains (GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 619)) COMMA_SOURCE_FILE ("variable-manager.galgas", 619)).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inVarName.readProperty_location (), GGS_string ("constant '").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 620)).add_operation (GGS_string ("' cannot be mutated"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 620)), fixItArray4  COMMA_SOURCE_FILE ("variable-manager.galgas", 620)) ;
          ioObject = GGS_localVarValuation::class_func_invalid (SOURCE_FILE ("variable-manager.galgas", 621)) ;
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          GGS_bool test_6 = constinArgument_inAttributes.getter_contains (GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 622)) COMMA_SOURCE_FILE ("variable-manager.galgas", 622)).operator_not (SOURCE_FILE ("variable-manager.galgas", 622)) ;
          if (kBoolTrue == test_6.boolEnum ()) {
            test_6 = constinArgument_inOverridenMap.operator_not (SOURCE_FILE ("variable-manager.galgas", 622)) ;
          }
          test_5 = test_6.boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticWarning (constinArgument_inVarName.readProperty_location (), GGS_string ("variable '").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 623)).add_operation (GGS_string ("' was written to, but never read"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 623)), fixItArray7  COMMA_SOURCE_FILE ("variable-manager.galgas", 623)) ;
          }
        }
        if (kBoolFalse == test_5) {
          ioObject = GGS_localVarValuation::class_func_mutated (SOURCE_FILE ("variable-manager.galgas", 625)) ;
        }
      }
    }
    break ;
  case GGS_localVarValuation::Enumeration::enum_read:
    {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = constinArgument_inAttributes.getter_contains (GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 628)) COMMA_SOURCE_FILE ("variable-manager.galgas", 628)).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (constinArgument_inVarName.readProperty_location (), GGS_string ("constant '").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 629)).add_operation (GGS_string ("' cannot be mutated"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 629)), fixItArray9  COMMA_SOURCE_FILE ("variable-manager.galgas", 629)) ;
          ioObject = GGS_localVarValuation::class_func_invalid (SOURCE_FILE ("variable-manager.galgas", 630)) ;
        }
      }
      if (kBoolFalse == test_8) {
        ioObject = GGS_localVarValuation::class_func_mutated (SOURCE_FILE ("variable-manager.galgas", 632)) ;
      }
    }
    break ;
  case GGS_localVarValuation::Enumeration::enum_mutated:
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@currentVarManager searchForReadAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadAccess (GGS_currentVarManager & ioObject,
                                          const GGS_lstring constinArgument_inVarName,
                                          GGS_unifiedTypeMapEntry & outArgument_outType,
                                          GGS_string & outArgument_outCppName,
                                          GGS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_currentVarManager temp_1 = ioObject ;
    const GGS_scopeLocalVarMap_2E_element var_varDescriptor_29043 = temp_1.readProperty_mLocalVarMap ().readSubscript__3F_ (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!temp_1.readProperty_mLocalVarMap ().readSubscript__3F_ (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      GGS_localVarValuation var_newValuation_29103 = var_varDescriptor_29043.readProperty_mState () ;
      {
      extensionSetter_readTransition (var_newValuation_29103, constinArgument_inVarName, var_varDescriptor_29043.readProperty_mAttributes (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 658)) ;
      }
      outArgument_outType = var_varDescriptor_29043.readProperty_mType () ;
      outArgument_outCppName = var_varDescriptor_29043.readProperty_mCppName () ;
      outArgument_outNameForCheckingFormalParameterUsing = var_varDescriptor_29043.readProperty_mNameForCheckingFormalParameterUsing () ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, var_newValuation_29103.objectCompare (var_varDescriptor_29043.readProperty_mState ())).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioObject.mProperty_mLocalVarMap.setter_setMStateForKey (var_newValuation_29103, constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 663)) ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    extensionSetter_readAccess (ioObject.mProperty_mSubMaps, constinArgument_inVarName, GGS_uint (uint32_t (0U)), outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 666)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarMapListForLLVM readAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readAccess (GGS_localVarMapListForLLVM & ioObject,
                                 const GGS_lstring constinArgument_inVarName,
                                 const GGS_uint constinArgument_inIndex,
                                 GGS_unifiedTypeMapEntry & outArgument_outType,
                                 GGS_string & outArgument_outCppName,
                                 GGS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_localVarMapListForLLVM temp_1 = ioObject ;
    test_0 = GGS_bool (ComparisonKind::greaterOrEqual, constinArgument_inIndex.objectCompare (temp_1.getter_count (SOURCE_FILE ("variable-manager.galgas", 677)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inVarName.readProperty_location (), GGS_string ("'").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 678)).add_operation (GGS_string ("' variable is not declared"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 678)), fixItArray2  COMMA_SOURCE_FILE ("variable-manager.galgas", 678)) ;
      outArgument_outType.drop () ; // Release error dropped variable
      outArgument_outCppName.drop () ; // Release error dropped variable
      outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    const GGS_localVarMapListForLLVM temp_3 = ioObject ;
    GGS_scopeLocalVarMap var_localMap_30270 = temp_3.getter_mMapAtIndex (constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 681)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      const GGS_scopeLocalVarMap_2E_element var_varDescriptor_30320 = var_localMap_30270.readSubscript__3F_ (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!var_localMap_30270.readSubscript__3F_ (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_4 = kBoolFalse ;
      }
      if (kBoolTrue == test_4) {
        GGS_localVarValuation var_newValuation_30373 = var_varDescriptor_30320.readProperty_mState () ;
        {
        extensionSetter_readTransition (var_newValuation_30373, constinArgument_inVarName, var_varDescriptor_30320.readProperty_mAttributes (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 684)) ;
        }
        outArgument_outType = var_varDescriptor_30320.readProperty_mType () ;
        outArgument_outCppName = var_varDescriptor_30320.readProperty_mCppName () ;
        outArgument_outNameForCheckingFormalParameterUsing = var_varDescriptor_30320.readProperty_mNameForCheckingFormalParameterUsing () ;
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::notEqual, var_newValuation_30373.objectCompare (var_varDescriptor_30320.readProperty_mState ())).boolEnum () ;
          if (kBoolTrue == test_5) {
            {
            var_localMap_30270.setter_setMStateForKey (var_newValuation_30373, constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 689)) ;
            }
            {
            ioObject.setter_setMMapAtIndex (var_localMap_30270, constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 690)) ;
            }
          }
        }
      }
    }
    if (kBoolFalse == test_4) {
      {
      extensionSetter_readAccess (ioObject, constinArgument_inVarName, constinArgument_inIndex.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 693)), outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 693)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarValuation readTransition'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readTransition (GGS_localVarValuation & ioObject,
                                     const GGS_lstring constinArgument_inVarName,
                                     const GGS_localVariableAttributes constinArgument_inAttributes,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVarValuation temp_0 = ioObject ;
  switch (temp_0.enumValue ()) {
  case GGS_localVarValuation::Enumeration::invalid:
    break ;
  case GGS_localVarValuation::Enumeration::enum_invalid:
    break ;
  case GGS_localVarValuation::Enumeration::enum_declared:
    {
      GGS_bool extractedValue_31271__0 ;
      temp_0.getAssociatedValuesFor_declared (extractedValue_31271__0) ;
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inVarName.readProperty_location (), GGS_string ("variable '").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 705)).add_operation (GGS_string ("' used before being initialized"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 705)), fixItArray1  COMMA_SOURCE_FILE ("variable-manager.galgas", 705)) ;
      ioObject = GGS_localVarValuation::class_func_invalid (SOURCE_FILE ("variable-manager.galgas", 706)) ;
    }
    break ;
  case GGS_localVarValuation::Enumeration::enum_initialized:
    {
      ioObject = GGS_localVarValuation::class_func_read (SOURCE_FILE ("variable-manager.galgas", 708)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inAttributes.getter_contains (GGS_localVariableAttributes::class_func_warnsOnAnyAcces (SOURCE_FILE ("variable-manager.galgas", 709)) COMMA_SOURCE_FILE ("variable-manager.galgas", 709)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticWarning (constinArgument_inVarName.readProperty_location (), GGS_string ("formal parameter has been declared as unused"), fixItArray3  COMMA_SOURCE_FILE ("variable-manager.galgas", 710)) ;
        }
      }
    }
    break ;
  case GGS_localVarValuation::Enumeration::enum_read:
    {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = constinArgument_inAttributes.getter_contains (GGS_localVariableAttributes::class_func_warnsOnAnyAcces (SOURCE_FILE ("variable-manager.galgas", 713)) COMMA_SOURCE_FILE ("variable-manager.galgas", 713)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticWarning (constinArgument_inVarName.readProperty_location (), GGS_string ("formal parameter has been declared as unused"), fixItArray5  COMMA_SOURCE_FILE ("variable-manager.galgas", 714)) ;
        }
      }
    }
    break ;
  case GGS_localVarValuation::Enumeration::enum_mutated:
    {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = constinArgument_inAttributes.getter_contains (GGS_localVariableAttributes::class_func_warnsOnAnyAcces (SOURCE_FILE ("variable-manager.galgas", 717)) COMMA_SOURCE_FILE ("variable-manager.galgas", 717)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticWarning (constinArgument_inVarName.readProperty_location (), GGS_string ("formal parameter has been declared as unused"), fixItArray7  COMMA_SOURCE_FILE ("variable-manager.galgas", 718)) ;
        }
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@currentVarManager searchForReadWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadWriteAccess (GGS_currentVarManager & ioObject,
                                               const GGS_lstring constinArgument_inVarName,
                                               GGS_unifiedTypeMapEntry & outArgument_outType,
                                               GGS_string & outArgument_outCppName,
                                               GGS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_currentVarManager temp_1 = ioObject ;
    const GGS_scopeLocalVarMap_2E_element var_varDescriptor_33106 = temp_1.readProperty_mLocalVarMap ().readSubscript__3F_ (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!temp_1.readProperty_mLocalVarMap ().readSubscript__3F_ (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      GGS_localVarValuation var_newValuation_33391 = var_varDescriptor_33106.readProperty_mState () ;
      {
      extensionSetter_readWriteTransition (var_newValuation_33391, constinArgument_inVarName, GGS_bool (false), var_varDescriptor_33106.readProperty_mAttributes (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 749)) ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, var_newValuation_33391.objectCompare (var_varDescriptor_33106.readProperty_mState ())).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioObject.mProperty_mLocalVarMap.setter_setMStateForKey (var_newValuation_33391, constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 751)) ;
          }
        }
      }
      outArgument_outType = var_varDescriptor_33106.readProperty_mType () ;
      outArgument_outCppName = var_varDescriptor_33106.readProperty_mCppName () ;
      outArgument_outNameForCheckingFormalParameterUsing = var_varDescriptor_33106.readProperty_mNameForCheckingFormalParameterUsing () ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    extensionSetter_readWriteAccess (ioObject.mProperty_mSubMaps, constinArgument_inVarName, GGS_uint (uint32_t (0U)), outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 757)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarMapListForLLVM readWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readWriteAccess (GGS_localVarMapListForLLVM & ioObject,
                                      const GGS_lstring constinArgument_inVarName,
                                      const GGS_uint constinArgument_inIndex,
                                      GGS_unifiedTypeMapEntry & outArgument_outType,
                                      GGS_string & outArgument_outCppName,
                                      GGS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_localVarMapListForLLVM temp_1 = ioObject ;
    test_0 = GGS_bool (ComparisonKind::greaterOrEqual, constinArgument_inIndex.objectCompare (temp_1.getter_count (SOURCE_FILE ("variable-manager.galgas", 768)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inVarName.readProperty_location (), GGS_string ("'").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 769)).add_operation (GGS_string ("' variable is not declared"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 769)), fixItArray2  COMMA_SOURCE_FILE ("variable-manager.galgas", 769)) ;
      outArgument_outType.drop () ; // Release error dropped variable
      outArgument_outCppName.drop () ; // Release error dropped variable
      outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    const GGS_localVarMapListForLLVM temp_3 = ioObject ;
    GGS_scopeLocalVarMap var_localMap_34616 = temp_3.getter_mMapAtIndex (constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 772)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      const GGS_scopeLocalVarMap_2E_element var_varDescriptor_34666 = var_localMap_34616.readSubscript__3F_ (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!var_localMap_34616.readSubscript__3F_ (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_4 = kBoolFalse ;
      }
      if (kBoolTrue == test_4) {
        GGS_localVarValuation var_newValuation_34955 = var_varDescriptor_34666.readProperty_mState () ;
        {
        extensionSetter_readWriteTransition (var_newValuation_34955, constinArgument_inVarName, GGS_bool (true), var_varDescriptor_34666.readProperty_mAttributes (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 782)) ;
        }
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::notEqual, var_newValuation_34955.objectCompare (var_varDescriptor_34666.readProperty_mState ())).boolEnum () ;
          if (kBoolTrue == test_5) {
            {
            var_localMap_34616.setter_setMStateForKey (var_newValuation_34955, constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 784)) ;
            }
            {
            ioObject.setter_setMMapAtIndex (var_localMap_34616, constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 785)) ;
            }
          }
        }
        outArgument_outType = var_varDescriptor_34666.readProperty_mType () ;
        outArgument_outCppName = var_varDescriptor_34666.readProperty_mCppName () ;
        outArgument_outNameForCheckingFormalParameterUsing = var_varDescriptor_34666.readProperty_mNameForCheckingFormalParameterUsing () ;
      }
    }
    if (kBoolFalse == test_4) {
      {
      extensionSetter_readWriteAccess (ioObject, constinArgument_inVarName, constinArgument_inIndex.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 791)), outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 791)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarValuation readWriteTransition'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readWriteTransition (GGS_localVarValuation & ioObject,
                                          const GGS_lstring constinArgument_inVarName,
                                          const GGS_bool constinArgument_inOverridenMap,
                                          const GGS_localVariableAttributes constinArgument_inAttributes,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_readTransition (ioObject, constinArgument_inVarName, constinArgument_inAttributes, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 801)) ;
  }
  {
  extensionSetter_writeTransition (ioObject, constinArgument_inVarName, constinArgument_inOverridenMap, constinArgument_inAttributes, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 802)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@currentVarManager openScope'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openScope (GGS_currentVarManager & ioObject,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_currentVarManager temp_0 = ioObject ;
  ioObject.mProperty_mSubMaps.setter_insertAtIndex (temp_0.readProperty_mLocalVarMap (), GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 810)) ;
  }
  ioObject.mProperty_mLocalVarMap = GGS_scopeLocalVarMap::init (inCompiler COMMA_HERE) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@currentVarManager closeScope'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeScope (GGS_currentVarManager & ioObject,
                                 const GGS_location constinArgument_inErrorLocation,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_currentVarManager temp_0 = ioObject ;
  extensionMethod_checkFinalStates (temp_0.readProperty_mLocalVarMap (), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 817)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GGS_currentVarManager temp_2 = ioObject ;
    test_1 = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mSubMaps ().getter_count (SOURCE_FILE ("variable-manager.galgas", 818)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("EMPTY SUBMAPS"), fixItArray3  COMMA_SOURCE_FILE ("variable-manager.galgas", 819)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GGS_currentVarManager temp_5 = ioObject ;
    test_4 = GGS_bool (ComparisonKind::greaterThan, temp_5.readProperty_mSubMaps ().getter_count (SOURCE_FILE ("variable-manager.galgas", 821)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      ioObject.mProperty_mSubMaps.setter_popFirst (ioObject.mProperty_mLocalVarMap, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 822)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@currentVarManager insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (GGS_currentVarManager & ioObject,
                                const GGS_lstring constinArgument_inVarName,
                                const GGS_unifiedTypeMapEntry constinArgument_inType,
                                const GGS_string constinArgument_inCppName,
                                const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                const GGS_localVariableAttributes constinArgument_inAttributes,
                                const GGS_localVarValuation constinArgument_inState,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mLocalVarMap.setter_insertKey (constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, constinArgument_inAttributes, constinArgument_inState, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 836)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarValuation checkFinalState'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkFinalState (const GGS_localVarValuation inObject,
                                      const GGS_lstring constinArgument_inVarName,
                                      const GGS_localVariableAttributes constinArgument_inAttributes,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVarValuation temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_localVarValuation::Enumeration::invalid:
    break ;
  case GGS_localVarValuation::Enumeration::enum_invalid:
    break ;
  case GGS_localVarValuation::Enumeration::enum_declared:
    {
      GGS_bool extractedValue_37983_usedInOtherBlock_0 ;
      temp_0.getAssociatedValuesFor_declared (extractedValue_37983_usedInOtherBlock_0) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = constinArgument_inAttributes.getter_contains (GGS_localVariableAttributes::class_func_rejectDeclaredStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 854)) COMMA_SOURCE_FILE ("variable-manager.galgas", 854)).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inVarName.readProperty_location (), GGS_string ("variable '").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 855)).add_operation (GGS_string ("' should be initialized"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 855)), fixItArray2  COMMA_SOURCE_FILE ("variable-manager.galgas", 855)) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = extractedValue_37983_usedInOtherBlock_0.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticWarning (constinArgument_inVarName.readProperty_location (), GGS_string ("variable '").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 857)).add_operation (GGS_string ("' is only used  in sub scope; consider moving it"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 857)), fixItArray4  COMMA_SOURCE_FILE ("variable-manager.galgas", 857)) ;
          }
        }
        if (kBoolFalse == test_3) {
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticWarning (constinArgument_inVarName.readProperty_location (), GGS_string ("variable '").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 859)).add_operation (GGS_string ("' was never used; consider removing it"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 859)), fixItArray5  COMMA_SOURCE_FILE ("variable-manager.galgas", 859)) ;
        }
      }
    }
    break ;
  case GGS_localVarValuation::Enumeration::enum_initialized:
    {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = constinArgument_inAttributes.getter_contains (GGS_localVariableAttributes::class_func_suggestDeclareUnusedParameterAsUnused (SOURCE_FILE ("variable-manager.galgas", 862)) COMMA_SOURCE_FILE ("variable-manager.galgas", 862)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticWarning (constinArgument_inVarName.readProperty_location (), GGS_string ("parameter '").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 863)).add_operation (GGS_string ("' was never read; consider declaring it as unused"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 863)), fixItArray7  COMMA_SOURCE_FILE ("variable-manager.galgas", 863)) ;
        }
      }
      if (kBoolFalse == test_6) {
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = constinArgument_inAttributes.getter_contains (GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 864)) COMMA_SOURCE_FILE ("variable-manager.galgas", 864)).operator_not (SOURCE_FILE ("variable-manager.galgas", 864)).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticWarning (constinArgument_inVarName.readProperty_location (), GGS_string ("variable '").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 865)).add_operation (GGS_string ("' was never read; consider removing it"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 865)), fixItArray9  COMMA_SOURCE_FILE ("variable-manager.galgas", 865)) ;
          }
        }
      }
    }
    break ;
  case GGS_localVarValuation::Enumeration::enum_read:
    {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = constinArgument_inAttributes.getter_contains (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 868)) COMMA_SOURCE_FILE ("variable-manager.galgas", 868)).operator_not (SOURCE_FILE ("variable-manager.galgas", 868)).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticWarning (constinArgument_inVarName.readProperty_location (), GGS_string ("variable '").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 869)).add_operation (GGS_string ("' was never mutated; consider declaring it as 'let'"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 869)), fixItArray11  COMMA_SOURCE_FILE ("variable-manager.galgas", 869)) ;
        }
      }
    }
    break ;
  case GGS_localVarValuation::Enumeration::enum_mutated:
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@scopeLocalVarMap checkFinalStates'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkFinalStates (const GGS_scopeLocalVarMap inObject,
                                       const GGS_location /* constinArgument_inErrorLocation */,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_scopeLocalVarMap temp_0 = inObject ;
  cEnumerator_scopeLocalVarMap enumerator_39292 (temp_0, EnumerationOrder::up) ;
  while (enumerator_39292.hasCurrentObject ()) {
    extensionMethod_checkFinalState (enumerator_39292.current_mState (HERE), enumerator_39292.current_lkey (HERE), enumerator_39292.current_mAttributes (HERE), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 880)) ;
    enumerator_39292.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@currentVarManager checkAutomatonStates'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkAutomatonStates (const GGS_currentVarManager inObject,
                                           const GGS_location constinArgument_inErrorLocation,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_currentVarManager temp_0 = inObject ;
  extensionMethod_checkFinalStates (temp_0.readProperty_mLocalVarMap (), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 893)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarValuation combineValuationWith'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_combineValuationWith (const GGS_localVarValuation inObject,
                                           const GGS_localVarValuation constinArgument_inOther,
                                           GGS_localVarValuation & outArgument_outResult,
                                           GGS_string & /* ioArgument_ioErrorMessage */,
                                           Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResult.drop () ; // Release 'out' argument
  const GGS_localVarValuation temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_localVarValuation::Enumeration::invalid:
    break ;
  case GGS_localVarValuation::Enumeration::enum_invalid:
    {
      const GGS_localVarValuation temp_1 = inObject ;
      outArgument_outResult = temp_1 ;
    }
    break ;
  case GGS_localVarValuation::Enumeration::enum_declared:
    {
      GGS_bool extractedValue_40384_usedInSubscope_0 ;
      temp_0.getAssociatedValuesFor_declared (extractedValue_40384_usedInSubscope_0) ;
      switch (constinArgument_inOther.enumValue ()) {
      case GGS_localVarValuation::Enumeration::invalid:
        break ;
      case GGS_localVarValuation::Enumeration::enum_invalid:
        {
          outArgument_outResult = constinArgument_inOther ;
        }
        break ;
      case GGS_localVarValuation::Enumeration::enum_declared:
        {
          GGS_bool extractedValue_40485_otherUsedInSubscope_0 ;
          constinArgument_inOther.getAssociatedValuesFor_declared (extractedValue_40485_otherUsedInSubscope_0) ;
          outArgument_outResult = GGS_localVarValuation::class_func_declared (extractedValue_40384_usedInSubscope_0.operator_or (extractedValue_40485_otherUsedInSubscope_0 COMMA_SOURCE_FILE ("variable-manager.galgas", 911))  COMMA_SOURCE_FILE ("variable-manager.galgas", 911)) ;
        }
        break ;
      case GGS_localVarValuation::Enumeration::enum_initialized:
      case GGS_localVarValuation::Enumeration::enum_read:
      case GGS_localVarValuation::Enumeration::enum_mutated:
        {
          outArgument_outResult = GGS_localVarValuation::class_func_declared (GGS_bool (true)  COMMA_SOURCE_FILE ("variable-manager.galgas", 913)) ;
        }
        break ;
      }
    }
    break ;
  case GGS_localVarValuation::Enumeration::enum_initialized:
    {
      switch (constinArgument_inOther.enumValue ()) {
      case GGS_localVarValuation::Enumeration::invalid:
        break ;
      case GGS_localVarValuation::Enumeration::enum_invalid:
        {
          outArgument_outResult = constinArgument_inOther ;
        }
        break ;
      case GGS_localVarValuation::Enumeration::enum_declared:
        {
          GGS_bool extractedValue_40794_otherUsedInSubscope_0 ;
          constinArgument_inOther.getAssociatedValuesFor_declared (extractedValue_40794_otherUsedInSubscope_0) ;
          outArgument_outResult = GGS_localVarValuation::class_func_declared (extractedValue_40794_otherUsedInSubscope_0  COMMA_SOURCE_FILE ("variable-manager.galgas", 920)) ;
        }
        break ;
      case GGS_localVarValuation::Enumeration::enum_initialized:
      case GGS_localVarValuation::Enumeration::enum_read:
      case GGS_localVarValuation::Enumeration::enum_mutated:
        {
          outArgument_outResult = constinArgument_inOther ;
        }
        break ;
      }
    }
    break ;
  case GGS_localVarValuation::Enumeration::enum_read:
    {
      switch (constinArgument_inOther.enumValue ()) {
      case GGS_localVarValuation::Enumeration::invalid:
        break ;
      case GGS_localVarValuation::Enumeration::enum_invalid:
        {
          outArgument_outResult = constinArgument_inOther ;
        }
        break ;
      case GGS_localVarValuation::Enumeration::enum_declared:
        {
          GGS_bool extractedValue_41095__0 ;
          constinArgument_inOther.getAssociatedValuesFor_declared (extractedValue_41095__0) ;
          outArgument_outResult = GGS_localVarValuation::class_func_declared (GGS_bool (true)  COMMA_SOURCE_FILE ("variable-manager.galgas", 929)) ;
        }
        break ;
      case GGS_localVarValuation::Enumeration::enum_initialized:
        {
          const GGS_localVarValuation temp_2 = inObject ;
          outArgument_outResult = temp_2 ;
        }
        break ;
      case GGS_localVarValuation::Enumeration::enum_read:
      case GGS_localVarValuation::Enumeration::enum_mutated:
        {
          outArgument_outResult = constinArgument_inOther ;
        }
        break ;
      }
    }
    break ;
  case GGS_localVarValuation::Enumeration::enum_mutated:
    {
      switch (constinArgument_inOther.enumValue ()) {
      case GGS_localVarValuation::Enumeration::invalid:
        break ;
      case GGS_localVarValuation::Enumeration::enum_invalid:
        {
          outArgument_outResult = constinArgument_inOther ;
        }
        break ;
      case GGS_localVarValuation::Enumeration::enum_declared:
        {
          GGS_bool extractedValue_41390__0 ;
          constinArgument_inOther.getAssociatedValuesFor_declared (extractedValue_41390__0) ;
          outArgument_outResult = GGS_localVarValuation::class_func_declared (GGS_bool (true)  COMMA_SOURCE_FILE ("variable-manager.galgas", 940)) ;
        }
        break ;
      case GGS_localVarValuation::Enumeration::enum_initialized:
      case GGS_localVarValuation::Enumeration::enum_read:
      case GGS_localVarValuation::Enumeration::enum_mutated:
        {
          const GGS_localVarValuation temp_3 = inObject ;
          outArgument_outResult = temp_3 ;
        }
        break ;
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@scopeLocalVarMap combineMapWith'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_combineMapWith (GGS_scopeLocalVarMap & ioObject,
                                     const GGS_scopeLocalVarMap constinArgument_inOtherMap,
                                     GGS_string & ioArgument_ioErrorMessage,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_scopeLocalVarMap temp_0 = ioObject ;
  cEnumerator_scopeLocalVarMap enumerator_41805 (temp_0, EnumerationOrder::up) ;
  while (enumerator_41805.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      const GGS_scopeLocalVarMap_2E_element var_otherVar_41838 = constinArgument_inOtherMap.readSubscript__3F_ (enumerator_41805.current_lkey (HERE).readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!constinArgument_inOtherMap.readSubscript__3F_ (enumerator_41805.current_lkey (HERE).readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_1 = kBoolFalse ;
      }
      if (kBoolTrue == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::notEqual, enumerator_41805.current_mCppName (HERE).objectCompare (var_otherVar_41838.readProperty_mCppName ())).boolEnum () ;
          if (kBoolTrue == test_2) {
            ioArgument_ioErrorMessage.plusAssign_operation(GGS_string ("\n  - 'internal error type 1 for '").add_operation (enumerator_41805.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 954)).add_operation (GGS_string ("' local variable"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 954)), inCompiler  COMMA_SOURCE_FILE ("variable-manager.galgas", 954)) ;
          }
        }
        if (kBoolFalse == test_2) {
          GGS_localVarValuation var_newValuation_42086 ;
          extensionMethod_combineValuationWith (enumerator_41805.current_mState (HERE), var_otherVar_41838.readProperty_mState (), var_newValuation_42086, ioArgument_ioErrorMessage, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 956)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::notEqual, var_newValuation_42086.objectCompare (enumerator_41805.current_mState (HERE))).boolEnum () ;
            if (kBoolTrue == test_3) {
              {
              ioObject.setter_setMStateForKey (var_newValuation_42086, enumerator_41805.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 958)) ;
              }
            }
          }
        }
      }
    }
    if (kBoolFalse == test_1) {
      ioArgument_ioErrorMessage.plusAssign_operation(GGS_string ("\n  - 'internal error type 2 for '").add_operation (enumerator_41805.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 962)).add_operation (GGS_string ("' local variable"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 962)), inCompiler  COMMA_SOURCE_FILE ("variable-manager.galgas", 962)) ;
    }
    enumerator_41805.gotoNextObject () ;
  }
  cEnumerator_scopeLocalVarMap enumerator_42371 (constinArgument_inOtherMap, EnumerationOrder::up) ;
  while (enumerator_42371.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      const GGS_scopeLocalVarMap temp_5 = ioObject ;
      test_4 = temp_5.getter_hasKey (enumerator_42371.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("variable-manager.galgas", 967)).operator_not (SOURCE_FILE ("variable-manager.galgas", 967)).boolEnum () ;
      if (kBoolTrue == test_4) {
        ioArgument_ioErrorMessage.plusAssign_operation(GGS_string ("\n  - 'internal error type 3 for '").add_operation (enumerator_42371.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 968)).add_operation (GGS_string ("' local variable"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 968)), inCompiler  COMMA_SOURCE_FILE ("variable-manager.galgas", 968)) ;
      }
    }
    enumerator_42371.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@currentVarManager combineManagerWith'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_combineManagerWith (GGS_currentVarManager & ioObject,
                                         const GGS_currentVarManager constinArgument_inOtherManager,
                                         const GGS_location constinArgument_inErrorLocation,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_42836 = GGS_string::makeEmptyString () ;
  {
  extensionSetter_combineMapWith (ioObject.mProperty_mLocalVarMap, constinArgument_inOtherManager.readProperty_mLocalVarMap (), var_s_42836, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 978)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_currentVarManager temp_1 = ioObject ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mSubMaps ().getter_count (SOURCE_FILE ("variable-manager.galgas", 982)).objectCompare (constinArgument_inOtherManager.readProperty_mSubMaps ().getter_count (SOURCE_FILE ("variable-manager.galgas", 982)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_currentVarManager temp_2 = ioObject ;
      var_s_42836.plusAssign_operation(GGS_string ("Scope deepth error, ").add_operation (temp_2.readProperty_mSubMaps ().getter_count (SOURCE_FILE ("variable-manager.galgas", 983)).getter_string (SOURCE_FILE ("variable-manager.galgas", 983)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 983)).add_operation (GGS_string (" != "), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 983)).add_operation (constinArgument_inOtherManager.readProperty_mSubMaps ().getter_count (SOURCE_FILE ("variable-manager.galgas", 983)).getter_string (SOURCE_FILE ("variable-manager.galgas", 983)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 983)), inCompiler  COMMA_SOURCE_FILE ("variable-manager.galgas", 983)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GGS_localVarMapListForLLVM var_newSubMapList_43141 = GGS_localVarMapListForLLVM::init (inCompiler COMMA_HERE) ;
    const GGS_currentVarManager temp_3 = ioObject ;
    cEnumerator_localVarMapListForLLVM enumerator_43169 (temp_3.readProperty_mSubMaps (), EnumerationOrder::up) ;
    cEnumerator_localVarMapListForLLVM enumerator_43196 (constinArgument_inOtherManager.readProperty_mSubMaps (), EnumerationOrder::up) ;
    while (enumerator_43169.hasCurrentObject () && enumerator_43196.hasCurrentObject ()) {
      GGS_scopeLocalVarMap var_mutableSubMap_43249 = enumerator_43169.current_mMap (HERE) ;
      {
      extensionSetter_combineMapWith (var_mutableSubMap_43249, enumerator_43196.current_mMap (HERE), var_s_42836, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 988)) ;
      }
      var_newSubMapList_43141.addAssign_operation (var_mutableSubMap_43249  COMMA_SOURCE_FILE ("variable-manager.galgas", 992)) ;
      enumerator_43169.gotoNextObject () ;
      enumerator_43196.gotoNextObject () ;
    }
    ioObject.mProperty_mSubMaps = var_newSubMapList_43141 ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_s_42836.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("convergence error:").add_operation (var_s_42836, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 998)), fixItArray5  COMMA_SOURCE_FILE ("variable-manager.galgas", 998)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------

cMapElement_unifiedTypeMap::cMapElement_unifiedTypeMap (const GGS_unifiedTypeMap_2E_element & inValue
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mElement (inValue.mProperty_mElement) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_unifiedTypeMap::cMapElement_unifiedTypeMap (const GGS_lstring & inKey,
                                                        const GGS_unifiedTypeMapElementClass & in_mElement
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mElement (in_mElement) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_unifiedTypeMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_unifiedTypeMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_unifiedTypeMap (mProperty_lkey, mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_unifiedTypeMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mElement" ":") ;
  mProperty_mElement.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap::GGS_unifiedTypeMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap::GGS_unifiedTypeMap (const GGS_unifiedTypeMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap & GGS_unifiedTypeMap::operator = (const GGS_unifiedTypeMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap GGS_unifiedTypeMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap GGS_unifiedTypeMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_unifiedTypeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element_3F_ GGS_unifiedTypeMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_unifiedTypeMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_unifiedTypeMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_unifiedTypeMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mElement = p->mProperty_mElement ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap GGS_unifiedTypeMap::class_func_mapWithMapToOverride (const GGS_unifiedTypeMap & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap GGS_unifiedTypeMap::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap::enterElement (const GGS_unifiedTypeMap_2E_element & inValue,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * p = nullptr ;
  macroMyNew (p, cMapElement_unifiedTypeMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@unifiedTypeMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap::addAssign_operation (const GGS_lstring & inKey,
                                              const GGS_unifiedTypeMapElementClass & inArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * p = nullptr ;
  macroMyNew (p, cMapElement_unifiedTypeMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@unifiedTypeMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap GGS_unifiedTypeMap::add_operation (const GGS_unifiedTypeMap & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMap result = *this ;
  cEnumerator_unifiedTypeMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mElement (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap::setter_internalInsertKey (GGS_lstring inKey,
                                                   GGS_unifiedTypeMapElementClass inArgument0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * p = nullptr ;
  macroMyNew (p, cMapElement_unifiedTypeMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' key is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass GGS_unifiedTypeMap::getter_mElementForKey (const GGS_string & inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GGS_unifiedTypeMapElementClass result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mElement ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap::setter_setMElementForKey (GGS_unifiedTypeMapElementClass inAttributeValue,
                                                   GGS_string inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mProperty_mElement = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_unifiedTypeMap * GGS_unifiedTypeMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                    const GGS_string & inKey
                                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * result = (cMapElement_unifiedTypeMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_unifiedTypeMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_unifiedTypeMap::cEnumerator_unifiedTypeMap (const GGS_unifiedTypeMap & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element cEnumerator_unifiedTypeMap::current (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return GGS_unifiedTypeMap_2E_element (p->mProperty_lkey, p->mProperty_mElement) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_unifiedTypeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass cEnumerator_unifiedTypeMap::current_mElement (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mProperty_mElement ;
}

//--------------------------------------------------------------------------------------------------
//
//     @unifiedTypeMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap ("unifiedTypeMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_unifiedTypeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap GGS_unifiedTypeMap::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMap result ;
  const GGS_unifiedTypeMap * p = (const GGS_unifiedTypeMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap makeEntry'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeEntry (GGS_unifiedTypeMap & ioObject,
                                const GGS_lstring constinArgument_inLKey,
                                GGS_unifiedTypeMapEntry & outArgument_outEntry,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEntry.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inLKey.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outEntry = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("unified-type-map.galgas", 47)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      const GGS_unifiedTypeMap temp_2 = ioObject ;
      const GGS_unifiedTypeMap_2E_element var_node_2177 = temp_2.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!temp_2.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_1 = kBoolFalse ;
      }
      if (kBoolTrue == test_1) {
        outArgument_outEntry = GGS_unifiedTypeMapEntry::class_func_element (var_node_2177.readProperty_mElement ()  COMMA_SOURCE_FILE ("unified-type-map.galgas", 49)) ;
      }
    }
    if (kBoolFalse == test_1) {
      GGS_unifiedTypeMapElementClass var_newElement_2279 = GGS_unifiedTypeMapElementClass::init_21_ (GGS_typeDefinition::class_func_unsolved (SOURCE_FILE ("unified-type-map.galgas", 51)), inCompiler COMMA_HERE) ;
      {
      ioObject.setter_internalInsertKey (constinArgument_inLKey, var_newElement_2279, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 52)) ;
      }
      outArgument_outEntry = GGS_unifiedTypeMapEntry::class_func_element (var_newElement_2279  COMMA_SOURCE_FILE ("unified-type-map.galgas", 53)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap makeEntryFromString'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeEntryFromString (GGS_unifiedTypeMap & ioObject,
                                          const GGS_string constinArgument_inKey,
                                          GGS_unifiedTypeMapEntry & outArgument_outEntry,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEntry.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inKey.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outEntry = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("unified-type-map.galgas", 61)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      const GGS_unifiedTypeMap temp_2 = ioObject ;
      const GGS_unifiedTypeMap_2E_element var_node_2694 = temp_2.readSubscript__3F_ (constinArgument_inKey, inCompiler COMMA_HERE).unwrappedValue () ;
      if (!temp_2.readSubscript__3F_ (constinArgument_inKey, inCompiler COMMA_HERE).isValuated ()) {
        test_1 = kBoolFalse ;
      }
      if (kBoolTrue == test_1) {
        outArgument_outEntry = GGS_unifiedTypeMapEntry::class_func_element (var_node_2694.readProperty_mElement ()  COMMA_SOURCE_FILE ("unified-type-map.galgas", 63)) ;
      }
    }
    if (kBoolFalse == test_1) {
      GGS_unifiedTypeMapElementClass var_newElement_2795 = GGS_unifiedTypeMapElementClass::init_21_ (GGS_typeDefinition::class_func_unsolved (SOURCE_FILE ("unified-type-map.galgas", 65)), inCompiler COMMA_HERE) ;
      {
      ioObject.setter_internalInsertKey (GGS_lstring::init_21__21_ (constinArgument_inKey, GGS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 66)), inCompiler COMMA_HERE), var_newElement_2795, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 66)) ;
      }
      outArgument_outEntry = GGS_unifiedTypeMapEntry::class_func_element (var_newElement_2795  COMMA_SOURCE_FILE ("unified-type-map.galgas", 67)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@unifiedTypeMap typeMapEntryForLKey'
//
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry extensionGetter_typeMapEntryForLKey (const GGS_unifiedTypeMap & inObject,
                                                             const GGS_lstring & constinArgument_inLKey,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inLKey.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("unified-type-map.galgas", 75)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      const GGS_unifiedTypeMap temp_2 = inObject ;
      const GGS_unifiedTypeMap_2E_element var_node_3229 = temp_2.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!temp_2.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_1 = kBoolFalse ;
      }
      if (kBoolTrue == test_1) {
        result_result = GGS_unifiedTypeMapEntry::class_func_element (var_node_3229.readProperty_mElement ()  COMMA_SOURCE_FILE ("unified-type-map.galgas", 77)) ;
      }
    }
    if (kBoolFalse == test_1) {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inLKey.readProperty_location (), GGS_string ("there is no '@").add_operation (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 79)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 79)), fixItArray3  COMMA_SOURCE_FILE ("unified-type-map.galgas", 79)) ;
      result_result.drop () ; // Release error dropped variable
    }
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@unifiedTypeMap typeMapEntryOrNullForLKey'
//
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry extensionGetter_typeMapEntryOrNullForLKey (const GGS_unifiedTypeMap & inObject,
                                                                   const GGS_lstring & constinArgument_inLKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inLKey.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("unified-type-map.galgas", 87)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      const GGS_unifiedTypeMap temp_2 = inObject ;
      const GGS_unifiedTypeMap_2E_element var_node_3648 = temp_2.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!temp_2.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_1 = kBoolFalse ;
      }
      if (kBoolTrue == test_1) {
        result_result = GGS_unifiedTypeMapEntry::class_func_element (var_node_3648.readProperty_mElement ()  COMMA_SOURCE_FILE ("unified-type-map.galgas", 89)) ;
      }
    }
    if (kBoolFalse == test_1) {
      result_result = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("unified-type-map.galgas", 91)) ;
    }
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap insertType'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertType (GGS_unifiedTypeMap & ioObject,
                                 const GGS_lstring constinArgument_inTypeName,
                                 const GGS_unifiedTypeDefinition constinArgument_inTypeDefinition,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_unifiedTypeMap temp_1 = ioObject ;
    const GGS_unifiedTypeMap_2E_element var_node_3975 = temp_1.readSubscript__3F_ (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!temp_1.readSubscript__3F_ (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      switch (var_node_3975.readProperty_mElement ().readProperty_mDefinition ().enumValue ()) {
      case GGS_typeDefinition::Enumeration::invalid:
        break ;
      case GGS_typeDefinition::Enumeration::enum_solved:
        {
          GGS_unifiedTypeDefinition extractedValue_4064__0 ;
          var_node_3975.readProperty_mElement ().readProperty_mDefinition ().getAssociatedValuesFor_solved (extractedValue_4064__0) ;
          TC_Array <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("type already defined"), fixItArray2  COMMA_SOURCE_FILE ("unified-type-map.galgas", 101)) ;
        }
        break ;
      case GGS_typeDefinition::Enumeration::enum_unsolved:
        {
          GGS_unifiedTypeMapElementClass var_e_4153 = var_node_3975.readProperty_mElement () ;
          var_e_4153.setProperty_mDefinition (GGS_typeDefinition::class_func_solved (constinArgument_inTypeDefinition  COMMA_SOURCE_FILE ("unified-type-map.galgas", 104))) ;
        }
        break ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GGS_unifiedTypeMapElementClass var_newElement_4264 = GGS_unifiedTypeMapElementClass::init_21_ (GGS_typeDefinition::class_func_solved (constinArgument_inTypeDefinition  COMMA_SOURCE_FILE ("unified-type-map.galgas", 107)), inCompiler COMMA_HERE) ;
    {
    ioObject.setter_internalInsertKey (constinArgument_inTypeName, var_newElement_4264, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 108)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@unifiedTypeMap typeDefinition'
//
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeDefinition extensionGetter_typeDefinition (const GGS_unifiedTypeMap & inObject,
                                                          const GGS_lstring & constinArgument_inLKey,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeDefinition result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_unifiedTypeMap temp_1 = inObject ;
    const GGS_unifiedTypeMap_2E_element var_node_4602 = temp_1.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!temp_1.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      switch (var_node_4602.readProperty_mElement ().readProperty_mDefinition ().enumValue ()) {
      case GGS_typeDefinition::Enumeration::invalid:
        break ;
      case GGS_typeDefinition::Enumeration::enum_solved:
        {
          GGS_unifiedTypeDefinition extractedValue_4687_definition_0 ;
          var_node_4602.readProperty_mElement ().readProperty_mDefinition ().getAssociatedValuesFor_solved (extractedValue_4687_definition_0) ;
          result_result = extractedValue_4687_definition_0 ;
        }
        break ;
      case GGS_typeDefinition::Enumeration::enum_unsolved:
        {
          TC_Array <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inLKey.readProperty_location (), GGS_string ("unsolved type"), fixItArray2  COMMA_SOURCE_FILE ("unified-type-map.galgas", 120)) ;
          result_result.drop () ; // Release error dropped variable
        }
        break ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (constinArgument_inLKey.readProperty_location (), GGS_string ("there is no '@").add_operation (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 123)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 123)), fixItArray3  COMMA_SOURCE_FILE ("unified-type-map.galgas", 123)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Enum typeDefinition
//--------------------------------------------------------------------------------------------------

GGS_typeDefinition::GGS_typeDefinition (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeDefinition GGS_typeDefinition::class_func_unsolved (UNUSED_LOCATION_ARGS) {
  GGS_typeDefinition result ;
  result.mEnum = Enumeration::enum_unsolved ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition GGS_typeDefinition::class_func_solved (const GGS_unifiedTypeDefinition & inAssociatedValue0
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeDefinition result ;
  result.mEnum = Enumeration::enum_solved ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeDefinition_2E_solved (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDefinition::method_extractSolved (GGS_unifiedTypeDefinition & outAssociatedValue_definition,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_solved) {
    outAssociatedValue_definition.drop () ;
    String s ;
    s.appendCString ("method @typeDefinition.solved invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeDefinition_2E_solved *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_definition = ptr->mProperty_definition ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition_2E_solved_3F_ GGS_typeDefinition::getter_getSolved (UNUSED_LOCATION_ARGS) const {
  GGS_typeDefinition_2E_solved_3F_ result ;
  if (mEnum == Enumeration::enum_solved) {
    const auto ptr = (const GGS_typeDefinition_2E_solved *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeDefinition_2E_solved (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDefinition::getAssociatedValuesFor_solved (GGS_unifiedTypeDefinition & out_definition) const {
  const auto ptr = (const GGS_typeDefinition_2E_solved *) mAssociatedValues.associatedValuesPointer () ;
  out_definition = ptr->mProperty_definition ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_typeDefinition [3] = {
  "(not built)",
  "unsolved",
  "solved"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeDefinition::getter_isUnsolved (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_unsolved == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeDefinition::getter_isSolved (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_solved == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDefinition::description (String & ioString,
                                      const int32_t inIndentation) const {
  ioString.appendCString ("<enum @typeDefinition: ") ;
  ioString.appendCString (gEnumNameArrayFor_typeDefinition [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @typeDefinition generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeDefinition ("typeDefinition",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDefinition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeDefinition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition GGS_typeDefinition::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_typeDefinition result ;
  const GGS_typeDefinition * p = (const GGS_typeDefinition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unifiedTypeMapElementClass_2E_weak::objectCompare (const GGS_unifiedTypeMapElementClass_2E_weak & inOperand) const {
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

GGS_unifiedTypeMapElementClass_2E_weak::GGS_unifiedTypeMapElementClass_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass_2E_weak & GGS_unifiedTypeMapElementClass_2E_weak::operator = (const GGS_unifiedTypeMapElementClass & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass_2E_weak::GGS_unifiedTypeMapElementClass_2E_weak (const GGS_unifiedTypeMapElementClass & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass_2E_weak GGS_unifiedTypeMapElementClass_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_unifiedTypeMapElementClass_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass GGS_unifiedTypeMapElementClass_2E_weak::bang_unifiedTypeMapElementClass_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapElementClass result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_unifiedTypeMapElementClass) ;
      result = GGS_unifiedTypeMapElementClass ((cPtr_unifiedTypeMapElementClass *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @unifiedTypeMapElementClass.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapElementClass_2E_weak ("unifiedTypeMapElementClass.weak",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_unifiedTypeMapElementClass_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapElementClass_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMapElementClass_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMapElementClass_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass_2E_weak GGS_unifiedTypeMapElementClass_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMapElementClass_2E_weak result ;
  const GGS_unifiedTypeMapElementClass_2E_weak * p = (const GGS_unifiedTypeMapElementClass_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMapElementClass_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapElementClass.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@unifiedTypeMapEntry definition'
//
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeDefinition extensionGetter_definition (const GGS_unifiedTypeMapEntry & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeDefinition result_result ; // Returned variable
  const GGS_unifiedTypeMapEntry temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_unifiedTypeMapEntry::Enumeration::invalid:
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 197)), GGS_string ("null type"), fixItArray1  COMMA_SOURCE_FILE ("unified-type-map.galgas", 197)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
    {
      GGS_unifiedTypeMapElementClass_2E_weak extractedValue_7392_weakElement_0 ;
      temp_0.getAssociatedValuesFor_element (extractedValue_7392_weakElement_0) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        const GGS_unifiedTypeMapElementClass var_type_7420 = extractedValue_7392_weakElement_0.unwrappedValue () ;
        if (!extractedValue_7392_weakElement_0.isValuated ()) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          switch (var_type_7420.readProperty_mDefinition ().enumValue ()) {
          case GGS_typeDefinition::Enumeration::invalid:
            break ;
          case GGS_typeDefinition::Enumeration::enum_unsolved:
            {
              TC_Array <FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 202)), GGS_string ("unsolved type"), fixItArray3  COMMA_SOURCE_FILE ("unified-type-map.galgas", 202)) ;
              result_result.drop () ; // Release error dropped variable
            }
            break ;
          case GGS_typeDefinition::Enumeration::enum_solved:
            {
              GGS_unifiedTypeDefinition extractedValue_7573_definition_0 ;
              var_type_7420.readProperty_mDefinition ().getAssociatedValuesFor_solved (extractedValue_7573_definition_0) ;
              result_result = extractedValue_7573_definition_0 ;
            }
            break ;
          }
        }
      }
      if (kBoolFalse == test_2) {
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 207)), GGS_string ("nil type"), fixItArray4  COMMA_SOURCE_FILE ("unified-type-map.galgas", 207)) ;
        result_result.drop () ; // Release error dropped variable
      }
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@unifiedTypeMapEntry identifierRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_identifierRepresentation (const GGS_unifiedTypeMapEntry & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_unifiedTypeMapEntry temp_0 = inObject ;
  result_result = extensionGetter_definition (temp_0, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 215)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-type-map.galgas", 215)) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@unifiedTypeMapEntry typeName'
//
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_typeName (const GGS_unifiedTypeMapEntry & inObject,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_unifiedTypeMapEntry temp_0 = inObject ;
  result_result = extensionGetter_definition (temp_0, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 221)).readProperty_typeName ().readProperty_string () ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@unifiedTypeMapEntry baseType'
//
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry extensionGetter_baseType (const GGS_unifiedTypeMapEntry & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry result_outBaseType ; // Returned variable
  const GGS_unifiedTypeMapEntry temp_0 = inObject ;
  result_outBaseType = temp_0 ;
  bool loop_8300 = true ;
  while (loop_8300) {
    loop_8300 = extensionGetter_definition (result_outBaseType, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 228)).readProperty_superType ().getter_isNull (SOURCE_FILE ("unified-type-map.galgas", 228)).operator_not (SOURCE_FILE ("unified-type-map.galgas", 228)).isValid () ;
    if (loop_8300) {
      loop_8300 = extensionGetter_definition (result_outBaseType, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 228)).readProperty_superType ().getter_isNull (SOURCE_FILE ("unified-type-map.galgas", 228)).operator_not (SOURCE_FILE ("unified-type-map.galgas", 228)).boolValue () ;
    }
    if (loop_8300) {
      result_outBaseType = extensionGetter_definition (result_outBaseType, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 229)).readProperty_superType () ;
    }
  }
//---
  return result_outBaseType ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMapEntry addHeaderFileName'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_addHeaderFileName (const GGS_unifiedTypeMapEntry inObject,
                                        GGS_stringset & ioArgument_ioInclusions,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unifiedTypeMapEntry temp_0 = inObject ;
  GGS_unifiedTypeDefinition var_typeDefinition_8593 = extensionGetter_definition (temp_0, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 236)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_typeDefinition_8593.readProperty_isPredefined ().operator_not (SOURCE_FILE ("unified-type-map.galgas", 237)).operator_and (GGS_bool (ComparisonKind::notEqual, var_typeDefinition_8593.readProperty_headerKind ().objectCompare (GGS_headerKind::class_func_noHeader (SOURCE_FILE ("unified-type-map.galgas", 237)))) COMMA_SOURCE_FILE ("unified-type-map.galgas", 237)).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioInclusions.addAssign_operation (var_typeDefinition_8593.readProperty_headerFileName ()  COMMA_SOURCE_FILE ("unified-type-map.galgas", 238)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMapEntry addHeaderFileName1'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_addHeaderFileName_31_ (const GGS_unifiedTypeMapEntry inObject,
                                            GGS_stringset & ioArgument_ioInclusions,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unifiedTypeMapEntry temp_0 = inObject ;
  GGS_unifiedTypeDefinition var_typeDefinition_8947 = extensionGetter_definition (temp_0, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 245)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_typeDefinition_8947.readProperty_isPredefined ().operator_not (SOURCE_FILE ("unified-type-map.galgas", 246)).boolEnum () ;
    if (kBoolTrue == test_1) {
      switch (var_typeDefinition_8947.readProperty_headerKind ().enumValue ()) {
      case GGS_headerKind::Enumeration::invalid:
        break ;
      case GGS_headerKind::Enumeration::enum_noHeader:
        break ;
      case GGS_headerKind::Enumeration::enum_oneHeader:
        {
          ioArgument_ioInclusions.addAssign_operation (var_typeDefinition_8947.readProperty_headerFileName ()  COMMA_SOURCE_FILE ("unified-type-map.galgas", 250)) ;
        }
        break ;
      case GGS_headerKind::Enumeration::enum_twoHeaders:
        {
          ioArgument_ioInclusions.addAssign_operation (var_typeDefinition_8947.readProperty_headerFileName ().add_operation (GGS_string ("-1"), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 252))  COMMA_SOURCE_FILE ("unified-type-map.galgas", 252)) ;
        }
        break ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Class for element of '@actualParameterListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_actualParameterListAST : public cCollectionElement {
  public: GGS_actualParameterListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_actualParameterListAST (const GGS_actualParameterAST & in_mActualParameter
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_actualParameterListAST (const GGS_actualParameterListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_actualParameterListAST::cCollectionElement_actualParameterListAST (const GGS_actualParameterAST & in_mActualParameter
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mActualParameter) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_actualParameterListAST::cCollectionElement_actualParameterListAST (const GGS_actualParameterListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mActualParameter) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_actualParameterListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_actualParameterListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_actualParameterListAST (mObject.mProperty_mActualParameter COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_actualParameterListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mActualParameter" ":") ;
  mObject.mProperty_mActualParameter.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST::GGS_actualParameterListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST::GGS_actualParameterListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST GGS_actualParameterListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_actualParameterListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST GGS_actualParameterListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_actualParameterListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListAST::enterElement (const GGS_actualParameterListAST_2E_element & inValue,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_actualParameterListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST GGS_actualParameterListAST::class_func_listWithValue (const GGS_actualParameterAST & inOperand0
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_actualParameterListAST result ;
  if (inOperand0.isValid ()) {
    result = GGS_actualParameterListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_actualParameterListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GGS_actualParameterAST & in_mActualParameter
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_actualParameterListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_actualParameterListAST (in_mActualParameter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListAST::addAssign_operation (const GGS_actualParameterAST & inOperand0
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_actualParameterListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListAST::setter_append (const GGS_actualParameterAST inOperand0,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_actualParameterListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListAST::setter_insertAtIndex (const GGS_actualParameterAST inOperand0,
                                                       const GGS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_actualParameterListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListAST::setter_removeAtIndex (GGS_actualParameterAST & outOperand0,
                                                       const GGS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_actualParameterListAST * p = (cCollectionElement_actualParameterListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
      outOperand0 = p->mObject.mProperty_mActualParameter ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListAST::setter_popFirst (GGS_actualParameterAST & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListAST * p = (cCollectionElement_actualParameterListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mActualParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListAST::setter_popLast (GGS_actualParameterAST & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListAST * p = (cCollectionElement_actualParameterListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mActualParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListAST::method_first (GGS_actualParameterAST & outOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListAST * p = (cCollectionElement_actualParameterListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mActualParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListAST::method_last (GGS_actualParameterAST & outOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListAST * p = (cCollectionElement_actualParameterListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mActualParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST GGS_actualParameterListAST::add_operation (const GGS_actualParameterListAST & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_actualParameterListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST GGS_actualParameterListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_actualParameterListAST result = GGS_actualParameterListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST GGS_actualParameterListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_actualParameterListAST result = GGS_actualParameterListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST GGS_actualParameterListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_actualParameterListAST result = GGS_actualParameterListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListAST::plusAssign_operation (const GGS_actualParameterListAST inOperand,
                                                       Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListAST::setter_setMActualParameterAtIndex (GGS_actualParameterAST inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_actualParameterListAST * p = (cCollectionElement_actualParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mActualParameter = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterAST GGS_actualParameterListAST::getter_mActualParameterAtIndex (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListAST * p = (cCollectionElement_actualParameterListAST *) attributes.ptr () ;
  GGS_actualParameterAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
    result = p->mObject.mProperty_mActualParameter ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_actualParameterListAST::cEnumerator_actualParameterListAST (const GGS_actualParameterListAST & inEnumeratedObject,
                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST_2E_element cEnumerator_actualParameterListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_actualParameterListAST * p = (const cCollectionElement_actualParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_actualParameterAST cEnumerator_actualParameterListAST::current_mActualParameter (LOCATION_ARGS) const {
  const cCollectionElement_actualParameterListAST * p = (const cCollectionElement_actualParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
  return p->mObject.mProperty_mActualParameter ;
}




//--------------------------------------------------------------------------------------------------
//
//     @actualParameterListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterListAST ("actualParameterListAST",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_actualParameterListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actualParameterListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actualParameterListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST GGS_actualParameterListAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_actualParameterListAST result ;
  const GGS_actualParameterListAST * p = (const GGS_actualParameterListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actualParameterListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @actualParameterAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_actualParameterAST::cPtr_actualParameterAST (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_actualParameterAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_actualParameterAST::objectCompare (const GGS_actualParameterAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterAST::GGS_actualParameterAST (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterAST::GGS_actualParameterAST (const cPtr_actualParameterAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_actualParameterAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @actualParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_actualParameterAST::cPtr_actualParameterAST (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @actualParameterAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterAST ("actualParameterAST",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_actualParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actualParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actualParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterAST GGS_actualParameterAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_actualParameterAST result ;
  const GGS_actualParameterAST * p = (const GGS_actualParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actualParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@actualParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterParameterInSemanticContext (cPtr_actualParameterAST * inObject,
                                                          GGS_unifiedTypeMap & io_ioTypeMap,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_actualParameterAST) ;
    inObject->method_enterParameterInSemanticContext (io_ioTypeMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@actualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_isCompatibleWith (const cPtr_actualParameterAST * inObject,
                                               const GGS_formalArgumentPassingModeAST in_inFormalPassingMode,
                                               const GGS_string in_inSelector,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_isCompatibleWith (in_inFormalPassingMode, in_inSelector, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@actualParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInActualOutputParameterList (cPtr_actualParameterAST * inObject,
                                                           GGS_actualOutputArgumentList & io_ioActualOutputArgumentList,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_actualParameterAST) ;
    inObject->method_enterInActualOutputParameterList (io_ioActualOutputArgumentList, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@actualParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkAgainstFormalArgument (cPtr_actualParameterAST * inObject,
                                                     const GGS_lstring constin_inUsefulnessCallerEntityName,
                                                     GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                     const GGS_analysisContext constin_inAnalysisContext,
                                                     GGS_unifiedTypeMap & io_ioTypeMap,
                                                     const GGS_lstring constin_inFormalSelector,
                                                     const GGS_unifiedTypeMapEntry constin_inFormalArgumentType,
                                                     const GGS_formalArgumentPassingModeAST constin_inFormalArgumentPassingMode,
                                                     GGS_localVarManager & io_ioVariableMap,
                                                     GGS_actualParameterListForGeneration & io_ioActualParameterListForGeneration,
                                                     GGS_stringset & io_ioExclusiveVariableSet,
                                                     GGS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_actualParameterAST) ;
    inObject->method_checkAgainstFormalArgument (constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inAnalysisContext, io_ioTypeMap, constin_inFormalSelector, constin_inFormalArgumentType, constin_inFormalArgumentPassingMode, io_ioVariableMap, io_ioActualParameterListForGeneration, io_ioExclusiveVariableSet, io_ioInstructionListForGeneration, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_actualParameterAST_2E_weak::objectCompare (const GGS_actualParameterAST_2E_weak & inOperand) const {
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

GGS_actualParameterAST_2E_weak::GGS_actualParameterAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterAST_2E_weak & GGS_actualParameterAST_2E_weak::operator = (const GGS_actualParameterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterAST_2E_weak::GGS_actualParameterAST_2E_weak (const GGS_actualParameterAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_actualParameterAST_2E_weak GGS_actualParameterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_actualParameterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterAST GGS_actualParameterAST_2E_weak::bang_actualParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_actualParameterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_actualParameterAST) ;
      result = GGS_actualParameterAST ((cPtr_actualParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @actualParameterAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterAST_2E_weak ("actualParameterAST.weak",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_actualParameterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actualParameterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actualParameterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterAST_2E_weak GGS_actualParameterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_actualParameterAST_2E_weak result ;
  const GGS_actualParameterAST_2E_weak * p = (const GGS_actualParameterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actualParameterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @semanticExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_semanticExpressionAST::cPtr_semanticExpressionAST (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_semanticExpressionAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_semanticExpressionAST::objectCompare (const GGS_semanticExpressionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST::GGS_semanticExpressionAST (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST::GGS_semanticExpressionAST (const cPtr_semanticExpressionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @semanticExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_semanticExpressionAST::cPtr_semanticExpressionAST (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @semanticExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticExpressionAST ("semanticExpressionAST",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_semanticExpressionAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_semanticExpressionAST result ;
  const GGS_semanticExpressionAST * p = (const GGS_semanticExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_outputActualParameterAST_2E_weak::objectCompare (const GGS_outputActualParameterAST_2E_weak & inOperand) const {
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

GGS_outputActualParameterAST_2E_weak::GGS_outputActualParameterAST_2E_weak (void) :
GGS_actualParameterAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterAST_2E_weak & GGS_outputActualParameterAST_2E_weak::operator = (const GGS_outputActualParameterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterAST_2E_weak::GGS_outputActualParameterAST_2E_weak (const GGS_outputActualParameterAST & inSource) :
GGS_actualParameterAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterAST_2E_weak GGS_outputActualParameterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_outputActualParameterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterAST GGS_outputActualParameterAST_2E_weak::bang_outputActualParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_outputActualParameterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_outputActualParameterAST) ;
      result = GGS_outputActualParameterAST ((cPtr_outputActualParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @outputActualParameterAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputActualParameterAST_2E_weak ("outputActualParameterAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_actualParameterAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_outputActualParameterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outputActualParameterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outputActualParameterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterAST_2E_weak GGS_outputActualParameterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_outputActualParameterAST_2E_weak result ;
  const GGS_outputActualParameterAST_2E_weak * p = (const GGS_outputActualParameterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outputActualParameterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputActualParameterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_outputInputActualParameterAST_2E_weak::objectCompare (const GGS_outputInputActualParameterAST_2E_weak & inOperand) const {
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

GGS_outputInputActualParameterAST_2E_weak::GGS_outputInputActualParameterAST_2E_weak (void) :
GGS_actualParameterAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterAST_2E_weak & GGS_outputInputActualParameterAST_2E_weak::operator = (const GGS_outputInputActualParameterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterAST_2E_weak::GGS_outputInputActualParameterAST_2E_weak (const GGS_outputInputActualParameterAST & inSource) :
GGS_actualParameterAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterAST_2E_weak GGS_outputInputActualParameterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_outputInputActualParameterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterAST GGS_outputInputActualParameterAST_2E_weak::bang_outputInputActualParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_outputInputActualParameterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_outputInputActualParameterAST) ;
      result = GGS_outputInputActualParameterAST ((cPtr_outputInputActualParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @outputInputActualParameterAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputActualParameterAST_2E_weak ("outputInputActualParameterAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_actualParameterAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_outputInputActualParameterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outputInputActualParameterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outputInputActualParameterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterAST_2E_weak GGS_outputInputActualParameterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_outputInputActualParameterAST_2E_weak result ;
  const GGS_outputInputActualParameterAST_2E_weak * p = (const GGS_outputInputActualParameterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outputInputActualParameterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputActualParameterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_outputInputJokerParameterAST_2E_weak::objectCompare (const GGS_outputInputJokerParameterAST_2E_weak & inOperand) const {
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

GGS_outputInputJokerParameterAST_2E_weak::GGS_outputInputJokerParameterAST_2E_weak (void) :
GGS_actualParameterAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputJokerParameterAST_2E_weak & GGS_outputInputJokerParameterAST_2E_weak::operator = (const GGS_outputInputJokerParameterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputJokerParameterAST_2E_weak::GGS_outputInputJokerParameterAST_2E_weak (const GGS_outputInputJokerParameterAST & inSource) :
GGS_actualParameterAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_outputInputJokerParameterAST_2E_weak GGS_outputInputJokerParameterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_outputInputJokerParameterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputJokerParameterAST GGS_outputInputJokerParameterAST_2E_weak::bang_outputInputJokerParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_outputInputJokerParameterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_outputInputJokerParameterAST) ;
      result = GGS_outputInputJokerParameterAST ((cPtr_outputInputJokerParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @outputInputJokerParameterAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputJokerParameterAST_2E_weak ("outputInputJokerParameterAST.weak",
                                                                                            & kTypeDescriptor_GALGAS_actualParameterAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_outputInputJokerParameterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputJokerParameterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outputInputJokerParameterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outputInputJokerParameterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputJokerParameterAST_2E_weak GGS_outputInputJokerParameterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_outputInputJokerParameterAST_2E_weak result ;
  const GGS_outputInputJokerParameterAST_2E_weak * p = (const GGS_outputInputJokerParameterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outputInputJokerParameterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputJokerParameterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_outputInputSelfParameterAST_2E_weak::objectCompare (const GGS_outputInputSelfParameterAST_2E_weak & inOperand) const {
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

GGS_outputInputSelfParameterAST_2E_weak::GGS_outputInputSelfParameterAST_2E_weak (void) :
GGS_actualParameterAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputSelfParameterAST_2E_weak & GGS_outputInputSelfParameterAST_2E_weak::operator = (const GGS_outputInputSelfParameterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputSelfParameterAST_2E_weak::GGS_outputInputSelfParameterAST_2E_weak (const GGS_outputInputSelfParameterAST & inSource) :
GGS_actualParameterAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_outputInputSelfParameterAST_2E_weak GGS_outputInputSelfParameterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_outputInputSelfParameterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputSelfParameterAST GGS_outputInputSelfParameterAST_2E_weak::bang_outputInputSelfParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_outputInputSelfParameterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_outputInputSelfParameterAST) ;
      result = GGS_outputInputSelfParameterAST ((cPtr_outputInputSelfParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @outputInputSelfParameterAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputSelfParameterAST_2E_weak ("outputInputSelfParameterAST.weak",
                                                                                           & kTypeDescriptor_GALGAS_actualParameterAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_outputInputSelfParameterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputSelfParameterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outputInputSelfParameterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outputInputSelfParameterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputSelfParameterAST_2E_weak GGS_outputInputSelfParameterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_outputInputSelfParameterAST_2E_weak result ;
  const GGS_outputInputSelfParameterAST_2E_weak * p = (const GGS_outputInputSelfParameterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outputInputSelfParameterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputSelfParameterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputActualExistingVariableParameterAST_2E_weak::objectCompare (const GGS_inputActualExistingVariableParameterAST_2E_weak & inOperand) const {
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

GGS_inputActualExistingVariableParameterAST_2E_weak::GGS_inputActualExistingVariableParameterAST_2E_weak (void) :
GGS_actualParameterAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualExistingVariableParameterAST_2E_weak & GGS_inputActualExistingVariableParameterAST_2E_weak::operator = (const GGS_inputActualExistingVariableParameterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualExistingVariableParameterAST_2E_weak::GGS_inputActualExistingVariableParameterAST_2E_weak (const GGS_inputActualExistingVariableParameterAST & inSource) :
GGS_actualParameterAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_inputActualExistingVariableParameterAST_2E_weak GGS_inputActualExistingVariableParameterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_inputActualExistingVariableParameterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualExistingVariableParameterAST GGS_inputActualExistingVariableParameterAST_2E_weak::bang_inputActualExistingVariableParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_inputActualExistingVariableParameterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputActualExistingVariableParameterAST) ;
      result = GGS_inputActualExistingVariableParameterAST ((cPtr_inputActualExistingVariableParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @inputActualExistingVariableParameterAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST_2E_weak ("inputActualExistingVariableParameterAST.weak",
                                                                                                       & kTypeDescriptor_GALGAS_actualParameterAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_inputActualExistingVariableParameterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputActualExistingVariableParameterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputActualExistingVariableParameterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualExistingVariableParameterAST_2E_weak GGS_inputActualExistingVariableParameterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_inputActualExistingVariableParameterAST_2E_weak result ;
  const GGS_inputActualExistingVariableParameterAST_2E_weak * p = (const GGS_inputActualExistingVariableParameterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputActualExistingVariableParameterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualExistingVariableParameterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputActualSelfPropertyParameterAST_2E_weak::objectCompare (const GGS_inputActualSelfPropertyParameterAST_2E_weak & inOperand) const {
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

GGS_inputActualSelfPropertyParameterAST_2E_weak::GGS_inputActualSelfPropertyParameterAST_2E_weak (void) :
GGS_actualParameterAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualSelfPropertyParameterAST_2E_weak & GGS_inputActualSelfPropertyParameterAST_2E_weak::operator = (const GGS_inputActualSelfPropertyParameterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualSelfPropertyParameterAST_2E_weak::GGS_inputActualSelfPropertyParameterAST_2E_weak (const GGS_inputActualSelfPropertyParameterAST & inSource) :
GGS_actualParameterAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_inputActualSelfPropertyParameterAST_2E_weak GGS_inputActualSelfPropertyParameterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_inputActualSelfPropertyParameterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualSelfPropertyParameterAST GGS_inputActualSelfPropertyParameterAST_2E_weak::bang_inputActualSelfPropertyParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_inputActualSelfPropertyParameterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputActualSelfPropertyParameterAST) ;
      result = GGS_inputActualSelfPropertyParameterAST ((cPtr_inputActualSelfPropertyParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @inputActualSelfPropertyParameterAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualSelfPropertyParameterAST_2E_weak ("inputActualSelfPropertyParameterAST.weak",
                                                                                                   & kTypeDescriptor_GALGAS_actualParameterAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_inputActualSelfPropertyParameterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualSelfPropertyParameterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputActualSelfPropertyParameterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputActualSelfPropertyParameterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualSelfPropertyParameterAST_2E_weak GGS_inputActualSelfPropertyParameterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_inputActualSelfPropertyParameterAST_2E_weak result ;
  const GGS_inputActualSelfPropertyParameterAST_2E_weak * p = (const GGS_inputActualSelfPropertyParameterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputActualSelfPropertyParameterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualSelfPropertyParameterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputActualSelfParameterAST_2E_weak::objectCompare (const GGS_inputActualSelfParameterAST_2E_weak & inOperand) const {
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

GGS_inputActualSelfParameterAST_2E_weak::GGS_inputActualSelfParameterAST_2E_weak (void) :
GGS_actualParameterAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualSelfParameterAST_2E_weak & GGS_inputActualSelfParameterAST_2E_weak::operator = (const GGS_inputActualSelfParameterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualSelfParameterAST_2E_weak::GGS_inputActualSelfParameterAST_2E_weak (const GGS_inputActualSelfParameterAST & inSource) :
GGS_actualParameterAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_inputActualSelfParameterAST_2E_weak GGS_inputActualSelfParameterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_inputActualSelfParameterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualSelfParameterAST GGS_inputActualSelfParameterAST_2E_weak::bang_inputActualSelfParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_inputActualSelfParameterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputActualSelfParameterAST) ;
      result = GGS_inputActualSelfParameterAST ((cPtr_inputActualSelfParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @inputActualSelfParameterAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualSelfParameterAST_2E_weak ("inputActualSelfParameterAST.weak",
                                                                                           & kTypeDescriptor_GALGAS_actualParameterAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_inputActualSelfParameterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualSelfParameterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputActualSelfParameterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputActualSelfParameterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualSelfParameterAST_2E_weak GGS_inputActualSelfParameterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_inputActualSelfParameterAST_2E_weak result ;
  const GGS_inputActualSelfParameterAST_2E_weak * p = (const GGS_inputActualSelfParameterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputActualSelfParameterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualSelfParameterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputActualNewVariableParameterAST_2E_weak::objectCompare (const GGS_inputActualNewVariableParameterAST_2E_weak & inOperand) const {
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

GGS_inputActualNewVariableParameterAST_2E_weak::GGS_inputActualNewVariableParameterAST_2E_weak (void) :
GGS_actualParameterAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualNewVariableParameterAST_2E_weak & GGS_inputActualNewVariableParameterAST_2E_weak::operator = (const GGS_inputActualNewVariableParameterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualNewVariableParameterAST_2E_weak::GGS_inputActualNewVariableParameterAST_2E_weak (const GGS_inputActualNewVariableParameterAST & inSource) :
GGS_actualParameterAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_inputActualNewVariableParameterAST_2E_weak GGS_inputActualNewVariableParameterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_inputActualNewVariableParameterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualNewVariableParameterAST GGS_inputActualNewVariableParameterAST_2E_weak::bang_inputActualNewVariableParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_inputActualNewVariableParameterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputActualNewVariableParameterAST) ;
      result = GGS_inputActualNewVariableParameterAST ((cPtr_inputActualNewVariableParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @inputActualNewVariableParameterAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST_2E_weak ("inputActualNewVariableParameterAST.weak",
                                                                                                  & kTypeDescriptor_GALGAS_actualParameterAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_inputActualNewVariableParameterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputActualNewVariableParameterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputActualNewVariableParameterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualNewVariableParameterAST_2E_weak GGS_inputActualNewVariableParameterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_inputActualNewVariableParameterAST_2E_weak result ;
  const GGS_inputActualNewVariableParameterAST_2E_weak * p = (const GGS_inputActualNewVariableParameterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputActualNewVariableParameterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualNewVariableParameterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputActualNewConstantParameterAST_2E_weak::objectCompare (const GGS_inputActualNewConstantParameterAST_2E_weak & inOperand) const {
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

GGS_inputActualNewConstantParameterAST_2E_weak::GGS_inputActualNewConstantParameterAST_2E_weak (void) :
GGS_actualParameterAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualNewConstantParameterAST_2E_weak & GGS_inputActualNewConstantParameterAST_2E_weak::operator = (const GGS_inputActualNewConstantParameterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualNewConstantParameterAST_2E_weak::GGS_inputActualNewConstantParameterAST_2E_weak (const GGS_inputActualNewConstantParameterAST & inSource) :
GGS_actualParameterAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_inputActualNewConstantParameterAST_2E_weak GGS_inputActualNewConstantParameterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_inputActualNewConstantParameterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualNewConstantParameterAST GGS_inputActualNewConstantParameterAST_2E_weak::bang_inputActualNewConstantParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_inputActualNewConstantParameterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputActualNewConstantParameterAST) ;
      result = GGS_inputActualNewConstantParameterAST ((cPtr_inputActualNewConstantParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @inputActualNewConstantParameterAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST_2E_weak ("inputActualNewConstantParameterAST.weak",
                                                                                                  & kTypeDescriptor_GALGAS_actualParameterAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_inputActualNewConstantParameterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputActualNewConstantParameterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputActualNewConstantParameterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualNewConstantParameterAST_2E_weak GGS_inputActualNewConstantParameterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_inputActualNewConstantParameterAST_2E_weak result ;
  const GGS_inputActualNewConstantParameterAST_2E_weak * p = (const GGS_inputActualNewConstantParameterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputActualNewConstantParameterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualNewConstantParameterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputSingleJokerActualParameterAST_2E_weak::objectCompare (const GGS_inputSingleJokerActualParameterAST_2E_weak & inOperand) const {
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

GGS_inputSingleJokerActualParameterAST_2E_weak::GGS_inputSingleJokerActualParameterAST_2E_weak (void) :
GGS_actualParameterAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_inputSingleJokerActualParameterAST_2E_weak & GGS_inputSingleJokerActualParameterAST_2E_weak::operator = (const GGS_inputSingleJokerActualParameterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputSingleJokerActualParameterAST_2E_weak::GGS_inputSingleJokerActualParameterAST_2E_weak (const GGS_inputSingleJokerActualParameterAST & inSource) :
GGS_actualParameterAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_inputSingleJokerActualParameterAST_2E_weak GGS_inputSingleJokerActualParameterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_inputSingleJokerActualParameterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputSingleJokerActualParameterAST GGS_inputSingleJokerActualParameterAST_2E_weak::bang_inputSingleJokerActualParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_inputSingleJokerActualParameterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputSingleJokerActualParameterAST) ;
      result = GGS_inputSingleJokerActualParameterAST ((cPtr_inputSingleJokerActualParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @inputSingleJokerActualParameterAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST_2E_weak ("inputSingleJokerActualParameterAST.weak",
                                                                                                  & kTypeDescriptor_GALGAS_actualParameterAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_inputSingleJokerActualParameterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputSingleJokerActualParameterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputSingleJokerActualParameterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputSingleJokerActualParameterAST_2E_weak GGS_inputSingleJokerActualParameterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_inputSingleJokerActualParameterAST_2E_weak result ;
  const GGS_inputSingleJokerActualParameterAST_2E_weak * p = (const GGS_inputSingleJokerActualParameterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputSingleJokerActualParameterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputSingleJokerActualParameterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputJokerActualParameterAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_inputJokerActualParameterAST::cPtr_inputJokerActualParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mQualifierLocation (),
mProperty_mJokerIndex () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputJokerActualParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mQualifierLocation.printNonNullClassInstanceProperties ("mQualifierLocation") ;
    mProperty_mJokerIndex.printNonNullClassInstanceProperties ("mJokerIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputJokerActualParameterAST::objectCompare (const GGS_inputJokerActualParameterAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputJokerActualParameterAST::GGS_inputJokerActualParameterAST (void) :
GGS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inputJokerActualParameterAST GGS_inputJokerActualParameterAST::
init_21__21_ (const GGS_location & in_mQualifierLocation,
              const GGS_uint & in_mJokerIndex,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_inputJokerActualParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_inputJokerActualParameterAST (inCompiler COMMA_THERE)) ;
  object->inputJokerActualParameterAST_init_21__21_ (in_mQualifierLocation, in_mJokerIndex, inCompiler) ;
  const GGS_inputJokerActualParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerActualParameterAST::
inputJokerActualParameterAST_init_21__21_ (const GGS_location & in_mQualifierLocation,
                                           const GGS_uint & in_mJokerIndex,
                                           Compiler * /* inCompiler */) {
  mProperty_mQualifierLocation = in_mQualifierLocation ;
  mProperty_mJokerIndex = in_mJokerIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputJokerActualParameterAST::GGS_inputJokerActualParameterAST (const cPtr_inputJokerActualParameterAST * inSourcePtr) :
GGS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputJokerActualParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_inputJokerActualParameterAST GGS_inputJokerActualParameterAST::class_func_new (const GGS_location & in_mQualifierLocation,
                                                                                   const GGS_uint & in_mJokerIndex
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_inputJokerActualParameterAST result ;
  macroMyNew (result.mObjectPtr, cPtr_inputJokerActualParameterAST (in_mQualifierLocation, in_mJokerIndex COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_inputJokerActualParameterAST::readProperty_mQualifierLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_inputJokerActualParameterAST * p = (cPtr_inputJokerActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputJokerActualParameterAST) ;
    return p->mProperty_mQualifierLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_inputJokerActualParameterAST::readProperty_mJokerIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_inputJokerActualParameterAST * p = (cPtr_inputJokerActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputJokerActualParameterAST) ;
    return p->mProperty_mJokerIndex ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputJokerActualParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_inputJokerActualParameterAST::cPtr_inputJokerActualParameterAST (const GGS_location & in_mQualifierLocation,
                                                                      const GGS_uint & in_mJokerIndex
                                                                      COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mProperty_mQualifierLocation (),
mProperty_mJokerIndex () {
  mProperty_mQualifierLocation = in_mQualifierLocation ;
  mProperty_mJokerIndex = in_mJokerIndex ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputJokerActualParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputJokerActualParameterAST ;
}

void cPtr_inputJokerActualParameterAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@inputJokerActualParameterAST:") ;
  mProperty_mQualifierLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mJokerIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputJokerActualParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputJokerActualParameterAST (mProperty_mQualifierLocation, mProperty_mJokerIndex COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @inputJokerActualParameterAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputJokerActualParameterAST ("inputJokerActualParameterAST",
                                                                                    & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_inputJokerActualParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputJokerActualParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputJokerActualParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputJokerActualParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputJokerActualParameterAST GGS_inputJokerActualParameterAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_inputJokerActualParameterAST result ;
  const GGS_inputJokerActualParameterAST * p = (const GGS_inputJokerActualParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputJokerActualParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputJokerActualParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputJokerActualParameterAST_2E_weak::objectCompare (const GGS_inputJokerActualParameterAST_2E_weak & inOperand) const {
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

GGS_inputJokerActualParameterAST_2E_weak::GGS_inputJokerActualParameterAST_2E_weak (void) :
GGS_actualParameterAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_inputJokerActualParameterAST_2E_weak & GGS_inputJokerActualParameterAST_2E_weak::operator = (const GGS_inputJokerActualParameterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputJokerActualParameterAST_2E_weak::GGS_inputJokerActualParameterAST_2E_weak (const GGS_inputJokerActualParameterAST & inSource) :
GGS_actualParameterAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_inputJokerActualParameterAST_2E_weak GGS_inputJokerActualParameterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_inputJokerActualParameterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputJokerActualParameterAST GGS_inputJokerActualParameterAST_2E_weak::bang_inputJokerActualParameterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_inputJokerActualParameterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputJokerActualParameterAST) ;
      result = GGS_inputJokerActualParameterAST ((cPtr_inputJokerActualParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @inputJokerActualParameterAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputJokerActualParameterAST_2E_weak ("inputJokerActualParameterAST.weak",
                                                                                            & kTypeDescriptor_GALGAS_actualParameterAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_inputJokerActualParameterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputJokerActualParameterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputJokerActualParameterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputJokerActualParameterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputJokerActualParameterAST_2E_weak GGS_inputJokerActualParameterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_inputJokerActualParameterAST_2E_weak result ;
  const GGS_inputJokerActualParameterAST_2E_weak * p = (const GGS_inputJokerActualParameterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputJokerActualParameterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputJokerActualParameterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_externProcedureDeclarationAST_2E_weak::objectCompare (const GGS_externProcedureDeclarationAST_2E_weak & inOperand) const {
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

GGS_externProcedureDeclarationAST_2E_weak::GGS_externProcedureDeclarationAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureDeclarationAST_2E_weak & GGS_externProcedureDeclarationAST_2E_weak::operator = (const GGS_externProcedureDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureDeclarationAST_2E_weak::GGS_externProcedureDeclarationAST_2E_weak (const GGS_externProcedureDeclarationAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_externProcedureDeclarationAST_2E_weak GGS_externProcedureDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_externProcedureDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureDeclarationAST GGS_externProcedureDeclarationAST_2E_weak::bang_externProcedureDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_externProcedureDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_externProcedureDeclarationAST) ;
      result = GGS_externProcedureDeclarationAST ((cPtr_externProcedureDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @externProcedureDeclarationAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externProcedureDeclarationAST_2E_weak ("externProcedureDeclarationAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_externProcedureDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externProcedureDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externProcedureDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externProcedureDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureDeclarationAST_2E_weak GGS_externProcedureDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_externProcedureDeclarationAST_2E_weak result ;
  const GGS_externProcedureDeclarationAST_2E_weak * p = (const GGS_externProcedureDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externProcedureDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externProcedureDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_procDeclarationAST_2E_weak::objectCompare (const GGS_procDeclarationAST_2E_weak & inOperand) const {
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

GGS_procDeclarationAST_2E_weak::GGS_procDeclarationAST_2E_weak (void) :
GGS_externProcedureDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_procDeclarationAST_2E_weak & GGS_procDeclarationAST_2E_weak::operator = (const GGS_procDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_procDeclarationAST_2E_weak::GGS_procDeclarationAST_2E_weak (const GGS_procDeclarationAST & inSource) :
GGS_externProcedureDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_procDeclarationAST_2E_weak GGS_procDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_procDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procDeclarationAST GGS_procDeclarationAST_2E_weak::bang_procDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_procDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_procDeclarationAST) ;
      result = GGS_procDeclarationAST ((cPtr_procDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @procDeclarationAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procDeclarationAST_2E_weak ("procDeclarationAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_externProcedureDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_procDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_procDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_procDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procDeclarationAST_2E_weak GGS_procDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_procDeclarationAST_2E_weak result ;
  const GGS_procDeclarationAST_2E_weak * p = (const GGS_procDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_procDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

class cNode_syntaxExtensionsDictionary : public GGS_syntaxExtensionsDictionary_2E_element {
  public: cNode_syntaxExtensionsDictionary * mInfPtr ;
  public: cNode_syntaxExtensionsDictionary * mSupPtr ;
  public: int32_t mBalance ;

  public: cNode_syntaxExtensionsDictionary (const GGS_string & in_key,
                                            const GGS_galgas_33_SyntaxExtensionListAST & inProperty_extensionList) :
  GGS_syntaxExtensionsDictionary_2E_element (in_key, inProperty_extensionList),
  mInfPtr (nullptr),
  mSupPtr (nullptr),
  mBalance (0) {
  }

  public: cNode_syntaxExtensionsDictionary (cNode_syntaxExtensionsDictionary * inNode) ;

  public: cNode_syntaxExtensionsDictionary (cNode_syntaxExtensionsDictionary &) = delete ;

  public: cNode_syntaxExtensionsDictionary& operator = (cNode_syntaxExtensionsDictionary &) = delete ;

  public: virtual ~ cNode_syntaxExtensionsDictionary (void) {
    macroMyDelete (mInfPtr) ;
    macroMyDelete (mSupPtr) ;
  }
} ;

//--------------------------------------------------------------------------------------------------

class cSharedDictRoot_syntaxExtensionsDictionary : public SharedObject {
//--------------------------------- Attributes
  private: cNode_syntaxExtensionsDictionary * mRoot ;
  private: uint32_t mCount ;

//--------------------------------- Constructor
  protected: cSharedDictRoot_syntaxExtensionsDictionary (LOCATION_ARGS) :
  SharedObject (THERE),
  mRoot (nullptr),
  mCount (0) {
  }

//--------------------------------- Virtual destructor
  protected: virtual ~ cSharedDictRoot_syntaxExtensionsDictionary (void) {
    macroMyDelete (mRoot) ;
  }

//--------------------------------- No copy
  private: cSharedDictRoot_syntaxExtensionsDictionary (const cSharedDictRoot_syntaxExtensionsDictionary &) ;
  private: cSharedDictRoot_syntaxExtensionsDictionary & operator = (const cSharedDictRoot_syntaxExtensionsDictionary &) ;

//--------------------------------- Copy a map
  protected: VIRTUAL_IN_DEBUG void copyFrom (const cSharedDictRoot_syntaxExtensionsDictionary * inSource) ;

//--------------------------------- Insert
  protected: VIRTUAL_IN_DEBUG void performInsert (const GGS_syntaxExtensionsDictionary_2E_element & inNewNode,
                                                  const bool inEntryOverrideAllowed) {
    macroUniqueSharedObject (this) ;
    bool extension = false ;
    bool entryAlreadyInDict = false ;
    recursiveAddEntry (mRoot, inNewNode, entryAlreadyInDict, extension, inEntryOverrideAllowed) ;
    if (!entryAlreadyInDict) {
      mCount ++ ;
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkDict (HERE) ;
    #endif
  }

  protected: static void rotateLeft (cNode_syntaxExtensionsDictionary * & ioRootPtr) {
    cNode_syntaxExtensionsDictionary * ptr = ioRootPtr->mSupPtr ;
    ioRootPtr->mSupPtr = ptr->mInfPtr ;
    ptr->mInfPtr = ioRootPtr;

    if (ptr->mBalance >= 0) {
      ioRootPtr->mBalance ++ ;
    }else{
      ioRootPtr->mBalance += 1 - ptr->mBalance ;
    }

    if (ioRootPtr->mBalance > 0) {
      ptr->mBalance += ioRootPtr->mBalance + 1 ;
    }else{
      ptr->mBalance ++ ;
    }
    ioRootPtr = ptr ;
  }

  protected: static void rotateRight (cNode_syntaxExtensionsDictionary * & ioRootPtr) {
    cNode_syntaxExtensionsDictionary * ptr = ioRootPtr->mInfPtr ;
    ioRootPtr->mInfPtr = ptr->mSupPtr ;
    ptr->mSupPtr = ioRootPtr ;
   
    if (ptr->mBalance > 0) {
      ioRootPtr->mBalance += -ptr->mBalance - 1 ;
    }else{
      ioRootPtr->mBalance -- ;
    }
    if (ioRootPtr->mBalance >= 0) {
      ptr->mBalance -- ;
    }else{
      ptr->mBalance += ioRootPtr->mBalance - 1 ;
    }
    ioRootPtr = ptr ;
  }

  protected: static void recursiveAddEntry (cNode_syntaxExtensionsDictionary * & ioRootPtr,
                                            const GGS_syntaxExtensionsDictionary_2E_element & inNewNode,
                                            bool & outEntryAlreadyPresent,
                                            bool & ioExtension,
                                            const bool inEntryOverrideAllowed) {
    if (ioRootPtr == nullptr) {
      macroMyNew (ioRootPtr, cNode_syntaxExtensionsDictionary (inNewNode.mProperty_key, inNewNode.mProperty_extensionList)) ;
      ioExtension = true ;
      outEntryAlreadyPresent = false ;
    }else{
      macroValidPointer (ioRootPtr) ;
      const ComparisonResult comparaison = ioRootPtr->mProperty_key.objectCompare (inNewNode.mProperty_key) ;
      if (comparaison == ComparisonResult::firstOperandGreaterThanSecond) {
        recursiveAddEntry (ioRootPtr->mInfPtr, inNewNode, outEntryAlreadyPresent, ioExtension, inEntryOverrideAllowed) ;
        if (ioExtension) {
          ioRootPtr->mBalance++;
          if (ioRootPtr->mBalance == 0) {
            ioExtension = false;
          }else if (ioRootPtr->mBalance == 2) {
            if (ioRootPtr->mInfPtr->mBalance == -1) {
              rotateLeft (ioRootPtr->mInfPtr) ;
            }
            rotateRight (ioRootPtr) ;
            ioExtension = false;
          }
        }
      }else if (comparaison == ComparisonResult::firstOperandLowerThanSecond) {
        recursiveAddEntry (ioRootPtr->mSupPtr, inNewNode, outEntryAlreadyPresent, ioExtension, inEntryOverrideAllowed) ;
        if (ioExtension) {
          ioRootPtr->mBalance-- ;
          if (ioRootPtr->mBalance == 0) {
            ioExtension = false ;
          }else if (ioRootPtr->mBalance == -2) {
            if (ioRootPtr->mSupPtr->mBalance == 1) {
              rotateRight (ioRootPtr->mSupPtr) ;
            }
            rotateLeft (ioRootPtr) ;
            ioExtension = false;
          }
        }
      }else{  // Found
        ioExtension = false ;
        outEntryAlreadyPresent = true ;
        if (inEntryOverrideAllowed) {
          ioRootPtr->mProperty_extensionList = inNewNode.mProperty_extensionList ;
        }
      }
    }
  }

//--------------------------------- Search
  private: VIRTUAL_IN_DEBUG cNode_syntaxExtensionsDictionary * findEntryInDict (const GGS_string & inKey) const {
    cNode_syntaxExtensionsDictionary * result = nullptr ;
    cNode_syntaxExtensionsDictionary * currentNode = mRoot ;
    while ((currentNode != nullptr) && (nullptr == result)) {
      macroValidPointer (currentNode) ;
      const ComparisonResult comparaison = currentNode->mProperty_key.objectCompare (inKey) ;
      if (comparaison == ComparisonResult::firstOperandGreaterThanSecond) {
        currentNode = currentNode->mInfPtr ;
      }else if (comparaison == ComparisonResult::firstOperandLowerThanSecond) {
        currentNode = currentNode->mSupPtr ;
      }else{ // Found
        result = currentNode ;
      }
    }
    return result ;
  }

//--------------------------------- Remove
  protected: VIRTUAL_IN_DEBUG void performRemove (const GGS_string & inKey, cNode_syntaxExtensionsDictionary * & outRemovedNodePtr) {
    bool branchHasBeenRemoved = false ; // Unused here
    internalRemoveRecursively (mRoot, inKey, outRemovedNodePtr, branchHasBeenRemoved) ;
    if (nullptr != outRemovedNodePtr) {
      mCount -- ;
    }
  }

  protected: static void supBranchDecreased (cNode_syntaxExtensionsDictionary * & ioRoot,
                                              bool & ioBranchHasBeenRemoved) {
    ioRoot->mBalance ++ ;
    switch (ioRoot->mBalance) {
    case 0:
      break;
    case 1:
      ioBranchHasBeenRemoved = false;
      break;
    case 2:
      switch (ioRoot->mInfPtr->mBalance) {
      case -1:
        rotateLeft (ioRoot->mInfPtr) ;
        rotateRight (ioRoot) ;
        break;
      case 0:
        rotateRight (ioRoot) ;
        ioBranchHasBeenRemoved = false;
        break;
      case 1:
        rotateRight (ioRoot) ;
        break;
      }
      break;
    }
  }

  protected: static void infBranchDecreased (cNode_syntaxExtensionsDictionary * & ioRoot,
                                              bool & ioBranchHasBeenRemoved) {
    ioRoot->mBalance -- ;
    switch (ioRoot->mBalance) {
    case 0:
      break;
    case -1:
      ioBranchHasBeenRemoved = false;
      break;
    case -2:
      switch (ioRoot->mSupPtr->mBalance) {
      case 1:
        rotateRight (ioRoot->mSupPtr) ;
        rotateLeft (ioRoot) ;
        break;
      case 0:
        rotateLeft (ioRoot) ;
        ioBranchHasBeenRemoved = false;
        break;
      case -1:
        rotateLeft (ioRoot) ;
        break;
      }
      break;
    }
  }

  protected: static void getPreviousElement (cNode_syntaxExtensionsDictionary * & ioRoot,
                                             cNode_syntaxExtensionsDictionary * & ioElement,
                                             bool & ioBranchHasBeenRemoved) {
    if (ioRoot->mSupPtr == nullptr) {
      ioElement = ioRoot ;
      ioRoot = ioRoot->mInfPtr ;
      ioBranchHasBeenRemoved = true ;
    }else{
      getPreviousElement (ioRoot->mSupPtr, ioElement, ioBranchHasBeenRemoved) ;
      if (ioBranchHasBeenRemoved) {
        supBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
      }
    }
  }

  protected: static void internalRemoveRecursively (cNode_syntaxExtensionsDictionary * & ioRoot,
                                                     const GGS_string & inKeyToRemove,
                                                     cNode_syntaxExtensionsDictionary * & outRemovedNode,
                                                     bool & ioBranchHasBeenRemoved) {
    if (ioRoot != nullptr) {
      const ComparisonResult comparaison = ioRoot->mProperty_key.objectCompare (inKeyToRemove) ;
      if (comparaison == ComparisonResult::firstOperandGreaterThanSecond) {
        internalRemoveRecursively (ioRoot->mInfPtr, inKeyToRemove, outRemovedNode, ioBranchHasBeenRemoved);
        if (ioBranchHasBeenRemoved) {
          infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
        }
      }else if (comparaison == ComparisonResult::firstOperandLowerThanSecond) {
        internalRemoveRecursively (ioRoot->mSupPtr, inKeyToRemove, outRemovedNode, ioBranchHasBeenRemoved);
        if (ioBranchHasBeenRemoved) {
          supBranchDecreased (ioRoot, ioBranchHasBeenRemoved);
        }
      }else{
        cNode_syntaxExtensionsDictionary * p = ioRoot ;
        if (p->mInfPtr == nullptr) {
          ioRoot = p->mSupPtr;
          p->mSupPtr = nullptr;
          ioBranchHasBeenRemoved = true;
        }else if (p->mSupPtr == nullptr) {
          ioRoot = p->mInfPtr;
          p->mInfPtr = nullptr;
          ioBranchHasBeenRemoved = true;
        }else{
          getPreviousElement (p->mInfPtr, ioRoot, ioBranchHasBeenRemoved) ;
          ioRoot->mSupPtr = p->mSupPtr;
          p->mSupPtr = nullptr;
          ioRoot->mInfPtr = p->mInfPtr;
          p->mInfPtr = nullptr;
          ioRoot->mBalance = p->mBalance;
          p->mBalance = 0;
          if (ioBranchHasBeenRemoved) {
            infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
          }
        }
        outRemovedNode = p ;
      }
    }
  }

//--------------------------------- Internal method for enumeration
  protected: VIRTUAL_IN_DEBUG void populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const ;

//--------------------------------- Check Dictionary
  #ifndef DO_NOT_GENERATE_CHECKINGS
      private: VIRTUAL_IN_DEBUG void checkDict (LOCATION_ARGS) const {
      uint32_t n = 0 ;
      checkNode (mRoot, n) ;
      macroAssertThere (n == mCount, "n (%lld) != mCount (%lld)", n, mCount) ;
    }
  #endif


  #ifndef DO_NOT_GENERATE_CHECKINGS
    private: static void checkNode (const cNode_syntaxExtensionsDictionary * inNode,
                                     uint32_t & ioCount) {
      if (nullptr != inNode) {
        checkNode (inNode->mInfPtr, ioCount) ;
        ioCount ++ ;
        checkNode (inNode->mSupPtr, ioCount) ;
      }
    }
  #endif

//--------------------------------- Compare Dictionaries
  public: ComparisonResult compare (const cSharedDictRoot_syntaxExtensionsDictionary * inOperand) const {
    ComparisonResult result = ComparisonResult::operandEqual ;
    if (mCount < inOperand->mCount) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mCount > inOperand->mCount) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      capCollectionElementArray enumerationArray ;
      populateEnumerationArray (enumerationArray) ;
      capCollectionElementArray operandEnumerationArray ;
      inOperand->populateEnumerationArray (operandEnumerationArray) ;
      result = enumerationArray.compareCollectionElementArray (operandEnumerationArray) ;
    }
    return result ;
  }

//--------------------------------- Friend
  friend class GGS_syntaxExtensionsDictionary ;
} ;


//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary::GGS_syntaxExtensionsDictionary (void) :
AC_GALGAS_root (),
mSharedDict (nullptr) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary::~ GGS_syntaxExtensionsDictionary (void) {
  macroDetachSharedObject (mSharedDict) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary::GGS_syntaxExtensionsDictionary (const GGS_syntaxExtensionsDictionary & inSource) :
AC_GALGAS_root (),
mSharedDict (nullptr) {
  macroAssignSharedObject (mSharedDict, inSource.mSharedDict) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary & GGS_syntaxExtensionsDictionary::operator = (const GGS_syntaxExtensionsDictionary & inSource) {
  macroAssignSharedObject (mSharedDict, inSource.mSharedDict) ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary::drop (void) {
  macroDetachSharedObject (mSharedDict) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary GGS_syntaxExtensionsDictionary::class_func_emptyDict (LOCATION_ARGS) {
  GGS_syntaxExtensionsDictionary result ;
  macroMyNew (result.mSharedDict, cSharedDictRoot_syntaxExtensionsDictionary (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary GGS_syntaxExtensionsDictionary::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_syntaxExtensionsDictionary result ;
  macroMyNew (result.mSharedDict, cSharedDictRoot_syntaxExtensionsDictionary (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Description
#endif

//--------------------------------------------------------------------------------------------------

static void internalDescription_syntaxExtensionsDictionary (const cNode_syntaxExtensionsDictionary * inNode,
                                 String & ioString,
                                 const int32_t inIndentation) {
  if (nullptr != inNode) {
    internalDescription_syntaxExtensionsDictionary (inNode->mInfPtr, ioString, inIndentation) ;
    ioString.appendNewLine () ;
    inNode->description (ioString, inIndentation) ;
    internalDescription_syntaxExtensionsDictionary (inNode->mSupPtr, ioString, inIndentation) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<dict @") ;
  ioString.appendCString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (":") ;
  if (isValid ()) {
    internalDescription_syntaxExtensionsDictionary (mSharedDict->mRoot, ioString, inIndentation) ;
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_syntaxExtensionsDictionary::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedDict->mCount) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element_3F_ GGS_syntaxExtensionsDictionary
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_syntaxExtensionsDictionary_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const cNode_syntaxExtensionsDictionary * p = mSharedDict->findEntryInDict (inKey) ;
    if (nullptr == p) {
      result = GGS_syntaxExtensionsDictionary_2E_element_3F_::init_nil () ;
    }else{
      result = *p ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Insulate
#endif

//--------------------------------------------------------------------------------------------------

cNode_syntaxExtensionsDictionary::cNode_syntaxExtensionsDictionary (cNode_syntaxExtensionsDictionary * inNode) :
GGS_syntaxExtensionsDictionary_2E_element (inNode->mProperty_key, inNode->mProperty_extensionList),
mInfPtr (nullptr),
mSupPtr (nullptr),
mBalance (inNode->mBalance) {
  if (inNode->mInfPtr != nullptr) {
    macroMyNew (mInfPtr, cNode_syntaxExtensionsDictionary (inNode->mInfPtr)) ;
  }
  if (inNode->mSupPtr != nullptr) {
    macroMyNew (mSupPtr, cNode_syntaxExtensionsDictionary (inNode->mSupPtr)) ;
  }
}

//--------------------------------------------------------------------------------------------------

void cSharedDictRoot_syntaxExtensionsDictionary::copyFrom (const cSharedDictRoot_syntaxExtensionsDictionary * inSource) {
  macroUniqueSharedObject (this) ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    inSource->checkDict (HERE) ;
  #endif
  macroValidSharedObject (inSource, cSharedDictRoot_syntaxExtensionsDictionary) ;
  mCount = inSource->mCount ;
  if (nullptr != inSource->mRoot) {
    macroMyNew (mRoot, cNode_syntaxExtensionsDictionary (inSource->mRoot)) ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkDict (HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary::insulate (LOCATION_ARGS) {
  if ((nullptr != mSharedDict) && !mSharedDict->isUniquelyReferenced ()) {
    cSharedDictRoot_syntaxExtensionsDictionary * p = nullptr ;
    macroMyNew (p, cSharedDictRoot_syntaxExtensionsDictionary (THERE)) ;
    p->copyFrom (mSharedDict) ;
    macroAssignSharedObject (mSharedDict, p) ;
    macroDetachSharedObject (p) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Insert
#endif

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary::enterElement (const GGS_syntaxExtensionsDictionary_2E_element & inValue,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    insulate (THERE) ;
    macroUniqueSharedObject (mSharedDict) ;
    const bool entryOverrideAllowed = true ;
    mSharedDict->performInsert (inValue, entryOverrideAllowed) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary::addAssign_operation (const GGS_string & inKey,
                                                          const GGS_galgas_33_SyntaxExtensionListAST & inArgument0,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  GGS_syntaxExtensionsDictionary_2E_element newElement (inKey, inArgument0) ;
  if (isValid () && newElement.isValid ()) {
    insulate (THERE) ;
    macroUniqueSharedObject (mSharedDict) ;
    const bool entryOverrideAllowed = true ;
    mSharedDict->performInsert (newElement, entryOverrideAllowed) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary::setter_insert (const GGS_string inKey,
                                                    const GGS_galgas_33_SyntaxExtensionListAST inArgument0,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  GGS_syntaxExtensionsDictionary_2E_element newElement (inKey, inArgument0) ;
  if (isValid () && newElement.isValid ()) {
    insulate (THERE) ;
    macroUniqueSharedObject (mSharedDict) ;
    const bool entryOverrideAllowed = true ;
    mSharedDict->performInsert (newElement, entryOverrideAllowed) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_syntaxExtensionsDictionary::getter_hasKey (const GGS_string & inKey
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const cNode_syntaxExtensionsDictionary * p = mSharedDict->findEntryInDict (inKey) ;
    result = GGS_bool (p != nullptr) ;
   }
   return result ;
 }

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary::method_searchKey (GGS_string inKey,
                                                       GGS_galgas_33_SyntaxExtensionListAST & outArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cNode_syntaxExtensionsDictionary * p = nullptr ;
  if (isValid () && inKey.isValid ()) {
    p = mSharedDict->findEntryInDict (inKey) ;
    if (nullptr == p) {
    //--- Build error message
      String message = "cannot search in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cNode_syntaxExtensionsDictionary) ;
    outArgument0 = p->mProperty_extensionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary::setter_removeKey (GGS_string inKey,
                                                       GGS_galgas_33_SyntaxExtensionListAST & outArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cNode_syntaxExtensionsDictionary * p = nullptr ;
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    macroUniqueSharedObject (mSharedDict) ;
    mSharedDict->performRemove (inKey, p) ;
    if (nullptr == p) {
    //--- Build error message
      String message = "cannot remove in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cNode_syntaxExtensionsDictionary) ;
    outArgument0 = p->mProperty_extensionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST GGS_syntaxExtensionsDictionary::getter_extensionListForKey (const GGS_string & inKey,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxExtensionListAST result ;
  if (isValid () && inKey.isValid ()) {
  const cNode_syntaxExtensionsDictionary * p = mSharedDict->findEntryInDict (inKey) ;
   if (nullptr == p) {
    //--- Build error message
      String message = "cannot get extensionList ForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      macroValidSharedObject (p, cNode_syntaxExtensionsDictionary) ;
      result = p->mProperty_extensionList  ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary::setter_setExtensionListForKey (GGS_galgas_33_SyntaxExtensionListAST inPropertyValue,
                                                                    GGS_string inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    macroUniqueSharedObject (mSharedDict) ;
    cNode_syntaxExtensionsDictionary * p = mSharedDict->findEntryInDict (inKey) ;
    if (nullptr == p) {
    //--- Build error message
      String message = "cannot setExtensionListForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      p->mProperty_extensionList = inPropertyValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Object compare
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syntaxExtensionsDictionary::objectCompare (const GGS_syntaxExtensionsDictionary & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    result = mSharedDict->compare (inOperand.mSharedDict) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark map Enumeration
#endif

//--------------------------------------------------------------------------------------------------

class cCollectionElement_syntaxExtensionsDictionary : public cCollectionElement {
  public: GGS_syntaxExtensionsDictionary_2E_element mElement ;

//--- Constructor
  public: cCollectionElement_syntaxExtensionsDictionary (const GGS_syntaxExtensionsDictionary_2E_element & inElement) :
  cCollectionElement (HERE),
  mElement (inElement) {
  }

//--- No copy
  private: cCollectionElement_syntaxExtensionsDictionary (const cCollectionElement_syntaxExtensionsDictionary &) ;
  private: cCollectionElement_syntaxExtensionsDictionary & operator = (const cCollectionElement_syntaxExtensionsDictionary &) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const { return mElement.isValid () ; }

//--- Virtual method for comparing elements

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_syntaxExtensionsDictionary (mElement)) ;
    return p ;
  }

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const {
    mElement.description (ioString, inIndentation) ;
  }
} ;

//--------------------------------------------------------------------------------------------------

static void enterAscendingEnumeration_syntaxExtensionsDictionary (cNode_syntaxExtensionsDictionary * inNode,
                                                       capCollectionElementArray & ioEnumerationArray) {
  if (inNode != nullptr) {
    enterAscendingEnumeration_syntaxExtensionsDictionary (inNode->mInfPtr, ioEnumerationArray) ;
    cCollectionElement_syntaxExtensionsDictionary * p = nullptr ;
    macroMyNew (p, cCollectionElement_syntaxExtensionsDictionary (*inNode)) ;
    capCollectionElement element ;
    element.setPointer (p) ;
    macroDetachSharedObject (p) ;
    ioEnumerationArray.appendObject (element) ;
    enterAscendingEnumeration_syntaxExtensionsDictionary (inNode->mSupPtr, ioEnumerationArray) ;
  }
}

//--------------------------------------------------------------------------------------------------

void cSharedDictRoot_syntaxExtensionsDictionary::populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkDict (HERE) ;
  #endif
  ioEnumerationArray.setCapacity (mCount) ;
  enterAscendingEnumeration_syntaxExtensionsDictionary (mRoot, ioEnumerationArray) ;
  macroAssert (mCount == ioEnumerationArray.count (), "mCount (%lld) != ioEnumerationArray.count () (%lld)", mCount, ioEnumerationArray.count ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary::populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const {
  if (nullptr != mSharedDict) {
    mSharedDict->populateEnumerationArray (ioEnumerationArray) ;
  }
}

//--------------------------------------------------------------------------------------------------

cEnumerator_syntaxExtensionsDictionary::cEnumerator_syntaxExtensionsDictionary (const GGS_syntaxExtensionsDictionary & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element cEnumerator_syntaxExtensionsDictionary::current (LOCATION_ARGS) const {
  const cCollectionElement_syntaxExtensionsDictionary* p = dynamic_cast  <const cCollectionElement_syntaxExtensionsDictionary*> (currentObjectPtr (THERE)) ;
  macroValidSharedObject (p, cCollectionElement_syntaxExtensionsDictionary) ;
  return GGS_syntaxExtensionsDictionary_2E_element (p->mElement) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_syntaxExtensionsDictionary::current_key (LOCATION_ARGS) const {
  const cCollectionElement_syntaxExtensionsDictionary* p = dynamic_cast  <const cCollectionElement_syntaxExtensionsDictionary*> (currentObjectPtr (THERE)) ;
  macroValidSharedObject (p, cCollectionElement_syntaxExtensionsDictionary) ;
  return p->mElement.mProperty_key ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST cEnumerator_syntaxExtensionsDictionary::current_extensionList (LOCATION_ARGS) const {
  const cCollectionElement_syntaxExtensionsDictionary* p = dynamic_cast  <const cCollectionElement_syntaxExtensionsDictionary*> (currentObjectPtr (THERE)) ;
  macroValidSharedObject (p, cCollectionElement_syntaxExtensionsDictionary) ;
  return p->mElement.mProperty_extensionList ;
}

//--------------------------------------------------------------------------------------------------
//
//     @syntaxExtensionsDictionary generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxExtensionsDictionary ("syntaxExtensionsDictionary",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syntaxExtensionsDictionary::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxExtensionsDictionary ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxExtensionsDictionary::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxExtensionsDictionary (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary GGS_syntaxExtensionsDictionary::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_syntaxExtensionsDictionary result ;
  const GGS_syntaxExtensionsDictionary * p = (const GGS_syntaxExtensionsDictionary *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxExtensionsDictionary *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxExtensionsDictionary", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@galgas_33_SyntaxExtensionListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_galgas_33_SyntaxExtensionListAST : public cCollectionElement {
  public: GGS_galgas_33_SyntaxExtensionListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_galgas_33_SyntaxExtensionListAST (const GGS_lstring & in_mSyntaxComponentName,
                                                               const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                               const GGS_syntaxRuleListAST & in_mRuleList
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_galgas_33_SyntaxExtensionListAST (const GGS_galgas_33_SyntaxExtensionListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_galgas_33_SyntaxExtensionListAST::cCollectionElement_galgas_33_SyntaxExtensionListAST (const GGS_lstring & in_mSyntaxComponentName,
                                                                                                          const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                                                          const GGS_syntaxRuleListAST & in_mRuleList
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSyntaxComponentName, in_mNonterminalDeclarationList, in_mRuleList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_galgas_33_SyntaxExtensionListAST::cCollectionElement_galgas_33_SyntaxExtensionListAST (const GGS_galgas_33_SyntaxExtensionListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSyntaxComponentName, inElement.mProperty_mNonterminalDeclarationList, inElement.mProperty_mRuleList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_galgas_33_SyntaxExtensionListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_galgas_33_SyntaxExtensionListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_galgas_33_SyntaxExtensionListAST (mObject.mProperty_mSyntaxComponentName, mObject.mProperty_mNonterminalDeclarationList, mObject.mProperty_mRuleList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_galgas_33_SyntaxExtensionListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSyntaxComponentName" ":") ;
  mObject.mProperty_mSyntaxComponentName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNonterminalDeclarationList" ":") ;
  mObject.mProperty_mNonterminalDeclarationList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRuleList" ":") ;
  mObject.mProperty_mRuleList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST::GGS_galgas_33_SyntaxExtensionListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST::GGS_galgas_33_SyntaxExtensionListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST GGS_galgas_33_SyntaxExtensionListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_galgas_33_SyntaxExtensionListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST GGS_galgas_33_SyntaxExtensionListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_galgas_33_SyntaxExtensionListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::enterElement (const GGS_galgas_33_SyntaxExtensionListAST_2E_element & inValue,
                                                         Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_galgas_33_SyntaxExtensionListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST GGS_galgas_33_SyntaxExtensionListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                     const GGS_nonterminalDeclarationListAST & inOperand1,
                                                                                                     const GGS_syntaxRuleListAST & inOperand2
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_galgas_33_SyntaxExtensionListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_galgas_33_SyntaxExtensionListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_galgas_33_SyntaxExtensionListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GGS_lstring & in_mSyntaxComponentName,
                                                                      const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                      const GGS_syntaxRuleListAST & in_mRuleList
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_galgas_33_SyntaxExtensionListAST (in_mSyntaxComponentName,
                                                                      in_mNonterminalDeclarationList,
                                                                      in_mRuleList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::addAssign_operation (const GGS_lstring & inOperand0,
                                                                const GGS_nonterminalDeclarationListAST & inOperand1,
                                                                const GGS_syntaxRuleListAST & inOperand2
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_galgas_33_SyntaxExtensionListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::setter_append (const GGS_lstring inOperand0,
                                                          const GGS_nonterminalDeclarationListAST inOperand1,
                                                          const GGS_syntaxRuleListAST inOperand2,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_galgas_33_SyntaxExtensionListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                 const GGS_nonterminalDeclarationListAST inOperand1,
                                                                 const GGS_syntaxRuleListAST inOperand2,
                                                                 const GGS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_galgas_33_SyntaxExtensionListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                 GGS_nonterminalDeclarationListAST & outOperand1,
                                                                 GGS_syntaxRuleListAST & outOperand2,
                                                                 const GGS_uint inRemoveIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
      outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
      outOperand1 = p->mObject.mProperty_mNonterminalDeclarationList ;
      outOperand2 = p->mObject.mProperty_mRuleList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                            GGS_nonterminalDeclarationListAST & outOperand1,
                                                            GGS_syntaxRuleListAST & outOperand2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mNonterminalDeclarationList ;
    outOperand2 = p->mObject.mProperty_mRuleList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::setter_popLast (GGS_lstring & outOperand0,
                                                           GGS_nonterminalDeclarationListAST & outOperand1,
                                                           GGS_syntaxRuleListAST & outOperand2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mNonterminalDeclarationList ;
    outOperand2 = p->mObject.mProperty_mRuleList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::method_first (GGS_lstring & outOperand0,
                                                         GGS_nonterminalDeclarationListAST & outOperand1,
                                                         GGS_syntaxRuleListAST & outOperand2,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mNonterminalDeclarationList ;
    outOperand2 = p->mObject.mProperty_mRuleList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::method_last (GGS_lstring & outOperand0,
                                                        GGS_nonterminalDeclarationListAST & outOperand1,
                                                        GGS_syntaxRuleListAST & outOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mNonterminalDeclarationList ;
    outOperand2 = p->mObject.mProperty_mRuleList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST GGS_galgas_33_SyntaxExtensionListAST::add_operation (const GGS_galgas_33_SyntaxExtensionListAST & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxExtensionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST GGS_galgas_33_SyntaxExtensionListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxExtensionListAST result = GGS_galgas_33_SyntaxExtensionListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST GGS_galgas_33_SyntaxExtensionListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxExtensionListAST result = GGS_galgas_33_SyntaxExtensionListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST GGS_galgas_33_SyntaxExtensionListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxExtensionListAST result = GGS_galgas_33_SyntaxExtensionListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::plusAssign_operation (const GGS_galgas_33_SyntaxExtensionListAST inOperand,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::setter_setMSyntaxComponentNameAtIndex (GGS_lstring inOperand,
                                                                                  GGS_uint inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSyntaxComponentName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_galgas_33_SyntaxExtensionListAST::getter_mSyntaxComponentNameAtIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    result = p->mObject.mProperty_mSyntaxComponentName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::setter_setMNonterminalDeclarationListAtIndex (GGS_nonterminalDeclarationListAST inOperand,
                                                                                         GGS_uint inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mNonterminalDeclarationList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST GGS_galgas_33_SyntaxExtensionListAST::getter_mNonterminalDeclarationListAtIndex (const GGS_uint & inIndex,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) attributes.ptr () ;
  GGS_nonterminalDeclarationListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    result = p->mObject.mProperty_mNonterminalDeclarationList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::setter_setMRuleListAtIndex (GGS_syntaxRuleListAST inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRuleList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST GGS_galgas_33_SyntaxExtensionListAST::getter_mRuleListAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) attributes.ptr () ;
  GGS_syntaxRuleListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    result = p->mObject.mProperty_mRuleList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_galgas_33_SyntaxExtensionListAST::cEnumerator_galgas_33_SyntaxExtensionListAST (const GGS_galgas_33_SyntaxExtensionListAST & inEnumeratedObject,
                                                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST_2E_element cEnumerator_galgas_33_SyntaxExtensionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (const cCollectionElement_galgas_33_SyntaxExtensionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_galgas_33_SyntaxExtensionListAST::current_mSyntaxComponentName (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (const cCollectionElement_galgas_33_SyntaxExtensionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
  return p->mObject.mProperty_mSyntaxComponentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST cEnumerator_galgas_33_SyntaxExtensionListAST::current_mNonterminalDeclarationList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (const cCollectionElement_galgas_33_SyntaxExtensionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
  return p->mObject.mProperty_mNonterminalDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST cEnumerator_galgas_33_SyntaxExtensionListAST::current_mRuleList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (const cCollectionElement_galgas_33_SyntaxExtensionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
  return p->mObject.mProperty_mRuleList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @galgas3SyntaxExtensionListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST ("galgas3SyntaxExtensionListAST",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_galgas_33_SyntaxExtensionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgas_33_SyntaxExtensionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgas_33_SyntaxExtensionListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST GGS_galgas_33_SyntaxExtensionListAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_galgas_33_SyntaxExtensionListAST result ;
  const GGS_galgas_33_SyntaxExtensionListAST * p = (const GGS_galgas_33_SyntaxExtensionListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgas_33_SyntaxExtensionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3SyntaxExtensionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensions::GGS_syntaxExtensions (void) :
mProperty_dictionary () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensions::~ GGS_syntaxExtensions (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_syntaxExtensions GGS_syntaxExtensions::init (Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syntaxExtensions result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensions::setInitializedProperties (Compiler * inCompiler) {
  mProperty_dictionary = GGS_syntaxExtensionsDictionary::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensions::GGS_syntaxExtensions (const GGS_syntaxExtensionsDictionary & inOperand0) :
mProperty_dictionary (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensions GGS_syntaxExtensions::class_func_new (Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syntaxExtensions result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_syntaxExtensions::isValid (void) const {
  return mProperty_dictionary.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensions::drop (void) {
  mProperty_dictionary.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensions::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @syntaxExtensions:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_dictionary.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @syntaxExtensions generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxExtensions ("syntaxExtensions",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syntaxExtensions::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxExtensions ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxExtensions::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxExtensions (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensions GGS_syntaxExtensions::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_syntaxExtensions result ;
  const GGS_syntaxExtensions * p = (const GGS_syntaxExtensions *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxExtensions *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxExtensions", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@syntaxExtensions listForKey'
//
//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST extensionGetter_listForKey (const GGS_syntaxExtensions & inObject,
                                                                 const GGS_string & constinArgument_inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_galgas_33_SyntaxExtensionListAST result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_syntaxExtensions temp_1 = inObject ;
    test_0 = temp_1.readProperty_dictionary ().getter_hasKey (constinArgument_inKey COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 56)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_syntaxExtensions temp_2 = inObject ;
      temp_2.readProperty_dictionary ().method_searchKey (constinArgument_inKey, result_result, inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 57)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GGS_galgas_33_SyntaxExtensionListAST::init (inCompiler COMMA_HERE) ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_semanticExpressionAST_2E_weak::objectCompare (const GGS_semanticExpressionAST_2E_weak & inOperand) const {
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

GGS_semanticExpressionAST_2E_weak::GGS_semanticExpressionAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST_2E_weak & GGS_semanticExpressionAST_2E_weak::operator = (const GGS_semanticExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST_2E_weak::GGS_semanticExpressionAST_2E_weak (const GGS_semanticExpressionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST_2E_weak GGS_semanticExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_semanticExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_semanticExpressionAST_2E_weak::bang_semanticExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_semanticExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticExpressionAST) ;
      result = GGS_semanticExpressionAST ((cPtr_semanticExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @semanticExpressionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak ("semanticExpressionAST.weak",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST_2E_weak GGS_semanticExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_semanticExpressionAST_2E_weak result ;
  const GGS_semanticExpressionAST_2E_weak * p = (const GGS_semanticExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum formalArgumentPassingModeAST
//--------------------------------------------------------------------------------------------------

GGS_formalArgumentPassingModeAST::GGS_formalArgumentPassingModeAST (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_formalArgumentPassingModeAST GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (UNUSED_LOCATION_ARGS) {
  GGS_formalArgumentPassingModeAST result ;
  result.mEnum = Enumeration::enum_argumentVarIn ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalArgumentPassingModeAST GGS_formalArgumentPassingModeAST::class_func_argumentOut (UNUSED_LOCATION_ARGS) {
  GGS_formalArgumentPassingModeAST result ;
  result.mEnum = Enumeration::enum_argumentOut ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalArgumentPassingModeAST GGS_formalArgumentPassingModeAST::class_func_argumentInOut (UNUSED_LOCATION_ARGS) {
  GGS_formalArgumentPassingModeAST result ;
  result.mEnum = Enumeration::enum_argumentInOut ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalArgumentPassingModeAST GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (UNUSED_LOCATION_ARGS) {
  GGS_formalArgumentPassingModeAST result ;
  result.mEnum = Enumeration::enum_argumentConstantIn ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_formalArgumentPassingModeAST [5] = {
  "(not built)",
  "argumentVarIn",
  "argumentOut",
  "argumentInOut",
  "argumentConstantIn"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_formalArgumentPassingModeAST::getter_isArgumentVarIn (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_argumentVarIn == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_formalArgumentPassingModeAST::getter_isArgumentOut (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_argumentOut == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_formalArgumentPassingModeAST::getter_isArgumentInOut (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_argumentInOut == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_formalArgumentPassingModeAST::getter_isArgumentConstantIn (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_argumentConstantIn == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalArgumentPassingModeAST::description (String & ioString,
                                                    const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @formalArgumentPassingModeAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_formalArgumentPassingModeAST [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_formalArgumentPassingModeAST::objectCompare (const GGS_formalArgumentPassingModeAST & inOperand) const {
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
//     @formalArgumentPassingModeAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalArgumentPassingModeAST ("formalArgumentPassingModeAST",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_formalArgumentPassingModeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalArgumentPassingModeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_formalArgumentPassingModeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_formalArgumentPassingModeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalArgumentPassingModeAST GGS_formalArgumentPassingModeAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_formalArgumentPassingModeAST result ;
  const GGS_formalArgumentPassingModeAST * p = (const GGS_formalArgumentPassingModeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_formalArgumentPassingModeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalArgumentPassingModeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@formalArgumentPassingModeAST string'
//
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_string (const GGS_formalArgumentPassingModeAST & inObject,
                                   Compiler *
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_formalArgumentPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    {
      result_result = GGS_string ("\?let") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
    {
      result_result = GGS_string ("\?") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
    {
      result_result = GGS_string ("!") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
    {
      result_result = GGS_string ("\?!") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@formalArgumentPassingModeAST formalArgumentMessage'
//
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_formalArgumentMessage (const GGS_formalArgumentPassingModeAST & inObject,
                                                  Compiler *
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_formalArgumentPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    {
      result_result = GGS_string ("a constant input (\?let) formal argument") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
    {
      result_result = GGS_string ("an input (\?) formal argument") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
    {
      result_result = GGS_string ("an output (!) formal argument") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
    {
      result_result = GGS_string ("an input/output (\?!) formal argument") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@formalParameterListAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_keyRepresentation (const GGS_formalParameterListAST & inObject,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("(") ;
  const GGS_formalParameterListAST temp_0 = inObject ;
  cEnumerator_formalParameterListAST enumerator_4866 (temp_0, EnumerationOrder::up) ;
  while (enumerator_4866.hasCurrentObject ()) {
    switch (enumerator_4866.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        result_result.plusAssign_operation(GGS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 126)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        result_result.plusAssign_operation(GGS_string ("\?!"), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 128)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        result_result.plusAssign_operation(GGS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 130)) ;
      }
      break ;
    }
    result_result.plusAssign_operation(enumerator_4866.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 132)) ;
    if (enumerator_4866.hasNextObject ()) {
      result_result.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 134)) ;
    }
    enumerator_4866.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 136)) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@formalInputParameterListAST initializerSignature'
//
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_initializerSignature (const GGS_formalInputParameterListAST & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("init") ;
  const GGS_formalInputParameterListAST temp_0 = inObject ;
  cEnumerator_formalInputParameterListAST enumerator_5780 (temp_0, EnumerationOrder::up) ;
  while (enumerator_5780.hasCurrentObject ()) {
    result_result.plusAssign_operation(GGS_string ("!").add_operation (enumerator_5780.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 157)) ;
    enumerator_5780.gotoNextObject () ;
  }
//---
  return result_result ;
}




