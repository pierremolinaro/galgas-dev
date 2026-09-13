#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//--------------------------------------------------------------------------------------------------
//Class for element of '@lexicalInstructionListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_lexicalInstructionListAST : public CollectionElementPtr {
  public: GGS_lexicalInstructionListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_lexicalInstructionListAST (const GGS_lexicalInstructionAST & in_mInstruction
                                                          COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_lexicalInstructionListAST (const GGS_lexicalInstructionListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_lexicalInstructionListAST::CollectionElementPtr_lexicalInstructionListAST (const GGS_lexicalInstructionAST & in_mInstruction
                                                                                                COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_lexicalInstructionListAST::CollectionElementPtr_lexicalInstructionListAST (const GGS_lexicalInstructionListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_lexicalInstructionListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_lexicalInstructionListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_lexicalInstructionListAST (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @lexicalInstructionListAST
//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST::GGS_lexicalInstructionListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST::GGS_lexicalInstructionListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_lexicalInstructionListAST * p = (CollectionElementPtr_lexicalInstructionListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_lexicalInstructionListAST) ;
    const GGS_lexicalInstructionListAST_2E_element element (p->mObject.mProperty_mInstruction) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                               const GGS_lexicalInstructionAST & in_mInstruction
                                                               COMMA_LOCATION_ARGS) {
  CollectionElementPtr_lexicalInstructionListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_lexicalInstructionListAST (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalInstructionListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_lexicalInstructionListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInstruction:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstruction.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST GGS_lexicalInstructionListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalInstructionListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST::plusPlusAssignOperation (const GGS_lexicalInstructionListAST_2E_element & inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST GGS_lexicalInstructionListAST::class_func_listWithValue (const GGS_lexicalInstructionAST & inOperand0
                                                                                       COMMA_LOCATION_ARGS) {
  const GGS_lexicalInstructionListAST_2E_element element (inOperand0) ;
  GGS_lexicalInstructionListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST::addAssignOperation (const GGS_lexicalInstructionAST & inOperand0
                                                        COMMA_LOCATION_ARGS) {
  const GGS_lexicalInstructionListAST_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST::setter_append (const GGS_lexicalInstructionAST inOperand0,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  const GGS_lexicalInstructionListAST_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST::setter_insertAtIndex (const GGS_lexicalInstructionAST inOperand0,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  const GGS_lexicalInstructionListAST_2E_element newElement (inOperand0) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST::setter_removeAtIndex (GGS_lexicalInstructionAST & outOperand0,
                                                          const GGS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mInstruction ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST::setter_popFirst (GGS_lexicalInstructionAST & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstruction ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST::setter_popLast (GGS_lexicalInstructionAST & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstruction ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST::method_first (GGS_lexicalInstructionAST & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstruction ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST::method_last (GGS_lexicalInstructionAST & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstruction ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST GGS_lexicalInstructionListAST::add_operation (const GGS_lexicalInstructionListAST & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalInstructionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST GGS_lexicalInstructionListAST::subList (const int32_t inStart,
                                                                      const int32_t inLength,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lexicalInstructionListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST GGS_lexicalInstructionListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lexicalInstructionListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST GGS_lexicalInstructionListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lexicalInstructionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST GGS_lexicalInstructionListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lexicalInstructionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST::plusAssignOperation (const GGS_lexicalInstructionListAST inList,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST::setter_setMInstructionAtIndex (GGS_lexicalInstructionAST inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstruction = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lexicalInstructionAST GGS_lexicalInstructionListAST::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_lexicalInstructionAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstruction ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @lexicalInstructionListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalInstructionListAST::DownEnumerator_lexicalInstructionListAST (const GGS_lexicalInstructionListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST_2E_element DownEnumerator_lexicalInstructionListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionAST DownEnumerator_lexicalInstructionListAST::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @lexicalInstructionListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalInstructionListAST::UpEnumerator_lexicalInstructionListAST (const GGS_lexicalInstructionListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST_2E_element UpEnumerator_lexicalInstructionListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionAST UpEnumerator_lexicalInstructionListAST::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//     @lexicalInstructionListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalInstructionListAST ("lexicalInstructionListAST",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalInstructionListAST::staticTypeDescriptor (void) const {
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

ComparisonResult GGS_lexicalSelectInstructionAST_2E_weak::objectCompare (const GGS_lexicalSelectInstructionAST_2E_weak & inOperand) const {
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

GGS_lexicalSelectInstructionAST_2E_weak::GGS_lexicalSelectInstructionAST_2E_weak (void) :
GGS_lexicalInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectInstructionAST_2E_weak & GGS_lexicalSelectInstructionAST_2E_weak::operator = (const GGS_lexicalSelectInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectInstructionAST_2E_weak::GGS_lexicalSelectInstructionAST_2E_weak (const GGS_lexicalSelectInstructionAST & inSource) :
GGS_lexicalInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectInstructionAST_2E_weak GGS_lexicalSelectInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalSelectInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectInstructionAST GGS_lexicalSelectInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalSelectInstructionAST result ;
  if (isValid ()) {
    const cPtr_lexicalSelectInstructionAST * p = (cPtr_lexicalSelectInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalSelectInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectInstructionAST GGS_lexicalSelectInstructionAST_2E_weak::bang_lexicalSelectInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalSelectInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalSelectInstructionAST) ;
      result = GGS_lexicalSelectInstructionAST ((cPtr_lexicalSelectInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalSelectInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSelectInstructionAST_2E_weak ("lexicalSelectInstructionAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalSelectInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalSelectInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalSelectInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectInstructionAST_2E_weak GGS_lexicalSelectInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalSelectInstructionAST_2E_weak result ;
  const GGS_lexicalSelectInstructionAST_2E_weak * p = (const GGS_lexicalSelectInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalSelectInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSelectInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalSimpleSendInstructionAST_2E_weak::objectCompare (const GGS_lexicalSimpleSendInstructionAST_2E_weak & inOperand) const {
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

GGS_lexicalSimpleSendInstructionAST_2E_weak::GGS_lexicalSimpleSendInstructionAST_2E_weak (void) :
GGS_lexicalInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSimpleSendInstructionAST_2E_weak & GGS_lexicalSimpleSendInstructionAST_2E_weak::operator = (const GGS_lexicalSimpleSendInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSimpleSendInstructionAST_2E_weak::GGS_lexicalSimpleSendInstructionAST_2E_weak (const GGS_lexicalSimpleSendInstructionAST & inSource) :
GGS_lexicalInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalSimpleSendInstructionAST_2E_weak GGS_lexicalSimpleSendInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalSimpleSendInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSimpleSendInstructionAST GGS_lexicalSimpleSendInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalSimpleSendInstructionAST result ;
  if (isValid ()) {
    const cPtr_lexicalSimpleSendInstructionAST * p = (cPtr_lexicalSimpleSendInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalSimpleSendInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSimpleSendInstructionAST GGS_lexicalSimpleSendInstructionAST_2E_weak::bang_lexicalSimpleSendInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalSimpleSendInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalSimpleSendInstructionAST) ;
      result = GGS_lexicalSimpleSendInstructionAST ((cPtr_lexicalSimpleSendInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalSimpleSendInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST_2E_weak ("lexicalSimpleSendInstructionAST.weak",
                                                                                            & kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalSimpleSendInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalSimpleSendInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalSimpleSendInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSimpleSendInstructionAST_2E_weak GGS_lexicalSimpleSendInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_lexicalSimpleSendInstructionAST_2E_weak result ;
  const GGS_lexicalSimpleSendInstructionAST_2E_weak * p = (const GGS_lexicalSimpleSendInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalSimpleSendInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSimpleSendInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalLogInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalLogInstructionAST::objectCompare (const GGS_lexicalLogInstructionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalLogInstructionAST::GGS_lexicalLogInstructionAST (void) :
GGS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalLogInstructionAST GGS_lexicalLogInstructionAST::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalLogInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalLogInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalLogInstructionAST_init (inCompiler) ;
  const GGS_lexicalLogInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalLogInstructionAST::
lexicalLogInstructionAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalLogInstructionAST::GGS_lexicalLogInstructionAST (const cPtr_lexicalLogInstructionAST * inSourcePtr) :
GGS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalLogInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalLogInstructionAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_lexicalLogInstructionAST::cPtr_lexicalLogInstructionAST (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalLogInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalLogInstructionAST ;
}

void cPtr_lexicalLogInstructionAST::description (String & ioString,
                                                 const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@lexicalLogInstructionAST]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalLogInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalLogInstructionAST (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalLogInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalLogInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalLogInstructionAST ("lexicalLogInstructionAST",
                                                                             & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalLogInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalLogInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalLogInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalLogInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalLogInstructionAST GGS_lexicalLogInstructionAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalLogInstructionAST result ;
  const GGS_lexicalLogInstructionAST * p = (const GGS_lexicalLogInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalLogInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalLogInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalLogInstructionAST_2E_weak::objectCompare (const GGS_lexicalLogInstructionAST_2E_weak & inOperand) const {
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

GGS_lexicalLogInstructionAST_2E_weak::GGS_lexicalLogInstructionAST_2E_weak (void) :
GGS_lexicalInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalLogInstructionAST_2E_weak & GGS_lexicalLogInstructionAST_2E_weak::operator = (const GGS_lexicalLogInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalLogInstructionAST_2E_weak::GGS_lexicalLogInstructionAST_2E_weak (const GGS_lexicalLogInstructionAST & inSource) :
GGS_lexicalInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalLogInstructionAST_2E_weak GGS_lexicalLogInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalLogInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalLogInstructionAST GGS_lexicalLogInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalLogInstructionAST result ;
  if (isValid ()) {
    const cPtr_lexicalLogInstructionAST * p = (cPtr_lexicalLogInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalLogInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalLogInstructionAST GGS_lexicalLogInstructionAST_2E_weak::bang_lexicalLogInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalLogInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalLogInstructionAST) ;
      result = GGS_lexicalLogInstructionAST ((cPtr_lexicalLogInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalLogInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalLogInstructionAST_2E_weak ("lexicalLogInstructionAST.weak",
                                                                                     & kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalLogInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalLogInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalLogInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalLogInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalLogInstructionAST_2E_weak GGS_lexicalLogInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalLogInstructionAST_2E_weak result ;
  const GGS_lexicalLogInstructionAST_2E_weak * p = (const GGS_lexicalLogInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalLogInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalLogInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalRewindInstructionAST_2E_weak::objectCompare (const GGS_lexicalRewindInstructionAST_2E_weak & inOperand) const {
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

GGS_lexicalRewindInstructionAST_2E_weak::GGS_lexicalRewindInstructionAST_2E_weak (void) :
GGS_lexicalInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRewindInstructionAST_2E_weak & GGS_lexicalRewindInstructionAST_2E_weak::operator = (const GGS_lexicalRewindInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRewindInstructionAST_2E_weak::GGS_lexicalRewindInstructionAST_2E_weak (const GGS_lexicalRewindInstructionAST & inSource) :
GGS_lexicalInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalRewindInstructionAST_2E_weak GGS_lexicalRewindInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalRewindInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRewindInstructionAST GGS_lexicalRewindInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalRewindInstructionAST result ;
  if (isValid ()) {
    const cPtr_lexicalRewindInstructionAST * p = (cPtr_lexicalRewindInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalRewindInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRewindInstructionAST GGS_lexicalRewindInstructionAST_2E_weak::bang_lexicalRewindInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalRewindInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalRewindInstructionAST) ;
      result = GGS_lexicalRewindInstructionAST ((cPtr_lexicalRewindInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalRewindInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRewindInstructionAST_2E_weak ("lexicalRewindInstructionAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalRewindInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRewindInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRewindInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRewindInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRewindInstructionAST_2E_weak GGS_lexicalRewindInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalRewindInstructionAST_2E_weak result ;
  const GGS_lexicalRewindInstructionAST_2E_weak * p = (const GGS_lexicalRewindInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRewindInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRewindInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@lexicalWhileBranchListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_lexicalWhileBranchListAST : public CollectionElementPtr {
  public: GGS_lexicalWhileBranchListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_lexicalWhileBranchListAST (const GGS_lexicalExpressionAST & in_mWhileExpression,
                                                          const GGS_lexicalInstructionListAST & in_mWhileInstructionList
                                                          COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_lexicalWhileBranchListAST (const GGS_lexicalWhileBranchListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_lexicalWhileBranchListAST::CollectionElementPtr_lexicalWhileBranchListAST (const GGS_lexicalExpressionAST & in_mWhileExpression,
                                                                                                const GGS_lexicalInstructionListAST & in_mWhileInstructionList
                                                                                                COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mWhileExpression, in_mWhileInstructionList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_lexicalWhileBranchListAST::CollectionElementPtr_lexicalWhileBranchListAST (const GGS_lexicalWhileBranchListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mWhileExpression, inElement.mProperty_mWhileInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_lexicalWhileBranchListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_lexicalWhileBranchListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_lexicalWhileBranchListAST (mObject.mProperty_mWhileExpression, mObject.mProperty_mWhileInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @lexicalWhileBranchListAST
//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST::GGS_lexicalWhileBranchListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST::GGS_lexicalWhileBranchListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_lexicalWhileBranchListAST * p = (CollectionElementPtr_lexicalWhileBranchListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_lexicalWhileBranchListAST) ;
    const GGS_lexicalWhileBranchListAST_2E_element element (p->mObject.mProperty_mWhileExpression, p->mObject.mProperty_mWhileInstructionList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                               const GGS_lexicalExpressionAST & in_mWhileExpression,
                                                               const GGS_lexicalInstructionListAST & in_mWhileInstructionList
                                                               COMMA_LOCATION_ARGS) {
  CollectionElementPtr_lexicalWhileBranchListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_lexicalWhileBranchListAST (in_mWhileExpression, in_mWhileInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalWhileBranchListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_lexicalWhileBranchListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchListAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mWhileExpression:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mWhileExpression.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mWhileInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mWhileInstructionList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST GGS_lexicalWhileBranchListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalWhileBranchListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchListAST::plusPlusAssignOperation (const GGS_lexicalWhileBranchListAST_2E_element & inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST GGS_lexicalWhileBranchListAST::class_func_listWithValue (const GGS_lexicalExpressionAST & inOperand0,
                                                                                       const GGS_lexicalInstructionListAST & inOperand1
                                                                                       COMMA_LOCATION_ARGS) {
  const GGS_lexicalWhileBranchListAST_2E_element element (inOperand0, inOperand1) ;
  GGS_lexicalWhileBranchListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchListAST::addAssignOperation (const GGS_lexicalExpressionAST & inOperand0,
                                                        const GGS_lexicalInstructionListAST & inOperand1
                                                        COMMA_LOCATION_ARGS) {
  const GGS_lexicalWhileBranchListAST_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchListAST::setter_append (const GGS_lexicalExpressionAST inOperand0,
                                                   const GGS_lexicalInstructionListAST inOperand1,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  const GGS_lexicalWhileBranchListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchListAST::setter_insertAtIndex (const GGS_lexicalExpressionAST inOperand0,
                                                          const GGS_lexicalInstructionListAST inOperand1,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  const GGS_lexicalWhileBranchListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchListAST::setter_removeAtIndex (GGS_lexicalExpressionAST & outOperand0,
                                                          GGS_lexicalInstructionListAST & outOperand1,
                                                          const GGS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mWhileExpression ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mWhileInstructionList ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchListAST::setter_popFirst (GGS_lexicalExpressionAST & outOperand0,
                                                     GGS_lexicalInstructionListAST & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mWhileExpression ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mWhileInstructionList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchListAST::setter_popLast (GGS_lexicalExpressionAST & outOperand0,
                                                    GGS_lexicalInstructionListAST & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mWhileExpression ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mWhileInstructionList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchListAST::method_first (GGS_lexicalExpressionAST & outOperand0,
                                                  GGS_lexicalInstructionListAST & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mWhileExpression ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mWhileInstructionList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchListAST::method_last (GGS_lexicalExpressionAST & outOperand0,
                                                 GGS_lexicalInstructionListAST & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mWhileExpression ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mWhileInstructionList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST GGS_lexicalWhileBranchListAST::add_operation (const GGS_lexicalWhileBranchListAST & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalWhileBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST GGS_lexicalWhileBranchListAST::subList (const int32_t inStart,
                                                                      const int32_t inLength,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lexicalWhileBranchListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST GGS_lexicalWhileBranchListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lexicalWhileBranchListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST GGS_lexicalWhileBranchListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lexicalWhileBranchListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST GGS_lexicalWhileBranchListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lexicalWhileBranchListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchListAST::plusAssignOperation (const GGS_lexicalWhileBranchListAST inList,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchListAST::setter_setMWhileExpressionAtIndex (GGS_lexicalExpressionAST inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mWhileExpression = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lexicalExpressionAST GGS_lexicalWhileBranchListAST::getter_mWhileExpressionAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_lexicalExpressionAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mWhileExpression ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchListAST::setter_setMWhileInstructionListAtIndex (GGS_lexicalInstructionListAST inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mWhileInstructionList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lexicalInstructionListAST GGS_lexicalWhileBranchListAST::getter_mWhileInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lexicalInstructionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mWhileInstructionList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @lexicalWhileBranchListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalWhileBranchListAST::DownEnumerator_lexicalWhileBranchListAST (const GGS_lexicalWhileBranchListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST_2E_element DownEnumerator_lexicalWhileBranchListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExpressionAST DownEnumerator_lexicalWhileBranchListAST::current_mWhileExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mWhileExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST DownEnumerator_lexicalWhileBranchListAST::current_mWhileInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mWhileInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @lexicalWhileBranchListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalWhileBranchListAST::UpEnumerator_lexicalWhileBranchListAST (const GGS_lexicalWhileBranchListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST_2E_element UpEnumerator_lexicalWhileBranchListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExpressionAST UpEnumerator_lexicalWhileBranchListAST::current_mWhileExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mWhileExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST UpEnumerator_lexicalWhileBranchListAST::current_mWhileInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mWhileInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//     @lexicalWhileBranchListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalWhileBranchListAST ("lexicalWhileBranchListAST",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalWhileBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalWhileBranchListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalWhileBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalWhileBranchListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST GGS_lexicalWhileBranchListAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_lexicalWhileBranchListAST result ;
  const GGS_lexicalWhileBranchListAST * p = (const GGS_lexicalWhileBranchListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalWhileBranchListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalWhileBranchListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalRepeatInstructionAST_2E_weak::objectCompare (const GGS_lexicalRepeatInstructionAST_2E_weak & inOperand) const {
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

GGS_lexicalRepeatInstructionAST_2E_weak::GGS_lexicalRepeatInstructionAST_2E_weak (void) :
GGS_lexicalInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRepeatInstructionAST_2E_weak & GGS_lexicalRepeatInstructionAST_2E_weak::operator = (const GGS_lexicalRepeatInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRepeatInstructionAST_2E_weak::GGS_lexicalRepeatInstructionAST_2E_weak (const GGS_lexicalRepeatInstructionAST & inSource) :
GGS_lexicalInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalRepeatInstructionAST_2E_weak GGS_lexicalRepeatInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalRepeatInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRepeatInstructionAST GGS_lexicalRepeatInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalRepeatInstructionAST result ;
  if (isValid ()) {
    const cPtr_lexicalRepeatInstructionAST * p = (cPtr_lexicalRepeatInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalRepeatInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRepeatInstructionAST GGS_lexicalRepeatInstructionAST_2E_weak::bang_lexicalRepeatInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalRepeatInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalRepeatInstructionAST) ;
      result = GGS_lexicalRepeatInstructionAST ((cPtr_lexicalRepeatInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalRepeatInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST_2E_weak ("lexicalRepeatInstructionAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalRepeatInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRepeatInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRepeatInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRepeatInstructionAST_2E_weak GGS_lexicalRepeatInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalRepeatInstructionAST_2E_weak result ;
  const GGS_lexicalRepeatInstructionAST_2E_weak * p = (const GGS_lexicalRepeatInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRepeatInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRepeatInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalDropInstructionAST_2E_weak::objectCompare (const GGS_lexicalDropInstructionAST_2E_weak & inOperand) const {
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

GGS_lexicalDropInstructionAST_2E_weak::GGS_lexicalDropInstructionAST_2E_weak (void) :
GGS_lexicalInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalDropInstructionAST_2E_weak & GGS_lexicalDropInstructionAST_2E_weak::operator = (const GGS_lexicalDropInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalDropInstructionAST_2E_weak::GGS_lexicalDropInstructionAST_2E_weak (const GGS_lexicalDropInstructionAST & inSource) :
GGS_lexicalInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalDropInstructionAST_2E_weak GGS_lexicalDropInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalDropInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalDropInstructionAST GGS_lexicalDropInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalDropInstructionAST result ;
  if (isValid ()) {
    const cPtr_lexicalDropInstructionAST * p = (cPtr_lexicalDropInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalDropInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalDropInstructionAST GGS_lexicalDropInstructionAST_2E_weak::bang_lexicalDropInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalDropInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalDropInstructionAST) ;
      result = GGS_lexicalDropInstructionAST ((cPtr_lexicalDropInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalDropInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalDropInstructionAST_2E_weak ("lexicalDropInstructionAST.weak",
                                                                                      & kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalDropInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalDropInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalDropInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalDropInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalDropInstructionAST_2E_weak GGS_lexicalDropInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_lexicalDropInstructionAST_2E_weak result ;
  const GGS_lexicalDropInstructionAST_2E_weak * p = (const GGS_lexicalDropInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalDropInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalDropInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalWarningInstructionAST_2E_weak::objectCompare (const GGS_lexicalWarningInstructionAST_2E_weak & inOperand) const {
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

GGS_lexicalWarningInstructionAST_2E_weak::GGS_lexicalWarningInstructionAST_2E_weak (void) :
GGS_lexicalInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWarningInstructionAST_2E_weak & GGS_lexicalWarningInstructionAST_2E_weak::operator = (const GGS_lexicalWarningInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWarningInstructionAST_2E_weak::GGS_lexicalWarningInstructionAST_2E_weak (const GGS_lexicalWarningInstructionAST & inSource) :
GGS_lexicalInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalWarningInstructionAST_2E_weak GGS_lexicalWarningInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalWarningInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWarningInstructionAST GGS_lexicalWarningInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalWarningInstructionAST result ;
  if (isValid ()) {
    const cPtr_lexicalWarningInstructionAST * p = (cPtr_lexicalWarningInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalWarningInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWarningInstructionAST GGS_lexicalWarningInstructionAST_2E_weak::bang_lexicalWarningInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalWarningInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalWarningInstructionAST) ;
      result = GGS_lexicalWarningInstructionAST ((cPtr_lexicalWarningInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalWarningInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalWarningInstructionAST_2E_weak ("lexicalWarningInstructionAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalWarningInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalWarningInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalWarningInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalWarningInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWarningInstructionAST_2E_weak GGS_lexicalWarningInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_lexicalWarningInstructionAST_2E_weak result ;
  const GGS_lexicalWarningInstructionAST_2E_weak * p = (const GGS_lexicalWarningInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalWarningInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalWarningInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalErrorInstructionAST_2E_weak::objectCompare (const GGS_lexicalErrorInstructionAST_2E_weak & inOperand) const {
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

GGS_lexicalErrorInstructionAST_2E_weak::GGS_lexicalErrorInstructionAST_2E_weak (void) :
GGS_lexicalInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorInstructionAST_2E_weak & GGS_lexicalErrorInstructionAST_2E_weak::operator = (const GGS_lexicalErrorInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorInstructionAST_2E_weak::GGS_lexicalErrorInstructionAST_2E_weak (const GGS_lexicalErrorInstructionAST & inSource) :
GGS_lexicalInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorInstructionAST_2E_weak GGS_lexicalErrorInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalErrorInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorInstructionAST GGS_lexicalErrorInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalErrorInstructionAST result ;
  if (isValid ()) {
    const cPtr_lexicalErrorInstructionAST * p = (cPtr_lexicalErrorInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalErrorInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorInstructionAST GGS_lexicalErrorInstructionAST_2E_weak::bang_lexicalErrorInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalErrorInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalErrorInstructionAST) ;
      result = GGS_lexicalErrorInstructionAST ((cPtr_lexicalErrorInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalErrorInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalErrorInstructionAST_2E_weak ("lexicalErrorInstructionAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalErrorInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalErrorInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalErrorInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorInstructionAST_2E_weak GGS_lexicalErrorInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_lexicalErrorInstructionAST_2E_weak result ;
  const GGS_lexicalErrorInstructionAST_2E_weak * p = (const GGS_lexicalErrorInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalErrorInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalErrorInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @headerCompositionMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap::GGS_headerCompositionMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap::~ GGS_headerCompositionMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap::GGS_headerCompositionMap (const GGS_headerCompositionMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap & GGS_headerCompositionMap::operator = (const GGS_headerCompositionMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap GGS_headerCompositionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_headerCompositionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_headerCompositionMap::getter_hasKey (const GGS_string & inKey
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_headerCompositionMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                         const GGS_uint & inLevel
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_headerCompositionMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_headerCompositionMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_headerCompositionMap::getter_locationForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_headerCompositionMap::getter_keyList (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_headerCompositionMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerCompositionMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerCompositionMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_headerCompositionMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerCompositionMap::performInsert (const GGS_headerCompositionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_headerCompositionMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
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
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element>
GGS_headerCompositionMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_headerCompositionMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element>>
GGS_headerCompositionMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_headerCompositionMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerCompositionMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap_2E_element_3F_ GGS_headerCompositionMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerCompositionMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_headerCompositionMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_headerCompositionMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mInclusion = info->mProperty_mInclusion ;
      element.mProperty_mHeaderString = info->mProperty_mHeaderString ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap GGS_headerCompositionMap::class_func_mapWithMapToOverride (const GGS_headerCompositionMap & inMapToOverride
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_headerCompositionMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_headerCompositionMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap GGS_headerCompositionMap::getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_headerCompositionMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerCompositionMap::setter_insertKey (GGS_lstring inLKey,
                                                 GGS_stringset inArgument0,
                                                 GGS_string inArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  const GGS_headerCompositionMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' key is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerCompositionMap::method_searchKey (GGS_lstring inLKey,
                                                 GGS_stringset & outArgument0,
                                                 GGS_string & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' key" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mInclusion ;
    outArgument1 = info->mProperty_mHeaderString ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_headerCompositionMap::getter_mInclusionForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mInclusion ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_headerCompositionMap::getter_mHeaderStringForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mHeaderString ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_headerCompositionMap::setter_setMInclusionForKey (GGS_stringset inValue,
                                                           GGS_string inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_headerCompositionMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mInclusion = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_headerCompositionMap::setter_setMHeaderStringForKey (GGS_string inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_headerCompositionMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mHeaderString = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_headerCompositionMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element>> & inArray,
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
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mInclusion:") ;
    inArray (i COMMA_HERE)->mProperty_mInclusion.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mHeaderString:") ;
    inArray (i COMMA_HERE)->mProperty_mHeaderString.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_headerCompositionMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element>> array = sortedInfoArray () ;
    GGS_headerCompositionMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_headerCompositionMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_headerCompositionMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @headerCompositionMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_headerCompositionMap::DownEnumerator_headerCompositionMap (const GGS_headerCompositionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap_2E_element DownEnumerator_headerCompositionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_headerCompositionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset DownEnumerator_headerCompositionMap::current_mInclusion (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInclusion ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_headerCompositionMap::current_mHeaderString (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHeaderString ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @headerCompositionMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_headerCompositionMap::UpEnumerator_headerCompositionMap (const GGS_headerCompositionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap_2E_element UpEnumerator_headerCompositionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_headerCompositionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset UpEnumerator_headerCompositionMap::current_mInclusion (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInclusion ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_headerCompositionMap::current_mHeaderString (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHeaderString ;
}


//--------------------------------------------------------------------------------------------------
//     @headerCompositionMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_headerCompositionMap ("headerCompositionMap",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_headerCompositionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_headerCompositionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_headerCompositionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_headerCompositionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap GGS_headerCompositionMap::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_headerCompositionMap result ;
  const GGS_headerCompositionMap * p = (const GGS_headerCompositionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_headerCompositionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("headerCompositionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @headerRepartitionMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap::GGS_headerRepartitionMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap::~ GGS_headerRepartitionMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap::GGS_headerRepartitionMap (const GGS_headerRepartitionMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap & GGS_headerRepartitionMap::operator = (const GGS_headerRepartitionMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap GGS_headerRepartitionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_headerRepartitionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_headerRepartitionMap::getter_hasKey (const GGS_string & inKey
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_headerRepartitionMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                         const GGS_uint & inLevel
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_headerRepartitionMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_headerRepartitionMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_headerRepartitionMap::getter_locationForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_headerRepartitionMap::getter_keyList (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_headerRepartitionMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerRepartitionMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerRepartitionMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_headerRepartitionMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerRepartitionMap::performInsert (const GGS_headerRepartitionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_headerRepartitionMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
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
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element>
GGS_headerRepartitionMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_headerRepartitionMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element>>
GGS_headerRepartitionMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_headerRepartitionMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerRepartitionMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap_2E_element_3F_ GGS_headerRepartitionMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerRepartitionMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_headerRepartitionMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_headerRepartitionMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mHeaderFileName = info->mProperty_mHeaderFileName ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap GGS_headerRepartitionMap::class_func_mapWithMapToOverride (const GGS_headerRepartitionMap & inMapToOverride
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_headerRepartitionMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_headerRepartitionMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap GGS_headerRepartitionMap::getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_headerRepartitionMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerRepartitionMap::setter_insertKey (GGS_lstring inLKey,
                                                 GGS_string inArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  const GGS_headerRepartitionMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' key is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerRepartitionMap::method_searchKey (GGS_lstring inLKey,
                                                 GGS_string & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' key" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mHeaderFileName ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_headerRepartitionMap::getter_mHeaderFileNameForKey (const GGS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mHeaderFileName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_headerRepartitionMap::setter_setMHeaderFileNameForKey (GGS_string inValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_headerRepartitionMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mHeaderFileName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_headerRepartitionMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element>> & inArray,
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
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mHeaderFileName:") ;
    inArray (i COMMA_HERE)->mProperty_mHeaderFileName.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_headerRepartitionMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element>> array = sortedInfoArray () ;
    GGS_headerRepartitionMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_headerRepartitionMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_headerRepartitionMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @headerRepartitionMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_headerRepartitionMap::DownEnumerator_headerRepartitionMap (const GGS_headerRepartitionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap_2E_element DownEnumerator_headerRepartitionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_headerRepartitionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_headerRepartitionMap::current_mHeaderFileName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHeaderFileName ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @headerRepartitionMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_headerRepartitionMap::UpEnumerator_headerRepartitionMap (const GGS_headerRepartitionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap_2E_element UpEnumerator_headerRepartitionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_headerRepartitionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_headerRepartitionMap::current_mHeaderFileName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHeaderFileName ;
}


//--------------------------------------------------------------------------------------------------
//     @headerRepartitionMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_headerRepartitionMap ("headerRepartitionMap",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_headerRepartitionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_headerRepartitionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_headerRepartitionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_headerRepartitionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap GGS_headerRepartitionMap::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_headerRepartitionMap result ;
  const GGS_headerRepartitionMap * p = (const GGS_headerRepartitionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_headerRepartitionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("headerRepartitionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//'@usefulEntitiesGraph' graph
//--------------------------------------------------------------------------------------------------

GGS_usefulEntitiesGraph::GGS_usefulEntitiesGraph (void) :
AC_GALGAS_graph () {
}

//--------------------------------------------------------------------------------------------------

GGS_usefulEntitiesGraph GGS_usefulEntitiesGraph::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_usefulEntitiesGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::setter_addNode (GGS_lstring inKey,
                                              GGS_lstring inArgument_0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  CollectionElement attributes ;
  GGS_lstringlist::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' entity is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::method_topologicalSort (GGS_lstringlist & outSortedList,
                                                      GGS_lstringlist & outSortedKeyList,
                                                      GGS_lstringlist & outUnsortedList,
                                                      GGS_lstringlist & outUnsortedKeyList,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  CollectionElementArray sortedList ;
  CollectionElementArray unsortedList ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_lstringlist (sortedList) ;
  outUnsortedList = GGS_lstringlist (unsortedList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::method_depthFirstTopologicalSort (GGS_lstringlist & outSortedList,
                                                                GGS_lstringlist & outSortedKeyList,
                                                                GGS_lstringlist & outUnsortedList,
                                                                GGS_lstringlist & outUnsortedKeyList,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  CollectionElementArray sortedList ;
  CollectionElementArray unsortedList ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_lstringlist (sortedList) ;
  outUnsortedList = GGS_lstringlist (unsortedList) ;
}


//--------------------------------------------------------------------------------------------------

GGS_usefulEntitiesGraph GGS_usefulEntitiesGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GGS_usefulEntitiesGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::method_circularities (GGS_lstringlist & outInfoList,
                                                    GGS_lstringlist & outKeyList
                                                    COMMA_LOCATION_ARGS) const {
  CollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_lstringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::method_nodesWithNoSuccessor (GGS_lstringlist & outInfoList,
                                                           GGS_lstringlist & outKeyList
                                                           COMMA_LOCATION_ARGS) const {
  CollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_lstringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::method_nodesWithNoPredecessor (GGS_lstringlist & outInfoList,
                                                             GGS_lstringlist & outKeyList
                                                             COMMA_LOCATION_ARGS) const {
  CollectionElementArray infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_lstringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_usefulEntitiesGraph GGS_usefulEntitiesGraph::getter_subgraphFromNodes (const GGS_lstringlist & inStartKeyList,
                                                                           const GGS_stringset & inKeysToExclude,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_usefulEntitiesGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_usefulEntitiesGraph::getter_nodeList (UNUSED_LOCATION_ARGS) const {
  GGS_lstringlist resultingList ;
  if (isValid ()) {
    resultingList = graph () ;
  }
  return resultingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_usefulEntitiesGraph::getter_accessibleNodesFrom (const GGS_lstringlist & inStartKeyList,
                                                                     const GGS_stringset & inNodesToExclude,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  GGS_usefulEntitiesGraph resultingGraph ;
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
//     @usefulEntitiesGraph generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_usefulEntitiesGraph ("usefulEntitiesGraph",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_usefulEntitiesGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_usefulEntitiesGraph ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_usefulEntitiesGraph::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_usefulEntitiesGraph (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_usefulEntitiesGraph GGS_usefulEntitiesGraph::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_usefulEntitiesGraph result ;
  const GGS_usefulEntitiesGraph * p = (const GGS_usefulEntitiesGraph *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_usefulEntitiesGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("usefulEntitiesGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @uselessEntityLocationMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap::GGS_uselessEntityLocationMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap::~ GGS_uselessEntityLocationMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap::GGS_uselessEntityLocationMap (const GGS_uselessEntityLocationMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap & GGS_uselessEntityLocationMap::operator = (const GGS_uselessEntityLocationMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap GGS_uselessEntityLocationMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_uselessEntityLocationMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_uselessEntityLocationMap::getter_hasKey (const GGS_string & inKey
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_uselessEntityLocationMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                             const GGS_uint & inLevel
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_uselessEntityLocationMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_uselessEntityLocationMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_uselessEntityLocationMap::getter_locationForKey (const GGS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_uselessEntityLocationMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_uselessEntityLocationMap::getter_keyList (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_uselessEntityLocationMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_uselessEntityLocationMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap::performInsert (const GGS_uselessEntityLocationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_uselessEntityLocationMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
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
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_uselessEntityLocationMap_2E_element>
GGS_uselessEntityLocationMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_uselessEntityLocationMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_uselessEntityLocationMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_uselessEntityLocationMap_2E_element>>
GGS_uselessEntityLocationMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_uselessEntityLocationMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_uselessEntityLocationMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap_2E_element_3F_ GGS_uselessEntityLocationMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uselessEntityLocationMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_uselessEntityLocationMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_uselessEntityLocationMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_uselessEntityLocationMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mUnusedEntityName = info->mProperty_mUnusedEntityName ;
      element.mProperty_mLocation = info->mProperty_mLocation ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap GGS_uselessEntityLocationMap::class_func_mapWithMapToOverride (const GGS_uselessEntityLocationMap & inMapToOverride
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_uselessEntityLocationMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_uselessEntityLocationMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap GGS_uselessEntityLocationMap::getter_overriddenMap (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_uselessEntityLocationMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap::setter_insertKey (GGS_lstring inLKey,
                                                     GGS_string inArgument0,
                                                     GGS_location inArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const GGS_uselessEntityLocationMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "--- %K INTERNAL ERROR ---" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_uselessEntityLocationMap::getter_mUnusedEntityNameForKey (const GGS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_uselessEntityLocationMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mUnusedEntityName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_uselessEntityLocationMap::getter_mLocationForKey (const GGS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_uselessEntityLocationMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mLocation ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap::setter_setMUnusedEntityNameForKey (GGS_string inValue,
                                                                      GGS_string inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_uselessEntityLocationMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mUnusedEntityName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap::setter_setMLocationForKey (GGS_location inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_uselessEntityLocationMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mLocation = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_uselessEntityLocationMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_uselessEntityLocationMap_2E_element>> & inArray,
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
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mUnusedEntityName:") ;
    inArray (i COMMA_HERE)->mProperty_mUnusedEntityName.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mLocation:") ;
    inArray (i COMMA_HERE)->mProperty_mLocation.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_uselessEntityLocationMap_2E_element>> array = sortedInfoArray () ;
    GGS_uselessEntityLocationMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_uselessEntityLocationMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_uselessEntityLocationMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @uselessEntityLocationMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_uselessEntityLocationMap::DownEnumerator_uselessEntityLocationMap (const GGS_uselessEntityLocationMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap_2E_element DownEnumerator_uselessEntityLocationMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_uselessEntityLocationMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_uselessEntityLocationMap::current_mUnusedEntityName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mUnusedEntityName ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_uselessEntityLocationMap::current_mLocation (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLocation ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @uselessEntityLocationMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_uselessEntityLocationMap::UpEnumerator_uselessEntityLocationMap (const GGS_uselessEntityLocationMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap_2E_element UpEnumerator_uselessEntityLocationMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_uselessEntityLocationMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_uselessEntityLocationMap::current_mUnusedEntityName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mUnusedEntityName ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_uselessEntityLocationMap::current_mLocation (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLocation ;
}


//--------------------------------------------------------------------------------------------------
//     @uselessEntityLocationMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_uselessEntityLocationMap ("uselessEntityLocationMap",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_uselessEntityLocationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uselessEntityLocationMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_uselessEntityLocationMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_uselessEntityLocationMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap GGS_uselessEntityLocationMap::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_uselessEntityLocationMap result ;
  const GGS_uselessEntityLocationMap * p = (const GGS_uselessEntityLocationMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_uselessEntityLocationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uselessEntityLocationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_externProcedureDeclarationAST_2E_weak::objectCompare (const GGS_externProcedureDeclarationAST_2E_weak & inOperand) const {
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

GGS_externProcedureDeclarationAST_2E_weak::GGS_externProcedureDeclarationAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureDeclarationAST_2E_weak & GGS_externProcedureDeclarationAST_2E_weak::operator = (const GGS_externProcedureDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureDeclarationAST GGS_externProcedureDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_externProcedureDeclarationAST result ;
  if (isValid ()) {
    const cPtr_externProcedureDeclarationAST * p = (cPtr_externProcedureDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_externProcedureDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureDeclarationAST GGS_externProcedureDeclarationAST_2E_weak::bang_externProcedureDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_externProcedureDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//     @externProcedureDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externProcedureDeclarationAST_2E_weak ("externProcedureDeclarationAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externProcedureDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
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
//Class for element of '@terminalList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_terminalList : public CollectionElementPtr {
  public: GGS_terminalList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_terminalList (const GGS_lstring & in_mTerminalName,
                                             const GGS_lexicalSentValueList & in_mSentAttributeList,
                                             const GGS_string & in_mSyntaxErrorMessage,
                                             const GGS_bool & in_isEndOfTemplateMark,
                                             const GGS_bool & in_atomicSelection,
                                             const GGS_uint & in_mStyleIndex
                                             COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_terminalList (const GGS_terminalList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_terminalList::CollectionElementPtr_terminalList (const GGS_lstring & in_mTerminalName,
                                                                      const GGS_lexicalSentValueList & in_mSentAttributeList,
                                                                      const GGS_string & in_mSyntaxErrorMessage,
                                                                      const GGS_bool & in_isEndOfTemplateMark,
                                                                      const GGS_bool & in_atomicSelection,
                                                                      const GGS_uint & in_mStyleIndex
                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mTerminalName, in_mSentAttributeList, in_mSyntaxErrorMessage, in_isEndOfTemplateMark, in_atomicSelection, in_mStyleIndex) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_terminalList::CollectionElementPtr_terminalList (const GGS_terminalList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mTerminalName, inElement.mProperty_mSentAttributeList, inElement.mProperty_mSyntaxErrorMessage, inElement.mProperty_isEndOfTemplateMark, inElement.mProperty_atomicSelection, inElement.mProperty_mStyleIndex) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_terminalList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_terminalList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_terminalList (mObject.mProperty_mTerminalName, mObject.mProperty_mSentAttributeList, mObject.mProperty_mSyntaxErrorMessage, mObject.mProperty_isEndOfTemplateMark, mObject.mProperty_atomicSelection, mObject.mProperty_mStyleIndex COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @terminalList
//--------------------------------------------------------------------------------------------------

GGS_terminalList::GGS_terminalList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalList::GGS_terminalList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_terminalList * p = (CollectionElementPtr_terminalList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_terminalList) ;
    const GGS_terminalList_2E_element element (p->mObject.mProperty_mTerminalName, p->mObject.mProperty_mSentAttributeList, p->mObject.mProperty_mSyntaxErrorMessage, p->mObject.mProperty_isEndOfTemplateMark, p->mObject.mProperty_atomicSelection, p->mObject.mProperty_mStyleIndex) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                  const GGS_lstring & in_mTerminalName,
                                                  const GGS_lexicalSentValueList & in_mSentAttributeList,
                                                  const GGS_string & in_mSyntaxErrorMessage,
                                                  const GGS_bool & in_isEndOfTemplateMark,
                                                  const GGS_bool & in_atomicSelection,
                                                  const GGS_uint & in_mStyleIndex
                                                  COMMA_LOCATION_ARGS) {
  CollectionElementPtr_terminalList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_terminalList (in_mTerminalName, in_mSentAttributeList, in_mSyntaxErrorMessage, in_isEndOfTemplateMark, in_atomicSelection, in_mStyleIndex COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_terminalList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_terminalList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalList::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTerminalName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTerminalName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSentAttributeList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSentAttributeList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSyntaxErrorMessage:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSyntaxErrorMessage.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("isEndOfTemplateMark:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_isEndOfTemplateMark.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("atomicSelection:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_atomicSelection.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mStyleIndex:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mStyleIndex.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalList GGS_terminalList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_terminalList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalList::plusPlusAssignOperation (const GGS_terminalList_2E_element & inValue
                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_terminalList GGS_terminalList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                             const GGS_lexicalSentValueList & inOperand1,
                                                             const GGS_string & inOperand2,
                                                             const GGS_bool & inOperand3,
                                                             const GGS_bool & inOperand4,
                                                             const GGS_uint & inOperand5
                                                             COMMA_LOCATION_ARGS) {
  const GGS_terminalList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  GGS_terminalList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalList::addAssignOperation (const GGS_lstring & inOperand0,
                                           const GGS_lexicalSentValueList & inOperand1,
                                           const GGS_string & inOperand2,
                                           const GGS_bool & inOperand3,
                                           const GGS_bool & inOperand4,
                                           const GGS_uint & inOperand5
                                           COMMA_LOCATION_ARGS) {
  const GGS_terminalList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalList::setter_append (const GGS_lstring inOperand0,
                                      const GGS_lexicalSentValueList inOperand1,
                                      const GGS_string inOperand2,
                                      const GGS_bool inOperand3,
                                      const GGS_bool inOperand4,
                                      const GGS_uint inOperand5,
                                      Compiler * /* inCompiler */
                                      COMMA_LOCATION_ARGS) {
  const GGS_terminalList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                             const GGS_lexicalSentValueList inOperand1,
                                             const GGS_string inOperand2,
                                             const GGS_bool inOperand3,
                                             const GGS_bool inOperand4,
                                             const GGS_uint inOperand5,
                                             const GGS_uint inInsertionIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  const GGS_terminalList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                             GGS_lexicalSentValueList & outOperand1,
                                             GGS_string & outOperand2,
                                             GGS_bool & outOperand3,
                                             GGS_bool & outOperand4,
                                             GGS_uint & outOperand5,
                                             const GGS_uint inRemoveIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mTerminalName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mSentAttributeList ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mSyntaxErrorMessage ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_isEndOfTemplateMark ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_atomicSelection ;
      outOperand5 = mArray (idx COMMA_HERE).mProperty_mStyleIndex ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalList::setter_popFirst (GGS_lstring & outOperand0,
                                        GGS_lexicalSentValueList & outOperand1,
                                        GGS_string & outOperand2,
                                        GGS_bool & outOperand3,
                                        GGS_bool & outOperand4,
                                        GGS_uint & outOperand5,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTerminalName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSentAttributeList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mSyntaxErrorMessage ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_isEndOfTemplateMark ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_atomicSelection ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mStyleIndex ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalList::setter_popLast (GGS_lstring & outOperand0,
                                       GGS_lexicalSentValueList & outOperand1,
                                       GGS_string & outOperand2,
                                       GGS_bool & outOperand3,
                                       GGS_bool & outOperand4,
                                       GGS_uint & outOperand5,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTerminalName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSentAttributeList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mSyntaxErrorMessage ;
      outOperand3 = mArray.lastObject (HERE).mProperty_isEndOfTemplateMark ;
      outOperand4 = mArray.lastObject (HERE).mProperty_atomicSelection ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mStyleIndex ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalList::method_first (GGS_lstring & outOperand0,
                                     GGS_lexicalSentValueList & outOperand1,
                                     GGS_string & outOperand2,
                                     GGS_bool & outOperand3,
                                     GGS_bool & outOperand4,
                                     GGS_uint & outOperand5,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTerminalName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSentAttributeList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mSyntaxErrorMessage ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_isEndOfTemplateMark ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_atomicSelection ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mStyleIndex ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalList::method_last (GGS_lstring & outOperand0,
                                    GGS_lexicalSentValueList & outOperand1,
                                    GGS_string & outOperand2,
                                    GGS_bool & outOperand3,
                                    GGS_bool & outOperand4,
                                    GGS_uint & outOperand5,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTerminalName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSentAttributeList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mSyntaxErrorMessage ;
      outOperand3 = mArray.lastObject (HERE).mProperty_isEndOfTemplateMark ;
      outOperand4 = mArray.lastObject (HERE).mProperty_atomicSelection ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mStyleIndex ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_terminalList GGS_terminalList::add_operation (const GGS_terminalList & inOperand,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_terminalList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalList GGS_terminalList::subList (const int32_t inStart,
                                            const int32_t inLength,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  GGS_terminalList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalList GGS_terminalList::getter_subListWithRange (const GGS_range & inRange,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_terminalList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalList GGS_terminalList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_terminalList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalList GGS_terminalList::getter_subListToIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_terminalList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalList::plusAssignOperation (const GGS_terminalList inList,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalList::setter_setMTerminalNameAtIndex (GGS_lstring inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTerminalName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_terminalList::getter_mTerminalNameAtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTerminalName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_terminalList::setter_setMSentAttributeListAtIndex (GGS_lexicalSentValueList inOperand,
                                                            GGS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSentAttributeList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lexicalSentValueList GGS_terminalList::getter_mSentAttributeListAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_lexicalSentValueList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSentAttributeList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_terminalList::setter_setMSyntaxErrorMessageAtIndex (GGS_string inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSyntaxErrorMessage = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_terminalList::getter_mSyntaxErrorMessageAtIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSyntaxErrorMessage ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_terminalList::setter_setIsEndOfTemplateMarkAtIndex (GGS_bool inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_isEndOfTemplateMark = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_bool GGS_terminalList::getter_isEndOfTemplateMarkAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_isEndOfTemplateMark ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_terminalList::setter_setAtomicSelectionAtIndex (GGS_bool inOperand,
                                                         GGS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_atomicSelection = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_bool GGS_terminalList::getter_atomicSelectionAtIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_atomicSelection ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_terminalList::setter_setMStyleIndexAtIndex (GGS_uint inOperand,
                                                     GGS_uint inIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mStyleIndex = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_uint GGS_terminalList::getter_mStyleIndexAtIndex (const GGS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mStyleIndex ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @terminalList
//--------------------------------------------------------------------------------------------------

DownEnumerator_terminalList::DownEnumerator_terminalList (const GGS_terminalList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalList_2E_element DownEnumerator_terminalList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_terminalList::current_mTerminalName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTerminalName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList DownEnumerator_terminalList::current_mSentAttributeList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSentAttributeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_terminalList::current_mSyntaxErrorMessage (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSyntaxErrorMessage ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_terminalList::current_isEndOfTemplateMark (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_isEndOfTemplateMark ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_terminalList::current_atomicSelection (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_atomicSelection ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_terminalList::current_mStyleIndex (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mStyleIndex ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @terminalList
//--------------------------------------------------------------------------------------------------

UpEnumerator_terminalList::UpEnumerator_terminalList (const GGS_terminalList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalList_2E_element UpEnumerator_terminalList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_terminalList::current_mTerminalName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTerminalName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList UpEnumerator_terminalList::current_mSentAttributeList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSentAttributeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_terminalList::current_mSyntaxErrorMessage (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSyntaxErrorMessage ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_terminalList::current_isEndOfTemplateMark (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_isEndOfTemplateMark ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_terminalList::current_atomicSelection (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_atomicSelection ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_terminalList::current_mStyleIndex (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mStyleIndex ;
}




//--------------------------------------------------------------------------------------------------
//     @terminalList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalList ("terminalList",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalList GGS_terminalList::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_terminalList result ;
  const GGS_terminalList * p = (const GGS_terminalList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@lexicalSentValueList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_lexicalSentValueList : public CollectionElementPtr {
  public: GGS_lexicalSentValueList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_lexicalSentValueList (const GGS_lstring & in_mLexicalFormalSelector,
                                                     const GGS_string & in_mLexicalAttributeName,
                                                     const GGS_lexicalTypeEnum & in_mLexicalType
                                                     COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_lexicalSentValueList (const GGS_lexicalSentValueList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_lexicalSentValueList::CollectionElementPtr_lexicalSentValueList (const GGS_lstring & in_mLexicalFormalSelector,
                                                                                      const GGS_string & in_mLexicalAttributeName,
                                                                                      const GGS_lexicalTypeEnum & in_mLexicalType
                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mLexicalFormalSelector, in_mLexicalAttributeName, in_mLexicalType) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_lexicalSentValueList::CollectionElementPtr_lexicalSentValueList (const GGS_lexicalSentValueList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mLexicalFormalSelector, inElement.mProperty_mLexicalAttributeName, inElement.mProperty_mLexicalType) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_lexicalSentValueList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_lexicalSentValueList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_lexicalSentValueList (mObject.mProperty_mLexicalFormalSelector, mObject.mProperty_mLexicalAttributeName, mObject.mProperty_mLexicalType COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @lexicalSentValueList
//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList::GGS_lexicalSentValueList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList::GGS_lexicalSentValueList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_lexicalSentValueList * p = (CollectionElementPtr_lexicalSentValueList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_lexicalSentValueList) ;
    const GGS_lexicalSentValueList_2E_element element (p->mObject.mProperty_mLexicalFormalSelector, p->mObject.mProperty_mLexicalAttributeName, p->mObject.mProperty_mLexicalType) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSentValueList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                          const GGS_lstring & in_mLexicalFormalSelector,
                                                          const GGS_string & in_mLexicalAttributeName,
                                                          const GGS_lexicalTypeEnum & in_mLexicalType
                                                          COMMA_LOCATION_ARGS) {
  CollectionElementPtr_lexicalSentValueList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_lexicalSentValueList (in_mLexicalFormalSelector, in_mLexicalAttributeName, in_mLexicalType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalSentValueList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_lexicalSentValueList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSentValueList::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mLexicalFormalSelector:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLexicalFormalSelector.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mLexicalAttributeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLexicalAttributeName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mLexicalType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLexicalType.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList GGS_lexicalSentValueList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalSentValueList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSentValueList::plusPlusAssignOperation (const GGS_lexicalSentValueList_2E_element & inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList GGS_lexicalSentValueList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                             const GGS_string & inOperand1,
                                                                             const GGS_lexicalTypeEnum & inOperand2
                                                                             COMMA_LOCATION_ARGS) {
  const GGS_lexicalSentValueList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_lexicalSentValueList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSentValueList::addAssignOperation (const GGS_lstring & inOperand0,
                                                   const GGS_string & inOperand1,
                                                   const GGS_lexicalTypeEnum & inOperand2
                                                   COMMA_LOCATION_ARGS) {
  const GGS_lexicalSentValueList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSentValueList::setter_append (const GGS_lstring inOperand0,
                                              const GGS_string inOperand1,
                                              const GGS_lexicalTypeEnum inOperand2,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  const GGS_lexicalSentValueList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSentValueList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                     const GGS_string inOperand1,
                                                     const GGS_lexicalTypeEnum inOperand2,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const GGS_lexicalSentValueList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSentValueList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                     GGS_string & outOperand1,
                                                     GGS_lexicalTypeEnum & outOperand2,
                                                     const GGS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mLexicalFormalSelector ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mLexicalAttributeName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mLexicalType ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSentValueList::setter_popFirst (GGS_lstring & outOperand0,
                                                GGS_string & outOperand1,
                                                GGS_lexicalTypeEnum & outOperand2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLexicalFormalSelector ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mLexicalAttributeName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mLexicalType ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSentValueList::setter_popLast (GGS_lstring & outOperand0,
                                               GGS_string & outOperand1,
                                               GGS_lexicalTypeEnum & outOperand2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLexicalFormalSelector ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mLexicalAttributeName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mLexicalType ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSentValueList::method_first (GGS_lstring & outOperand0,
                                             GGS_string & outOperand1,
                                             GGS_lexicalTypeEnum & outOperand2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLexicalFormalSelector ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mLexicalAttributeName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mLexicalType ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSentValueList::method_last (GGS_lstring & outOperand0,
                                            GGS_string & outOperand1,
                                            GGS_lexicalTypeEnum & outOperand2,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLexicalFormalSelector ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mLexicalAttributeName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mLexicalType ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList GGS_lexicalSentValueList::add_operation (const GGS_lexicalSentValueList & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalSentValueList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList GGS_lexicalSentValueList::subList (const int32_t inStart,
                                                            const int32_t inLength,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_lexicalSentValueList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList GGS_lexicalSentValueList::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_lexicalSentValueList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList GGS_lexicalSentValueList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_lexicalSentValueList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList GGS_lexicalSentValueList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_lexicalSentValueList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSentValueList::plusAssignOperation (const GGS_lexicalSentValueList inList,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSentValueList::setter_setMLexicalFormalSelectorAtIndex (GGS_lstring inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLexicalFormalSelector = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_lexicalSentValueList::getter_mLexicalFormalSelectorAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLexicalFormalSelector ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalSentValueList::setter_setMLexicalAttributeNameAtIndex (GGS_string inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLexicalAttributeName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_lexicalSentValueList::getter_mLexicalAttributeNameAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLexicalAttributeName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalSentValueList::setter_setMLexicalTypeAtIndex (GGS_lexicalTypeEnum inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLexicalType = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lexicalTypeEnum GGS_lexicalSentValueList::getter_mLexicalTypeAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_lexicalTypeEnum result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLexicalType ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @lexicalSentValueList
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalSentValueList::DownEnumerator_lexicalSentValueList (const GGS_lexicalSentValueList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList_2E_element DownEnumerator_lexicalSentValueList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalSentValueList::current_mLexicalFormalSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLexicalFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_lexicalSentValueList::current_mLexicalAttributeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLexicalAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum DownEnumerator_lexicalSentValueList::current_mLexicalType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLexicalType ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @lexicalSentValueList
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalSentValueList::UpEnumerator_lexicalSentValueList (const GGS_lexicalSentValueList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList_2E_element UpEnumerator_lexicalSentValueList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalSentValueList::current_mLexicalFormalSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLexicalFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_lexicalSentValueList::current_mLexicalAttributeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLexicalAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum UpEnumerator_lexicalSentValueList::current_mLexicalType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLexicalType ;
}




//--------------------------------------------------------------------------------------------------
//     @lexicalSentValueList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSentValueList ("lexicalSentValueList",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalSentValueList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSentValueList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalSentValueList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalSentValueList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList GGS_lexicalSentValueList::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_lexicalSentValueList result ;
  const GGS_lexicalSentValueList * p = (const GGS_lexicalSentValueList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalSentValueList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSentValueList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @lexicalExplicitTokenListMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap::GGS_lexicalExplicitTokenListMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap::~ GGS_lexicalExplicitTokenListMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap::GGS_lexicalExplicitTokenListMap (const GGS_lexicalExplicitTokenListMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap & GGS_lexicalExplicitTokenListMap::operator = (const GGS_lexicalExplicitTokenListMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap GGS_lexicalExplicitTokenListMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_lexicalExplicitTokenListMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalExplicitTokenListMap::getter_hasKey (const GGS_string & inKey
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalExplicitTokenListMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                const GGS_uint & inLevel
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalExplicitTokenListMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalExplicitTokenListMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_lexicalExplicitTokenListMap::getter_locationForKey (const GGS_string & inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_lexicalExplicitTokenListMap::getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalExplicitTokenListMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_lexicalExplicitTokenListMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMap::performInsert (const GGS_lexicalExplicitTokenListMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_lexicalExplicitTokenListMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
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
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMap_2E_element>
GGS_lexicalExplicitTokenListMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_lexicalExplicitTokenListMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMap_2E_element>>
GGS_lexicalExplicitTokenListMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_lexicalExplicitTokenListMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap_2E_element_3F_ GGS_lexicalExplicitTokenListMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalExplicitTokenListMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_lexicalExplicitTokenListMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_lexicalExplicitTokenListMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mTerminal = info->mProperty_mTerminal ;
      element.mProperty_atomicSelection = info->mProperty_atomicSelection ;
      element.mProperty_isEndOfTemplateMark = info->mProperty_isEndOfTemplateMark ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap GGS_lexicalExplicitTokenListMap::class_func_mapWithMapToOverride (const GGS_lexicalExplicitTokenListMap & inMapToOverride
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_lexicalExplicitTokenListMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_lexicalExplicitTokenListMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap GGS_lexicalExplicitTokenListMap::getter_overriddenMap (Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_lexicalExplicitTokenListMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMap::setter_insertKey (GGS_lstring inLKey,
                                                        GGS_lstring inArgument0,
                                                        GGS_bool inArgument1,
                                                        GGS_bool inArgument2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  const GGS_lexicalExplicitTokenListMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2) ;
  const char * kInsertErrorMessage = "the '%K' terminal has been already declared in the list" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMap::method_searchKey (GGS_lstring inLKey,
                                                        GGS_lstring & outArgument0,
                                                        GGS_bool & outArgument1,
                                                        GGS_bool & outArgument2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' terminal is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    outArgument0 = info->mProperty_mTerminal ;
    outArgument1 = info->mProperty_atomicSelection ;
    outArgument2 = info->mProperty_isEndOfTemplateMark ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalExplicitTokenListMap::getter_mTerminalForKey (const GGS_string & inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mTerminal ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalExplicitTokenListMap::getter_atomicSelectionForKey (const GGS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_atomicSelection ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalExplicitTokenListMap::getter_isEndOfTemplateMarkForKey (const GGS_string & inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_isEndOfTemplateMark ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMap::setter_setMTerminalForKey (GGS_lstring inValue,
                                                                 GGS_string inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexicalExplicitTokenListMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mTerminal = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMap::setter_setAtomicSelectionForKey (GGS_bool inValue,
                                                                       GGS_string inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexicalExplicitTokenListMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_atomicSelection = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMap::setter_setIsEndOfTemplateMarkForKey (GGS_bool inValue,
                                                                           GGS_string inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexicalExplicitTokenListMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_isEndOfTemplateMark = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_lexicalExplicitTokenListMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMap_2E_element>> & inArray,
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
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mTerminal:") ;
    inArray (i COMMA_HERE)->mProperty_mTerminal.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("atomicSelection:") ;
    inArray (i COMMA_HERE)->mProperty_atomicSelection.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("isEndOfTemplateMark:") ;
    inArray (i COMMA_HERE)->mProperty_isEndOfTemplateMark.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMap_2E_element>> array = sortedInfoArray () ;
    GGS_lexicalExplicitTokenListMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_lexicalExplicitTokenListMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_lexicalExplicitTokenListMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @lexicalExplicitTokenListMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalExplicitTokenListMap::DownEnumerator_lexicalExplicitTokenListMap (const GGS_lexicalExplicitTokenListMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap_2E_element DownEnumerator_lexicalExplicitTokenListMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalExplicitTokenListMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalExplicitTokenListMap::current_mTerminal (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mTerminal ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_lexicalExplicitTokenListMap::current_atomicSelection (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_atomicSelection ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_lexicalExplicitTokenListMap::current_isEndOfTemplateMark (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_isEndOfTemplateMark ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @lexicalExplicitTokenListMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalExplicitTokenListMap::UpEnumerator_lexicalExplicitTokenListMap (const GGS_lexicalExplicitTokenListMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap_2E_element UpEnumerator_lexicalExplicitTokenListMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalExplicitTokenListMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalExplicitTokenListMap::current_mTerminal (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mTerminal ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_lexicalExplicitTokenListMap::current_atomicSelection (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_atomicSelection ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_lexicalExplicitTokenListMap::current_isEndOfTemplateMark (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_isEndOfTemplateMark ;
}


//--------------------------------------------------------------------------------------------------
//     @lexicalExplicitTokenListMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap ("lexicalExplicitTokenListMap",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalExplicitTokenListMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalExplicitTokenListMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalExplicitTokenListMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap GGS_lexicalExplicitTokenListMap::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalExplicitTokenListMap result ;
  const GGS_lexicalExplicitTokenListMap * p = (const GGS_lexicalExplicitTokenListMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalExplicitTokenListMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExplicitTokenListMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//@tokenSortedlist' sorted list
//--------------------------------------------------------------------------------------------------

static int32_t compareForSorting_tokenSortedlist (const GGS_tokenSortedlist_2E_element & inLeft,
                                                  const GGS_tokenSortedlist_2E_element & inRight) {
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = inLeft.mProperty_mLength.objectCompare (inRight.mProperty_mLength) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = inLeft.mProperty_mName.objectCompare (inRight.mProperty_mName) ;
  }
  return int32_t (result) ;
}

//--------------------------------------------------------------------------------------------------

GGS_tokenSortedlist::GGS_tokenSortedlist (void) :
mSharedArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_tokenSortedlist::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tokenSortedlist::plusPlusAssignOperation (const GGS_tokenSortedlist_2E_element & inElement
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    mSharedArray.appendObject (inElement) ;
    mSharedArray.quickSortUsingFunction (compareForSorting_tokenSortedlist) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_tokenSortedlist GGS_tokenSortedlist::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_tokenSortedlist result ;
  result.mSharedArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tokenSortedlist GGS_tokenSortedlist::class_func_sortedListWithValue (const GGS_uint & inOperand0,
                                                                         const GGS_string & inOperand1,
                                                                         const GGS_string & inOperand2
                                                                         COMMA_LOCATION_ARGS) {
  GGS_tokenSortedlist result = init (nullptr COMMA_THERE) ;
  const GGS_tokenSortedlist_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  result.plusPlusAssignOperation (newElement COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tokenSortedlist::addAssignOperation (const GGS_uint & inOperand0,
                                              const GGS_string & inOperand1,
                                              const GGS_string & inOperand2
                                              COMMA_LOCATION_ARGS) {
  const GGS_tokenSortedlist_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tokenSortedlist::setter_insert (const GGS_uint inOperand0,
                                         const GGS_string inOperand1,
                                         const GGS_string inOperand2,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  const GGS_tokenSortedlist_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tokenSortedlist::plusAssignOperation (const GGS_tokenSortedlist inSortedList,
                                               Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inSortedList.isValid ()) {
    mSharedArray.setCapacity (mSharedArray.capacity () + inSortedList.mSharedArray.capacity ()) ;
    for (int32_t i=0 ; i<inSortedList.count () ; i++) {
      mSharedArray.appendObject (inSortedList.mSharedArray (i COMMA_HERE)) ;
    }
    mSharedArray.quickSortUsingFunction (compareForSorting_tokenSortedlist) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_tokenSortedlist::setter_popSmallest (GGS_uint & outOperand0,
                                              GGS_string & outOperand1,
                                              GGS_string & outOperand2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'popSmallest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray (0 COMMA_HERE).mProperty_mLength ;
      outOperand1 = mSharedArray (0 COMMA_HERE).mProperty_mName ;
      outOperand2 = mSharedArray (0 COMMA_HERE).mProperty_mTerminalName ;
      mSharedArray.removeObjectAtIndex (0 COMMA_HERE) ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_tokenSortedlist::setter_popGreatest (GGS_uint & outOperand0,
                                              GGS_string & outOperand1,
                                              GGS_string & outOperand2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'popGreatest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray.lastObject (HERE).mProperty_mLength ;
      outOperand1 = mSharedArray.lastObject (HERE).mProperty_mName ;
      outOperand2 = mSharedArray.lastObject (HERE).mProperty_mTerminalName ;
      mSharedArray.removeLastObject (HERE) ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_tokenSortedlist::method_smallest (GGS_uint & outOperand0,
                                           GGS_string & outOperand1,
                                           GGS_string & outOperand2,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'smallest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray (0 COMMA_HERE).mProperty_mLength ;
      outOperand1 = mSharedArray (0 COMMA_HERE).mProperty_mName ;
      outOperand2 = mSharedArray (0 COMMA_HERE).mProperty_mTerminalName ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_tokenSortedlist::method_greatest (GGS_uint & outOperand0,
                                           GGS_string & outOperand1,
                                           GGS_string & outOperand2,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'greatest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray.lastObject (HERE).mProperty_mLength ;
      outOperand1 = mSharedArray.lastObject (HERE).mProperty_mName ;
      outOperand2 = mSharedArray.lastObject (HERE).mProperty_mTerminalName ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_tokenSortedlist::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString (" (") ;
  ioString.appendSigned (count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count () > 1) ? "s" : "") ;
  ioString.appendCString (")>") ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @tokenSortedlist
//--------------------------------------------------------------------------------------------------

DownEnumerator_tokenSortedlist::DownEnumerator_tokenSortedlist (const GGS_tokenSortedlist & inEnumeratedObject) :
mElementArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mElementArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_tokenSortedlist_2E_element DownEnumerator_tokenSortedlist::current (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_tokenSortedlist::current_mLength (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mLength ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_tokenSortedlist::current_mName (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_tokenSortedlist::current_mTerminalName (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mTerminalName ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @tokenSortedlist
//--------------------------------------------------------------------------------------------------

UpEnumerator_tokenSortedlist::UpEnumerator_tokenSortedlist (const GGS_tokenSortedlist & inEnumeratedObject) :
mElementArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_tokenSortedlist_2E_element UpEnumerator_tokenSortedlist::current (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_tokenSortedlist::current_mLength (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mLength ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_tokenSortedlist::current_mName (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_tokenSortedlist::current_mTerminalName (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mTerminalName ;
}



//--------------------------------------------------------------------------------------------------
//     @tokenSortedlist generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_tokenSortedlist ("tokenSortedlist",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_tokenSortedlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tokenSortedlist ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_tokenSortedlist::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_tokenSortedlist (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tokenSortedlist GGS_tokenSortedlist::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_tokenSortedlist result ;
  const GGS_tokenSortedlist * p = (const GGS_tokenSortedlist *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_tokenSortedlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tokenSortedlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @lexicalExplicitTokenListMapMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap::GGS_lexicalExplicitTokenListMapMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap::~ GGS_lexicalExplicitTokenListMapMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap::GGS_lexicalExplicitTokenListMapMap (const GGS_lexicalExplicitTokenListMapMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap & GGS_lexicalExplicitTokenListMapMap::operator = (const GGS_lexicalExplicitTokenListMapMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap GGS_lexicalExplicitTokenListMapMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_lexicalExplicitTokenListMapMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalExplicitTokenListMapMap::getter_hasKey (const GGS_string & inKey
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalExplicitTokenListMapMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                   const GGS_uint & inLevel
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalExplicitTokenListMapMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalExplicitTokenListMapMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_lexicalExplicitTokenListMapMap::getter_locationForKey (const GGS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_lexicalExplicitTokenListMapMap::getter_keyList (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalExplicitTokenListMapMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMapMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMapMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_lexicalExplicitTokenListMapMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMapMap::performInsert (const GGS_lexicalExplicitTokenListMapMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_lexicalExplicitTokenListMapMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
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
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element>
GGS_lexicalExplicitTokenListMapMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_lexicalExplicitTokenListMapMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element>>
GGS_lexicalExplicitTokenListMapMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_lexicalExplicitTokenListMapMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMapMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ GGS_lexicalExplicitTokenListMapMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_lexicalExplicitTokenListMapMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_lexicalExplicitTokenListMapMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mExplicitTokenListMap = info->mProperty_mExplicitTokenListMap ;
      element.mProperty_mTokenSortedList = info->mProperty_mTokenSortedList ;
      element.mProperty_mShouldBeGenerated = info->mProperty_mShouldBeGenerated ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap GGS_lexicalExplicitTokenListMapMap::class_func_mapWithMapToOverride (const GGS_lexicalExplicitTokenListMapMap & inMapToOverride
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_lexicalExplicitTokenListMapMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_lexicalExplicitTokenListMapMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap GGS_lexicalExplicitTokenListMapMap::getter_overriddenMap (Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_lexicalExplicitTokenListMapMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMapMap::setter_insertKey (GGS_lstring inLKey,
                                                           GGS_lexicalExplicitTokenListMap inArgument0,
                                                           GGS_tokenSortedlist inArgument1,
                                                           GGS_bool inArgument2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  const GGS_lexicalExplicitTokenListMapMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2) ;
  const char * kInsertErrorMessage = "the '%K' token list has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMapMap::method_searchKey (GGS_lstring inLKey,
                                                           GGS_lexicalExplicitTokenListMap & outArgument0,
                                                           GGS_tokenSortedlist & outArgument1,
                                                           GGS_bool & outArgument2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' token list is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    outArgument0 = info->mProperty_mExplicitTokenListMap ;
    outArgument1 = info->mProperty_mTokenSortedList ;
    outArgument2 = info->mProperty_mShouldBeGenerated ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap GGS_lexicalExplicitTokenListMapMap::getter_mExplicitTokenListMapForKey (const GGS_string & inKey,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_lexicalExplicitTokenListMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mExplicitTokenListMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_tokenSortedlist GGS_lexicalExplicitTokenListMapMap::getter_mTokenSortedListForKey (const GGS_string & inKey,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_tokenSortedlist result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mTokenSortedList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalExplicitTokenListMapMap::getter_mShouldBeGeneratedForKey (const GGS_string & inKey,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mShouldBeGenerated ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMapMap::setter_setMExplicitTokenListMapForKey (GGS_lexicalExplicitTokenListMap inValue,
                                                                                GGS_string inKey,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexicalExplicitTokenListMapMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mExplicitTokenListMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMapMap::setter_setMTokenSortedListForKey (GGS_tokenSortedlist inValue,
                                                                           GGS_string inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexicalExplicitTokenListMapMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mTokenSortedList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMapMap::setter_setMShouldBeGeneratedForKey (GGS_bool inValue,
                                                                             GGS_string inKey,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexicalExplicitTokenListMapMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mShouldBeGenerated = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_lexicalExplicitTokenListMapMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element>> & inArray,
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
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mExplicitTokenListMap:") ;
    inArray (i COMMA_HERE)->mProperty_mExplicitTokenListMap.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mTokenSortedList:") ;
    inArray (i COMMA_HERE)->mProperty_mTokenSortedList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mShouldBeGenerated:") ;
    inArray (i COMMA_HERE)->mProperty_mShouldBeGenerated.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMapMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element>> array = sortedInfoArray () ;
    GGS_lexicalExplicitTokenListMapMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_lexicalExplicitTokenListMapMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_lexicalExplicitTokenListMapMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @lexicalExplicitTokenListMapMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalExplicitTokenListMapMap::DownEnumerator_lexicalExplicitTokenListMapMap (const GGS_lexicalExplicitTokenListMapMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap_2E_element DownEnumerator_lexicalExplicitTokenListMapMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalExplicitTokenListMapMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap DownEnumerator_lexicalExplicitTokenListMapMap::current_mExplicitTokenListMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mExplicitTokenListMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_tokenSortedlist DownEnumerator_lexicalExplicitTokenListMapMap::current_mTokenSortedList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mTokenSortedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_lexicalExplicitTokenListMapMap::current_mShouldBeGenerated (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mShouldBeGenerated ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @lexicalExplicitTokenListMapMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalExplicitTokenListMapMap::UpEnumerator_lexicalExplicitTokenListMapMap (const GGS_lexicalExplicitTokenListMapMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap_2E_element UpEnumerator_lexicalExplicitTokenListMapMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalExplicitTokenListMapMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap UpEnumerator_lexicalExplicitTokenListMapMap::current_mExplicitTokenListMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mExplicitTokenListMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_tokenSortedlist UpEnumerator_lexicalExplicitTokenListMapMap::current_mTokenSortedList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mTokenSortedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_lexicalExplicitTokenListMapMap::current_mShouldBeGenerated (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mShouldBeGenerated ;
}


//--------------------------------------------------------------------------------------------------
//     @lexicalExplicitTokenListMapMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap ("lexicalExplicitTokenListMapMap",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalExplicitTokenListMapMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalExplicitTokenListMapMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalExplicitTokenListMapMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap GGS_lexicalExplicitTokenListMapMap::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_lexicalExplicitTokenListMapMap result ;
  const GGS_lexicalExplicitTokenListMapMap * p = (const GGS_lexicalExplicitTokenListMapMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalExplicitTokenListMapMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExplicitTokenListMapMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @lexicalMessageMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap::GGS_lexicalMessageMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap::~ GGS_lexicalMessageMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap::GGS_lexicalMessageMap (const GGS_lexicalMessageMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap & GGS_lexicalMessageMap::operator = (const GGS_lexicalMessageMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap GGS_lexicalMessageMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_lexicalMessageMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalMessageMap::getter_hasKey (const GGS_string & inKey
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalMessageMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                      const GGS_uint & inLevel
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalMessageMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalMessageMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_lexicalMessageMap::getter_locationForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_lexicalMessageMap::getter_keyList (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalMessageMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_lexicalMessageMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageMap::performInsert (const GGS_lexicalMessageMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_lexicalMessageMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
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
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element>
GGS_lexicalMessageMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_lexicalMessageMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element>>
GGS_lexicalMessageMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_lexicalMessageMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap_2E_element_3F_ GGS_lexicalMessageMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalMessageMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_lexicalMessageMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_lexicalMessageMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mLexicalMessage = info->mProperty_mLexicalMessage ;
      element.mProperty_mMessageIsUsed = info->mProperty_mMessageIsUsed ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap_2E_element GGS_lexicalMessageMap
::readSubscript__3F_searchKey (const GGS_lstring & inLKey,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) const {
  GGS_lexicalMessageMap_2E_element result ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element> info = infoForKey (key) ;
    if (info.isNotNil ()) {
      result = info.value () ;
    }else{
      const char * kErrorMessage = "the '%K' message is not declared" ;
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kErrorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap GGS_lexicalMessageMap::class_func_mapWithMapToOverride (const GGS_lexicalMessageMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GGS_lexicalMessageMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_lexicalMessageMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap GGS_lexicalMessageMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_lexicalMessageMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageMap::setter_insertKey (GGS_lstring inLKey,
                                              GGS_lstring inArgument0,
                                              GGS_bool inArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  const GGS_lexicalMessageMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' message has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageMap::method_searchKey (GGS_lstring inLKey,
                                              GGS_lstring & outArgument0,
                                              GGS_bool & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' message is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mLexicalMessage ;
    outArgument1 = info->mProperty_mMessageIsUsed ;
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageMap::setter_replaceKey (GGS_lexicalMessageMap_2E_element inElement,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    const char * kReplaceErrorMessage = "the '%K' message is not declared" ;
    const String key = inElement.mProperty_lkey.mProperty_string.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexicalMessageMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (
        inElement.mProperty_lkey,
        nearestKeyArray,
        kReplaceErrorMessage
        COMMA_THERE
      ) ;
    }else{
      node->mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element>::make (inElement COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalMessageMap::getter_mLexicalMessageForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mLexicalMessage ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalMessageMap::getter_mMessageIsUsedForKey (const GGS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mMessageIsUsed ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageMap::setter_setMLexicalMessageForKey (GGS_lstring inValue,
                                                             GGS_string inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexicalMessageMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mLexicalMessage = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageMap::setter_setMMessageIsUsedForKey (GGS_bool inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexicalMessageMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mMessageIsUsed = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_lexicalMessageMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element>> & inArray,
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
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mLexicalMessage:") ;
    inArray (i COMMA_HERE)->mProperty_mLexicalMessage.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mMessageIsUsed:") ;
    inArray (i COMMA_HERE)->mProperty_mMessageIsUsed.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element>> array = sortedInfoArray () ;
    GGS_lexicalMessageMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_lexicalMessageMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_lexicalMessageMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @lexicalMessageMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalMessageMap::DownEnumerator_lexicalMessageMap (const GGS_lexicalMessageMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap_2E_element DownEnumerator_lexicalMessageMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalMessageMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalMessageMap::current_mLexicalMessage (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLexicalMessage ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_lexicalMessageMap::current_mMessageIsUsed (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mMessageIsUsed ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @lexicalMessageMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalMessageMap::UpEnumerator_lexicalMessageMap (const GGS_lexicalMessageMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap_2E_element UpEnumerator_lexicalMessageMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalMessageMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalMessageMap::current_mLexicalMessage (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLexicalMessage ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_lexicalMessageMap::current_mMessageIsUsed (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mMessageIsUsed ;
}


//--------------------------------------------------------------------------------------------------
//     @lexicalMessageMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalMessageMap ("lexicalMessageMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalMessageMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalMessageMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalMessageMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalMessageMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap GGS_lexicalMessageMap::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_lexicalMessageMap result ;
  const GGS_lexicalMessageMap * p = (const GGS_lexicalMessageMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalMessageMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalMessageMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@lexicalRoutineFormalArgumentList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_lexicalRoutineFormalArgumentList : public CollectionElementPtr {
  public: GGS_lexicalRoutineFormalArgumentList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_lexicalRoutineFormalArgumentList (const GGS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                                 const GGS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                                 const GGS_string & in_mArgumentNameForComment
                                                                 COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_lexicalRoutineFormalArgumentList (const GGS_lexicalRoutineFormalArgumentList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_lexicalRoutineFormalArgumentList::CollectionElementPtr_lexicalRoutineFormalArgumentList (const GGS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                                                                              const GGS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                                                                              const GGS_string & in_mArgumentNameForComment
                                                                                                              COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mLexicalFormalArgumentMode, in_mLexicalFormalArgumentType, in_mArgumentNameForComment) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_lexicalRoutineFormalArgumentList::CollectionElementPtr_lexicalRoutineFormalArgumentList (const GGS_lexicalRoutineFormalArgumentList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mLexicalFormalArgumentMode, inElement.mProperty_mLexicalFormalArgumentType, inElement.mProperty_mArgumentNameForComment) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_lexicalRoutineFormalArgumentList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_lexicalRoutineFormalArgumentList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_lexicalRoutineFormalArgumentList (mObject.mProperty_mLexicalFormalArgumentMode, mObject.mProperty_mLexicalFormalArgumentType, mObject.mProperty_mArgumentNameForComment COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @lexicalRoutineFormalArgumentList
//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList::GGS_lexicalRoutineFormalArgumentList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList::GGS_lexicalRoutineFormalArgumentList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_lexicalRoutineFormalArgumentList * p = (CollectionElementPtr_lexicalRoutineFormalArgumentList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_lexicalRoutineFormalArgumentList) ;
    const GGS_lexicalRoutineFormalArgumentList_2E_element element (p->mObject.mProperty_mLexicalFormalArgumentMode, p->mObject.mProperty_mLexicalFormalArgumentType, p->mObject.mProperty_mArgumentNameForComment) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                      const GGS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                                      const GGS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                                      const GGS_string & in_mArgumentNameForComment
                                                                      COMMA_LOCATION_ARGS) {
  CollectionElementPtr_lexicalRoutineFormalArgumentList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_lexicalRoutineFormalArgumentList (in_mLexicalFormalArgumentMode, in_mLexicalFormalArgumentType, in_mArgumentNameForComment COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalRoutineFormalArgumentList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_lexicalRoutineFormalArgumentList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mLexicalFormalArgumentMode:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLexicalFormalArgumentMode.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mLexicalFormalArgumentType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLexicalFormalArgumentType.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mArgumentNameForComment:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mArgumentNameForComment.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList GGS_lexicalRoutineFormalArgumentList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalRoutineFormalArgumentList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList::plusPlusAssignOperation (const GGS_lexicalRoutineFormalArgumentList_2E_element & inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList GGS_lexicalRoutineFormalArgumentList::class_func_listWithValue (const GGS_lexicalArgumentModeAST & inOperand0,
                                                                                                     const GGS_lexicalTypeEnum & inOperand1,
                                                                                                     const GGS_string & inOperand2
                                                                                                     COMMA_LOCATION_ARGS) {
  const GGS_lexicalRoutineFormalArgumentList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_lexicalRoutineFormalArgumentList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList::addAssignOperation (const GGS_lexicalArgumentModeAST & inOperand0,
                                                               const GGS_lexicalTypeEnum & inOperand1,
                                                               const GGS_string & inOperand2
                                                               COMMA_LOCATION_ARGS) {
  const GGS_lexicalRoutineFormalArgumentList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList::setter_append (const GGS_lexicalArgumentModeAST inOperand0,
                                                          const GGS_lexicalTypeEnum inOperand1,
                                                          const GGS_string inOperand2,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  const GGS_lexicalRoutineFormalArgumentList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList::setter_insertAtIndex (const GGS_lexicalArgumentModeAST inOperand0,
                                                                 const GGS_lexicalTypeEnum inOperand1,
                                                                 const GGS_string inOperand2,
                                                                 const GGS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_lexicalRoutineFormalArgumentList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList::setter_removeAtIndex (GGS_lexicalArgumentModeAST & outOperand0,
                                                                 GGS_lexicalTypeEnum & outOperand1,
                                                                 GGS_string & outOperand2,
                                                                 const GGS_uint inRemoveIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mLexicalFormalArgumentMode ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mLexicalFormalArgumentType ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mArgumentNameForComment ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList::setter_popFirst (GGS_lexicalArgumentModeAST & outOperand0,
                                                            GGS_lexicalTypeEnum & outOperand1,
                                                            GGS_string & outOperand2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLexicalFormalArgumentMode ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mLexicalFormalArgumentType ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mArgumentNameForComment ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList::setter_popLast (GGS_lexicalArgumentModeAST & outOperand0,
                                                           GGS_lexicalTypeEnum & outOperand1,
                                                           GGS_string & outOperand2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLexicalFormalArgumentMode ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mLexicalFormalArgumentType ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mArgumentNameForComment ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList::method_first (GGS_lexicalArgumentModeAST & outOperand0,
                                                         GGS_lexicalTypeEnum & outOperand1,
                                                         GGS_string & outOperand2,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLexicalFormalArgumentMode ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mLexicalFormalArgumentType ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mArgumentNameForComment ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList::method_last (GGS_lexicalArgumentModeAST & outOperand0,
                                                        GGS_lexicalTypeEnum & outOperand1,
                                                        GGS_string & outOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLexicalFormalArgumentMode ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mLexicalFormalArgumentType ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mArgumentNameForComment ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList GGS_lexicalRoutineFormalArgumentList::add_operation (const GGS_lexicalRoutineFormalArgumentList & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalRoutineFormalArgumentList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList GGS_lexicalRoutineFormalArgumentList::subList (const int32_t inStart,
                                                                                    const int32_t inLength,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lexicalRoutineFormalArgumentList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList GGS_lexicalRoutineFormalArgumentList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lexicalRoutineFormalArgumentList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList GGS_lexicalRoutineFormalArgumentList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lexicalRoutineFormalArgumentList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList GGS_lexicalRoutineFormalArgumentList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lexicalRoutineFormalArgumentList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList::plusAssignOperation (const GGS_lexicalRoutineFormalArgumentList inList,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList::setter_setMLexicalFormalArgumentModeAtIndex (GGS_lexicalArgumentModeAST inOperand,
                                                                                        GGS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLexicalFormalArgumentMode = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lexicalArgumentModeAST GGS_lexicalRoutineFormalArgumentList::getter_mLexicalFormalArgumentModeAtIndex (const GGS_uint & inIndex,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_lexicalArgumentModeAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLexicalFormalArgumentMode ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList::setter_setMLexicalFormalArgumentTypeAtIndex (GGS_lexicalTypeEnum inOperand,
                                                                                        GGS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLexicalFormalArgumentType = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lexicalTypeEnum GGS_lexicalRoutineFormalArgumentList::getter_mLexicalFormalArgumentTypeAtIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lexicalTypeEnum result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLexicalFormalArgumentType ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList::setter_setMArgumentNameForCommentAtIndex (GGS_string inOperand,
                                                                                     GGS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mArgumentNameForComment = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_lexicalRoutineFormalArgumentList::getter_mArgumentNameForCommentAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mArgumentNameForComment ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @lexicalRoutineFormalArgumentList
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalRoutineFormalArgumentList::DownEnumerator_lexicalRoutineFormalArgumentList (const GGS_lexicalRoutineFormalArgumentList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList_2E_element DownEnumerator_lexicalRoutineFormalArgumentList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalArgumentModeAST DownEnumerator_lexicalRoutineFormalArgumentList::current_mLexicalFormalArgumentMode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLexicalFormalArgumentMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum DownEnumerator_lexicalRoutineFormalArgumentList::current_mLexicalFormalArgumentType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLexicalFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_lexicalRoutineFormalArgumentList::current_mArgumentNameForComment (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mArgumentNameForComment ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @lexicalRoutineFormalArgumentList
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalRoutineFormalArgumentList::UpEnumerator_lexicalRoutineFormalArgumentList (const GGS_lexicalRoutineFormalArgumentList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList_2E_element UpEnumerator_lexicalRoutineFormalArgumentList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalArgumentModeAST UpEnumerator_lexicalRoutineFormalArgumentList::current_mLexicalFormalArgumentMode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLexicalFormalArgumentMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum UpEnumerator_lexicalRoutineFormalArgumentList::current_mLexicalFormalArgumentType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLexicalFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_lexicalRoutineFormalArgumentList::current_mArgumentNameForComment (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mArgumentNameForComment ;
}




//--------------------------------------------------------------------------------------------------
//     @lexicalRoutineFormalArgumentList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList ("lexicalRoutineFormalArgumentList",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalRoutineFormalArgumentList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRoutineFormalArgumentList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRoutineFormalArgumentList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList GGS_lexicalRoutineFormalArgumentList::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalRoutineFormalArgumentList result ;
  const GGS_lexicalRoutineFormalArgumentList * p = (const GGS_lexicalRoutineFormalArgumentList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRoutineFormalArgumentList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineFormalArgumentList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum lexicalArgumentModeAST
//--------------------------------------------------------------------------------------------------

GGS_lexicalArgumentModeAST::GGS_lexicalArgumentModeAST (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalArgumentModeAST GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (UNUSED_LOCATION_ARGS) {
  GGS_lexicalArgumentModeAST result ;
  result.mEnum = Enumeration::enum_lexicalInputMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalArgumentModeAST GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (UNUSED_LOCATION_ARGS) {
  GGS_lexicalArgumentModeAST result ;
  result.mEnum = Enumeration::enum_lexicalInputOutputMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_lexicalArgumentModeAST [3] = {
  "(not built)",
  "lexicalInputMode",
  "lexicalInputOutputMode"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalArgumentModeAST::getter_isLexicalInputMode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lexicalInputMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalArgumentModeAST::getter_isLexicalInputOutputMode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lexicalInputOutputMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalArgumentModeAST::description (String & ioString,
                                              const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @lexicalArgumentModeAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_lexicalArgumentModeAST [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalArgumentModeAST::objectCompare (const GGS_lexicalArgumentModeAST & inOperand) const {
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
//     @lexicalArgumentModeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalArgumentModeAST ("lexicalArgumentModeAST",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalArgumentModeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalArgumentModeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalArgumentModeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalArgumentModeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalArgumentModeAST GGS_lexicalArgumentModeAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_lexicalArgumentModeAST result ;
  const GGS_lexicalArgumentModeAST * p = (const GGS_lexicalArgumentModeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalArgumentModeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalArgumentModeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @lexicalRoutineMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineMap::GGS_lexicalRoutineMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineMap::~ GGS_lexicalRoutineMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineMap::GGS_lexicalRoutineMap (const GGS_lexicalRoutineMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineMap & GGS_lexicalRoutineMap::operator = (const GGS_lexicalRoutineMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineMap GGS_lexicalRoutineMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_lexicalRoutineMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalRoutineMap::getter_hasKey (const GGS_string & inKey
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalRoutineMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                      const GGS_uint & inLevel
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalRoutineMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalRoutineMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_lexicalRoutineMap::getter_locationForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_lexicalRoutineMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_lexicalRoutineMap::getter_keyList (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalRoutineMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_lexicalRoutineMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineMap::performInsert (const GGS_lexicalRoutineMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_lexicalRoutineMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
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
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_lexicalRoutineMap_2E_element>
GGS_lexicalRoutineMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_lexicalRoutineMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_lexicalRoutineMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalRoutineMap_2E_element>>
GGS_lexicalRoutineMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalRoutineMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_lexicalRoutineMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineMap_2E_element_3F_ GGS_lexicalRoutineMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalRoutineMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_lexicalRoutineMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_lexicalRoutineMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_lexicalRoutineMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mLexicalRoutineFormalArgumentList = info->mProperty_mLexicalRoutineFormalArgumentList ;
      element.mProperty_mErrorMessageList = info->mProperty_mErrorMessageList ;
      element.mProperty_mIsExtern = info->mProperty_mIsExtern ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineMap GGS_lexicalRoutineMap::class_func_mapWithMapToOverride (const GGS_lexicalRoutineMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GGS_lexicalRoutineMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_lexicalRoutineMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineMap GGS_lexicalRoutineMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_lexicalRoutineMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineMap::setter_insertKey (GGS_lstring inLKey,
                                              GGS_lexicalRoutineFormalArgumentList inArgument0,
                                              GGS_stringlist inArgument1,
                                              GGS_bool inArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  const GGS_lexicalRoutineMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2) ;
  const char * kInsertErrorMessage = "the '%K' lexical routine has been already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineMap::method_searchKey (GGS_lstring inLKey,
                                              GGS_lexicalRoutineFormalArgumentList & outArgument0,
                                              GGS_stringlist & outArgument1,
                                              GGS_bool & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_lexicalRoutineMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' lexical routine is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    outArgument0 = info->mProperty_mLexicalRoutineFormalArgumentList ;
    outArgument1 = info->mProperty_mErrorMessageList ;
    outArgument2 = info->mProperty_mIsExtern ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList GGS_lexicalRoutineMap::getter_mLexicalRoutineFormalArgumentListForKey (const GGS_string & inKey,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_lexicalRoutineFormalArgumentList result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexicalRoutineMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mLexicalRoutineFormalArgumentList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_lexicalRoutineMap::getter_mErrorMessageListForKey (const GGS_string & inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexicalRoutineMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mErrorMessageList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalRoutineMap::getter_mIsExternForKey (const GGS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexicalRoutineMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIsExtern ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineMap::setter_setMLexicalRoutineFormalArgumentListForKey (GGS_lexicalRoutineFormalArgumentList inValue,
                                                                               GGS_string inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexicalRoutineMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mLexicalRoutineFormalArgumentList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineMap::setter_setMErrorMessageListForKey (GGS_stringlist inValue,
                                                               GGS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexicalRoutineMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mErrorMessageList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineMap::setter_setMIsExternForKey (GGS_bool inValue,
                                                       GGS_string inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexicalRoutineMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIsExtern = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_lexicalRoutineMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalRoutineMap_2E_element>> & inArray,
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
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mLexicalRoutineFormalArgumentList:") ;
    inArray (i COMMA_HERE)->mProperty_mLexicalRoutineFormalArgumentList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mErrorMessageList:") ;
    inArray (i COMMA_HERE)->mProperty_mErrorMessageList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mIsExtern:") ;
    inArray (i COMMA_HERE)->mProperty_mIsExtern.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalRoutineMap_2E_element>> array = sortedInfoArray () ;
    GGS_lexicalRoutineMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_lexicalRoutineMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_lexicalRoutineMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @lexicalRoutineMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalRoutineMap::DownEnumerator_lexicalRoutineMap (const GGS_lexicalRoutineMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineMap_2E_element DownEnumerator_lexicalRoutineMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalRoutineMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList DownEnumerator_lexicalRoutineMap::current_mLexicalRoutineFormalArgumentList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLexicalRoutineFormalArgumentList ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_lexicalRoutineMap::current_mErrorMessageList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mErrorMessageList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_lexicalRoutineMap::current_mIsExtern (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsExtern ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @lexicalRoutineMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalRoutineMap::UpEnumerator_lexicalRoutineMap (const GGS_lexicalRoutineMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineMap_2E_element UpEnumerator_lexicalRoutineMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalRoutineMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList UpEnumerator_lexicalRoutineMap::current_mLexicalRoutineFormalArgumentList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLexicalRoutineFormalArgumentList ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_lexicalRoutineMap::current_mErrorMessageList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mErrorMessageList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_lexicalRoutineMap::current_mIsExtern (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsExtern ;
}


//--------------------------------------------------------------------------------------------------
//     @lexicalRoutineMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineMap ("lexicalRoutineMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalRoutineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRoutineMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRoutineMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineMap GGS_lexicalRoutineMap::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_lexicalRoutineMap result ;
  const GGS_lexicalRoutineMap * p = (const GGS_lexicalRoutineMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRoutineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@lexicalFunctionFormalArgumentList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_lexicalFunctionFormalArgumentList : public CollectionElementPtr {
  public: GGS_lexicalFunctionFormalArgumentList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_lexicalFunctionFormalArgumentList (const GGS_lexicalTypeEnum & in_mLexicalType,
                                                                  const GGS_string & in_mArgumentNameForComment
                                                                  COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_lexicalFunctionFormalArgumentList (const GGS_lexicalFunctionFormalArgumentList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_lexicalFunctionFormalArgumentList::CollectionElementPtr_lexicalFunctionFormalArgumentList (const GGS_lexicalTypeEnum & in_mLexicalType,
                                                                                                                const GGS_string & in_mArgumentNameForComment
                                                                                                                COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mLexicalType, in_mArgumentNameForComment) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_lexicalFunctionFormalArgumentList::CollectionElementPtr_lexicalFunctionFormalArgumentList (const GGS_lexicalFunctionFormalArgumentList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mLexicalType, inElement.mProperty_mArgumentNameForComment) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_lexicalFunctionFormalArgumentList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_lexicalFunctionFormalArgumentList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_lexicalFunctionFormalArgumentList (mObject.mProperty_mLexicalType, mObject.mProperty_mArgumentNameForComment COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @lexicalFunctionFormalArgumentList
//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList::GGS_lexicalFunctionFormalArgumentList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList::GGS_lexicalFunctionFormalArgumentList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_lexicalFunctionFormalArgumentList * p = (CollectionElementPtr_lexicalFunctionFormalArgumentList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_lexicalFunctionFormalArgumentList) ;
    const GGS_lexicalFunctionFormalArgumentList_2E_element element (p->mObject.mProperty_mLexicalType, p->mObject.mProperty_mArgumentNameForComment) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                       const GGS_lexicalTypeEnum & in_mLexicalType,
                                                                       const GGS_string & in_mArgumentNameForComment
                                                                       COMMA_LOCATION_ARGS) {
  CollectionElementPtr_lexicalFunctionFormalArgumentList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_lexicalFunctionFormalArgumentList (in_mLexicalType, in_mArgumentNameForComment COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalFunctionFormalArgumentList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_lexicalFunctionFormalArgumentList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mLexicalType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLexicalType.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mArgumentNameForComment:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mArgumentNameForComment.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList GGS_lexicalFunctionFormalArgumentList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalFunctionFormalArgumentList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::plusPlusAssignOperation (const GGS_lexicalFunctionFormalArgumentList_2E_element & inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList GGS_lexicalFunctionFormalArgumentList::class_func_listWithValue (const GGS_lexicalTypeEnum & inOperand0,
                                                                                                       const GGS_string & inOperand1
                                                                                                       COMMA_LOCATION_ARGS) {
  const GGS_lexicalFunctionFormalArgumentList_2E_element element (inOperand0, inOperand1) ;
  GGS_lexicalFunctionFormalArgumentList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::addAssignOperation (const GGS_lexicalTypeEnum & inOperand0,
                                                                const GGS_string & inOperand1
                                                                COMMA_LOCATION_ARGS) {
  const GGS_lexicalFunctionFormalArgumentList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::setter_append (const GGS_lexicalTypeEnum inOperand0,
                                                           const GGS_string inOperand1,
                                                           Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  const GGS_lexicalFunctionFormalArgumentList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::setter_insertAtIndex (const GGS_lexicalTypeEnum inOperand0,
                                                                  const GGS_string inOperand1,
                                                                  const GGS_uint inInsertionIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  const GGS_lexicalFunctionFormalArgumentList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::setter_removeAtIndex (GGS_lexicalTypeEnum & outOperand0,
                                                                  GGS_string & outOperand1,
                                                                  const GGS_uint inRemoveIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mLexicalType ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mArgumentNameForComment ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::setter_popFirst (GGS_lexicalTypeEnum & outOperand0,
                                                             GGS_string & outOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLexicalType ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mArgumentNameForComment ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::setter_popLast (GGS_lexicalTypeEnum & outOperand0,
                                                            GGS_string & outOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLexicalType ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mArgumentNameForComment ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::method_first (GGS_lexicalTypeEnum & outOperand0,
                                                          GGS_string & outOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLexicalType ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mArgumentNameForComment ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::method_last (GGS_lexicalTypeEnum & outOperand0,
                                                         GGS_string & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLexicalType ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mArgumentNameForComment ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList GGS_lexicalFunctionFormalArgumentList::add_operation (const GGS_lexicalFunctionFormalArgumentList & inOperand,
                                                                                            Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalFunctionFormalArgumentList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList GGS_lexicalFunctionFormalArgumentList::subList (const int32_t inStart,
                                                                                      const int32_t inLength,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lexicalFunctionFormalArgumentList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList GGS_lexicalFunctionFormalArgumentList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lexicalFunctionFormalArgumentList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList GGS_lexicalFunctionFormalArgumentList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lexicalFunctionFormalArgumentList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList GGS_lexicalFunctionFormalArgumentList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lexicalFunctionFormalArgumentList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::plusAssignOperation (const GGS_lexicalFunctionFormalArgumentList inList,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::setter_setMLexicalTypeAtIndex (GGS_lexicalTypeEnum inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLexicalType = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lexicalTypeEnum GGS_lexicalFunctionFormalArgumentList::getter_mLexicalTypeAtIndex (const GGS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_lexicalTypeEnum result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLexicalType ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::setter_setMArgumentNameForCommentAtIndex (GGS_string inOperand,
                                                                                      GGS_uint inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mArgumentNameForComment = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_lexicalFunctionFormalArgumentList::getter_mArgumentNameForCommentAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mArgumentNameForComment ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @lexicalFunctionFormalArgumentList
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalFunctionFormalArgumentList::DownEnumerator_lexicalFunctionFormalArgumentList (const GGS_lexicalFunctionFormalArgumentList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList_2E_element DownEnumerator_lexicalFunctionFormalArgumentList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum DownEnumerator_lexicalFunctionFormalArgumentList::current_mLexicalType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLexicalType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_lexicalFunctionFormalArgumentList::current_mArgumentNameForComment (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mArgumentNameForComment ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @lexicalFunctionFormalArgumentList
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalFunctionFormalArgumentList::UpEnumerator_lexicalFunctionFormalArgumentList (const GGS_lexicalFunctionFormalArgumentList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList_2E_element UpEnumerator_lexicalFunctionFormalArgumentList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum UpEnumerator_lexicalFunctionFormalArgumentList::current_mLexicalType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLexicalType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_lexicalFunctionFormalArgumentList::current_mArgumentNameForComment (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mArgumentNameForComment ;
}




//--------------------------------------------------------------------------------------------------
//     @lexicalFunctionFormalArgumentList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList ("lexicalFunctionFormalArgumentList",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalFunctionFormalArgumentList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalFunctionFormalArgumentList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalFunctionFormalArgumentList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList GGS_lexicalFunctionFormalArgumentList::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_lexicalFunctionFormalArgumentList result ;
  const GGS_lexicalFunctionFormalArgumentList * p = (const GGS_lexicalFunctionFormalArgumentList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalFunctionFormalArgumentList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionFormalArgumentList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @lexicalFunctionMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap::GGS_lexicalFunctionMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap::~ GGS_lexicalFunctionMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap::GGS_lexicalFunctionMap (const GGS_lexicalFunctionMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap & GGS_lexicalFunctionMap::operator = (const GGS_lexicalFunctionMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap GGS_lexicalFunctionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_lexicalFunctionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalFunctionMap::getter_hasKey (const GGS_string & inKey
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalFunctionMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                       const GGS_uint & inLevel
                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalFunctionMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalFunctionMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_lexicalFunctionMap::getter_locationForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_lexicalFunctionMap::getter_keyList (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalFunctionMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_lexicalFunctionMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap::performInsert (const GGS_lexicalFunctionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_lexicalFunctionMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
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
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element>
GGS_lexicalFunctionMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_lexicalFunctionMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element>>
GGS_lexicalFunctionMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_lexicalFunctionMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap_2E_element_3F_ GGS_lexicalFunctionMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalFunctionMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_lexicalFunctionMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_lexicalFunctionMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mLexicalTypeList = info->mProperty_mLexicalTypeList ;
      element.mProperty_mReturnedLexicalType = info->mProperty_mReturnedLexicalType ;
      element.mProperty_mReplacementFunctionName = info->mProperty_mReplacementFunctionName ;
      element.mProperty_mIsExtern = info->mProperty_mIsExtern ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap GGS_lexicalFunctionMap::class_func_mapWithMapToOverride (const GGS_lexicalFunctionMap & inMapToOverride
                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalFunctionMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_lexicalFunctionMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap GGS_lexicalFunctionMap::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_lexicalFunctionMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap::setter_insertKey (GGS_lstring inLKey,
                                               GGS_lexicalFunctionFormalArgumentList inArgument0,
                                               GGS_lexicalTypeEnum inArgument1,
                                               GGS_string inArgument2,
                                               GGS_bool inArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  const GGS_lexicalFunctionMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3) ;
  const char * kInsertErrorMessage = "the '%K' lexical function has been already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap::method_searchKey (GGS_lstring inLKey,
                                               GGS_lexicalFunctionFormalArgumentList & outArgument0,
                                               GGS_lexicalTypeEnum & outArgument1,
                                               GGS_string & outArgument2,
                                               GGS_bool & outArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' lexical function is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    outArgument0 = info->mProperty_mLexicalTypeList ;
    outArgument1 = info->mProperty_mReturnedLexicalType ;
    outArgument2 = info->mProperty_mReplacementFunctionName ;
    outArgument3 = info->mProperty_mIsExtern ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList GGS_lexicalFunctionMap::getter_mLexicalTypeListForKey (const GGS_string & inKey,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_lexicalFunctionFormalArgumentList result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mLexicalTypeList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum GGS_lexicalFunctionMap::getter_mReturnedLexicalTypeForKey (const GGS_string & inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_lexicalTypeEnum result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mReturnedLexicalType ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_lexicalFunctionMap::getter_mReplacementFunctionNameForKey (const GGS_string & inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mReplacementFunctionName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalFunctionMap::getter_mIsExternForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIsExtern ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap::setter_setMLexicalTypeListForKey (GGS_lexicalFunctionFormalArgumentList inValue,
                                                               GGS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexicalFunctionMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mLexicalTypeList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap::setter_setMReturnedLexicalTypeForKey (GGS_lexicalTypeEnum inValue,
                                                                   GGS_string inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexicalFunctionMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mReturnedLexicalType = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap::setter_setMReplacementFunctionNameForKey (GGS_string inValue,
                                                                       GGS_string inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexicalFunctionMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mReplacementFunctionName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap::setter_setMIsExternForKey (GGS_bool inValue,
                                                        GGS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexicalFunctionMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIsExtern = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_lexicalFunctionMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element>> & inArray,
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
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mLexicalTypeList:") ;
    inArray (i COMMA_HERE)->mProperty_mLexicalTypeList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mReturnedLexicalType:") ;
    inArray (i COMMA_HERE)->mProperty_mReturnedLexicalType.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mReplacementFunctionName:") ;
    inArray (i COMMA_HERE)->mProperty_mReplacementFunctionName.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mIsExtern:") ;
    inArray (i COMMA_HERE)->mProperty_mIsExtern.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element>> array = sortedInfoArray () ;
    GGS_lexicalFunctionMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_lexicalFunctionMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_lexicalFunctionMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @lexicalFunctionMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalFunctionMap::DownEnumerator_lexicalFunctionMap (const GGS_lexicalFunctionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap_2E_element DownEnumerator_lexicalFunctionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalFunctionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList DownEnumerator_lexicalFunctionMap::current_mLexicalTypeList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLexicalTypeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum DownEnumerator_lexicalFunctionMap::current_mReturnedLexicalType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mReturnedLexicalType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_lexicalFunctionMap::current_mReplacementFunctionName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mReplacementFunctionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_lexicalFunctionMap::current_mIsExtern (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsExtern ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @lexicalFunctionMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalFunctionMap::UpEnumerator_lexicalFunctionMap (const GGS_lexicalFunctionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap_2E_element UpEnumerator_lexicalFunctionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalFunctionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList UpEnumerator_lexicalFunctionMap::current_mLexicalTypeList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLexicalTypeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum UpEnumerator_lexicalFunctionMap::current_mReturnedLexicalType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mReturnedLexicalType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_lexicalFunctionMap::current_mReplacementFunctionName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mReplacementFunctionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_lexicalFunctionMap::current_mIsExtern (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsExtern ;
}


//--------------------------------------------------------------------------------------------------
//     @lexicalFunctionMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFunctionMap ("lexicalFunctionMap",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalFunctionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalFunctionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalFunctionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap GGS_lexicalFunctionMap::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_lexicalFunctionMap result ;
  const GGS_lexicalFunctionMap * p = (const GGS_lexicalFunctionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalFunctionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@templateDelimitorList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_templateDelimitorList : public CollectionElementPtr {
  public: GGS_templateDelimitorList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_templateDelimitorList (const GGS_lstring & in_mStartString,
                                                      const GGS_lstring & in_mEndString,
                                                      const GGS_bool & in_mPreservesStartDelimiter
                                                      COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_templateDelimitorList (const GGS_templateDelimitorList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_templateDelimitorList::CollectionElementPtr_templateDelimitorList (const GGS_lstring & in_mStartString,
                                                                                        const GGS_lstring & in_mEndString,
                                                                                        const GGS_bool & in_mPreservesStartDelimiter
                                                                                        COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mStartString, in_mEndString, in_mPreservesStartDelimiter) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_templateDelimitorList::CollectionElementPtr_templateDelimitorList (const GGS_templateDelimitorList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mStartString, inElement.mProperty_mEndString, inElement.mProperty_mPreservesStartDelimiter) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_templateDelimitorList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_templateDelimitorList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_templateDelimitorList (mObject.mProperty_mStartString, mObject.mProperty_mEndString, mObject.mProperty_mPreservesStartDelimiter COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @templateDelimitorList
//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList::GGS_templateDelimitorList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList::GGS_templateDelimitorList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_templateDelimitorList * p = (CollectionElementPtr_templateDelimitorList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_templateDelimitorList) ;
    const GGS_templateDelimitorList_2E_element element (p->mObject.mProperty_mStartString, p->mObject.mProperty_mEndString, p->mObject.mProperty_mPreservesStartDelimiter) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                           const GGS_lstring & in_mStartString,
                                                           const GGS_lstring & in_mEndString,
                                                           const GGS_bool & in_mPreservesStartDelimiter
                                                           COMMA_LOCATION_ARGS) {
  CollectionElementPtr_templateDelimitorList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_templateDelimitorList (in_mStartString, in_mEndString, in_mPreservesStartDelimiter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_templateDelimitorList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_templateDelimitorList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mStartString:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mStartString.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEndString:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEndString.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mPreservesStartDelimiter:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mPreservesStartDelimiter.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList GGS_templateDelimitorList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateDelimitorList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::plusPlusAssignOperation (const GGS_templateDelimitorList_2E_element & inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList GGS_templateDelimitorList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                               const GGS_lstring & inOperand1,
                                                                               const GGS_bool & inOperand2
                                                                               COMMA_LOCATION_ARGS) {
  const GGS_templateDelimitorList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_templateDelimitorList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::addAssignOperation (const GGS_lstring & inOperand0,
                                                    const GGS_lstring & inOperand1,
                                                    const GGS_bool & inOperand2
                                                    COMMA_LOCATION_ARGS) {
  const GGS_templateDelimitorList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::setter_append (const GGS_lstring inOperand0,
                                               const GGS_lstring inOperand1,
                                               const GGS_bool inOperand2,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  const GGS_templateDelimitorList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                      const GGS_lstring inOperand1,
                                                      const GGS_bool inOperand2,
                                                      const GGS_uint inInsertionIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  const GGS_templateDelimitorList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                      GGS_lstring & outOperand1,
                                                      GGS_bool & outOperand2,
                                                      const GGS_uint inRemoveIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mStartString ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mEndString ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mPreservesStartDelimiter ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::setter_popFirst (GGS_lstring & outOperand0,
                                                 GGS_lstring & outOperand1,
                                                 GGS_bool & outOperand2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mStartString ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mEndString ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mPreservesStartDelimiter ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::setter_popLast (GGS_lstring & outOperand0,
                                                GGS_lstring & outOperand1,
                                                GGS_bool & outOperand2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mStartString ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mEndString ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mPreservesStartDelimiter ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::method_first (GGS_lstring & outOperand0,
                                              GGS_lstring & outOperand1,
                                              GGS_bool & outOperand2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mStartString ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mEndString ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mPreservesStartDelimiter ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::method_last (GGS_lstring & outOperand0,
                                             GGS_lstring & outOperand1,
                                             GGS_bool & outOperand2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mStartString ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mEndString ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mPreservesStartDelimiter ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList GGS_templateDelimitorList::add_operation (const GGS_templateDelimitorList & inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_templateDelimitorList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList GGS_templateDelimitorList::subList (const int32_t inStart,
                                                              const int32_t inLength,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_templateDelimitorList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList GGS_templateDelimitorList::getter_subListWithRange (const GGS_range & inRange,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_templateDelimitorList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList GGS_templateDelimitorList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_templateDelimitorList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList GGS_templateDelimitorList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_templateDelimitorList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::plusAssignOperation (const GGS_templateDelimitorList inList,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::setter_setMStartStringAtIndex (GGS_lstring inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mStartString = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_templateDelimitorList::getter_mStartStringAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mStartString ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::setter_setMEndStringAtIndex (GGS_lstring inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEndString = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_templateDelimitorList::getter_mEndStringAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEndString ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::setter_setMPreservesStartDelimiterAtIndex (GGS_bool inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mPreservesStartDelimiter = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_bool GGS_templateDelimitorList::getter_mPreservesStartDelimiterAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mPreservesStartDelimiter ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @templateDelimitorList
//--------------------------------------------------------------------------------------------------

DownEnumerator_templateDelimitorList::DownEnumerator_templateDelimitorList (const GGS_templateDelimitorList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList_2E_element DownEnumerator_templateDelimitorList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_templateDelimitorList::current_mStartString (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mStartString ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_templateDelimitorList::current_mEndString (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndString ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_templateDelimitorList::current_mPreservesStartDelimiter (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPreservesStartDelimiter ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @templateDelimitorList
//--------------------------------------------------------------------------------------------------

UpEnumerator_templateDelimitorList::UpEnumerator_templateDelimitorList (const GGS_templateDelimitorList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList_2E_element UpEnumerator_templateDelimitorList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_templateDelimitorList::current_mStartString (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mStartString ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_templateDelimitorList::current_mEndString (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndString ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_templateDelimitorList::current_mPreservesStartDelimiter (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPreservesStartDelimiter ;
}




//--------------------------------------------------------------------------------------------------
//     @templateDelimitorList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateDelimitorList ("templateDelimitorList",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateDelimitorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateDelimitorList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateDelimitorList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateDelimitorList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList GGS_templateDelimitorList::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_templateDelimitorList result ;
  const GGS_templateDelimitorList * p = (const GGS_templateDelimitorList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateDelimitorList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateDelimitorList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @styleMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_styleMap::GGS_styleMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap::~ GGS_styleMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap::GGS_styleMap (const GGS_styleMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap & GGS_styleMap::operator = (const GGS_styleMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap GGS_styleMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_styleMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_styleMap::getter_hasKey (const GGS_string & inKey
                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_styleMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                             const GGS_uint & inLevel
                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_styleMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_styleMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_styleMap::getter_locationForKey (const GGS_string & inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_styleMap::getter_keyList (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_styleMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_styleMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_styleMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_styleMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_styleMap::performInsert (const GGS_styleMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_styleMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
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
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element>
GGS_styleMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_styleMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element>>
GGS_styleMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_styleMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_styleMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap_2E_element_3F_ GGS_styleMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_styleMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_styleMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_styleMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mComment = info->mProperty_mComment ;
      element.mProperty_mStyleIndex = info->mProperty_mStyleIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap GGS_styleMap::class_func_mapWithMapToOverride (const GGS_styleMap & inMapToOverride
                                                            COMMA_LOCATION_ARGS) {
  GGS_styleMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_styleMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap GGS_styleMap::getter_overriddenMap (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_styleMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_styleMap::setter_insertKey (GGS_lstring inLKey,
                                     GGS_lstring inArgument0,
                                     GGS_uint inArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  const GGS_styleMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' style is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_styleMap::method_searchKey (GGS_lstring inLKey,
                                     GGS_lstring & outArgument0,
                                     GGS_uint & outArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' style is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mComment ;
    outArgument1 = info->mProperty_mStyleIndex ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_styleMap::getter_mCommentForKey (const GGS_string & inKey,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mComment ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_styleMap::getter_mStyleIndexForKey (const GGS_string & inKey,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mStyleIndex ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_styleMap::setter_setMCommentForKey (GGS_lstring inValue,
                                             GGS_string inKey,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_styleMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mComment = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_styleMap::setter_setMStyleIndexForKey (GGS_uint inValue,
                                                GGS_string inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_styleMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mStyleIndex = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_styleMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element>> & inArray,
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
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mComment:") ;
    inArray (i COMMA_HERE)->mProperty_mComment.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mStyleIndex:") ;
    inArray (i COMMA_HERE)->mProperty_mStyleIndex.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_styleMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element>> array = sortedInfoArray () ;
    GGS_styleMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_styleMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_styleMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @styleMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_styleMap::DownEnumerator_styleMap (const GGS_styleMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap_2E_element DownEnumerator_styleMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_styleMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_styleMap::current_mComment (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mComment ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_styleMap::current_mStyleIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mStyleIndex ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @styleMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_styleMap::UpEnumerator_styleMap (const GGS_styleMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap_2E_element UpEnumerator_styleMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_styleMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_styleMap::current_mComment (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mComment ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_styleMap::current_mStyleIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mStyleIndex ;
}


//--------------------------------------------------------------------------------------------------
//     @styleMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_styleMap ("styleMap",
                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_styleMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_styleMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_styleMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_styleMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap GGS_styleMap::extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GGS_styleMap result ;
  const GGS_styleMap * p = (const GGS_styleMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_styleMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("styleMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @lexicalTagMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap::GGS_lexicalTagMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap::~ GGS_lexicalTagMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap::GGS_lexicalTagMap (const GGS_lexicalTagMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap & GGS_lexicalTagMap::operator = (const GGS_lexicalTagMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap GGS_lexicalTagMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_lexicalTagMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalTagMap::getter_hasKey (const GGS_string & inKey
                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalTagMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                  const GGS_uint & inLevel
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalTagMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalTagMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_lexicalTagMap::getter_locationForKey (const GGS_string & inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_lexicalTagMap::getter_keyList (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalTagMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTagMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTagMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_lexicalTagMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTagMap::performInsert (const GGS_lexicalTagMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_lexicalTagMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
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
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>
GGS_lexicalTagMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_lexicalTagMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>>
GGS_lexicalTagMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_lexicalTagMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTagMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap_2E_element_3F_ GGS_lexicalTagMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalTagMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_lexicalTagMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_lexicalTagMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap GGS_lexicalTagMap::class_func_mapWithMapToOverride (const GGS_lexicalTagMap & inMapToOverride
                                                                      COMMA_LOCATION_ARGS) {
  GGS_lexicalTagMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_lexicalTagMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap GGS_lexicalTagMap::getter_overriddenMap (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_lexicalTagMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTagMap::setter_insertKey (GGS_lstring inLKey,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  const GGS_lexicalTagMap_2E_element element (inLKey) ;
  const char * kInsertErrorMessage = "the '%K' tag is already declared in %L" ;
  const char * kShadowErrorMessage = "the '%K' tag declaration shadows the tag declared in %L" ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTagMap::method_searchKey (GGS_lstring inLKey,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' tag is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
  }else{
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_lexicalTagMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>> & inArray,
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
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTagMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>> array = sortedInfoArray () ;
    GGS_lexicalTagMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_lexicalTagMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_lexicalTagMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @lexicalTagMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalTagMap::DownEnumerator_lexicalTagMap (const GGS_lexicalTagMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap_2E_element DownEnumerator_lexicalTagMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalTagMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @lexicalTagMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalTagMap::UpEnumerator_lexicalTagMap (const GGS_lexicalTagMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap_2E_element UpEnumerator_lexicalTagMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalTagMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}


//--------------------------------------------------------------------------------------------------
//     @lexicalTagMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalTagMap ("lexicalTagMap",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalTagMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTagMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalTagMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalTagMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap GGS_lexicalTagMap::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_lexicalTagMap result ;
  const GGS_lexicalTagMap * p = (const GGS_lexicalTagMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalTagMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTagMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @terminalMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_terminalMap::GGS_terminalMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalMap::~ GGS_terminalMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalMap::GGS_terminalMap (const GGS_terminalMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalMap & GGS_terminalMap::operator = (const GGS_terminalMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalMap GGS_terminalMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_terminalMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_terminalMap::getter_hasKey (const GGS_string & inKey
                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_terminalMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                const GGS_uint & inLevel
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_terminalMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_terminalMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_terminalMap::getter_locationForKey (const GGS_string & inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_terminalMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_terminalMap::getter_keyList (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_terminalMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_terminalMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalMap::performInsert (const GGS_terminalMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_terminalMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
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
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_terminalMap_2E_element>
GGS_terminalMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_terminalMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_terminalMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_terminalMap_2E_element>>
GGS_terminalMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_terminalMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_terminalMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalMap_2E_element_3F_ GGS_terminalMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_terminalMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_terminalMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_terminalMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_terminalMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mSentAttributeList = info->mProperty_mSentAttributeList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalMap GGS_terminalMap::class_func_mapWithMapToOverride (const GGS_terminalMap & inMapToOverride
                                                                  COMMA_LOCATION_ARGS) {
  GGS_terminalMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_terminalMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalMap GGS_terminalMap::getter_overriddenMap (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_terminalMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalMap::setter_insertKey (GGS_lstring inLKey,
                                        GGS_lexicalSentValueList inArgument0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  const GGS_terminalMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' terminal has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalMap::method_searchKey (GGS_lstring inLKey,
                                        GGS_lexicalSentValueList & outArgument0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_terminalMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' terminal is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mSentAttributeList ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList GGS_terminalMap::getter_mSentAttributeListForKey (const GGS_string & inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_lexicalSentValueList result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_terminalMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mSentAttributeList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_terminalMap::setter_setMSentAttributeListForKey (GGS_lexicalSentValueList inValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_terminalMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mSentAttributeList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_terminalMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_terminalMap_2E_element>> & inArray,
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
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mSentAttributeList:") ;
    inArray (i COMMA_HERE)->mProperty_mSentAttributeList.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_terminalMap_2E_element>> array = sortedInfoArray () ;
    GGS_terminalMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_terminalMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_terminalMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @terminalMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_terminalMap::DownEnumerator_terminalMap (const GGS_terminalMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalMap_2E_element DownEnumerator_terminalMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_terminalMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList DownEnumerator_terminalMap::current_mSentAttributeList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSentAttributeList ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @terminalMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_terminalMap::UpEnumerator_terminalMap (const GGS_terminalMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalMap_2E_element UpEnumerator_terminalMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_terminalMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList UpEnumerator_terminalMap::current_mSentAttributeList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSentAttributeList ;
}


//--------------------------------------------------------------------------------------------------
//     @terminalMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalMap ("terminalMap",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalMap GGS_terminalMap::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_terminalMap result ;
  const GGS_terminalMap * p = (const GGS_terminalMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @lexicalAttributeMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeMap::GGS_lexicalAttributeMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeMap::~ GGS_lexicalAttributeMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeMap::GGS_lexicalAttributeMap (const GGS_lexicalAttributeMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeMap & GGS_lexicalAttributeMap::operator = (const GGS_lexicalAttributeMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeMap GGS_lexicalAttributeMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_lexicalAttributeMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalAttributeMap::getter_hasKey (const GGS_string & inKey
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalAttributeMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                        const GGS_uint & inLevel
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalAttributeMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalAttributeMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_lexicalAttributeMap::getter_locationForKey (const GGS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_lexicalAttributeMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_lexicalAttributeMap::getter_keyList (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalAttributeMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_lexicalAttributeMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeMap::performInsert (const GGS_lexicalAttributeMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_lexicalAttributeMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
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
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_lexicalAttributeMap_2E_element>
GGS_lexicalAttributeMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_lexicalAttributeMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_lexicalAttributeMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalAttributeMap_2E_element>>
GGS_lexicalAttributeMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalAttributeMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_lexicalAttributeMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeMap_2E_element_3F_ GGS_lexicalAttributeMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalAttributeMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_lexicalAttributeMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_lexicalAttributeMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_lexicalAttributeMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mLexicalType = info->mProperty_mLexicalType ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeMap GGS_lexicalAttributeMap::class_func_mapWithMapToOverride (const GGS_lexicalAttributeMap & inMapToOverride
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_lexicalAttributeMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_lexicalAttributeMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeMap GGS_lexicalAttributeMap::getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_lexicalAttributeMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeMap::setter_insertKey (GGS_lstring inLKey,
                                                GGS_lexicalTypeEnum inArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const GGS_lexicalAttributeMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' lexical attribute has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeMap::method_searchKey (GGS_lstring inLKey,
                                                GGS_lexicalTypeEnum & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_lexicalAttributeMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' lexical attribute is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mLexicalType ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum GGS_lexicalAttributeMap::getter_mLexicalTypeForKey (const GGS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_lexicalTypeEnum result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexicalAttributeMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mLexicalType ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeMap::setter_setMLexicalTypeForKey (GGS_lexicalTypeEnum inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexicalAttributeMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mLexicalType = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_lexicalAttributeMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalAttributeMap_2E_element>> & inArray,
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
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mLexicalType:") ;
    inArray (i COMMA_HERE)->mProperty_mLexicalType.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalAttributeMap_2E_element>> array = sortedInfoArray () ;
    GGS_lexicalAttributeMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_lexicalAttributeMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_lexicalAttributeMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @lexicalAttributeMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalAttributeMap::DownEnumerator_lexicalAttributeMap (const GGS_lexicalAttributeMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeMap_2E_element DownEnumerator_lexicalAttributeMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalAttributeMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum DownEnumerator_lexicalAttributeMap::current_mLexicalType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLexicalType ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @lexicalAttributeMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalAttributeMap::UpEnumerator_lexicalAttributeMap (const GGS_lexicalAttributeMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeMap_2E_element UpEnumerator_lexicalAttributeMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalAttributeMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum UpEnumerator_lexicalAttributeMap::current_mLexicalType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLexicalType ;
}


//--------------------------------------------------------------------------------------------------
//     @lexicalAttributeMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalAttributeMap ("lexicalAttributeMap",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalAttributeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalAttributeMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalAttributeMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeMap GGS_lexicalAttributeMap::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalAttributeMap result ;
  const GGS_lexicalAttributeMap * p = (const GGS_lexicalAttributeMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalAttributeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @projectQualifiedFeatureMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap::GGS_projectQualifiedFeatureMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap::~ GGS_projectQualifiedFeatureMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap::GGS_projectQualifiedFeatureMap (const GGS_projectQualifiedFeatureMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap & GGS_projectQualifiedFeatureMap::operator = (const GGS_projectQualifiedFeatureMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap GGS_projectQualifiedFeatureMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_projectQualifiedFeatureMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_projectQualifiedFeatureMap::getter_hasKey (const GGS_string & inKey
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_projectQualifiedFeatureMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                               const GGS_uint & inLevel
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_projectQualifiedFeatureMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_projectQualifiedFeatureMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_projectQualifiedFeatureMap::getter_locationForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_projectQualifiedFeatureMap::getter_keyList (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_projectQualifiedFeatureMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectQualifiedFeatureMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectQualifiedFeatureMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_projectQualifiedFeatureMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectQualifiedFeatureMap::performInsert (const GGS_projectQualifiedFeatureMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_projectQualifiedFeatureMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
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
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element>
GGS_projectQualifiedFeatureMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_projectQualifiedFeatureMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element>>
GGS_projectQualifiedFeatureMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_projectQualifiedFeatureMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectQualifiedFeatureMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap_2E_element_3F_ GGS_projectQualifiedFeatureMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_projectQualifiedFeatureMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_projectQualifiedFeatureMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_projectQualifiedFeatureMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mFeatureValue = info->mProperty_mFeatureValue ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap GGS_projectQualifiedFeatureMap::class_func_mapWithMapToOverride (const GGS_projectQualifiedFeatureMap & inMapToOverride
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_projectQualifiedFeatureMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_projectQualifiedFeatureMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap GGS_projectQualifiedFeatureMap::getter_overriddenMap (Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_projectQualifiedFeatureMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectQualifiedFeatureMap::setter_insertKey (GGS_lstring inLKey,
                                                       GGS_lstring inArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  const GGS_projectQualifiedFeatureMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' attribute is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectQualifiedFeatureMap::method_searchKey (GGS_lstring inLKey,
                                                       GGS_lstring & outArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' attribute is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mFeatureValue ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_projectQualifiedFeatureMap::getter_mFeatureValueForKey (const GGS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mFeatureValue ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_projectQualifiedFeatureMap::setter_setMFeatureValueForKey (GGS_lstring inValue,
                                                                    GGS_string inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_projectQualifiedFeatureMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mFeatureValue = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_projectQualifiedFeatureMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element>> & inArray,
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
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mFeatureValue:") ;
    inArray (i COMMA_HERE)->mProperty_mFeatureValue.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_projectQualifiedFeatureMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element>> array = sortedInfoArray () ;
    GGS_projectQualifiedFeatureMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_projectQualifiedFeatureMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_projectQualifiedFeatureMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @projectQualifiedFeatureMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_projectQualifiedFeatureMap::DownEnumerator_projectQualifiedFeatureMap (const GGS_projectQualifiedFeatureMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap_2E_element DownEnumerator_projectQualifiedFeatureMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_projectQualifiedFeatureMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_projectQualifiedFeatureMap::current_mFeatureValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFeatureValue ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @projectQualifiedFeatureMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_projectQualifiedFeatureMap::UpEnumerator_projectQualifiedFeatureMap (const GGS_projectQualifiedFeatureMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap_2E_element UpEnumerator_projectQualifiedFeatureMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_projectQualifiedFeatureMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_projectQualifiedFeatureMap::current_mFeatureValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFeatureValue ;
}


//--------------------------------------------------------------------------------------------------
//     @projectQualifiedFeatureMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_projectQualifiedFeatureMap ("projectQualifiedFeatureMap",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_projectQualifiedFeatureMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_projectQualifiedFeatureMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_projectQualifiedFeatureMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_projectQualifiedFeatureMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap GGS_projectQualifiedFeatureMap::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_projectQualifiedFeatureMap result ;
  const GGS_projectQualifiedFeatureMap * p = (const GGS_projectQualifiedFeatureMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_projectQualifiedFeatureMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("projectQualifiedFeatureMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@XCodeGroupList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_XCodeGroupList : public CollectionElementPtr {
  public: GGS_XCodeGroupList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_XCodeGroupList (const GGS_string & in_mGroupReference,
                                               const GGS_string & in_mGroupName,
                                               const GGS_string & in_mGroupPath,
                                               const GGS_stringlist & in_mChildrenRefs
                                               COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_XCodeGroupList (const GGS_XCodeGroupList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_XCodeGroupList::CollectionElementPtr_XCodeGroupList (const GGS_string & in_mGroupReference,
                                                                          const GGS_string & in_mGroupName,
                                                                          const GGS_string & in_mGroupPath,
                                                                          const GGS_stringlist & in_mChildrenRefs
                                                                          COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mGroupReference, in_mGroupName, in_mGroupPath, in_mChildrenRefs) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_XCodeGroupList::CollectionElementPtr_XCodeGroupList (const GGS_XCodeGroupList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mGroupReference, inElement.mProperty_mGroupName, inElement.mProperty_mGroupPath, inElement.mProperty_mChildrenRefs) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_XCodeGroupList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_XCodeGroupList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_XCodeGroupList (mObject.mProperty_mGroupReference, mObject.mProperty_mGroupName, mObject.mProperty_mGroupPath, mObject.mProperty_mChildrenRefs COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @XCodeGroupList
//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList::GGS_XCodeGroupList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList::GGS_XCodeGroupList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_XCodeGroupList * p = (CollectionElementPtr_XCodeGroupList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_XCodeGroupList) ;
    const GGS_XCodeGroupList_2E_element element (p->mObject.mProperty_mGroupReference, p->mObject.mProperty_mGroupName, p->mObject.mProperty_mGroupPath, p->mObject.mProperty_mChildrenRefs) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                    const GGS_string & in_mGroupReference,
                                                    const GGS_string & in_mGroupName,
                                                    const GGS_string & in_mGroupPath,
                                                    const GGS_stringlist & in_mChildrenRefs
                                                    COMMA_LOCATION_ARGS) {
  CollectionElementPtr_XCodeGroupList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_XCodeGroupList (in_mGroupReference, in_mGroupName, in_mGroupPath, in_mChildrenRefs COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_XCodeGroupList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_XCodeGroupList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::description (String & ioString,
                                      const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mGroupReference:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mGroupReference.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mGroupName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mGroupName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mGroupPath:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mGroupPath.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mChildrenRefs:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mChildrenRefs.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XCodeGroupList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::plusPlusAssignOperation (const GGS_XCodeGroupList_2E_element & inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                 const GGS_string & inOperand1,
                                                                 const GGS_string & inOperand2,
                                                                 const GGS_stringlist & inOperand3
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_XCodeGroupList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  GGS_XCodeGroupList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::addAssignOperation (const GGS_string & inOperand0,
                                             const GGS_string & inOperand1,
                                             const GGS_string & inOperand2,
                                             const GGS_stringlist & inOperand3
                                             COMMA_LOCATION_ARGS) {
  const GGS_XCodeGroupList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_append (const GGS_string inOperand0,
                                        const GGS_string inOperand1,
                                        const GGS_string inOperand2,
                                        const GGS_stringlist inOperand3,
                                        Compiler * /* inCompiler */
                                        COMMA_LOCATION_ARGS) {
  const GGS_XCodeGroupList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_insertAtIndex (const GGS_string inOperand0,
                                               const GGS_string inOperand1,
                                               const GGS_string inOperand2,
                                               const GGS_stringlist inOperand3,
                                               const GGS_uint inInsertionIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  const GGS_XCodeGroupList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_removeAtIndex (GGS_string & outOperand0,
                                               GGS_string & outOperand1,
                                               GGS_string & outOperand2,
                                               GGS_stringlist & outOperand3,
                                               const GGS_uint inRemoveIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mGroupReference ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mGroupName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mGroupPath ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mChildrenRefs ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_popFirst (GGS_string & outOperand0,
                                          GGS_string & outOperand1,
                                          GGS_string & outOperand2,
                                          GGS_stringlist & outOperand3,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mGroupReference ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mGroupName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mGroupPath ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mChildrenRefs ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_popLast (GGS_string & outOperand0,
                                         GGS_string & outOperand1,
                                         GGS_string & outOperand2,
                                         GGS_stringlist & outOperand3,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mGroupReference ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mGroupName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mGroupPath ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mChildrenRefs ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::method_first (GGS_string & outOperand0,
                                       GGS_string & outOperand1,
                                       GGS_string & outOperand2,
                                       GGS_stringlist & outOperand3,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mGroupReference ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mGroupName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mGroupPath ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mChildrenRefs ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::method_last (GGS_string & outOperand0,
                                      GGS_string & outOperand1,
                                      GGS_string & outOperand2,
                                      GGS_stringlist & outOperand3,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mGroupReference ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mGroupName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mGroupPath ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mChildrenRefs ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::add_operation (const GGS_XCodeGroupList & inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_XCodeGroupList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::subList (const int32_t inStart,
                                                const int32_t inLength,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  GGS_XCodeGroupList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::getter_subListWithRange (const GGS_range & inRange,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_XCodeGroupList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_XCodeGroupList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::getter_subListToIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_XCodeGroupList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::plusAssignOperation (const GGS_XCodeGroupList inList,
                                              Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_setMGroupReferenceAtIndex (GGS_string inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mGroupReference = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_XCodeGroupList::getter_mGroupReferenceAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mGroupReference ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_setMGroupNameAtIndex (GGS_string inOperand,
                                                      GGS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mGroupName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_XCodeGroupList::getter_mGroupNameAtIndex (const GGS_uint & inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mGroupName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_setMGroupPathAtIndex (GGS_string inOperand,
                                                      GGS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mGroupPath = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_XCodeGroupList::getter_mGroupPathAtIndex (const GGS_uint & inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mGroupPath ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_setMChildrenRefsAtIndex (GGS_stringlist inOperand,
                                                         GGS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mChildrenRefs = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_stringlist GGS_XCodeGroupList::getter_mChildrenRefsAtIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mChildrenRefs ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @XCodeGroupList
//--------------------------------------------------------------------------------------------------

DownEnumerator_XCodeGroupList::DownEnumerator_XCodeGroupList (const GGS_XCodeGroupList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList_2E_element DownEnumerator_XCodeGroupList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeGroupList::current_mGroupReference (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGroupReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeGroupList::current_mGroupName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGroupName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeGroupList::current_mGroupPath (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGroupPath ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeGroupList::current_mChildrenRefs (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mChildrenRefs ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @XCodeGroupList
//--------------------------------------------------------------------------------------------------

UpEnumerator_XCodeGroupList::UpEnumerator_XCodeGroupList (const GGS_XCodeGroupList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList_2E_element UpEnumerator_XCodeGroupList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeGroupList::current_mGroupReference (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGroupReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeGroupList::current_mGroupName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGroupName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeGroupList::current_mGroupPath (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGroupPath ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeGroupList::current_mChildrenRefs (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mChildrenRefs ;
}




//--------------------------------------------------------------------------------------------------
//     @XCodeGroupList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeGroupList ("XCodeGroupList",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_XCodeGroupList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeGroupList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_XCodeGroupList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_XCodeGroupList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_XCodeGroupList result ;
  const GGS_XCodeGroupList * p = (const GGS_XCodeGroupList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_XCodeGroupList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeGroupList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@XCodeToolTargetList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_XCodeToolTargetList : public CollectionElementPtr {
  public: GGS_XCodeToolTargetList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_XCodeToolTargetList (const GGS_string & in_mTargetRef,
                                                    const GGS_string & in_mTargetName,
                                                    const GGS_string & in_mProductFileReference,
                                                    const GGS_string & in_mProductFileName,
                                                    const GGS_stringlist & in_mBuildPhaseRefList,
                                                    const GGS_string & in_mBuildPhaseRef,
                                                    const GGS_string & in_mBuildConfigurationListRef,
                                                    const GGS_stringlist & in_mBuildConfigurationSettingList,
                                                    const GGS_string & in_mBuildConfigurationRef,
                                                    const GGS_stringlist & in_mFrameworksFileRefList,
                                                    const GGS_string & in_mFrameworkBuildPhaseRef
                                                    COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_XCodeToolTargetList (const GGS_XCodeToolTargetList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_XCodeToolTargetList::CollectionElementPtr_XCodeToolTargetList (const GGS_string & in_mTargetRef,
                                                                                    const GGS_string & in_mTargetName,
                                                                                    const GGS_string & in_mProductFileReference,
                                                                                    const GGS_string & in_mProductFileName,
                                                                                    const GGS_stringlist & in_mBuildPhaseRefList,
                                                                                    const GGS_string & in_mBuildPhaseRef,
                                                                                    const GGS_string & in_mBuildConfigurationListRef,
                                                                                    const GGS_stringlist & in_mBuildConfigurationSettingList,
                                                                                    const GGS_string & in_mBuildConfigurationRef,
                                                                                    const GGS_stringlist & in_mFrameworksFileRefList,
                                                                                    const GGS_string & in_mFrameworkBuildPhaseRef
                                                                                    COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mTargetRef, in_mTargetName, in_mProductFileReference, in_mProductFileName, in_mBuildPhaseRefList, in_mBuildPhaseRef, in_mBuildConfigurationListRef, in_mBuildConfigurationSettingList, in_mBuildConfigurationRef, in_mFrameworksFileRefList, in_mFrameworkBuildPhaseRef) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_XCodeToolTargetList::CollectionElementPtr_XCodeToolTargetList (const GGS_XCodeToolTargetList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mTargetRef, inElement.mProperty_mTargetName, inElement.mProperty_mProductFileReference, inElement.mProperty_mProductFileName, inElement.mProperty_mBuildPhaseRefList, inElement.mProperty_mBuildPhaseRef, inElement.mProperty_mBuildConfigurationListRef, inElement.mProperty_mBuildConfigurationSettingList, inElement.mProperty_mBuildConfigurationRef, inElement.mProperty_mFrameworksFileRefList, inElement.mProperty_mFrameworkBuildPhaseRef) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_XCodeToolTargetList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_XCodeToolTargetList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_XCodeToolTargetList (mObject.mProperty_mTargetRef, mObject.mProperty_mTargetName, mObject.mProperty_mProductFileReference, mObject.mProperty_mProductFileName, mObject.mProperty_mBuildPhaseRefList, mObject.mProperty_mBuildPhaseRef, mObject.mProperty_mBuildConfigurationListRef, mObject.mProperty_mBuildConfigurationSettingList, mObject.mProperty_mBuildConfigurationRef, mObject.mProperty_mFrameworksFileRefList, mObject.mProperty_mFrameworkBuildPhaseRef COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @XCodeToolTargetList
//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList::GGS_XCodeToolTargetList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList::GGS_XCodeToolTargetList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_XCodeToolTargetList * p = (CollectionElementPtr_XCodeToolTargetList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_XCodeToolTargetList) ;
    const GGS_XCodeToolTargetList_2E_element element (p->mObject.mProperty_mTargetRef, p->mObject.mProperty_mTargetName, p->mObject.mProperty_mProductFileReference, p->mObject.mProperty_mProductFileName, p->mObject.mProperty_mBuildPhaseRefList, p->mObject.mProperty_mBuildPhaseRef, p->mObject.mProperty_mBuildConfigurationListRef, p->mObject.mProperty_mBuildConfigurationSettingList, p->mObject.mProperty_mBuildConfigurationRef, p->mObject.mProperty_mFrameworksFileRefList, p->mObject.mProperty_mFrameworkBuildPhaseRef) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                         const GGS_string & in_mTargetRef,
                                                         const GGS_string & in_mTargetName,
                                                         const GGS_string & in_mProductFileReference,
                                                         const GGS_string & in_mProductFileName,
                                                         const GGS_stringlist & in_mBuildPhaseRefList,
                                                         const GGS_string & in_mBuildPhaseRef,
                                                         const GGS_string & in_mBuildConfigurationListRef,
                                                         const GGS_stringlist & in_mBuildConfigurationSettingList,
                                                         const GGS_string & in_mBuildConfigurationRef,
                                                         const GGS_stringlist & in_mFrameworksFileRefList,
                                                         const GGS_string & in_mFrameworkBuildPhaseRef
                                                         COMMA_LOCATION_ARGS) {
  CollectionElementPtr_XCodeToolTargetList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_XCodeToolTargetList (in_mTargetRef, in_mTargetName, in_mProductFileReference, in_mProductFileName, in_mBuildPhaseRefList, in_mBuildPhaseRef, in_mBuildConfigurationListRef, in_mBuildConfigurationSettingList, in_mBuildConfigurationRef, in_mFrameworksFileRefList, in_mFrameworkBuildPhaseRef COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_XCodeToolTargetList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_XCodeToolTargetList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTargetRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTargetRef.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTargetName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTargetName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mProductFileReference:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mProductFileReference.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mProductFileName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mProductFileName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBuildPhaseRefList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBuildPhaseRefList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBuildPhaseRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBuildPhaseRef.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBuildConfigurationListRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBuildConfigurationListRef.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBuildConfigurationSettingList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBuildConfigurationRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBuildConfigurationRef.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFrameworksFileRefList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFrameworksFileRefList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFrameworkBuildPhaseRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XCodeToolTargetList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::plusPlusAssignOperation (const GGS_XCodeToolTargetList_2E_element & inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                           const GGS_string & inOperand1,
                                                                           const GGS_string & inOperand2,
                                                                           const GGS_string & inOperand3,
                                                                           const GGS_stringlist & inOperand4,
                                                                           const GGS_string & inOperand5,
                                                                           const GGS_string & inOperand6,
                                                                           const GGS_stringlist & inOperand7,
                                                                           const GGS_string & inOperand8,
                                                                           const GGS_stringlist & inOperand9,
                                                                           const GGS_string & inOperand10
                                                                           COMMA_LOCATION_ARGS) {
  const GGS_XCodeToolTargetList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
  GGS_XCodeToolTargetList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::addAssignOperation (const GGS_string & inOperand0,
                                                  const GGS_string & inOperand1,
                                                  const GGS_string & inOperand2,
                                                  const GGS_string & inOperand3,
                                                  const GGS_stringlist & inOperand4,
                                                  const GGS_string & inOperand5,
                                                  const GGS_string & inOperand6,
                                                  const GGS_stringlist & inOperand7,
                                                  const GGS_string & inOperand8,
                                                  const GGS_stringlist & inOperand9,
                                                  const GGS_string & inOperand10
                                                  COMMA_LOCATION_ARGS) {
  const GGS_XCodeToolTargetList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_append (const GGS_string inOperand0,
                                             const GGS_string inOperand1,
                                             const GGS_string inOperand2,
                                             const GGS_string inOperand3,
                                             const GGS_stringlist inOperand4,
                                             const GGS_string inOperand5,
                                             const GGS_string inOperand6,
                                             const GGS_stringlist inOperand7,
                                             const GGS_string inOperand8,
                                             const GGS_stringlist inOperand9,
                                             const GGS_string inOperand10,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  const GGS_XCodeToolTargetList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_insertAtIndex (const GGS_string inOperand0,
                                                    const GGS_string inOperand1,
                                                    const GGS_string inOperand2,
                                                    const GGS_string inOperand3,
                                                    const GGS_stringlist inOperand4,
                                                    const GGS_string inOperand5,
                                                    const GGS_string inOperand6,
                                                    const GGS_stringlist inOperand7,
                                                    const GGS_string inOperand8,
                                                    const GGS_stringlist inOperand9,
                                                    const GGS_string inOperand10,
                                                    const GGS_uint inInsertionIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  const GGS_XCodeToolTargetList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_removeAtIndex (GGS_string & outOperand0,
                                                    GGS_string & outOperand1,
                                                    GGS_string & outOperand2,
                                                    GGS_string & outOperand3,
                                                    GGS_stringlist & outOperand4,
                                                    GGS_string & outOperand5,
                                                    GGS_string & outOperand6,
                                                    GGS_stringlist & outOperand7,
                                                    GGS_string & outOperand8,
                                                    GGS_stringlist & outOperand9,
                                                    GGS_string & outOperand10,
                                                    const GGS_uint inRemoveIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mTargetRef ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mTargetName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mProductFileReference ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mProductFileName ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mBuildPhaseRefList ;
      outOperand5 = mArray (idx COMMA_HERE).mProperty_mBuildPhaseRef ;
      outOperand6 = mArray (idx COMMA_HERE).mProperty_mBuildConfigurationListRef ;
      outOperand7 = mArray (idx COMMA_HERE).mProperty_mBuildConfigurationSettingList ;
      outOperand8 = mArray (idx COMMA_HERE).mProperty_mBuildConfigurationRef ;
      outOperand9 = mArray (idx COMMA_HERE).mProperty_mFrameworksFileRefList ;
      outOperand10 = mArray (idx COMMA_HERE).mProperty_mFrameworkBuildPhaseRef ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_popFirst (GGS_string & outOperand0,
                                               GGS_string & outOperand1,
                                               GGS_string & outOperand2,
                                               GGS_string & outOperand3,
                                               GGS_stringlist & outOperand4,
                                               GGS_string & outOperand5,
                                               GGS_string & outOperand6,
                                               GGS_stringlist & outOperand7,
                                               GGS_string & outOperand8,
                                               GGS_stringlist & outOperand9,
                                               GGS_string & outOperand10,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTargetRef ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mTargetName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mProductFileReference ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mProductFileName ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mBuildPhaseRefList ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mBuildPhaseRef ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationListRef ;
      outOperand7 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationSettingList ;
      outOperand8 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationRef ;
      outOperand9 = mArray (0 COMMA_THERE).mProperty_mFrameworksFileRefList ;
      outOperand10 = mArray (0 COMMA_THERE).mProperty_mFrameworkBuildPhaseRef ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_popLast (GGS_string & outOperand0,
                                              GGS_string & outOperand1,
                                              GGS_string & outOperand2,
                                              GGS_string & outOperand3,
                                              GGS_stringlist & outOperand4,
                                              GGS_string & outOperand5,
                                              GGS_string & outOperand6,
                                              GGS_stringlist & outOperand7,
                                              GGS_string & outOperand8,
                                              GGS_stringlist & outOperand9,
                                              GGS_string & outOperand10,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTargetRef ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mTargetName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mProductFileReference ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mProductFileName ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mBuildPhaseRefList ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mBuildPhaseRef ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mBuildConfigurationListRef ;
      outOperand7 = mArray.lastObject (HERE).mProperty_mBuildConfigurationSettingList ;
      outOperand8 = mArray.lastObject (HERE).mProperty_mBuildConfigurationRef ;
      outOperand9 = mArray.lastObject (HERE).mProperty_mFrameworksFileRefList ;
      outOperand10 = mArray.lastObject (HERE).mProperty_mFrameworkBuildPhaseRef ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::method_first (GGS_string & outOperand0,
                                            GGS_string & outOperand1,
                                            GGS_string & outOperand2,
                                            GGS_string & outOperand3,
                                            GGS_stringlist & outOperand4,
                                            GGS_string & outOperand5,
                                            GGS_string & outOperand6,
                                            GGS_stringlist & outOperand7,
                                            GGS_string & outOperand8,
                                            GGS_stringlist & outOperand9,
                                            GGS_string & outOperand10,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTargetRef ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mTargetName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mProductFileReference ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mProductFileName ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mBuildPhaseRefList ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mBuildPhaseRef ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationListRef ;
      outOperand7 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationSettingList ;
      outOperand8 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationRef ;
      outOperand9 = mArray (0 COMMA_THERE).mProperty_mFrameworksFileRefList ;
      outOperand10 = mArray (0 COMMA_THERE).mProperty_mFrameworkBuildPhaseRef ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::method_last (GGS_string & outOperand0,
                                           GGS_string & outOperand1,
                                           GGS_string & outOperand2,
                                           GGS_string & outOperand3,
                                           GGS_stringlist & outOperand4,
                                           GGS_string & outOperand5,
                                           GGS_string & outOperand6,
                                           GGS_stringlist & outOperand7,
                                           GGS_string & outOperand8,
                                           GGS_stringlist & outOperand9,
                                           GGS_string & outOperand10,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTargetRef ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mTargetName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mProductFileReference ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mProductFileName ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mBuildPhaseRefList ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mBuildPhaseRef ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mBuildConfigurationListRef ;
      outOperand7 = mArray.lastObject (HERE).mProperty_mBuildConfigurationSettingList ;
      outOperand8 = mArray.lastObject (HERE).mProperty_mBuildConfigurationRef ;
      outOperand9 = mArray.lastObject (HERE).mProperty_mFrameworksFileRefList ;
      outOperand10 = mArray.lastObject (HERE).mProperty_mFrameworkBuildPhaseRef ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::add_operation (const GGS_XCodeToolTargetList & inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_XCodeToolTargetList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::subList (const int32_t inStart,
                                                          const int32_t inLength,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_XCodeToolTargetList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::getter_subListWithRange (const GGS_range & inRange,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_XCodeToolTargetList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_XCodeToolTargetList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_XCodeToolTargetList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::plusAssignOperation (const GGS_XCodeToolTargetList inList,
                                                   Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMTargetRefAtIndex (GGS_string inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetRef = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_XCodeToolTargetList::getter_mTargetRefAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetRef ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMTargetNameAtIndex (GGS_string inOperand,
                                                            GGS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_XCodeToolTargetList::getter_mTargetNameAtIndex (const GGS_uint & inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMProductFileReferenceAtIndex (GGS_string inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mProductFileReference = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_XCodeToolTargetList::getter_mProductFileReferenceAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mProductFileReference ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMProductFileNameAtIndex (GGS_string inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mProductFileName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_XCodeToolTargetList::getter_mProductFileNameAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mProductFileName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMBuildPhaseRefListAtIndex (GGS_stringlist inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildPhaseRefList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_stringlist GGS_XCodeToolTargetList::getter_mBuildPhaseRefListAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildPhaseRefList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMBuildPhaseRefAtIndex (GGS_string inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildPhaseRef = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_XCodeToolTargetList::getter_mBuildPhaseRefAtIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildPhaseRef ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMBuildConfigurationListRefAtIndex (GGS_string inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationListRef = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_XCodeToolTargetList::getter_mBuildConfigurationListRefAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationListRef ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMBuildConfigurationSettingListAtIndex (GGS_stringlist inOperand,
                                                                               GGS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationSettingList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_stringlist GGS_XCodeToolTargetList::getter_mBuildConfigurationSettingListAtIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationSettingList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMBuildConfigurationRefAtIndex (GGS_string inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationRef = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_XCodeToolTargetList::getter_mBuildConfigurationRefAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationRef ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMFrameworksFileRefListAtIndex (GGS_stringlist inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFrameworksFileRefList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_stringlist GGS_XCodeToolTargetList::getter_mFrameworksFileRefListAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFrameworksFileRefList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMFrameworkBuildPhaseRefAtIndex (GGS_string inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFrameworkBuildPhaseRef = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_XCodeToolTargetList::getter_mFrameworkBuildPhaseRefAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFrameworkBuildPhaseRef ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @XCodeToolTargetList
//--------------------------------------------------------------------------------------------------

DownEnumerator_XCodeToolTargetList::DownEnumerator_XCodeToolTargetList (const GGS_XCodeToolTargetList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList_2E_element DownEnumerator_XCodeToolTargetList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mTargetRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mTargetName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProductFileReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mProductFileName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProductFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeToolTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildPhaseRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationListRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeToolTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationSettingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeToolTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFrameworksFileRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFrameworkBuildPhaseRef ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @XCodeToolTargetList
//--------------------------------------------------------------------------------------------------

UpEnumerator_XCodeToolTargetList::UpEnumerator_XCodeToolTargetList (const GGS_XCodeToolTargetList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList_2E_element UpEnumerator_XCodeToolTargetList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mTargetRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mTargetName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProductFileReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mProductFileName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProductFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeToolTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildPhaseRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationListRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeToolTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationSettingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeToolTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFrameworksFileRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFrameworkBuildPhaseRef ;
}




//--------------------------------------------------------------------------------------------------
//     @XCodeToolTargetList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeToolTargetList ("XCodeToolTargetList",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_XCodeToolTargetList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeToolTargetList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_XCodeToolTargetList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_XCodeToolTargetList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_XCodeToolTargetList result ;
  const GGS_XCodeToolTargetList * p = (const GGS_XCodeToolTargetList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_XCodeToolTargetList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeToolTargetList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@XCodeAppTargetList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_XCodeAppTargetList : public CollectionElementPtr {
  public: GGS_XCodeAppTargetList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_XCodeAppTargetList (const GGS_string & in_mTargetRef,
                                                   const GGS_string & in_mTargetName,
                                                   const GGS_string & in_mProductFileReference,
                                                   const GGS_string & in_mProductFileName,
                                                   const GGS_stringlist & in_mBuildPhaseRefList,
                                                   const GGS_string & in_mBuildPhaseRef,
                                                   const GGS_string & in_mBuildConfigurationListRef,
                                                   const GGS_stringlist & in_mBuildConfigurationSettingList,
                                                   const GGS_string & in_mBuildConfigurationRef,
                                                   const GGS_stringlist & in_mFrameworksFileRefList,
                                                   const GGS_string & in_mFrameworkBuildPhaseRef,
                                                   const GGS__32_stringlist & in_mDependentTargets,
                                                   const GGS_string & in_mResourceBuildRef,
                                                   const GGS_stringlist & in_mResourceFileBuildRefs
                                                   COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_XCodeAppTargetList (const GGS_XCodeAppTargetList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_XCodeAppTargetList::CollectionElementPtr_XCodeAppTargetList (const GGS_string & in_mTargetRef,
                                                                                  const GGS_string & in_mTargetName,
                                                                                  const GGS_string & in_mProductFileReference,
                                                                                  const GGS_string & in_mProductFileName,
                                                                                  const GGS_stringlist & in_mBuildPhaseRefList,
                                                                                  const GGS_string & in_mBuildPhaseRef,
                                                                                  const GGS_string & in_mBuildConfigurationListRef,
                                                                                  const GGS_stringlist & in_mBuildConfigurationSettingList,
                                                                                  const GGS_string & in_mBuildConfigurationRef,
                                                                                  const GGS_stringlist & in_mFrameworksFileRefList,
                                                                                  const GGS_string & in_mFrameworkBuildPhaseRef,
                                                                                  const GGS__32_stringlist & in_mDependentTargets,
                                                                                  const GGS_string & in_mResourceBuildRef,
                                                                                  const GGS_stringlist & in_mResourceFileBuildRefs
                                                                                  COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mTargetRef, in_mTargetName, in_mProductFileReference, in_mProductFileName, in_mBuildPhaseRefList, in_mBuildPhaseRef, in_mBuildConfigurationListRef, in_mBuildConfigurationSettingList, in_mBuildConfigurationRef, in_mFrameworksFileRefList, in_mFrameworkBuildPhaseRef, in_mDependentTargets, in_mResourceBuildRef, in_mResourceFileBuildRefs) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_XCodeAppTargetList::CollectionElementPtr_XCodeAppTargetList (const GGS_XCodeAppTargetList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mTargetRef, inElement.mProperty_mTargetName, inElement.mProperty_mProductFileReference, inElement.mProperty_mProductFileName, inElement.mProperty_mBuildPhaseRefList, inElement.mProperty_mBuildPhaseRef, inElement.mProperty_mBuildConfigurationListRef, inElement.mProperty_mBuildConfigurationSettingList, inElement.mProperty_mBuildConfigurationRef, inElement.mProperty_mFrameworksFileRefList, inElement.mProperty_mFrameworkBuildPhaseRef, inElement.mProperty_mDependentTargets, inElement.mProperty_mResourceBuildRef, inElement.mProperty_mResourceFileBuildRefs) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_XCodeAppTargetList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_XCodeAppTargetList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_XCodeAppTargetList (mObject.mProperty_mTargetRef, mObject.mProperty_mTargetName, mObject.mProperty_mProductFileReference, mObject.mProperty_mProductFileName, mObject.mProperty_mBuildPhaseRefList, mObject.mProperty_mBuildPhaseRef, mObject.mProperty_mBuildConfigurationListRef, mObject.mProperty_mBuildConfigurationSettingList, mObject.mProperty_mBuildConfigurationRef, mObject.mProperty_mFrameworksFileRefList, mObject.mProperty_mFrameworkBuildPhaseRef, mObject.mProperty_mDependentTargets, mObject.mProperty_mResourceBuildRef, mObject.mProperty_mResourceFileBuildRefs COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @XCodeAppTargetList
//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList::GGS_XCodeAppTargetList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList::GGS_XCodeAppTargetList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_XCodeAppTargetList * p = (CollectionElementPtr_XCodeAppTargetList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_XCodeAppTargetList) ;
    const GGS_XCodeAppTargetList_2E_element element (p->mObject.mProperty_mTargetRef, p->mObject.mProperty_mTargetName, p->mObject.mProperty_mProductFileReference, p->mObject.mProperty_mProductFileName, p->mObject.mProperty_mBuildPhaseRefList, p->mObject.mProperty_mBuildPhaseRef, p->mObject.mProperty_mBuildConfigurationListRef, p->mObject.mProperty_mBuildConfigurationSettingList, p->mObject.mProperty_mBuildConfigurationRef, p->mObject.mProperty_mFrameworksFileRefList, p->mObject.mProperty_mFrameworkBuildPhaseRef, p->mObject.mProperty_mDependentTargets, p->mObject.mProperty_mResourceBuildRef, p->mObject.mProperty_mResourceFileBuildRefs) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                        const GGS_string & in_mTargetRef,
                                                        const GGS_string & in_mTargetName,
                                                        const GGS_string & in_mProductFileReference,
                                                        const GGS_string & in_mProductFileName,
                                                        const GGS_stringlist & in_mBuildPhaseRefList,
                                                        const GGS_string & in_mBuildPhaseRef,
                                                        const GGS_string & in_mBuildConfigurationListRef,
                                                        const GGS_stringlist & in_mBuildConfigurationSettingList,
                                                        const GGS_string & in_mBuildConfigurationRef,
                                                        const GGS_stringlist & in_mFrameworksFileRefList,
                                                        const GGS_string & in_mFrameworkBuildPhaseRef,
                                                        const GGS__32_stringlist & in_mDependentTargets,
                                                        const GGS_string & in_mResourceBuildRef,
                                                        const GGS_stringlist & in_mResourceFileBuildRefs
                                                        COMMA_LOCATION_ARGS) {
  CollectionElementPtr_XCodeAppTargetList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_XCodeAppTargetList (in_mTargetRef, in_mTargetName, in_mProductFileReference, in_mProductFileName, in_mBuildPhaseRefList, in_mBuildPhaseRef, in_mBuildConfigurationListRef, in_mBuildConfigurationSettingList, in_mBuildConfigurationRef, in_mFrameworksFileRefList, in_mFrameworkBuildPhaseRef, in_mDependentTargets, in_mResourceBuildRef, in_mResourceFileBuildRefs COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_XCodeAppTargetList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_XCodeAppTargetList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTargetRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTargetRef.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTargetName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTargetName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mProductFileReference:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mProductFileReference.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mProductFileName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mProductFileName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBuildPhaseRefList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBuildPhaseRefList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBuildPhaseRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBuildPhaseRef.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBuildConfigurationListRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBuildConfigurationListRef.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBuildConfigurationSettingList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBuildConfigurationRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBuildConfigurationRef.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFrameworksFileRefList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFrameworksFileRefList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFrameworkBuildPhaseRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mDependentTargets:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mDependentTargets.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mResourceBuildRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mResourceBuildRef.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mResourceFileBuildRefs:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mResourceFileBuildRefs.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XCodeAppTargetList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::plusPlusAssignOperation (const GGS_XCodeAppTargetList_2E_element & inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                         const GGS_string & inOperand1,
                                                                         const GGS_string & inOperand2,
                                                                         const GGS_string & inOperand3,
                                                                         const GGS_stringlist & inOperand4,
                                                                         const GGS_string & inOperand5,
                                                                         const GGS_string & inOperand6,
                                                                         const GGS_stringlist & inOperand7,
                                                                         const GGS_string & inOperand8,
                                                                         const GGS_stringlist & inOperand9,
                                                                         const GGS_string & inOperand10,
                                                                         const GGS__32_stringlist & inOperand11,
                                                                         const GGS_string & inOperand12,
                                                                         const GGS_stringlist & inOperand13
                                                                         COMMA_LOCATION_ARGS) {
  const GGS_XCodeAppTargetList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13) ;
  GGS_XCodeAppTargetList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::addAssignOperation (const GGS_string & inOperand0,
                                                 const GGS_string & inOperand1,
                                                 const GGS_string & inOperand2,
                                                 const GGS_string & inOperand3,
                                                 const GGS_stringlist & inOperand4,
                                                 const GGS_string & inOperand5,
                                                 const GGS_string & inOperand6,
                                                 const GGS_stringlist & inOperand7,
                                                 const GGS_string & inOperand8,
                                                 const GGS_stringlist & inOperand9,
                                                 const GGS_string & inOperand10,
                                                 const GGS__32_stringlist & inOperand11,
                                                 const GGS_string & inOperand12,
                                                 const GGS_stringlist & inOperand13
                                                 COMMA_LOCATION_ARGS) {
  const GGS_XCodeAppTargetList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_append (const GGS_string inOperand0,
                                            const GGS_string inOperand1,
                                            const GGS_string inOperand2,
                                            const GGS_string inOperand3,
                                            const GGS_stringlist inOperand4,
                                            const GGS_string inOperand5,
                                            const GGS_string inOperand6,
                                            const GGS_stringlist inOperand7,
                                            const GGS_string inOperand8,
                                            const GGS_stringlist inOperand9,
                                            const GGS_string inOperand10,
                                            const GGS__32_stringlist inOperand11,
                                            const GGS_string inOperand12,
                                            const GGS_stringlist inOperand13,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  const GGS_XCodeAppTargetList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_insertAtIndex (const GGS_string inOperand0,
                                                   const GGS_string inOperand1,
                                                   const GGS_string inOperand2,
                                                   const GGS_string inOperand3,
                                                   const GGS_stringlist inOperand4,
                                                   const GGS_string inOperand5,
                                                   const GGS_string inOperand6,
                                                   const GGS_stringlist inOperand7,
                                                   const GGS_string inOperand8,
                                                   const GGS_stringlist inOperand9,
                                                   const GGS_string inOperand10,
                                                   const GGS__32_stringlist inOperand11,
                                                   const GGS_string inOperand12,
                                                   const GGS_stringlist inOperand13,
                                                   const GGS_uint inInsertionIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  const GGS_XCodeAppTargetList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_removeAtIndex (GGS_string & outOperand0,
                                                   GGS_string & outOperand1,
                                                   GGS_string & outOperand2,
                                                   GGS_string & outOperand3,
                                                   GGS_stringlist & outOperand4,
                                                   GGS_string & outOperand5,
                                                   GGS_string & outOperand6,
                                                   GGS_stringlist & outOperand7,
                                                   GGS_string & outOperand8,
                                                   GGS_stringlist & outOperand9,
                                                   GGS_string & outOperand10,
                                                   GGS__32_stringlist & outOperand11,
                                                   GGS_string & outOperand12,
                                                   GGS_stringlist & outOperand13,
                                                   const GGS_uint inRemoveIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mTargetRef ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mTargetName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mProductFileReference ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mProductFileName ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mBuildPhaseRefList ;
      outOperand5 = mArray (idx COMMA_HERE).mProperty_mBuildPhaseRef ;
      outOperand6 = mArray (idx COMMA_HERE).mProperty_mBuildConfigurationListRef ;
      outOperand7 = mArray (idx COMMA_HERE).mProperty_mBuildConfigurationSettingList ;
      outOperand8 = mArray (idx COMMA_HERE).mProperty_mBuildConfigurationRef ;
      outOperand9 = mArray (idx COMMA_HERE).mProperty_mFrameworksFileRefList ;
      outOperand10 = mArray (idx COMMA_HERE).mProperty_mFrameworkBuildPhaseRef ;
      outOperand11 = mArray (idx COMMA_HERE).mProperty_mDependentTargets ;
      outOperand12 = mArray (idx COMMA_HERE).mProperty_mResourceBuildRef ;
      outOperand13 = mArray (idx COMMA_HERE).mProperty_mResourceFileBuildRefs ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_popFirst (GGS_string & outOperand0,
                                              GGS_string & outOperand1,
                                              GGS_string & outOperand2,
                                              GGS_string & outOperand3,
                                              GGS_stringlist & outOperand4,
                                              GGS_string & outOperand5,
                                              GGS_string & outOperand6,
                                              GGS_stringlist & outOperand7,
                                              GGS_string & outOperand8,
                                              GGS_stringlist & outOperand9,
                                              GGS_string & outOperand10,
                                              GGS__32_stringlist & outOperand11,
                                              GGS_string & outOperand12,
                                              GGS_stringlist & outOperand13,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTargetRef ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mTargetName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mProductFileReference ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mProductFileName ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mBuildPhaseRefList ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mBuildPhaseRef ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationListRef ;
      outOperand7 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationSettingList ;
      outOperand8 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationRef ;
      outOperand9 = mArray (0 COMMA_THERE).mProperty_mFrameworksFileRefList ;
      outOperand10 = mArray (0 COMMA_THERE).mProperty_mFrameworkBuildPhaseRef ;
      outOperand11 = mArray (0 COMMA_THERE).mProperty_mDependentTargets ;
      outOperand12 = mArray (0 COMMA_THERE).mProperty_mResourceBuildRef ;
      outOperand13 = mArray (0 COMMA_THERE).mProperty_mResourceFileBuildRefs ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_popLast (GGS_string & outOperand0,
                                             GGS_string & outOperand1,
                                             GGS_string & outOperand2,
                                             GGS_string & outOperand3,
                                             GGS_stringlist & outOperand4,
                                             GGS_string & outOperand5,
                                             GGS_string & outOperand6,
                                             GGS_stringlist & outOperand7,
                                             GGS_string & outOperand8,
                                             GGS_stringlist & outOperand9,
                                             GGS_string & outOperand10,
                                             GGS__32_stringlist & outOperand11,
                                             GGS_string & outOperand12,
                                             GGS_stringlist & outOperand13,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTargetRef ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mTargetName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mProductFileReference ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mProductFileName ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mBuildPhaseRefList ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mBuildPhaseRef ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mBuildConfigurationListRef ;
      outOperand7 = mArray.lastObject (HERE).mProperty_mBuildConfigurationSettingList ;
      outOperand8 = mArray.lastObject (HERE).mProperty_mBuildConfigurationRef ;
      outOperand9 = mArray.lastObject (HERE).mProperty_mFrameworksFileRefList ;
      outOperand10 = mArray.lastObject (HERE).mProperty_mFrameworkBuildPhaseRef ;
      outOperand11 = mArray.lastObject (HERE).mProperty_mDependentTargets ;
      outOperand12 = mArray.lastObject (HERE).mProperty_mResourceBuildRef ;
      outOperand13 = mArray.lastObject (HERE).mProperty_mResourceFileBuildRefs ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::method_first (GGS_string & outOperand0,
                                           GGS_string & outOperand1,
                                           GGS_string & outOperand2,
                                           GGS_string & outOperand3,
                                           GGS_stringlist & outOperand4,
                                           GGS_string & outOperand5,
                                           GGS_string & outOperand6,
                                           GGS_stringlist & outOperand7,
                                           GGS_string & outOperand8,
                                           GGS_stringlist & outOperand9,
                                           GGS_string & outOperand10,
                                           GGS__32_stringlist & outOperand11,
                                           GGS_string & outOperand12,
                                           GGS_stringlist & outOperand13,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTargetRef ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mTargetName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mProductFileReference ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mProductFileName ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mBuildPhaseRefList ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mBuildPhaseRef ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationListRef ;
      outOperand7 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationSettingList ;
      outOperand8 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationRef ;
      outOperand9 = mArray (0 COMMA_THERE).mProperty_mFrameworksFileRefList ;
      outOperand10 = mArray (0 COMMA_THERE).mProperty_mFrameworkBuildPhaseRef ;
      outOperand11 = mArray (0 COMMA_THERE).mProperty_mDependentTargets ;
      outOperand12 = mArray (0 COMMA_THERE).mProperty_mResourceBuildRef ;
      outOperand13 = mArray (0 COMMA_THERE).mProperty_mResourceFileBuildRefs ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::method_last (GGS_string & outOperand0,
                                          GGS_string & outOperand1,
                                          GGS_string & outOperand2,
                                          GGS_string & outOperand3,
                                          GGS_stringlist & outOperand4,
                                          GGS_string & outOperand5,
                                          GGS_string & outOperand6,
                                          GGS_stringlist & outOperand7,
                                          GGS_string & outOperand8,
                                          GGS_stringlist & outOperand9,
                                          GGS_string & outOperand10,
                                          GGS__32_stringlist & outOperand11,
                                          GGS_string & outOperand12,
                                          GGS_stringlist & outOperand13,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTargetRef ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mTargetName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mProductFileReference ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mProductFileName ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mBuildPhaseRefList ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mBuildPhaseRef ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mBuildConfigurationListRef ;
      outOperand7 = mArray.lastObject (HERE).mProperty_mBuildConfigurationSettingList ;
      outOperand8 = mArray.lastObject (HERE).mProperty_mBuildConfigurationRef ;
      outOperand9 = mArray.lastObject (HERE).mProperty_mFrameworksFileRefList ;
      outOperand10 = mArray.lastObject (HERE).mProperty_mFrameworkBuildPhaseRef ;
      outOperand11 = mArray.lastObject (HERE).mProperty_mDependentTargets ;
      outOperand12 = mArray.lastObject (HERE).mProperty_mResourceBuildRef ;
      outOperand13 = mArray.lastObject (HERE).mProperty_mResourceFileBuildRefs ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::add_operation (const GGS_XCodeAppTargetList & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_XCodeAppTargetList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::subList (const int32_t inStart,
                                                        const int32_t inLength,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_XCodeAppTargetList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::getter_subListWithRange (const GGS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_XCodeAppTargetList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_XCodeAppTargetList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_XCodeAppTargetList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::plusAssignOperation (const GGS_XCodeAppTargetList inList,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMTargetRefAtIndex (GGS_string inOperand,
                                                          GGS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetRef = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_XCodeAppTargetList::getter_mTargetRefAtIndex (const GGS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetRef ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMTargetNameAtIndex (GGS_string inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_XCodeAppTargetList::getter_mTargetNameAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMProductFileReferenceAtIndex (GGS_string inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mProductFileReference = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_XCodeAppTargetList::getter_mProductFileReferenceAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mProductFileReference ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMProductFileNameAtIndex (GGS_string inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mProductFileName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_XCodeAppTargetList::getter_mProductFileNameAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mProductFileName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMBuildPhaseRefListAtIndex (GGS_stringlist inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildPhaseRefList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_stringlist GGS_XCodeAppTargetList::getter_mBuildPhaseRefListAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildPhaseRefList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMBuildPhaseRefAtIndex (GGS_string inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildPhaseRef = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_XCodeAppTargetList::getter_mBuildPhaseRefAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildPhaseRef ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMBuildConfigurationListRefAtIndex (GGS_string inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationListRef = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_XCodeAppTargetList::getter_mBuildConfigurationListRefAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationListRef ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMBuildConfigurationSettingListAtIndex (GGS_stringlist inOperand,
                                                                              GGS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationSettingList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_stringlist GGS_XCodeAppTargetList::getter_mBuildConfigurationSettingListAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationSettingList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMBuildConfigurationRefAtIndex (GGS_string inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationRef = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_XCodeAppTargetList::getter_mBuildConfigurationRefAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationRef ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMFrameworksFileRefListAtIndex (GGS_stringlist inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFrameworksFileRefList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_stringlist GGS_XCodeAppTargetList::getter_mFrameworksFileRefListAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFrameworksFileRefList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMFrameworkBuildPhaseRefAtIndex (GGS_string inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFrameworkBuildPhaseRef = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_XCodeAppTargetList::getter_mFrameworkBuildPhaseRefAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFrameworkBuildPhaseRef ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMDependentTargetsAtIndex (GGS__32_stringlist inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mDependentTargets = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS__32_stringlist GGS_XCodeAppTargetList::getter_mDependentTargetsAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS__32_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mDependentTargets ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMResourceBuildRefAtIndex (GGS_string inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mResourceBuildRef = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_XCodeAppTargetList::getter_mResourceBuildRefAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mResourceBuildRef ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMResourceFileBuildRefsAtIndex (GGS_stringlist inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mResourceFileBuildRefs = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_stringlist GGS_XCodeAppTargetList::getter_mResourceFileBuildRefsAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mResourceFileBuildRefs ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @XCodeAppTargetList
//--------------------------------------------------------------------------------------------------

DownEnumerator_XCodeAppTargetList::DownEnumerator_XCodeAppTargetList (const GGS_XCodeAppTargetList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList_2E_element DownEnumerator_XCodeAppTargetList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mTargetRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mTargetName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProductFileReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mProductFileName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProductFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeAppTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildPhaseRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationListRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeAppTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationSettingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeAppTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFrameworksFileRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFrameworkBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist DownEnumerator_XCodeAppTargetList::current_mDependentTargets (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDependentTargets ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mResourceBuildRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mResourceBuildRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeAppTargetList::current_mResourceFileBuildRefs (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mResourceFileBuildRefs ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @XCodeAppTargetList
//--------------------------------------------------------------------------------------------------

UpEnumerator_XCodeAppTargetList::UpEnumerator_XCodeAppTargetList (const GGS_XCodeAppTargetList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList_2E_element UpEnumerator_XCodeAppTargetList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mTargetRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mTargetName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProductFileReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mProductFileName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProductFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeAppTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildPhaseRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationListRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeAppTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationSettingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeAppTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFrameworksFileRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFrameworkBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist UpEnumerator_XCodeAppTargetList::current_mDependentTargets (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDependentTargets ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mResourceBuildRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mResourceBuildRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeAppTargetList::current_mResourceFileBuildRefs (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mResourceFileBuildRefs ;
}




//--------------------------------------------------------------------------------------------------
//     @XCodeAppTargetList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeAppTargetList ("XCodeAppTargetList",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_XCodeAppTargetList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeAppTargetList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_XCodeAppTargetList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_XCodeAppTargetList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_XCodeAppTargetList result ;
  const GGS_XCodeAppTargetList * p = (const GGS_XCodeAppTargetList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_XCodeAppTargetList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeAppTargetList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

