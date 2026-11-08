#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//--------------------------------------------------------------------------------------------------
//Class for element of '@_32_lstringlist' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr__32_lstringlist : public CollectionElementPtr {
  public: GGS__32_lstringlist_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr__32_lstringlist (const GGS_lstring & in_mValue_30_,
                                                const GGS_lstring & in_mValue_31_
                                                COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr__32_lstringlist (const GGS__32_lstringlist_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr__32_lstringlist::CollectionElementPtr__32_lstringlist (const GGS_lstring & in_mValue_30_,
                                                                            const GGS_lstring & in_mValue_31_
                                                                            COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mValue_30_, in_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr__32_lstringlist::CollectionElementPtr__32_lstringlist (const GGS__32_lstringlist_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mValue_30_, inElement.mProperty_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr__32_lstringlist::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr__32_lstringlist::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr__32_lstringlist (mObject.mProperty_mValue_30_, mObject.mProperty_mValue_31_ COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @_32_lstringlist
//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist::GGS__32_lstringlist (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist::GGS__32_lstringlist (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr__32_lstringlist * p = (CollectionElementPtr__32_lstringlist *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr__32_lstringlist) ;
    const GGS__32_lstringlist_2E_element element (p->mObject.mProperty_mValue_30_, p->mObject.mProperty_mValue_31_) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                     const GGS_lstring & in_mValue_30_,
                                                     const GGS_lstring & in_mValue_31_
                                                     COMMA_LOCATION_ARGS) {
  CollectionElementPtr__32_lstringlist * p = nullptr ;
  macroMyNew (p, CollectionElementPtr__32_lstringlist (in_mValue_30_, in_mValue_31_ COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__32_lstringlist::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS__32_lstringlist::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::description (String & ioString,
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
      ioString.appendString ("mValue0:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mValue_30_.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mValue1:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mValue_31_.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__32_lstringlist result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::plusPlusAssignOperation (const GGS__32_lstringlist_2E_element & inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                   const GGS_lstring & inOperand1
                                                                   COMMA_LOCATION_ARGS) {
  const GGS__32_lstringlist_2E_element element (inOperand0, inOperand1) ;
  GGS__32_lstringlist result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::addAssignOperation (const GGS_lstring & inOperand0,
                                              const GGS_lstring & inOperand1
                                              COMMA_LOCATION_ARGS) {
  const GGS__32_lstringlist_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_append (const GGS_lstring inOperand0,
                                         const GGS_lstring inOperand1,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  const GGS__32_lstringlist_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                const GGS_lstring inOperand1,
                                                const GGS_uint inInsertionIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const GGS__32_lstringlist_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS__32_lstringlist::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                GGS_lstring & outOperand1,
                                                const GGS_uint inRemoveIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mValue_30_ ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mValue_31_ ;
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

void GGS__32_lstringlist::setter_popFirst (GGS_lstring & outOperand0,
                                           GGS_lstring & outOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mValue_30_ ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mValue_31_ ;
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

void GGS__32_lstringlist::setter_popLast (GGS_lstring & outOperand0,
                                          GGS_lstring & outOperand1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mValue_30_ ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mValue_31_ ;
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

void GGS__32_lstringlist::method_first (GGS_lstring & outOperand0,
                                        GGS_lstring & outOperand1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mValue_30_ ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mValue_31_ ;
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

void GGS__32_lstringlist::method_last (GGS_lstring & outOperand0,
                                       GGS_lstring & outOperand1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mValue_30_ ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mValue_31_ ;
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

GGS__32_lstringlist GGS__32_lstringlist::add_operation (const GGS__32_lstringlist & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
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

GGS__32_lstringlist GGS__32_lstringlist::subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
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

GGS__32_lstringlist GGS__32_lstringlist::getter_subListWithRange (const GGS_range & inRange,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::getter_subListToIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::plusAssignOperation (const GGS__32_lstringlist inList,
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

void GGS__32_lstringlist::setter_setMValue_30_AtIndex (GGS_lstring inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mValue_30_ = inOperand ;
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

GGS_lstring GGS__32_lstringlist::getter_mValue_30_AtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mValue_30_ ;
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

void GGS__32_lstringlist::setter_setMValue_31_AtIndex (GGS_lstring inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mValue_31_ = inOperand ;
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

GGS_lstring GGS__32_lstringlist::getter_mValue_31_AtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mValue_31_ ;
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
// Down Enumerator for @_32_lstringlist
//--------------------------------------------------------------------------------------------------

DownEnumerator__32_lstringlist::DownEnumerator__32_lstringlist (const GGS__32_lstringlist & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element DownEnumerator__32_lstringlist::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator__32_lstringlist::current_mValue_30_ (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue_30_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator__32_lstringlist::current_mValue_31_ (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue_31_ ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_32_lstringlist
//--------------------------------------------------------------------------------------------------

UpEnumerator__32_lstringlist::UpEnumerator__32_lstringlist (const GGS__32_lstringlist & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element UpEnumerator__32_lstringlist::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator__32_lstringlist::current_mValue_30_ (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue_30_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator__32_lstringlist::current_mValue_31_ (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue_31_ ;
}




//--------------------------------------------------------------------------------------------------
//     @2lstringlist generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__32_lstringlist ("2lstringlist",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__32_lstringlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstringlist ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__32_lstringlist::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__32_lstringlist (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS__32_lstringlist result ;
  const GGS__32_lstringlist * p = (const GGS__32_lstringlist *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__32_lstringlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2lstringlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @semanticExpressionAST reference class
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


void cPtr_semanticExpressionAST::
semanticExpressionAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST::GGS_semanticExpressionAST (const cPtr_semanticExpressionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @semanticExpressionAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_semanticExpressionAST::cPtr_semanticExpressionAST (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_semanticExpressionAST::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @semanticExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticExpressionAST ("semanticExpressionAST",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticExpressionAST::staticTypeDescriptor (void) const {
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
//Class for element of '@_5B_logAST_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_logAST_5D_::GGS__5B_logAST_5D_ (void) :
AC_GALGAS_root (),
mSharedArray () {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_logAST_5D_::GGS__5B_logAST_5D_ (const GGS__5B_logAST_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_logAST_5D_ & GGS__5B_logAST_5D_::operator = (const GGS__5B_logAST_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_logAST_5D_ GGS__5B_logAST_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_logAST_5D_ result ;
  result.mSharedArray.setCapacity (16) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS__5B_logAST_5D_::isValid (void) const {
  return mSharedArray.isAllocated () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_logAST_5D_::drop (void) {
  mSharedArray.removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_logAST_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mSharedArray.setCapacity (16) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_logAST_5D_::plusPlusAssignOperation (const GGS_logAST & inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mSharedArray.appendObject (inValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_logAST_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_logAST_5D_ GGS__5B_logAST_5D_::add_operation (const GGS__5B_logAST_5D_ & inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_logAST_5D_ result ;
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

void GGS__5B_logAST_5D_::description (String & ioString,
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

void GGS__5B_logAST_5D_::plusAssignOperation (const GGS__5B_logAST_5D_ inOperand,
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

void GGS__5B_logAST_5D_::setter_append (const GGS_logAST inValue,
                                        Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_logAST_5D_::setter_removeAll (Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_logAST_5D_::setter_insertAtIndex (const GGS_logAST inValue,
                                               const GGS_uint inInsertionIndex,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_logAST_5D_::setter_removeAtIndex (GGS_logAST & outValue,
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

void GGS__5B_logAST_5D_::setter_popFirst (GGS_logAST & outValue,
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

void GGS__5B_logAST_5D_::setter_popLast (GGS_logAST & outValue,
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

void GGS__5B_logAST_5D_::method_first (GGS_logAST & outValue,
                                       Compiler * /* inCompiler */
                                       COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray (0 COMMA_THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_logAST_5D_::method_last (GGS_logAST & outValue,
                                      Compiler * /* inCompiler */
                                      COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray.lastObject (THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_logAST GGS__5B_logAST_5D_::readSubscript__3F_ (const GGS_uint & inIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_logAST result ;
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
// Down Enumerator for @_5B_logAST_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_logAST_5D_::DownEnumerator__5B_logAST_5D_ (const GGS__5B_logAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_logAST DownEnumerator__5B_logAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_logAST DownEnumerator__5B_logAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_logAST_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_logAST_5D_::UpEnumerator__5B_logAST_5D_ (const GGS__5B_logAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_logAST UpEnumerator__5B_logAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_logAST UpEnumerator__5B_logAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[logAST] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_logAST_5D_ ("[logAST]",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_logAST_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_logAST_5D_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__5B_logAST_5D_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__5B_logAST_5D_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_logAST_5D_ GGS__5B_logAST_5D_::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS__5B_logAST_5D_ result ;
  const GGS__5B_logAST_5D_ * p = (const GGS__5B_logAST_5D_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__5B_logAST_5D_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("[logAST]", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @semanticInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_semanticInstructionForGeneration::objectCompare (const GGS_semanticInstructionForGeneration & inOperand) const {
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

GGS_semanticInstructionForGeneration::GGS_semanticInstructionForGeneration (void) :
AC_GALGAS_reference_class () {
}


void cPtr_semanticInstructionForGeneration::
semanticInstructionForGeneration_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionForGeneration::GGS_semanticInstructionForGeneration (const cPtr_semanticInstructionForGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @semanticInstructionForGeneration class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_semanticInstructionForGeneration::cPtr_semanticInstructionForGeneration (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @semanticInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticInstructionForGeneration ("semanticInstructionForGeneration",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionForGeneration GGS_semanticInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_semanticInstructionForGeneration result ;
  const GGS_semanticInstructionForGeneration * p = (const GGS_semanticInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_semanticInstructionForGeneration_2E_weak::objectCompare (const GGS_semanticInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_semanticInstructionForGeneration_2E_weak::GGS_semanticInstructionForGeneration_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionForGeneration_2E_weak & GGS_semanticInstructionForGeneration_2E_weak::operator = (const GGS_semanticInstructionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionForGeneration_2E_weak::GGS_semanticInstructionForGeneration_2E_weak (const GGS_semanticInstructionForGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionForGeneration_2E_weak GGS_semanticInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_semanticInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionForGeneration GGS_semanticInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_semanticInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_semanticInstructionForGeneration * p = (cPtr_semanticInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_semanticInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionForGeneration GGS_semanticInstructionForGeneration_2E_weak::bang_semanticInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_semanticInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticInstructionForGeneration) ;
      result = GGS_semanticInstructionForGeneration ((cPtr_semanticInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @semanticInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak ("semanticInstructionForGeneration.weak",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionForGeneration_2E_weak GGS_semanticInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_semanticInstructionForGeneration_2E_weak result ;
  const GGS_semanticInstructionForGeneration_2E_weak * p = (const GGS_semanticInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@actualParameterListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_actualParameterListAST : public CollectionElementPtr {
  public: GGS_actualParameterListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_actualParameterListAST (const GGS_actualParameterAST & in_mActualParameter
                                                       COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_actualParameterListAST (const GGS_actualParameterListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_actualParameterListAST::CollectionElementPtr_actualParameterListAST (const GGS_actualParameterAST & in_mActualParameter
                                                                                          COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mActualParameter) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_actualParameterListAST::CollectionElementPtr_actualParameterListAST (const GGS_actualParameterListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mActualParameter) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_actualParameterListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_actualParameterListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_actualParameterListAST (mObject.mProperty_mActualParameter COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @actualParameterListAST
//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST::GGS_actualParameterListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST::GGS_actualParameterListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_actualParameterListAST * p = (CollectionElementPtr_actualParameterListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_actualParameterListAST) ;
    const GGS_actualParameterListAST_2E_element element (p->mObject.mProperty_mActualParameter) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                            const GGS_actualParameterAST & in_mActualParameter
                                                            COMMA_LOCATION_ARGS) {
  CollectionElementPtr_actualParameterListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_actualParameterListAST (in_mActualParameter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_actualParameterListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_actualParameterListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListAST::description (String & ioString,
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
      ioString.appendString ("mActualParameter:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mActualParameter.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST GGS_actualParameterListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actualParameterListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListAST::plusPlusAssignOperation (const GGS_actualParameterListAST_2E_element & inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST GGS_actualParameterListAST::class_func_listWithValue (const GGS_actualParameterAST & inOperand0
                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_actualParameterListAST_2E_element element (inOperand0) ;
  GGS_actualParameterListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListAST::addAssignOperation (const GGS_actualParameterAST & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  const GGS_actualParameterListAST_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListAST::setter_append (const GGS_actualParameterAST inOperand0,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  const GGS_actualParameterListAST_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListAST::setter_insertAtIndex (const GGS_actualParameterAST inOperand0,
                                                       const GGS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  const GGS_actualParameterListAST_2E_element newElement (inOperand0) ;
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

void GGS_actualParameterListAST::setter_removeAtIndex (GGS_actualParameterAST & outOperand0,
                                                       const GGS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mActualParameter ;
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

void GGS_actualParameterListAST::setter_popFirst (GGS_actualParameterAST & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mActualParameter ;
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

void GGS_actualParameterListAST::setter_popLast (GGS_actualParameterAST & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mActualParameter ;
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

void GGS_actualParameterListAST::method_first (GGS_actualParameterAST & outOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mActualParameter ;
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

void GGS_actualParameterListAST::method_last (GGS_actualParameterAST & outOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mActualParameter ;
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

GGS_actualParameterListAST GGS_actualParameterListAST::add_operation (const GGS_actualParameterListAST & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_actualParameterListAST result ;
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

GGS_actualParameterListAST GGS_actualParameterListAST::subList (const int32_t inStart,
                                                                const int32_t inLength,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_actualParameterListAST result ;
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

GGS_actualParameterListAST GGS_actualParameterListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_actualParameterListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST GGS_actualParameterListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_actualParameterListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST GGS_actualParameterListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_actualParameterListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListAST::plusAssignOperation (const GGS_actualParameterListAST inList,
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

void GGS_actualParameterListAST::setter_setMActualParameterAtIndex (GGS_actualParameterAST inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mActualParameter = inOperand ;
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

GGS_actualParameterAST GGS_actualParameterListAST::getter_mActualParameterAtIndex (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_actualParameterAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mActualParameter ;
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
// Down Enumerator for @actualParameterListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_actualParameterListAST::DownEnumerator_actualParameterListAST (const GGS_actualParameterListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST_2E_element DownEnumerator_actualParameterListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterAST DownEnumerator_actualParameterListAST::current_mActualParameter (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mActualParameter ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @actualParameterListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_actualParameterListAST::UpEnumerator_actualParameterListAST (const GGS_actualParameterListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST_2E_element UpEnumerator_actualParameterListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterAST UpEnumerator_actualParameterListAST::current_mActualParameter (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mActualParameter ;
}




//--------------------------------------------------------------------------------------------------
//     @actualParameterListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualParameterListAST ("actualParameterListAST",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_actualParameterListAST::staticTypeDescriptor (void) const {
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
//Class for element of '@actualParameterListForGeneration' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_actualParameterListForGeneration : public CollectionElementPtr {
  public: GGS_actualParameterListForGeneration_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_actualParameterListForGeneration (const GGS_actualParameterForGeneration & in_mActualParameter
                                                                 COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_actualParameterListForGeneration (const GGS_actualParameterListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_actualParameterListForGeneration::CollectionElementPtr_actualParameterListForGeneration (const GGS_actualParameterForGeneration & in_mActualParameter
                                                                                                              COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mActualParameter) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_actualParameterListForGeneration::CollectionElementPtr_actualParameterListForGeneration (const GGS_actualParameterListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mActualParameter) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_actualParameterListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_actualParameterListForGeneration::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_actualParameterListForGeneration (mObject.mProperty_mActualParameter COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @actualParameterListForGeneration
//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration::GGS_actualParameterListForGeneration (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration::GGS_actualParameterListForGeneration (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_actualParameterListForGeneration * p = (CollectionElementPtr_actualParameterListForGeneration *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_actualParameterListForGeneration) ;
    const GGS_actualParameterListForGeneration_2E_element element (p->mObject.mProperty_mActualParameter) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                      const GGS_actualParameterForGeneration & in_mActualParameter
                                                                      COMMA_LOCATION_ARGS) {
  CollectionElementPtr_actualParameterListForGeneration * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_actualParameterListForGeneration (in_mActualParameter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_actualParameterListForGeneration::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_actualParameterListForGeneration::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration::description (String & ioString,
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
      ioString.appendString ("mActualParameter:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mActualParameter.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_actualParameterListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actualParameterListForGeneration result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration::plusPlusAssignOperation (const GGS_actualParameterListForGeneration_2E_element & inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_actualParameterListForGeneration::class_func_listWithValue (const GGS_actualParameterForGeneration & inOperand0
                                                                                                     COMMA_LOCATION_ARGS) {
  const GGS_actualParameterListForGeneration_2E_element element (inOperand0) ;
  GGS_actualParameterListForGeneration result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration::addAssignOperation (const GGS_actualParameterForGeneration & inOperand0
                                                               COMMA_LOCATION_ARGS) {
  const GGS_actualParameterListForGeneration_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration::setter_append (const GGS_actualParameterForGeneration inOperand0,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  const GGS_actualParameterListForGeneration_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration::setter_insertAtIndex (const GGS_actualParameterForGeneration inOperand0,
                                                                 const GGS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_actualParameterListForGeneration_2E_element newElement (inOperand0) ;
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

void GGS_actualParameterListForGeneration::setter_removeAtIndex (GGS_actualParameterForGeneration & outOperand0,
                                                                 const GGS_uint inRemoveIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mActualParameter ;
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

void GGS_actualParameterListForGeneration::setter_popFirst (GGS_actualParameterForGeneration & outOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mActualParameter ;
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

void GGS_actualParameterListForGeneration::setter_popLast (GGS_actualParameterForGeneration & outOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mActualParameter ;
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

void GGS_actualParameterListForGeneration::method_first (GGS_actualParameterForGeneration & outOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mActualParameter ;
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

void GGS_actualParameterListForGeneration::method_last (GGS_actualParameterForGeneration & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mActualParameter ;
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

GGS_actualParameterListForGeneration GGS_actualParameterListForGeneration::add_operation (const GGS_actualParameterListForGeneration & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_actualParameterListForGeneration result ;
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

GGS_actualParameterListForGeneration GGS_actualParameterListForGeneration::subList (const int32_t inStart,
                                                                                    const int32_t inLength,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_actualParameterListForGeneration result ;
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

GGS_actualParameterListForGeneration GGS_actualParameterListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_actualParameterListForGeneration result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_actualParameterListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_actualParameterListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_actualParameterListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_actualParameterListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration::plusAssignOperation (const GGS_actualParameterListForGeneration inList,
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

void GGS_actualParameterListForGeneration::setter_setMActualParameterAtIndex (GGS_actualParameterForGeneration inOperand,
                                                                              GGS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mActualParameter = inOperand ;
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

GGS_actualParameterForGeneration GGS_actualParameterListForGeneration::getter_mActualParameterAtIndex (const GGS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_actualParameterForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mActualParameter ;
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
// Down Enumerator for @actualParameterListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_actualParameterListForGeneration::DownEnumerator_actualParameterListForGeneration (const GGS_actualParameterListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration_2E_element DownEnumerator_actualParameterListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterForGeneration DownEnumerator_actualParameterListForGeneration::current_mActualParameter (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mActualParameter ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @actualParameterListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_actualParameterListForGeneration::UpEnumerator_actualParameterListForGeneration (const GGS_actualParameterListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration_2E_element UpEnumerator_actualParameterListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterForGeneration UpEnumerator_actualParameterListForGeneration::current_mActualParameter (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mActualParameter ;
}




//--------------------------------------------------------------------------------------------------
//     @actualParameterListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualParameterListForGeneration ("actualParameterListForGeneration",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_actualParameterListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actualParameterListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actualParameterListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_actualParameterListForGeneration::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_actualParameterListForGeneration result ;
  const GGS_actualParameterListForGeneration * p = (const GGS_actualParameterListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actualParameterListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
    s.appendCString ("proc @unifiedTypeMapEntry.element invoked with an invalid enum value") ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry ("unifiedTypeMapEntry",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unifiedTypeMapEntry::staticTypeDescriptor (void) const {
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

ComparisonResult GGS_superMethodCallInstructionForGeneration_2E_weak::objectCompare (const GGS_superMethodCallInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_superMethodCallInstructionForGeneration_2E_weak::GGS_superMethodCallInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionForGeneration_2E_weak & GGS_superMethodCallInstructionForGeneration_2E_weak::operator = (const GGS_superMethodCallInstructionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionForGeneration_2E_weak::GGS_superMethodCallInstructionForGeneration_2E_weak (const GGS_superMethodCallInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionForGeneration_2E_weak GGS_superMethodCallInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_superMethodCallInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionForGeneration GGS_superMethodCallInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_superMethodCallInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_superMethodCallInstructionForGeneration * p = (cPtr_superMethodCallInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_superMethodCallInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionForGeneration GGS_superMethodCallInstructionForGeneration_2E_weak::bang_superMethodCallInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_superMethodCallInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_superMethodCallInstructionForGeneration) ;
      result = GGS_superMethodCallInstructionForGeneration ((cPtr_superMethodCallInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @superMethodCallInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_superMethodCallInstructionForGeneration_2E_weak ("superMethodCallInstructionForGeneration.weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_superMethodCallInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superMethodCallInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_superMethodCallInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_superMethodCallInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionForGeneration_2E_weak GGS_superMethodCallInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_superMethodCallInstructionForGeneration_2E_weak result ;
  const GGS_superMethodCallInstructionForGeneration_2E_weak * p = (const GGS_superMethodCallInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_superMethodCallInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("superMethodCallInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @syntaxInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syntaxInstructionAST::objectCompare (const GGS_syntaxInstructionAST & inOperand) const {
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

GGS_syntaxInstructionAST::GGS_syntaxInstructionAST (void) :
AC_GALGAS_reference_class () {
}


void cPtr_syntaxInstructionAST::
syntaxInstructionAST_init_21_ (const GGS_location & in_mInstructionLocation,
                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionAST::GGS_syntaxInstructionAST (const cPtr_syntaxInstructionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syntaxInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_syntaxInstructionAST::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_syntaxInstructionAST * p = (cPtr_syntaxInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxInstructionAST) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @syntaxInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_syntaxInstructionAST::cPtr_syntaxInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_syntaxInstructionAST::cPtr_syntaxInstructionAST (const GGS_location & in_mInstructionLocation,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_syntaxInstructionAST::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @syntaxInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxInstructionAST ("syntaxInstructionAST",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionAST GGS_syntaxInstructionAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_syntaxInstructionAST result ;
  const GGS_syntaxInstructionAST * p = (const GGS_syntaxInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syntaxInstructionAST_2E_weak::objectCompare (const GGS_syntaxInstructionAST_2E_weak & inOperand) const {
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

GGS_syntaxInstructionAST_2E_weak::GGS_syntaxInstructionAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionAST_2E_weak & GGS_syntaxInstructionAST_2E_weak::operator = (const GGS_syntaxInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionAST_2E_weak::GGS_syntaxInstructionAST_2E_weak (const GGS_syntaxInstructionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionAST_2E_weak GGS_syntaxInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_syntaxInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionAST GGS_syntaxInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_syntaxInstructionAST result ;
  if (isValid ()) {
    const cPtr_syntaxInstructionAST * p = (cPtr_syntaxInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_syntaxInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionAST GGS_syntaxInstructionAST_2E_weak::bang_syntaxInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_syntaxInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syntaxInstructionAST) ;
      result = GGS_syntaxInstructionAST ((cPtr_syntaxInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @syntaxInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak ("syntaxInstructionAST.weak",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionAST_2E_weak GGS_syntaxInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_syntaxInstructionAST_2E_weak result ;
  const GGS_syntaxInstructionAST_2E_weak * p = (const GGS_syntaxInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @syntaxInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syntaxInstructionForGeneration::objectCompare (const GGS_syntaxInstructionForGeneration & inOperand) const {
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

GGS_syntaxInstructionForGeneration::GGS_syntaxInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}


void cPtr_syntaxInstructionForGeneration::
syntaxInstructionForGeneration_init_21_ (const GGS_location & in_mInstructionLocation,
                                         Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionForGeneration::GGS_syntaxInstructionForGeneration (const cPtr_syntaxInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syntaxInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_syntaxInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_syntaxInstructionForGeneration * p = (cPtr_syntaxInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @syntaxInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_syntaxInstructionForGeneration::cPtr_syntaxInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_syntaxInstructionForGeneration::cPtr_syntaxInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_syntaxInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @syntaxInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxInstructionForGeneration ("syntaxInstructionForGeneration",
                                                                                   & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionForGeneration GGS_syntaxInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_syntaxInstructionForGeneration result ;
  const GGS_syntaxInstructionForGeneration * p = (const GGS_syntaxInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syntaxInstructionForGeneration_2E_weak::objectCompare (const GGS_syntaxInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_syntaxInstructionForGeneration_2E_weak::GGS_syntaxInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionForGeneration_2E_weak & GGS_syntaxInstructionForGeneration_2E_weak::operator = (const GGS_syntaxInstructionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionForGeneration_2E_weak::GGS_syntaxInstructionForGeneration_2E_weak (const GGS_syntaxInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionForGeneration_2E_weak GGS_syntaxInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_syntaxInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionForGeneration GGS_syntaxInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_syntaxInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_syntaxInstructionForGeneration * p = (cPtr_syntaxInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_syntaxInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionForGeneration GGS_syntaxInstructionForGeneration_2E_weak::bang_syntaxInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_syntaxInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syntaxInstructionForGeneration) ;
      result = GGS_syntaxInstructionForGeneration ((cPtr_syntaxInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @syntaxInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak ("syntaxInstructionForGeneration.weak",
                                                                                           & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionForGeneration_2E_weak GGS_syntaxInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_syntaxInstructionForGeneration_2E_weak result ;
  const GGS_syntaxInstructionForGeneration_2E_weak * p = (const GGS_syntaxInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum fixitElementAST
//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST::GGS_fixitElementAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST GGS_fixitElementAST::class_func_fixItRemove (UNUSED_LOCATION_ARGS) {
  GGS_fixitElementAST result ;
  result.mEnum = Enumeration::enum_fixItRemove ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST GGS_fixitElementAST::class_func_fixItReplace (const GGS_semanticExpressionAST & inAssociatedValue0,
                                                                  const GGS_location & inAssociatedValue1
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementAST result ;
  result.mEnum = Enumeration::enum_fixItReplace ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_fixitElementAST_2E_fixItReplace (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST GGS_fixitElementAST::class_func_fixItInsertAfter (const GGS_semanticExpressionAST & inAssociatedValue0,
                                                                      const GGS_location & inAssociatedValue1
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementAST result ;
  result.mEnum = Enumeration::enum_fixItInsertAfter ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_fixitElementAST_2E_fixItInsertAfter (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST GGS_fixitElementAST::class_func_fixItInsertBefore (const GGS_semanticExpressionAST & inAssociatedValue0,
                                                                       const GGS_location & inAssociatedValue1
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementAST result ;
  result.mEnum = Enumeration::enum_fixItInsertBefore ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_fixitElementAST_2E_fixItInsertBefore (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST::method_extractFixItReplace (GGS_semanticExpressionAST & outAssociatedValue_exp,
                                                      GGS_location & outAssociatedValue_errorLocation,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_fixItReplace) {
    outAssociatedValue_exp.drop () ;
    outAssociatedValue_errorLocation.drop () ;
    String s ;
    s.appendCString ("proc @fixitElementAST.fixItReplace invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_fixitElementAST_2E_fixItReplace *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
    outAssociatedValue_errorLocation = ptr->mProperty_errorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST::method_extractFixItInsertAfter (GGS_semanticExpressionAST & outAssociatedValue_exp,
                                                          GGS_location & outAssociatedValue_errorLocation,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_fixItInsertAfter) {
    outAssociatedValue_exp.drop () ;
    outAssociatedValue_errorLocation.drop () ;
    String s ;
    s.appendCString ("proc @fixitElementAST.fixItInsertAfter invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_fixitElementAST_2E_fixItInsertAfter *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
    outAssociatedValue_errorLocation = ptr->mProperty_errorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST::method_extractFixItInsertBefore (GGS_semanticExpressionAST & outAssociatedValue_exp,
                                                           GGS_location & outAssociatedValue_errorLocation,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_fixItInsertBefore) {
    outAssociatedValue_exp.drop () ;
    outAssociatedValue_errorLocation.drop () ;
    String s ;
    s.appendCString ("proc @fixitElementAST.fixItInsertBefore invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_fixitElementAST_2E_fixItInsertBefore *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
    outAssociatedValue_errorLocation = ptr->mProperty_errorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace_3F_ GGS_fixitElementAST::getter_getFixItReplace (UNUSED_LOCATION_ARGS) const {
  GGS_fixitElementAST_2E_fixItReplace_3F_ result ;
  if (mEnum == Enumeration::enum_fixItReplace) {
    const auto ptr = (const GGS_fixitElementAST_2E_fixItReplace *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_fixitElementAST_2E_fixItReplace (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST::getAssociatedValuesFor_fixItReplace (GGS_semanticExpressionAST & out_exp,
                                                               GGS_location & out_errorLocation) const {
  const auto ptr = (const GGS_fixitElementAST_2E_fixItReplace *) mAssociatedValues.associatedValuesPointer () ;
  out_exp = ptr->mProperty_exp ;
  out_errorLocation = ptr->mProperty_errorLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter_3F_ GGS_fixitElementAST::getter_getFixItInsertAfter (UNUSED_LOCATION_ARGS) const {
  GGS_fixitElementAST_2E_fixItInsertAfter_3F_ result ;
  if (mEnum == Enumeration::enum_fixItInsertAfter) {
    const auto ptr = (const GGS_fixitElementAST_2E_fixItInsertAfter *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_fixitElementAST_2E_fixItInsertAfter (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST::getAssociatedValuesFor_fixItInsertAfter (GGS_semanticExpressionAST & out_exp,
                                                                   GGS_location & out_errorLocation) const {
  const auto ptr = (const GGS_fixitElementAST_2E_fixItInsertAfter *) mAssociatedValues.associatedValuesPointer () ;
  out_exp = ptr->mProperty_exp ;
  out_errorLocation = ptr->mProperty_errorLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore_3F_ GGS_fixitElementAST::getter_getFixItInsertBefore (UNUSED_LOCATION_ARGS) const {
  GGS_fixitElementAST_2E_fixItInsertBefore_3F_ result ;
  if (mEnum == Enumeration::enum_fixItInsertBefore) {
    const auto ptr = (const GGS_fixitElementAST_2E_fixItInsertBefore *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_fixitElementAST_2E_fixItInsertBefore (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST::getAssociatedValuesFor_fixItInsertBefore (GGS_semanticExpressionAST & out_exp,
                                                                    GGS_location & out_errorLocation) const {
  const auto ptr = (const GGS_fixitElementAST_2E_fixItInsertBefore *) mAssociatedValues.associatedValuesPointer () ;
  out_exp = ptr->mProperty_exp ;
  out_errorLocation = ptr->mProperty_errorLocation ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_fixitElementAST [5] = {
  "(not built)",
  "fixItRemove",
  "fixItReplace",
  "fixItInsertAfter",
  "fixItInsertBefore"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_fixitElementAST::getter_isFixItRemove (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fixItRemove == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_fixitElementAST::getter_isFixItReplace (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fixItReplace == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_fixitElementAST::getter_isFixItInsertAfter (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fixItInsertAfter == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_fixitElementAST::getter_isFixItInsertBefore (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fixItInsertBefore == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<enum @fixitElementAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_fixitElementAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @fixitElementAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementAST ("fixitElementAST",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST GGS_fixitElementAST::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_fixitElementAST result ;
  const GGS_fixitElementAST * p = (const GGS_fixitElementAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_fixitElementAST_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_fixitElementAST_5D_::GGS__5B_fixitElementAST_5D_ (void) :
AC_GALGAS_root (),
mSharedArray () {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_fixitElementAST_5D_::GGS__5B_fixitElementAST_5D_ (const GGS__5B_fixitElementAST_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_fixitElementAST_5D_ & GGS__5B_fixitElementAST_5D_::operator = (const GGS__5B_fixitElementAST_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_fixitElementAST_5D_ GGS__5B_fixitElementAST_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_fixitElementAST_5D_ result ;
  result.mSharedArray.setCapacity (16) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS__5B_fixitElementAST_5D_::isValid (void) const {
  return mSharedArray.isAllocated () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_fixitElementAST_5D_::drop (void) {
  mSharedArray.removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_fixitElementAST_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mSharedArray.setCapacity (16) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_fixitElementAST_5D_::plusPlusAssignOperation (const GGS_fixitElementAST & inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mSharedArray.appendObject (inValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_fixitElementAST_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_fixitElementAST_5D_ GGS__5B_fixitElementAST_5D_::add_operation (const GGS__5B_fixitElementAST_5D_ & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_fixitElementAST_5D_ result ;
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

void GGS__5B_fixitElementAST_5D_::description (String & ioString,
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

void GGS__5B_fixitElementAST_5D_::plusAssignOperation (const GGS__5B_fixitElementAST_5D_ inOperand,
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

void GGS__5B_fixitElementAST_5D_::setter_append (const GGS_fixitElementAST inValue,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_fixitElementAST_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_fixitElementAST_5D_::setter_insertAtIndex (const GGS_fixitElementAST inValue,
                                                        const GGS_uint inInsertionIndex,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_fixitElementAST_5D_::setter_removeAtIndex (GGS_fixitElementAST & outValue,
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

void GGS__5B_fixitElementAST_5D_::setter_popFirst (GGS_fixitElementAST & outValue,
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

void GGS__5B_fixitElementAST_5D_::setter_popLast (GGS_fixitElementAST & outValue,
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

void GGS__5B_fixitElementAST_5D_::method_first (GGS_fixitElementAST & outValue,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray (0 COMMA_THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_fixitElementAST_5D_::method_last (GGS_fixitElementAST & outValue,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray.lastObject (THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST GGS__5B_fixitElementAST_5D_::readSubscript__3F_ (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_fixitElementAST result ;
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
// Down Enumerator for @_5B_fixitElementAST_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_fixitElementAST_5D_::DownEnumerator__5B_fixitElementAST_5D_ (const GGS__5B_fixitElementAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST DownEnumerator__5B_fixitElementAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST DownEnumerator__5B_fixitElementAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_fixitElementAST_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_fixitElementAST_5D_::UpEnumerator__5B_fixitElementAST_5D_ (const GGS__5B_fixitElementAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST UpEnumerator__5B_fixitElementAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST UpEnumerator__5B_fixitElementAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[fixitElementAST] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_fixitElementAST_5D_ ("[fixitElementAST]",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_fixitElementAST_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_fixitElementAST_5D_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__5B_fixitElementAST_5D_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__5B_fixitElementAST_5D_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_fixitElementAST_5D_ GGS__5B_fixitElementAST_5D_::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS__5B_fixitElementAST_5D_ result ;
  const GGS__5B_fixitElementAST_5D_ * p = (const GGS__5B_fixitElementAST_5D_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__5B_fixitElementAST_5D_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("[fixitElementAST]", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@[fixitElementAST] enterFixItListInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterFixItListInSemanticContext (const GGS__5B_fixitElementAST_5D_ inObject,
                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS__5B_fixitElementAST_5D_ temp_0 = inObject ;
  UpEnumerator__5B_fixitElementAST_5D_ enumerator_5412 (temp_0) ;
  while (enumerator_5412.hasCurrentObject ()) {
    switch (enumerator_5412.current (HERE).enumValue ()) {
    case GGS_fixitElementAST::Enumeration::invalid:
      break ;
    case GGS_fixitElementAST::Enumeration::enum_fixItRemove:
      break ;
    case GGS_fixitElementAST::Enumeration::enum_fixItReplace:
      {
        GGS_semanticExpressionAST extractedValue_5506_exp_0 ;
        GGS_location extractedValue_5511__1 ;
        enumerator_5412.current (HERE).getAssociatedValuesFor_fixItReplace (extractedValue_5506_exp_0, extractedValue_5511__1) ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_5506_exp_0.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 137)) ;
      }
      break ;
    case GGS_fixitElementAST::Enumeration::enum_fixItInsertBefore:
      {
        GGS_semanticExpressionAST extractedValue_5624_exp_0 ;
        GGS_location extractedValue_5629__1 ;
        enumerator_5412.current (HERE).getAssociatedValuesFor_fixItInsertBefore (extractedValue_5624_exp_0, extractedValue_5629__1) ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_5624_exp_0.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 139)) ;
      }
      break ;
    case GGS_fixitElementAST::Enumeration::enum_fixItInsertAfter:
      {
        GGS_semanticExpressionAST extractedValue_5741_exp_0 ;
        GGS_location extractedValue_5746__1 ;
        enumerator_5412.current (HERE).getAssociatedValuesFor_fixItInsertAfter (extractedValue_5741_exp_0, extractedValue_5746__1) ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_5741_exp_0.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 141)) ;
      }
      break ;
    }
    enumerator_5412.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//  Enum fixitElementForGeneration
//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration::GGS_fixitElementForGeneration (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration GGS_fixitElementForGeneration::class_func_fixItRemove (UNUSED_LOCATION_ARGS) {
  GGS_fixitElementForGeneration result ;
  result.mEnum = Enumeration::enum_fixItRemove ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration GGS_fixitElementForGeneration::class_func_fixItReplace (const GGS_semanticExpressionForGeneration & inAssociatedValue0
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementForGeneration result ;
  result.mEnum = Enumeration::enum_fixItReplace ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_fixitElementForGeneration_2E_fixItReplace (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration GGS_fixitElementForGeneration::class_func_fixItInsertBefore (const GGS_semanticExpressionForGeneration & inAssociatedValue0
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementForGeneration result ;
  result.mEnum = Enumeration::enum_fixItInsertBefore ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_fixitElementForGeneration_2E_fixItInsertBefore (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration GGS_fixitElementForGeneration::class_func_fixItInsertAfter (const GGS_semanticExpressionForGeneration & inAssociatedValue0
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementForGeneration result ;
  result.mEnum = Enumeration::enum_fixItInsertAfter ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_fixitElementForGeneration_2E_fixItInsertAfter (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration::method_extractFixItReplace (GGS_semanticExpressionForGeneration & outAssociatedValue_exp,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_fixItReplace) {
    outAssociatedValue_exp.drop () ;
    String s ;
    s.appendCString ("proc @fixitElementForGeneration.fixItReplace invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_fixitElementForGeneration_2E_fixItReplace *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration::method_extractFixItInsertBefore (GGS_semanticExpressionForGeneration & outAssociatedValue_exp,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_fixItInsertBefore) {
    outAssociatedValue_exp.drop () ;
    String s ;
    s.appendCString ("proc @fixitElementForGeneration.fixItInsertBefore invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_fixitElementForGeneration_2E_fixItInsertBefore *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration::method_extractFixItInsertAfter (GGS_semanticExpressionForGeneration & outAssociatedValue_exp,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_fixItInsertAfter) {
    outAssociatedValue_exp.drop () ;
    String s ;
    s.appendCString ("proc @fixitElementForGeneration.fixItInsertAfter invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_fixitElementForGeneration_2E_fixItInsertAfter *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace_3F_ GGS_fixitElementForGeneration::getter_getFixItReplace (UNUSED_LOCATION_ARGS) const {
  GGS_fixitElementForGeneration_2E_fixItReplace_3F_ result ;
  if (mEnum == Enumeration::enum_fixItReplace) {
    const auto ptr = (const GGS_fixitElementForGeneration_2E_fixItReplace *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_fixitElementForGeneration_2E_fixItReplace (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration::getAssociatedValuesFor_fixItReplace (GGS_semanticExpressionForGeneration & out_exp) const {
  const auto ptr = (const GGS_fixitElementForGeneration_2E_fixItReplace *) mAssociatedValues.associatedValuesPointer () ;
  out_exp = ptr->mProperty_exp ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ GGS_fixitElementForGeneration::getter_getFixItInsertBefore (UNUSED_LOCATION_ARGS) const {
  GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ result ;
  if (mEnum == Enumeration::enum_fixItInsertBefore) {
    const auto ptr = (const GGS_fixitElementForGeneration_2E_fixItInsertBefore *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_fixitElementForGeneration_2E_fixItInsertBefore (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration::getAssociatedValuesFor_fixItInsertBefore (GGS_semanticExpressionForGeneration & out_exp) const {
  const auto ptr = (const GGS_fixitElementForGeneration_2E_fixItInsertBefore *) mAssociatedValues.associatedValuesPointer () ;
  out_exp = ptr->mProperty_exp ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ GGS_fixitElementForGeneration::getter_getFixItInsertAfter (UNUSED_LOCATION_ARGS) const {
  GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ result ;
  if (mEnum == Enumeration::enum_fixItInsertAfter) {
    const auto ptr = (const GGS_fixitElementForGeneration_2E_fixItInsertAfter *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_fixitElementForGeneration_2E_fixItInsertAfter (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration::getAssociatedValuesFor_fixItInsertAfter (GGS_semanticExpressionForGeneration & out_exp) const {
  const auto ptr = (const GGS_fixitElementForGeneration_2E_fixItInsertAfter *) mAssociatedValues.associatedValuesPointer () ;
  out_exp = ptr->mProperty_exp ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_fixitElementForGeneration [5] = {
  "(not built)",
  "fixItRemove",
  "fixItReplace",
  "fixItInsertBefore",
  "fixItInsertAfter"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_fixitElementForGeneration::getter_isFixItRemove (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fixItRemove == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_fixitElementForGeneration::getter_isFixItReplace (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fixItReplace == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_fixitElementForGeneration::getter_isFixItInsertBefore (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fixItInsertBefore == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_fixitElementForGeneration::getter_isFixItInsertAfter (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fixItInsertAfter == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<enum @fixitElementForGeneration: ") ;
  ioString.appendCString (gEnumNameArrayFor_fixitElementForGeneration [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @fixitElementForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration ("fixitElementForGeneration",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration GGS_fixitElementForGeneration::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_fixitElementForGeneration result ;
  const GGS_fixitElementForGeneration * p = (const GGS_fixitElementForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_fixitElementForGeneration_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_fixitElementForGeneration_5D_::GGS__5B_fixitElementForGeneration_5D_ (void) :
AC_GALGAS_root (),
mSharedArray () {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_fixitElementForGeneration_5D_::GGS__5B_fixitElementForGeneration_5D_ (const GGS__5B_fixitElementForGeneration_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_fixitElementForGeneration_5D_ & GGS__5B_fixitElementForGeneration_5D_::operator = (const GGS__5B_fixitElementForGeneration_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_fixitElementForGeneration_5D_ GGS__5B_fixitElementForGeneration_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_fixitElementForGeneration_5D_ result ;
  result.mSharedArray.setCapacity (16) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS__5B_fixitElementForGeneration_5D_::isValid (void) const {
  return mSharedArray.isAllocated () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_fixitElementForGeneration_5D_::drop (void) {
  mSharedArray.removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_fixitElementForGeneration_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mSharedArray.setCapacity (16) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_fixitElementForGeneration_5D_::plusPlusAssignOperation (const GGS_fixitElementForGeneration & inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mSharedArray.appendObject (inValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_fixitElementForGeneration_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_fixitElementForGeneration_5D_ GGS__5B_fixitElementForGeneration_5D_::add_operation (const GGS__5B_fixitElementForGeneration_5D_ & inOperand,
                                                                                            Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_fixitElementForGeneration_5D_ result ;
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

void GGS__5B_fixitElementForGeneration_5D_::description (String & ioString,
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

void GGS__5B_fixitElementForGeneration_5D_::plusAssignOperation (const GGS__5B_fixitElementForGeneration_5D_ inOperand,
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

void GGS__5B_fixitElementForGeneration_5D_::setter_append (const GGS_fixitElementForGeneration inValue,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_fixitElementForGeneration_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_fixitElementForGeneration_5D_::setter_insertAtIndex (const GGS_fixitElementForGeneration inValue,
                                                                  const GGS_uint inInsertionIndex,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_fixitElementForGeneration_5D_::setter_removeAtIndex (GGS_fixitElementForGeneration & outValue,
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

void GGS__5B_fixitElementForGeneration_5D_::setter_popFirst (GGS_fixitElementForGeneration & outValue,
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

void GGS__5B_fixitElementForGeneration_5D_::setter_popLast (GGS_fixitElementForGeneration & outValue,
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

void GGS__5B_fixitElementForGeneration_5D_::method_first (GGS_fixitElementForGeneration & outValue,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray (0 COMMA_THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_fixitElementForGeneration_5D_::method_last (GGS_fixitElementForGeneration & outValue,
                                                         Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray.lastObject (THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration GGS__5B_fixitElementForGeneration_5D_::readSubscript__3F_ (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_fixitElementForGeneration result ;
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
// Down Enumerator for @_5B_fixitElementForGeneration_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_fixitElementForGeneration_5D_::DownEnumerator__5B_fixitElementForGeneration_5D_ (const GGS__5B_fixitElementForGeneration_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration DownEnumerator__5B_fixitElementForGeneration_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration DownEnumerator__5B_fixitElementForGeneration_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_fixitElementForGeneration_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_fixitElementForGeneration_5D_::UpEnumerator__5B_fixitElementForGeneration_5D_ (const GGS__5B_fixitElementForGeneration_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration UpEnumerator__5B_fixitElementForGeneration_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration UpEnumerator__5B_fixitElementForGeneration_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[fixitElementForGeneration] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_fixitElementForGeneration_5D_ ("[fixitElementForGeneration]",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_fixitElementForGeneration_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_fixitElementForGeneration_5D_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__5B_fixitElementForGeneration_5D_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__5B_fixitElementForGeneration_5D_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_fixitElementForGeneration_5D_ GGS__5B_fixitElementForGeneration_5D_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS__5B_fixitElementForGeneration_5D_ result ;
  const GGS__5B_fixitElementForGeneration_5D_ * p = (const GGS__5B_fixitElementForGeneration_5D_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__5B_fixitElementForGeneration_5D_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("[fixitElementForGeneration]", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@[fixitElementForGeneration] generateFixIt'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateFixIt (const GGS__5B_fixitElementForGeneration_5D_ inObject,
                                    GGS_stringset & ioArgument_ioInclusionSet,
                                    GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                    GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                    const GGS_bool /* constinArgument__5F_inGenerateSyntaxDirectedTranslationString */,
                                    GGS_string & ioArgument_ioGeneratedCode,
                                    GGS_string & outArgument_outFixItArrayCppName,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFixItArrayCppName.drop () ; // Release 'out' argument
  outArgument_outFixItArrayCppName = GGS_string ("fixItArray").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-error.galgas4", 324)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 324)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas4", 325)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GenericArray <FixItDescription> ").add_operation (outArgument_outFixItArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 326)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 326)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas4", 326)) ;
  const GGS__5B_fixitElementForGeneration_5D_ temp_0 = inObject ;
  UpEnumerator__5B_fixitElementForGeneration_5D_ enumerator_13553 (temp_0) ;
  while (enumerator_13553.hasCurrentObject ()) {
    switch (enumerator_13553.current (HERE).enumValue ()) {
    case GGS_fixitElementForGeneration::Enumeration::invalid:
      break ;
    case GGS_fixitElementForGeneration::Enumeration::enum_fixItRemove:
      {
        ioArgument_ioGeneratedCode.plusAssignOperation(outArgument_outFixItArrayCppName.add_operation (GGS_string (".appendObject (FixItDescription (EnumFixItKind::fixItRemove, \"\")) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 330)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas4", 330)) ;
      }
      break ;
    case GGS_fixitElementForGeneration::Enumeration::enum_fixItReplace:
      {
        GGS_semanticExpressionForGeneration extractedValue_13781_exp_0 ;
        enumerator_13553.current (HERE).getAssociatedValuesFor_fixItReplace (extractedValue_13781_exp_0) ;
        GGS_string var_receiverCppVarName_13958 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_13781_exp_0.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_13958, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 332)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("appendFixItActions (").add_operation (outArgument_outFixItArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 339)).add_operation (GGS_string (", EnumFixItKind::fixItReplace, "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 339)).add_operation (var_receiverCppVarName_13958, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 339)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 339)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas4", 339)) ;
      }
      break ;
    case GGS_fixitElementForGeneration::Enumeration::enum_fixItInsertBefore:
      {
        GGS_semanticExpressionForGeneration extractedValue_14184_exp_0 ;
        enumerator_13553.current (HERE).getAssociatedValuesFor_fixItInsertBefore (extractedValue_14184_exp_0) ;
        GGS_string var_receiverCppVarName_14361 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_14184_exp_0.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_14361, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 341)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("appendFixItActions (").add_operation (outArgument_outFixItArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 348)).add_operation (GGS_string (", EnumFixItKind::fixItInsertBefore, "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 348)).add_operation (var_receiverCppVarName_14361, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 348)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 348)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas4", 348)) ;
      }
      break ;
    case GGS_fixitElementForGeneration::Enumeration::enum_fixItInsertAfter:
      {
        GGS_semanticExpressionForGeneration extractedValue_14591_exp_0 ;
        enumerator_13553.current (HERE).getAssociatedValuesFor_fixItInsertAfter (extractedValue_14591_exp_0) ;
        GGS_string var_receiverCppVarName_14768 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_14591_exp_0.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_14768, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 350)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("appendFixItActions (").add_operation (outArgument_outFixItArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 357)).add_operation (GGS_string (", EnumFixItKind::fixItInsertAfter, "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 357)).add_operation (var_receiverCppVarName_14768, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 357)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 357)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas4", 357)) ;
      }
      break ;
    }
    enumerator_13553.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_errorInstructionForGeneration_2E_weak::objectCompare (const GGS_errorInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_errorInstructionForGeneration_2E_weak::GGS_errorInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionForGeneration_2E_weak & GGS_errorInstructionForGeneration_2E_weak::operator = (const GGS_errorInstructionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionForGeneration_2E_weak::GGS_errorInstructionForGeneration_2E_weak (const GGS_errorInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_errorInstructionForGeneration_2E_weak GGS_errorInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_errorInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionForGeneration GGS_errorInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_errorInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_errorInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionForGeneration GGS_errorInstructionForGeneration_2E_weak::bang_errorInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_errorInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_errorInstructionForGeneration) ;
      result = GGS_errorInstructionForGeneration ((cPtr_errorInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @errorInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_errorInstructionForGeneration_2E_weak ("errorInstructionForGeneration.weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_errorInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_errorInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_errorInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionForGeneration_2E_weak GGS_errorInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_errorInstructionForGeneration_2E_weak result ;
  const GGS_errorInstructionForGeneration_2E_weak * p = (const GGS_errorInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_errorInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("errorInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @procCallInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_procCallInstructionForGeneration::objectCompare (const GGS_procCallInstructionForGeneration & inOperand) const {
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

GGS_procCallInstructionForGeneration::GGS_procCallInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_procCallInstructionForGeneration GGS_procCallInstructionForGeneration::
init_21_routineMangledName_21_ (const GGS_lstring & in_routineMangledName,
                                const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) {
  cPtr_procCallInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_procCallInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->procCallInstructionForGeneration_init_21_routineMangledName_21_ (in_routineMangledName, in_mActualParameterList, inCompiler) ;
  const GGS_procCallInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_procCallInstructionForGeneration::
procCallInstructionForGeneration_init_21_routineMangledName_21_ (const GGS_lstring & in_routineMangledName,
                                                                 const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                 Compiler * /* inCompiler */) {
  mProperty_routineMangledName = in_routineMangledName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionForGeneration::GGS_procCallInstructionForGeneration (const cPtr_procCallInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_procCallInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_procCallInstructionForGeneration::readProperty_routineMangledName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_procCallInstructionForGeneration * p = (cPtr_procCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionForGeneration) ;
    return p->mProperty_routineMangledName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_procCallInstructionForGeneration::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualParameterListForGeneration () ;
  }else{
    cPtr_procCallInstructionForGeneration * p = (cPtr_procCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @procCallInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_procCallInstructionForGeneration::cPtr_procCallInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_routineMangledName (),
mProperty_mActualParameterList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_procCallInstructionForGeneration::cPtr_procCallInstructionForGeneration (const GGS_lstring & in_routineMangledName,
                                                                              const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_routineMangledName (),
mProperty_mActualParameterList () {
  mProperty_routineMangledName = in_routineMangledName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_procCallInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionForGeneration ;
}

void cPtr_procCallInstructionForGeneration::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@procCallInstructionForGeneration:") ;
  mProperty_routineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_procCallInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_procCallInstructionForGeneration (mProperty_routineMangledName, mProperty_mActualParameterList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_procCallInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_routineMangledName.printNonNullClassInstanceProperties ("routineMangledName") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @procCallInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procCallInstructionForGeneration ("procCallInstructionForGeneration",
                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_procCallInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_procCallInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_procCallInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionForGeneration GGS_procCallInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_procCallInstructionForGeneration result ;
  const GGS_procCallInstructionForGeneration * p = (const GGS_procCallInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_procCallInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_procCallInstructionForGeneration_2E_weak::objectCompare (const GGS_procCallInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_procCallInstructionForGeneration_2E_weak::GGS_procCallInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionForGeneration_2E_weak & GGS_procCallInstructionForGeneration_2E_weak::operator = (const GGS_procCallInstructionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionForGeneration_2E_weak::GGS_procCallInstructionForGeneration_2E_weak (const GGS_procCallInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionForGeneration_2E_weak GGS_procCallInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_procCallInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionForGeneration GGS_procCallInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_procCallInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_procCallInstructionForGeneration * p = (cPtr_procCallInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_procCallInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionForGeneration GGS_procCallInstructionForGeneration_2E_weak::bang_procCallInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_procCallInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_procCallInstructionForGeneration) ;
      result = GGS_procCallInstructionForGeneration ((cPtr_procCallInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @procCallInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procCallInstructionForGeneration_2E_weak ("procCallInstructionForGeneration.weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_procCallInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_procCallInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_procCallInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionForGeneration_2E_weak GGS_procCallInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_procCallInstructionForGeneration_2E_weak result ;
  const GGS_procCallInstructionForGeneration_2E_weak * p = (const GGS_procCallInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_procCallInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum opAssignmentOperator
//--------------------------------------------------------------------------------------------------

GGS_opAssignmentOperator::GGS_opAssignmentOperator (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_opAssignmentOperator GGS_opAssignmentOperator::class_func_andAssign (UNUSED_LOCATION_ARGS) {
  GGS_opAssignmentOperator result ;
  result.mEnum = Enumeration::enum_andAssign ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignmentOperator GGS_opAssignmentOperator::class_func_orAssign (UNUSED_LOCATION_ARGS) {
  GGS_opAssignmentOperator result ;
  result.mEnum = Enumeration::enum_orAssign ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignmentOperator GGS_opAssignmentOperator::class_func_xorAssign (UNUSED_LOCATION_ARGS) {
  GGS_opAssignmentOperator result ;
  result.mEnum = Enumeration::enum_xorAssign ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignmentOperator GGS_opAssignmentOperator::class_func_plusAssign (UNUSED_LOCATION_ARGS) {
  GGS_opAssignmentOperator result ;
  result.mEnum = Enumeration::enum_plusAssign ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignmentOperator GGS_opAssignmentOperator::class_func_minusAssign (UNUSED_LOCATION_ARGS) {
  GGS_opAssignmentOperator result ;
  result.mEnum = Enumeration::enum_minusAssign ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignmentOperator GGS_opAssignmentOperator::class_func_mulAssign (UNUSED_LOCATION_ARGS) {
  GGS_opAssignmentOperator result ;
  result.mEnum = Enumeration::enum_mulAssign ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignmentOperator GGS_opAssignmentOperator::class_func_divAssign (UNUSED_LOCATION_ARGS) {
  GGS_opAssignmentOperator result ;
  result.mEnum = Enumeration::enum_divAssign ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_opAssignmentOperator [8] = {
  "(not built)",
  "andAssign",
  "orAssign",
  "xorAssign",
  "plusAssign",
  "minusAssign",
  "mulAssign",
  "divAssign"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_opAssignmentOperator::getter_isAndAssign (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_andAssign == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_opAssignmentOperator::getter_isOrAssign (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_orAssign == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_opAssignmentOperator::getter_isXorAssign (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_xorAssign == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_opAssignmentOperator::getter_isPlusAssign (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_plusAssign == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_opAssignmentOperator::getter_isMinusAssign (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_minusAssign == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_opAssignmentOperator::getter_isMulAssign (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_mulAssign == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_opAssignmentOperator::getter_isDivAssign (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_divAssign == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_opAssignmentOperator::description (String & ioString,
                                            const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @opAssignmentOperator: ") ;
  ioString.appendCString (gEnumNameArrayFor_opAssignmentOperator [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @opAssignmentOperator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_opAssignmentOperator ("opAssignmentOperator",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_opAssignmentOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_opAssignmentOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_opAssignmentOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_opAssignmentOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignmentOperator GGS_opAssignmentOperator::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_opAssignmentOperator result ;
  const GGS_opAssignmentOperator * p = (const GGS_opAssignmentOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_opAssignmentOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("opAssignmentOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@opAssignmentOperator string'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_string (const GGS_opAssignmentOperator & inObject,
                                   Compiler * /* inCompiler */
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_opAssignmentOperator temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_opAssignmentOperator::Enumeration::invalid:
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_orAssign:
    {
      result_result = GGS_string ("|=") ;
    }
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_xorAssign:
    {
      result_result = GGS_string ("^=") ;
    }
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_andAssign:
    {
      result_result = GGS_string ("&=") ;
    }
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_plusAssign:
    {
      result_result = GGS_string ("+=") ;
    }
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_minusAssign:
    {
      result_result = GGS_string ("-=") ;
    }
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_mulAssign:
    {
      result_result = GGS_string ("*=") ;
    }
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_divAssign:
    {
      result_result = GGS_string ("/=") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@opAssignmentOperator cppFunctionName'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_cppFunctionName (const GGS_opAssignmentOperator & inObject,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_opAssignmentOperator temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_opAssignmentOperator::Enumeration::invalid:
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_orAssign:
    {
      result_result = GGS_string ("orAssignOperation") ;
    }
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_xorAssign:
    {
      result_result = GGS_string ("xorAssignOperation") ;
    }
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_andAssign:
    {
      result_result = GGS_string ("andAssignOperation") ;
    }
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_plusAssign:
    {
      result_result = GGS_string ("plusAssignOperation") ;
    }
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_minusAssign:
    {
      result_result = GGS_string ("minusAssignOperation") ;
    }
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_mulAssign:
    {
      result_result = GGS_string ("mulAssignOperation") ;
    }
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_divAssign:
    {
      result_result = GGS_string ("divAssignOperation") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_opAssignInstructionForGeneration_2E_weak::objectCompare (const GGS_opAssignInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_opAssignInstructionForGeneration_2E_weak::GGS_opAssignInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignInstructionForGeneration_2E_weak & GGS_opAssignInstructionForGeneration_2E_weak::operator = (const GGS_opAssignInstructionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignInstructionForGeneration_2E_weak::GGS_opAssignInstructionForGeneration_2E_weak (const GGS_opAssignInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_opAssignInstructionForGeneration_2E_weak GGS_opAssignInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_opAssignInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignInstructionForGeneration GGS_opAssignInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_opAssignInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_opAssignInstructionForGeneration * p = (cPtr_opAssignInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_opAssignInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignInstructionForGeneration GGS_opAssignInstructionForGeneration_2E_weak::bang_opAssignInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_opAssignInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_opAssignInstructionForGeneration) ;
      result = GGS_opAssignInstructionForGeneration ((cPtr_opAssignInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @opAssignInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_opAssignInstructionForGeneration_2E_weak ("opAssignInstructionForGeneration.weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_opAssignInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_opAssignInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_opAssignInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_opAssignInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignInstructionForGeneration_2E_weak GGS_opAssignInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_opAssignInstructionForGeneration_2E_weak result ;
  const GGS_opAssignInstructionForGeneration_2E_weak * p = (const GGS_opAssignInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_opAssignInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("opAssignInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_plusPlusAssignInstructionForGeneration_2E_weak::objectCompare (const GGS_plusPlusAssignInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_plusPlusAssignInstructionForGeneration_2E_weak::GGS_plusPlusAssignInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_plusPlusAssignInstructionForGeneration_2E_weak & GGS_plusPlusAssignInstructionForGeneration_2E_weak::operator = (const GGS_plusPlusAssignInstructionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_plusPlusAssignInstructionForGeneration_2E_weak::GGS_plusPlusAssignInstructionForGeneration_2E_weak (const GGS_plusPlusAssignInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_plusPlusAssignInstructionForGeneration_2E_weak GGS_plusPlusAssignInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_plusPlusAssignInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_plusPlusAssignInstructionForGeneration GGS_plusPlusAssignInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_plusPlusAssignInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_plusPlusAssignInstructionForGeneration * p = (cPtr_plusPlusAssignInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_plusPlusAssignInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_plusPlusAssignInstructionForGeneration GGS_plusPlusAssignInstructionForGeneration_2E_weak::bang_plusPlusAssignInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_plusPlusAssignInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_plusPlusAssignInstructionForGeneration) ;
      result = GGS_plusPlusAssignInstructionForGeneration ((cPtr_plusPlusAssignInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @plusPlusAssignInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_plusPlusAssignInstructionForGeneration_2E_weak ("plusPlusAssignInstructionForGeneration.weak",
                                                                                                   & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_plusPlusAssignInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusPlusAssignInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_plusPlusAssignInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_plusPlusAssignInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_plusPlusAssignInstructionForGeneration_2E_weak GGS_plusPlusAssignInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_plusPlusAssignInstructionForGeneration_2E_weak result ;
  const GGS_plusPlusAssignInstructionForGeneration_2E_weak * p = (const GGS_plusPlusAssignInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_plusPlusAssignInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("plusPlusAssignInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_warningInstructionForGeneration_2E_weak::objectCompare (const GGS_warningInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_warningInstructionForGeneration_2E_weak::GGS_warningInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionForGeneration_2E_weak & GGS_warningInstructionForGeneration_2E_weak::operator = (const GGS_warningInstructionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionForGeneration_2E_weak::GGS_warningInstructionForGeneration_2E_weak (const GGS_warningInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_warningInstructionForGeneration_2E_weak GGS_warningInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_warningInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionForGeneration GGS_warningInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_warningInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_warningInstructionForGeneration * p = (cPtr_warningInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_warningInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionForGeneration GGS_warningInstructionForGeneration_2E_weak::bang_warningInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_warningInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_warningInstructionForGeneration) ;
      result = GGS_warningInstructionForGeneration ((cPtr_warningInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @warningInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_warningInstructionForGeneration_2E_weak ("warningInstructionForGeneration.weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_warningInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_warningInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_warningInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_warningInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionForGeneration_2E_weak GGS_warningInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_warningInstructionForGeneration_2E_weak result ;
  const GGS_warningInstructionForGeneration_2E_weak * p = (const GGS_warningInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_warningInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("warningInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum ifExpressionKind
//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind::GGS_ifExpressionKind (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind GGS_ifExpressionKind::class_func_regularExp (const GGS_semanticExpressionAST & inAssociatedValue0,
                                                                  const GGS_location & inAssociatedValue1
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifExpressionKind result ;
  result.mEnum = Enumeration::enum_regularExp ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_ifExpressionKind_2E_regularExp (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind GGS_ifExpressionKind::class_func_letVarExp (const GGS_lstring & inAssociatedValue0,
                                                                 const GGS_bool & inAssociatedValue1,
                                                                 const GGS_semanticExpressionAST & inAssociatedValue2,
                                                                 const GGS_location & inAssociatedValue3,
                                                                 const GGS_lstring & inAssociatedValue4
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifExpressionKind result ;
  result.mEnum = Enumeration::enum_letVarExp ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_ifExpressionKind_2E_letVarExp (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3, inAssociatedValue4)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind::method_extractRegularExp (GGS_semanticExpressionAST & outAssociatedValue_exp,
                                                     GGS_location & outAssociatedValue_endOfExp,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_regularExp) {
    outAssociatedValue_exp.drop () ;
    outAssociatedValue_endOfExp.drop () ;
    String s ;
    s.appendCString ("proc @ifExpressionKind.regularExp invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_ifExpressionKind_2E_regularExp *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
    outAssociatedValue_endOfExp = ptr->mProperty_endOfExp ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind::method_extractLetVarExp (GGS_lstring & outAssociatedValue_varName,
                                                    GGS_bool & outAssociatedValue_isConstant,
                                                    GGS_semanticExpressionAST & outAssociatedValue_exp,
                                                    GGS_location & outAssociatedValue_endOfExp,
                                                    GGS_lstring & outAssociatedValue_typeName,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_letVarExp) {
    outAssociatedValue_varName.drop () ;
    outAssociatedValue_isConstant.drop () ;
    outAssociatedValue_exp.drop () ;
    outAssociatedValue_endOfExp.drop () ;
    outAssociatedValue_typeName.drop () ;
    String s ;
    s.appendCString ("proc @ifExpressionKind.letVarExp invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_ifExpressionKind_2E_letVarExp *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_varName = ptr->mProperty_varName ;
    outAssociatedValue_isConstant = ptr->mProperty_isConstant ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
    outAssociatedValue_endOfExp = ptr->mProperty_endOfExp ;
    outAssociatedValue_typeName = ptr->mProperty_typeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp_3F_ GGS_ifExpressionKind::getter_getRegularExp (UNUSED_LOCATION_ARGS) const {
  GGS_ifExpressionKind_2E_regularExp_3F_ result ;
  if (mEnum == Enumeration::enum_regularExp) {
    const auto ptr = (const GGS_ifExpressionKind_2E_regularExp *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_ifExpressionKind_2E_regularExp (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind::getAssociatedValuesFor_regularExp (GGS_semanticExpressionAST & out_exp,
                                                              GGS_location & out_endOfExp) const {
  const auto ptr = (const GGS_ifExpressionKind_2E_regularExp *) mAssociatedValues.associatedValuesPointer () ;
  out_exp = ptr->mProperty_exp ;
  out_endOfExp = ptr->mProperty_endOfExp ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp_3F_ GGS_ifExpressionKind::getter_getLetVarExp (UNUSED_LOCATION_ARGS) const {
  GGS_ifExpressionKind_2E_letVarExp_3F_ result ;
  if (mEnum == Enumeration::enum_letVarExp) {
    const auto ptr = (const GGS_ifExpressionKind_2E_letVarExp *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_ifExpressionKind_2E_letVarExp (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind::getAssociatedValuesFor_letVarExp (GGS_lstring & out_varName,
                                                             GGS_bool & out_isConstant,
                                                             GGS_semanticExpressionAST & out_exp,
                                                             GGS_location & out_endOfExp,
                                                             GGS_lstring & out_typeName) const {
  const auto ptr = (const GGS_ifExpressionKind_2E_letVarExp *) mAssociatedValues.associatedValuesPointer () ;
  out_varName = ptr->mProperty_varName ;
  out_isConstant = ptr->mProperty_isConstant ;
  out_exp = ptr->mProperty_exp ;
  out_endOfExp = ptr->mProperty_endOfExp ;
  out_typeName = ptr->mProperty_typeName ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_ifExpressionKind [3] = {
  "(not built)",
  "regularExp",
  "letVarExp"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ifExpressionKind::getter_isRegularExp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_regularExp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ifExpressionKind::getter_isLetVarExp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_letVarExp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("<enum @ifExpressionKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_ifExpressionKind [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @ifExpressionKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionKind ("ifExpressionKind",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifExpressionKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifExpressionKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifExpressionKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind GGS_ifExpressionKind::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_ifExpressionKind result ;
  const GGS_ifExpressionKind * p = (const GGS_ifExpressionKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifExpressionKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@CommaSeparatedExpressionList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_CommaSeparatedExpressionList : public CollectionElementPtr {
  public: GGS_CommaSeparatedExpressionList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_CommaSeparatedExpressionList (const GGS_ifExpressionKind & in_mExpression
                                                             COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_CommaSeparatedExpressionList (const GGS_CommaSeparatedExpressionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_CommaSeparatedExpressionList::CollectionElementPtr_CommaSeparatedExpressionList (const GGS_ifExpressionKind & in_mExpression
                                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_CommaSeparatedExpressionList::CollectionElementPtr_CommaSeparatedExpressionList (const GGS_CommaSeparatedExpressionList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_CommaSeparatedExpressionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_CommaSeparatedExpressionList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_CommaSeparatedExpressionList (mObject.mProperty_mExpression COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @CommaSeparatedExpressionList
//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList::GGS_CommaSeparatedExpressionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList::GGS_CommaSeparatedExpressionList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_CommaSeparatedExpressionList * p = (CollectionElementPtr_CommaSeparatedExpressionList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_CommaSeparatedExpressionList) ;
    const GGS_CommaSeparatedExpressionList_2E_element element (p->mObject.mProperty_mExpression) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                  const GGS_ifExpressionKind & in_mExpression
                                                                  COMMA_LOCATION_ARGS) {
  CollectionElementPtr_CommaSeparatedExpressionList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_CommaSeparatedExpressionList (in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_CommaSeparatedExpressionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_CommaSeparatedExpressionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList::description (String & ioString,
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
      ioString.appendString ("mExpression:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mExpression.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList GGS_CommaSeparatedExpressionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_CommaSeparatedExpressionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList::plusPlusAssignOperation (const GGS_CommaSeparatedExpressionList_2E_element & inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList GGS_CommaSeparatedExpressionList::class_func_listWithValue (const GGS_ifExpressionKind & inOperand0
                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_CommaSeparatedExpressionList_2E_element element (inOperand0) ;
  GGS_CommaSeparatedExpressionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList::addAssignOperation (const GGS_ifExpressionKind & inOperand0
                                                           COMMA_LOCATION_ARGS) {
  const GGS_CommaSeparatedExpressionList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList::setter_append (const GGS_ifExpressionKind inOperand0,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  const GGS_CommaSeparatedExpressionList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList::setter_insertAtIndex (const GGS_ifExpressionKind inOperand0,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  const GGS_CommaSeparatedExpressionList_2E_element newElement (inOperand0) ;
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

void GGS_CommaSeparatedExpressionList::setter_removeAtIndex (GGS_ifExpressionKind & outOperand0,
                                                             const GGS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mExpression ;
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

void GGS_CommaSeparatedExpressionList::setter_popFirst (GGS_ifExpressionKind & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mExpression ;
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

void GGS_CommaSeparatedExpressionList::setter_popLast (GGS_ifExpressionKind & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mExpression ;
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

void GGS_CommaSeparatedExpressionList::method_first (GGS_ifExpressionKind & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mExpression ;
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

void GGS_CommaSeparatedExpressionList::method_last (GGS_ifExpressionKind & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mExpression ;
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

GGS_CommaSeparatedExpressionList GGS_CommaSeparatedExpressionList::add_operation (const GGS_CommaSeparatedExpressionList & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_CommaSeparatedExpressionList result ;
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

GGS_CommaSeparatedExpressionList GGS_CommaSeparatedExpressionList::subList (const int32_t inStart,
                                                                            const int32_t inLength,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_CommaSeparatedExpressionList result ;
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

GGS_CommaSeparatedExpressionList GGS_CommaSeparatedExpressionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_CommaSeparatedExpressionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList GGS_CommaSeparatedExpressionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_CommaSeparatedExpressionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList GGS_CommaSeparatedExpressionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_CommaSeparatedExpressionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList::plusAssignOperation (const GGS_CommaSeparatedExpressionList inList,
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

void GGS_CommaSeparatedExpressionList::setter_setMExpressionAtIndex (GGS_ifExpressionKind inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mExpression = inOperand ;
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

GGS_ifExpressionKind GGS_CommaSeparatedExpressionList::getter_mExpressionAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_ifExpressionKind result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mExpression ;
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
// Down Enumerator for @CommaSeparatedExpressionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_CommaSeparatedExpressionList::DownEnumerator_CommaSeparatedExpressionList (const GGS_CommaSeparatedExpressionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList_2E_element DownEnumerator_CommaSeparatedExpressionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind DownEnumerator_CommaSeparatedExpressionList::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @CommaSeparatedExpressionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_CommaSeparatedExpressionList::UpEnumerator_CommaSeparatedExpressionList (const GGS_CommaSeparatedExpressionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList_2E_element UpEnumerator_CommaSeparatedExpressionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind UpEnumerator_CommaSeparatedExpressionList::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}




//--------------------------------------------------------------------------------------------------
//     @CommaSeparatedExpressionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_CommaSeparatedExpressionList ("CommaSeparatedExpressionList",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_CommaSeparatedExpressionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_CommaSeparatedExpressionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_CommaSeparatedExpressionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_CommaSeparatedExpressionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList GGS_CommaSeparatedExpressionList::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_CommaSeparatedExpressionList result ;
  const GGS_CommaSeparatedExpressionList * p = (const GGS_CommaSeparatedExpressionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_CommaSeparatedExpressionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("CommaSeparatedExpressionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@CommaSeparatedExpressionList analyzeSemanticExpressionList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeSemanticExpressionList (const GGS_CommaSeparatedExpressionList inObject,
                                                    const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                    GGS_ifTestListForGeneration & outArgument_outTestListForGeneration,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTestListForGeneration.drop () ; // Release 'out' argument
  outArgument_outTestListForGeneration = GGS_ifTestListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_CommaSeparatedExpressionList temp_0 = inObject ;
  UpEnumerator_CommaSeparatedExpressionList enumerator_6820 (temp_0) ;
  while (enumerator_6820.hasCurrentObject ()) {
    switch (enumerator_6820.current (HERE).readProperty_mExpression ().enumValue ()) {
    case GGS_ifExpressionKind::Enumeration::invalid:
      break ;
    case GGS_ifExpressionKind::Enumeration::enum_regularExp:
      {
        GGS_semanticExpressionAST extractedValue_6882_exp_0 ;
        GGS_location extractedValue_6887_endOfExpression_1 ;
        enumerator_6820.current (HERE).readProperty_mExpression ().getAssociatedValuesFor_regularExp (extractedValue_6882_exp_0, extractedValue_6887_endOfExpression_1) ;
        GGS_semanticExpressionForGeneration var_analyzed_5F_if_5F_expression_7176 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_6882_exp_0.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 191)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_analyzed_5F_if_5F_expression_7176, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 188)) ;
        GGS_semanticExpressionForGeneration var_if_5F_expression_7349 ;
        {
        routine_checkExpressionIsBoolean_3F__3F__3F__21_ (constinArgument_inAnalysisContext, extractedValue_6887_endOfExpression_1, var_analyzed_5F_if_5F_expression_7176, var_if_5F_expression_7349, inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 197)) ;
        }
        outArgument_outTestListForGeneration.plusPlusAssignOperation (GGS_ifTestListForGeneration_2E_element::init_21_ (GGS_ifTestForGeneration::class_func_regular (var_if_5F_expression_7349  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 203)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 203)) ;
        {
        extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 204)) ;
        }
        {
        extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 205)) ;
        }
      }
      break ;
    case GGS_ifExpressionKind::Enumeration::enum_letVarExp:
      {
        GGS_lstring extractedValue_7558_varName_0 ;
        GGS_bool extractedValue_7567_isConstant_1 ;
        GGS_semanticExpressionAST extractedValue_7579_exp_2 ;
        GGS_location extractedValue_7584__3 ;
        GGS_lstring extractedValue_7596_typeName_4 ;
        enumerator_6820.current (HERE).readProperty_mExpression ().getAssociatedValuesFor_letVarExp (extractedValue_7558_varName_0, extractedValue_7567_isConstant_1, extractedValue_7579_exp_2, extractedValue_7584__3, extractedValue_7596_typeName_4) ;
        GGS_semanticExpressionForGeneration var_analyzedExpression_7878 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_7579_exp_2.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 210)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_analyzedExpression_7878, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 207)) ;
        GGS_unifiedTypeMapEntry var_castType_7919 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 216)) ;
        GGS_unifiedTypeMapEntry var_testType_7968 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 217)) ;
        GGS_unifiedTypeMapEntry var_unwrappedType_8055 = extensionGetter_definition (var_analyzedExpression_7878.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 219)).readProperty_unwrappedType () ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = var_unwrappedType_8055.getter_isNull (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 220)).operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 220)).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 221)) ;
            }
            {
            extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 222)) ;
            }
            GGS_string var_targetVariableCppName_8278 = GGS_string ("var_").add_operation (extractedValue_7558_varName_0.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 223)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 223)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 223)).add_operation (extractedValue_7558_varName_0.readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 224)).getter_string (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 224)) ;
            GalgasBool test_2 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_2) {
              test_2 = GGS_bool (ComparisonKind::notEqual, extractedValue_7558_varName_0.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_2) {
                GalgasBool test_3 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_3) {
                  test_3 = extractedValue_7567_isConstant_1.boolEnum () ;
                  if (GalgasBool::boolTrue == test_3) {
                    {
                    extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, extractedValue_7558_varName_0, var_unwrappedType_8055, var_targetVariableCppName_8278, var_targetVariableCppName_8278, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 227)) ;
                    }
                  }
                }
                if (GalgasBool::boolFalse == test_3) {
                  {
                  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, extractedValue_7558_varName_0, GGS_bool (true), var_unwrappedType_8055, var_targetVariableCppName_8278, var_targetVariableCppName_8278, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 234)) ;
                  }
                }
              }
            }
            var_castType_7919 = var_unwrappedType_8055 ;
            var_testType_7968 = var_analyzedExpression_7878.readProperty_mResultType () ;
            outArgument_outTestListForGeneration.plusPlusAssignOperation (GGS_ifTestListForGeneration_2E_element::init_21_ (GGS_ifTestForGeneration::class_func_optionalExp (var_targetVariableCppName_8278, extractedValue_7567_isConstant_1, var_analyzedExpression_7878, var_unwrappedType_8055  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 245)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 245)) ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = extensionGetter_definition (var_analyzedExpression_7878.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 252)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 252)).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              GalgasBool test_5 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_5) {
                test_5 = GGS_bool (ComparisonKind::equal, extractedValue_7596_typeName_4.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_5) {
                  GenericArray <FixItDescription> fixItArray6 ;
                  inCompiler->emitSemanticError (extractedValue_7596_typeName_4.readProperty_location (), GGS_string ("on a class object, the 'as' clause is required"), fixItArray6  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 254)) ;
                  var_castType_7919.drop () ; // Release error dropped variable
                  var_testType_7968.drop () ; // Release error dropped variable
                }
              }
              if (GalgasBool::boolFalse == test_5) {
                var_castType_7919 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, extractedValue_7596_typeName_4, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 256)) ;
                var_testType_7968 = var_castType_7919 ;
                GGS_unifiedTypeMapEntry var_t_9802 = var_castType_7919 ;
                GGS_bool var_found_9837 = GGS_bool (ComparisonKind::equal, var_t_9802.objectCompare (var_analyzedExpression_7878.readProperty_mResultType ())) ;
                if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 261)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 261)).isValid ()) {
                  uint32_t variant_9893 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 261)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 261)).uintValue () ;
                  bool loop_9893 = true ;
                  while (loop_9893) {
                    loop_9893 = var_found_9837.operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 262)).operator_and (extensionGetter_definition (var_t_9802, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 262)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 262)).operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 262)) COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 262)).isValid () ;
                    if (loop_9893) {
                      loop_9893 = var_found_9837.operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 262)).operator_and (extensionGetter_definition (var_t_9802, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 262)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 262)).operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 262)) COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 262)).boolValue () ;
                    }
                    if (loop_9893 && (0 == variant_9893)) {
                      loop_9893 = false ;
                      inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 261)) ;
                    }
                    if (loop_9893) {
                      variant_9893 -= 1 ;
                      var_t_9802 = extensionGetter_definition (var_t_9802, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 263)).readProperty_superType () ;
                      var_found_9837 = GGS_bool (ComparisonKind::equal, var_t_9802.objectCompare (var_analyzedExpression_7878.readProperty_mResultType ())) ;
                    }
                  }
                }
                GalgasBool test_7 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_7) {
                  test_7 = var_found_9837.operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 266)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_7) {
                    GenericArray <FixItDescription> fixItArray8 ;
                    inCompiler->emitSemanticError (extractedValue_7596_typeName_4.readProperty_location (), GGS_string ("the '@").add_operation (extractedValue_7596_typeName_4.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 268)).add_operation (GGS_string ("' type is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 268)).add_operation (extensionGetter_definition (var_analyzedExpression_7878.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 269)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 268)).add_operation (GGS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 269)), fixItArray8  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 267)) ;
                  }
                }
              }
              {
              extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 274)) ;
              }
              {
              extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 275)) ;
              }
              GGS_string var_targetVariableCppName_10519 = GGS_string ("var_").add_operation (extractedValue_7558_varName_0.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 276)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 276)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 276)).add_operation (extractedValue_7558_varName_0.readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 277)).getter_string (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 277)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 277)) ;
              GalgasBool test_9 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_9) {
                test_9 = GGS_bool (ComparisonKind::notEqual, extractedValue_7558_varName_0.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_9) {
                  GalgasBool test_10 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_10) {
                    test_10 = extractedValue_7567_isConstant_1.boolEnum () ;
                    if (GalgasBool::boolTrue == test_10) {
                      {
                      extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, extractedValue_7558_varName_0, var_castType_7919, var_targetVariableCppName_10519, var_targetVariableCppName_10519, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 280)) ;
                      }
                    }
                  }
                  if (GalgasBool::boolFalse == test_10) {
                    {
                    extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, extractedValue_7558_varName_0, GGS_bool (true), var_castType_7919, var_targetVariableCppName_10519, var_targetVariableCppName_10519, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 287)) ;
                    }
                  }
                }
              }
              outArgument_outTestListForGeneration.plusPlusAssignOperation (GGS_ifTestListForGeneration_2E_element::init_21_ (GGS_ifTestForGeneration::class_func_letVarExp (var_targetVariableCppName_10519, var_analyzedExpression_7878, var_castType_7919, var_testType_7968  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 296)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 296)) ;
            }
          }
          if (GalgasBool::boolFalse == test_4) {
            GalgasBool test_11 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_11) {
              const GGS_typeKindEnum_2E_weakReferenceType var_weakRefType_11468 = extensionGetter_definition (var_analyzedExpression_7878.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 302)).readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 302)).unwrappedValue () ;
              if (!extensionGetter_definition (var_analyzedExpression_7878.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 302)).readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 302)).isValuated ()) {
                test_11 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_11) {
                GalgasBool test_12 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_12) {
                  test_12 = GGS_bool (ComparisonKind::equal, extractedValue_7596_typeName_4.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_12) {
                    var_castType_7919 = var_weakRefType_11468.readProperty_referenceType () ;
                  }
                }
                if (GalgasBool::boolFalse == test_12) {
                  var_castType_7919 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, extractedValue_7596_typeName_4, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 306)) ;
                }
                var_testType_7968 = var_castType_7919 ;
                GGS_unifiedTypeMapEntry var_t_11806 = var_castType_7919 ;
                GGS_bool var_found_11839 = GGS_bool (ComparisonKind::equal, var_t_11806.objectCompare (var_analyzedExpression_7878.readProperty_mResultType ())) ;
                GalgasBool test_13 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_13) {
                  test_13 = var_found_11839.boolEnum () ;
                  if (GalgasBool::boolTrue == test_13) {
                    extensionGetter_definition (var_castType_7919, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 312)).readProperty_typeKind ().method_extractWeakReferenceType (var_castType_7919, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 312)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_13) {
                  GalgasBool test_14 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_14) {
                    test_14 = GGS_bool (ComparisonKind::equal, var_t_11806.objectCompare (var_weakRefType_11468.readProperty_referenceType ())).boolEnum () ;
                    if (GalgasBool::boolTrue == test_14) {
                      var_found_11839 = GGS_bool (true) ;
                    }
                  }
                }
                if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 316)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 316)).isValid ()) {
                  uint32_t variant_12101 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 316)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 316)).uintValue () ;
                  bool loop_12101 = true ;
                  while (loop_12101) {
                    loop_12101 = var_found_11839.operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 317)).operator_and (extensionGetter_definition (var_t_11806, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 317)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 317)).operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 317)) COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 317)).isValid () ;
                    if (loop_12101) {
                      loop_12101 = var_found_11839.operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 317)).operator_and (extensionGetter_definition (var_t_11806, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 317)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 317)).operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 317)) COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 317)).boolValue () ;
                    }
                    if (loop_12101 && (0 == variant_12101)) {
                      loop_12101 = false ;
                      inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 316)) ;
                    }
                    if (loop_12101) {
                      variant_12101 -= 1 ;
                      var_t_11806 = extensionGetter_definition (var_t_11806, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 318)).readProperty_superType () ;
                      GalgasBool test_15 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_15) {
                        test_15 = GGS_bool (ComparisonKind::equal, var_t_11806.objectCompare (var_analyzedExpression_7878.readProperty_mResultType ())).boolEnum () ;
                        if (GalgasBool::boolTrue == test_15) {
                          var_found_11839 = GGS_bool (true) ;
                          extensionGetter_definition (var_castType_7919, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 321)).readProperty_typeKind ().method_extractWeakReferenceType (var_castType_7919, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 321)) ;
                        }
                      }
                      if (GalgasBool::boolFalse == test_15) {
                        GalgasBool test_16 = GalgasBool::boolTrue ;
                        if (GalgasBool::boolTrue == test_16) {
                          test_16 = GGS_bool (ComparisonKind::equal, var_t_11806.objectCompare (var_weakRefType_11468.readProperty_referenceType ())).boolEnum () ;
                          if (GalgasBool::boolTrue == test_16) {
                            var_found_11839 = GGS_bool (true) ;
                          }
                        }
                      }
                    }
                  }
                }
                GalgasBool test_17 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_17) {
                  test_17 = var_found_11839.operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 326)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_17) {
                    GenericArray <FixItDescription> fixItArray18 ;
                    inCompiler->emitSemanticError (extractedValue_7596_typeName_4.readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_castType_7919, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 328)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 328)).add_operation (GGS_string ("' type is not compatible with the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 328)).add_operation (extensionGetter_definition (var_analyzedExpression_7878.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 330)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 329)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 330)), fixItArray18  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 327)) ;
                  }
                }
                {
                extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 333)) ;
                }
                {
                extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 334)) ;
                }
                GGS_string var_targetVariableCppName_12914 = GGS_string ("var_").add_operation (extractedValue_7558_varName_0.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 335)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 335)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 335)).add_operation (extractedValue_7558_varName_0.readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 336)).getter_string (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 336)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 336)) ;
                GalgasBool test_19 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_19) {
                  test_19 = GGS_bool (ComparisonKind::notEqual, extractedValue_7558_varName_0.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_19) {
                    GalgasBool test_20 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_20) {
                      test_20 = extractedValue_7567_isConstant_1.boolEnum () ;
                      if (GalgasBool::boolTrue == test_20) {
                        {
                        extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, extractedValue_7558_varName_0, var_castType_7919, var_targetVariableCppName_12914, var_targetVariableCppName_12914, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 339)) ;
                        }
                      }
                    }
                    if (GalgasBool::boolFalse == test_20) {
                      {
                      extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, extractedValue_7558_varName_0, GGS_bool (true), var_castType_7919, var_targetVariableCppName_12914, var_targetVariableCppName_12914, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 346)) ;
                      }
                    }
                  }
                }
                outArgument_outTestListForGeneration.plusPlusAssignOperation (GGS_ifTestListForGeneration_2E_element::init_21_ (GGS_ifTestForGeneration::class_func_letVarExp (var_targetVariableCppName_12914, var_analyzedExpression_7878, var_castType_7919, var_testType_7968  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 355)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 355)) ;
              }
            }
            if (GalgasBool::boolFalse == test_11) {
              GenericArray <FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (var_analyzedExpression_7878.readProperty_mLocation (), GGS_string ("expression should be a class instance, or a weak reference: it is an @").add_operation (extensionGetter_definition (var_analyzedExpression_7878.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 364)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 363)).add_operation (GGS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 364)), fixItArray21  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 362)) ;
            }
          }
        }
      }
      break ;
    }
    enumerator_6820.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//  Enum ifTestForGeneration
//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration::GGS_ifTestForGeneration (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration GGS_ifTestForGeneration::class_func_regular (const GGS_semanticExpressionForGeneration & inAssociatedValue0
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestForGeneration result ;
  result.mEnum = Enumeration::enum_regular ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_ifTestForGeneration_2E_regular (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration GGS_ifTestForGeneration::class_func_letVarExp (const GGS_string & inAssociatedValue0,
                                                                       const GGS_semanticExpressionForGeneration & inAssociatedValue1,
                                                                       const GGS_unifiedTypeMapEntry & inAssociatedValue2,
                                                                       const GGS_unifiedTypeMapEntry & inAssociatedValue3
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestForGeneration result ;
  result.mEnum = Enumeration::enum_letVarExp ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_ifTestForGeneration_2E_letVarExp (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration GGS_ifTestForGeneration::class_func_optionalExp (const GGS_string & inAssociatedValue0,
                                                                         const GGS_bool & inAssociatedValue1,
                                                                         const GGS_semanticExpressionForGeneration & inAssociatedValue2,
                                                                         const GGS_unifiedTypeMapEntry & inAssociatedValue3
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestForGeneration result ;
  result.mEnum = Enumeration::enum_optionalExp ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_ifTestForGeneration_2E_optionalExp (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration::method_extractRegular (GGS_semanticExpressionForGeneration & outAssociatedValue_exp,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_regular) {
    outAssociatedValue_exp.drop () ;
    String s ;
    s.appendCString ("proc @ifTestForGeneration.regular invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_ifTestForGeneration_2E_regular *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration::method_extractLetVarExp (GGS_string & outAssociatedValue_targetVarCppName,
                                                       GGS_semanticExpressionForGeneration & outAssociatedValue_exp,
                                                       GGS_unifiedTypeMapEntry & outAssociatedValue_targetType,
                                                       GGS_unifiedTypeMapEntry & outAssociatedValue_testType,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_letVarExp) {
    outAssociatedValue_targetVarCppName.drop () ;
    outAssociatedValue_exp.drop () ;
    outAssociatedValue_targetType.drop () ;
    outAssociatedValue_testType.drop () ;
    String s ;
    s.appendCString ("proc @ifTestForGeneration.letVarExp invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_ifTestForGeneration_2E_letVarExp *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_targetVarCppName = ptr->mProperty_targetVarCppName ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
    outAssociatedValue_targetType = ptr->mProperty_targetType ;
    outAssociatedValue_testType = ptr->mProperty_testType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration::method_extractOptionalExp (GGS_string & outAssociatedValue_targetVarCppName,
                                                         GGS_bool & outAssociatedValue_isConstant,
                                                         GGS_semanticExpressionForGeneration & outAssociatedValue_exp,
                                                         GGS_unifiedTypeMapEntry & outAssociatedValue_targetType,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_optionalExp) {
    outAssociatedValue_targetVarCppName.drop () ;
    outAssociatedValue_isConstant.drop () ;
    outAssociatedValue_exp.drop () ;
    outAssociatedValue_targetType.drop () ;
    String s ;
    s.appendCString ("proc @ifTestForGeneration.optionalExp invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_ifTestForGeneration_2E_optionalExp *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_targetVarCppName = ptr->mProperty_targetVarCppName ;
    outAssociatedValue_isConstant = ptr->mProperty_isConstant ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
    outAssociatedValue_targetType = ptr->mProperty_targetType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular_3F_ GGS_ifTestForGeneration::getter_getRegular (UNUSED_LOCATION_ARGS) const {
  GGS_ifTestForGeneration_2E_regular_3F_ result ;
  if (mEnum == Enumeration::enum_regular) {
    const auto ptr = (const GGS_ifTestForGeneration_2E_regular *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_ifTestForGeneration_2E_regular (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration::getAssociatedValuesFor_regular (GGS_semanticExpressionForGeneration & out_exp) const {
  const auto ptr = (const GGS_ifTestForGeneration_2E_regular *) mAssociatedValues.associatedValuesPointer () ;
  out_exp = ptr->mProperty_exp ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp_3F_ GGS_ifTestForGeneration::getter_getLetVarExp (UNUSED_LOCATION_ARGS) const {
  GGS_ifTestForGeneration_2E_letVarExp_3F_ result ;
  if (mEnum == Enumeration::enum_letVarExp) {
    const auto ptr = (const GGS_ifTestForGeneration_2E_letVarExp *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_ifTestForGeneration_2E_letVarExp (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration::getAssociatedValuesFor_letVarExp (GGS_string & out_targetVarCppName,
                                                                GGS_semanticExpressionForGeneration & out_exp,
                                                                GGS_unifiedTypeMapEntry & out_targetType,
                                                                GGS_unifiedTypeMapEntry & out_testType) const {
  const auto ptr = (const GGS_ifTestForGeneration_2E_letVarExp *) mAssociatedValues.associatedValuesPointer () ;
  out_targetVarCppName = ptr->mProperty_targetVarCppName ;
  out_exp = ptr->mProperty_exp ;
  out_targetType = ptr->mProperty_targetType ;
  out_testType = ptr->mProperty_testType ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp_3F_ GGS_ifTestForGeneration::getter_getOptionalExp (UNUSED_LOCATION_ARGS) const {
  GGS_ifTestForGeneration_2E_optionalExp_3F_ result ;
  if (mEnum == Enumeration::enum_optionalExp) {
    const auto ptr = (const GGS_ifTestForGeneration_2E_optionalExp *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_ifTestForGeneration_2E_optionalExp (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration::getAssociatedValuesFor_optionalExp (GGS_string & out_targetVarCppName,
                                                                  GGS_bool & out_isConstant,
                                                                  GGS_semanticExpressionForGeneration & out_exp,
                                                                  GGS_unifiedTypeMapEntry & out_targetType) const {
  const auto ptr = (const GGS_ifTestForGeneration_2E_optionalExp *) mAssociatedValues.associatedValuesPointer () ;
  out_targetVarCppName = ptr->mProperty_targetVarCppName ;
  out_isConstant = ptr->mProperty_isConstant ;
  out_exp = ptr->mProperty_exp ;
  out_targetType = ptr->mProperty_targetType ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_ifTestForGeneration [4] = {
  "(not built)",
  "regular",
  "letVarExp",
  "optionalExp"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ifTestForGeneration::getter_isRegular (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_regular == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ifTestForGeneration::getter_isLetVarExp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_letVarExp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ifTestForGeneration::getter_isOptionalExp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_optionalExp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<enum @ifTestForGeneration: ") ;
  ioString.appendCString (gEnumNameArrayFor_ifTestForGeneration [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @ifTestForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration ("ifTestForGeneration",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifTestForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifTestForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifTestForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration GGS_ifTestForGeneration::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_ifTestForGeneration result ;
  const GGS_ifTestForGeneration * p = (const GGS_ifTestForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifTestForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@ifTestListForGeneration' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_ifTestListForGeneration : public CollectionElementPtr {
  public: GGS_ifTestListForGeneration_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_ifTestListForGeneration (const GGS_ifTestForGeneration & in_mExpression
                                                        COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_ifTestListForGeneration (const GGS_ifTestListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_ifTestListForGeneration::CollectionElementPtr_ifTestListForGeneration (const GGS_ifTestForGeneration & in_mExpression
                                                                                            COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_ifTestListForGeneration::CollectionElementPtr_ifTestListForGeneration (const GGS_ifTestListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_ifTestListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_ifTestListForGeneration::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_ifTestListForGeneration (mObject.mProperty_mExpression COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @ifTestListForGeneration
//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration::GGS_ifTestListForGeneration (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration::GGS_ifTestListForGeneration (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_ifTestListForGeneration * p = (CollectionElementPtr_ifTestListForGeneration *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_ifTestListForGeneration) ;
    const GGS_ifTestListForGeneration_2E_element element (p->mObject.mProperty_mExpression) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                             const GGS_ifTestForGeneration & in_mExpression
                                                             COMMA_LOCATION_ARGS) {
  CollectionElementPtr_ifTestListForGeneration * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_ifTestListForGeneration (in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ifTestListForGeneration::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_ifTestListForGeneration::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration::description (String & ioString,
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
      ioString.appendString ("mExpression:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mExpression.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration GGS_ifTestListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestListForGeneration result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration::plusPlusAssignOperation (const GGS_ifTestListForGeneration_2E_element & inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration GGS_ifTestListForGeneration::class_func_listWithValue (const GGS_ifTestForGeneration & inOperand0
                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_ifTestListForGeneration_2E_element element (inOperand0) ;
  GGS_ifTestListForGeneration result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration::addAssignOperation (const GGS_ifTestForGeneration & inOperand0
                                                      COMMA_LOCATION_ARGS) {
  const GGS_ifTestListForGeneration_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration::setter_append (const GGS_ifTestForGeneration inOperand0,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  const GGS_ifTestListForGeneration_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration::setter_insertAtIndex (const GGS_ifTestForGeneration inOperand0,
                                                        const GGS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  const GGS_ifTestListForGeneration_2E_element newElement (inOperand0) ;
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

void GGS_ifTestListForGeneration::setter_removeAtIndex (GGS_ifTestForGeneration & outOperand0,
                                                        const GGS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mExpression ;
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

void GGS_ifTestListForGeneration::setter_popFirst (GGS_ifTestForGeneration & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mExpression ;
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

void GGS_ifTestListForGeneration::setter_popLast (GGS_ifTestForGeneration & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mExpression ;
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

void GGS_ifTestListForGeneration::method_first (GGS_ifTestForGeneration & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mExpression ;
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

void GGS_ifTestListForGeneration::method_last (GGS_ifTestForGeneration & outOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mExpression ;
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

GGS_ifTestListForGeneration GGS_ifTestListForGeneration::add_operation (const GGS_ifTestListForGeneration & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_ifTestListForGeneration result ;
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

GGS_ifTestListForGeneration GGS_ifTestListForGeneration::subList (const int32_t inStart,
                                                                  const int32_t inLength,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_ifTestListForGeneration result ;
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

GGS_ifTestListForGeneration GGS_ifTestListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_ifTestListForGeneration result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration GGS_ifTestListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_ifTestListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration GGS_ifTestListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_ifTestListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration::plusAssignOperation (const GGS_ifTestListForGeneration inList,
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

void GGS_ifTestListForGeneration::setter_setMExpressionAtIndex (GGS_ifTestForGeneration inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mExpression = inOperand ;
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

GGS_ifTestForGeneration GGS_ifTestListForGeneration::getter_mExpressionAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_ifTestForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mExpression ;
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
// Down Enumerator for @ifTestListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_ifTestListForGeneration::DownEnumerator_ifTestListForGeneration (const GGS_ifTestListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration_2E_element DownEnumerator_ifTestListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration DownEnumerator_ifTestListForGeneration::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @ifTestListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_ifTestListForGeneration::UpEnumerator_ifTestListForGeneration (const GGS_ifTestListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration_2E_element UpEnumerator_ifTestListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration UpEnumerator_ifTestListForGeneration::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}




//--------------------------------------------------------------------------------------------------
//     @ifTestListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestListForGeneration ("ifTestListForGeneration",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifTestListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifTestListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifTestListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration GGS_ifTestListForGeneration::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_ifTestListForGeneration result ;
  const GGS_ifTestListForGeneration * p = (const GGS_ifTestListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifTestListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractGrammarInstructionSyntaxDirectedTranslationResult reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult::objectCompare (const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand) const {
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

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult::GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::
abstractGrammarInstructionSyntaxDirectedTranslationResult_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult::GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractGrammarInstructionSyntaxDirectedTranslationResult class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractGrammarInstructionSyntaxDirectedTranslationResult generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult ("abstractGrammarInstructionSyntaxDirectedTranslationResult",
                                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult::extractObject (const GGS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult result ;
  const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult * p = (const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractGrammarInstructionSyntaxDirectedTranslationResult", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::objectCompare (const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak & inOperand) const {
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

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak & GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::operator = (const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::unwrappedValue (void) const {
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult result ;
  if (isValid ()) {
    const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * p = (cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::bang_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
      result = GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractGrammarInstructionSyntaxDirectedTranslationResult.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak ("abstractGrammarInstructionSyntaxDirectedTranslationResult.weak",
                                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                            Compiler * inCompiler
                                                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak result ;
  const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak * p = (const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractGrammarInstructionSyntaxDirectedTranslationResult.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @grammarInstructionSyntaxDirectedTranslationResultNone reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionSyntaxDirectedTranslationResultNone::objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultNone & inOperand) const {
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

GGS_grammarInstructionSyntaxDirectedTranslationResultNone::GGS_grammarInstructionSyntaxDirectedTranslationResultNone (void) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone GGS_grammarInstructionSyntaxDirectedTranslationResultNone::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_grammarInstructionSyntaxDirectedTranslationResultNone * object = nullptr ;
  macroMyNew (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultNone (inCompiler COMMA_THERE)) ;
  object->grammarInstructionSyntaxDirectedTranslationResultNone_init (inCompiler) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultNone result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::
grammarInstructionSyntaxDirectedTranslationResultNone_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone::GGS_grammarInstructionSyntaxDirectedTranslationResultNone (const cPtr_grammarInstructionSyntaxDirectedTranslationResultNone * inSourcePtr) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultNone) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @grammarInstructionSyntaxDirectedTranslationResultNone class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::cPtr_grammarInstructionSyntaxDirectedTranslationResultNone (Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::description (String & ioString,
                                                                              const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@grammarInstructionSyntaxDirectedTranslationResultNone]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationResultNone (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionSyntaxDirectedTranslationResultNone generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone ("grammarInstructionSyntaxDirectedTranslationResultNone",
                                                                                                          & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarInstructionSyntaxDirectedTranslationResultNone::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionSyntaxDirectedTranslationResultNone::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionSyntaxDirectedTranslationResultNone (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone GGS_grammarInstructionSyntaxDirectedTranslationResultNone::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultNone result ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultNone * p = (const GGS_grammarInstructionSyntaxDirectedTranslationResultNone *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionSyntaxDirectedTranslationResultNone *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultNone", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak & inOperand) const {
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

GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak (void) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak & GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::operator = (const GGS_grammarInstructionSyntaxDirectedTranslationResultNone & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak (const GGS_grammarInstructionSyntaxDirectedTranslationResultNone & inSource) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::unwrappedValue (void) const {
  GGS_grammarInstructionSyntaxDirectedTranslationResultNone result ;
  if (isValid ()) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationResultNone * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultNone *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInstructionSyntaxDirectedTranslationResultNone (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::bang_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInstructionSyntaxDirectedTranslationResultNone result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultNone) ;
      result = GGS_grammarInstructionSyntaxDirectedTranslationResultNone ((cPtr_grammarInstructionSyntaxDirectedTranslationResultNone *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionSyntaxDirectedTranslationResultNone.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak ("grammarInstructionSyntaxDirectedTranslationResultNone.weak",
                                                                                                                  & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak result ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak * p = (const GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultNone.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @grammarInstructionSyntaxDirectedTranslationDropResult reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionSyntaxDirectedTranslationDropResult::objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationDropResult & inOperand) const {
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

GGS_grammarInstructionSyntaxDirectedTranslationDropResult::GGS_grammarInstructionSyntaxDirectedTranslationDropResult (void) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult GGS_grammarInstructionSyntaxDirectedTranslationDropResult::
init_21_ (const GGS_location & in_mLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * object = nullptr ;
  macroMyNew (object, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (inCompiler COMMA_THERE)) ;
  object->grammarInstructionSyntaxDirectedTranslationDropResult_init_21_ (in_mLocation, inCompiler) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationDropResult result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::
grammarInstructionSyntaxDirectedTranslationDropResult_init_21_ (const GGS_location & in_mLocation,
                                                                Compiler * /* inCompiler */) {
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult::GGS_grammarInstructionSyntaxDirectedTranslationDropResult (const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * inSourcePtr) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_grammarInstructionSyntaxDirectedTranslationDropResult::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * p = (cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @grammarInstructionSyntaxDirectedTranslationDropResult class
//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (inCompiler COMMA_THERE),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (const GGS_location & in_mLocation,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (inCompiler COMMA_THERE),
mProperty_mLocation () {
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::description (String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@grammarInstructionSyntaxDirectedTranslationDropResult:") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (mProperty_mLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::printNonNullClassInstanceProperties () ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionSyntaxDirectedTranslationDropResult generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult ("grammarInstructionSyntaxDirectedTranslationDropResult",
                                                                                                          & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarInstructionSyntaxDirectedTranslationDropResult::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionSyntaxDirectedTranslationDropResult::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionSyntaxDirectedTranslationDropResult (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult GGS_grammarInstructionSyntaxDirectedTranslationDropResult::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationDropResult result ;
  const GGS_grammarInstructionSyntaxDirectedTranslationDropResult * p = (const GGS_grammarInstructionSyntaxDirectedTranslationDropResult *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionSyntaxDirectedTranslationDropResult *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationDropResult", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak & inOperand) const {
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

GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak (void) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak & GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::operator = (const GGS_grammarInstructionSyntaxDirectedTranslationDropResult & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak (const GGS_grammarInstructionSyntaxDirectedTranslationDropResult & inSource) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::unwrappedValue (void) const {
  GGS_grammarInstructionSyntaxDirectedTranslationDropResult result ;
  if (isValid ()) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * p = (cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInstructionSyntaxDirectedTranslationDropResult (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::bang_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInstructionSyntaxDirectedTranslationDropResult result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
      result = GGS_grammarInstructionSyntaxDirectedTranslationDropResult ((cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionSyntaxDirectedTranslationDropResult.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak ("grammarInstructionSyntaxDirectedTranslationDropResult.weak",
                                                                                                                  & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak result ;
  const GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak * p = (const GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationDropResult.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @grammarInstructionSyntaxDirectedTranslationResultInVar reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionSyntaxDirectedTranslationResultInVar::objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar & inOperand) const {
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

GGS_grammarInstructionSyntaxDirectedTranslationResultInVar::GGS_grammarInstructionSyntaxDirectedTranslationResultInVar (void) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInVar GGS_grammarInstructionSyntaxDirectedTranslationResultInVar::
init_21_ (const GGS_lstring & in_mActualParameterName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * object = nullptr ;
  macroMyNew (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (inCompiler COMMA_THERE)) ;
  object->grammarInstructionSyntaxDirectedTranslationResultInVar_init_21_ (in_mActualParameterName, inCompiler) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::
grammarInstructionSyntaxDirectedTranslationResultInVar_init_21_ (const GGS_lstring & in_mActualParameterName,
                                                                 Compiler * /* inCompiler */) {
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInVar::GGS_grammarInstructionSyntaxDirectedTranslationResultInVar (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * inSourcePtr) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_grammarInstructionSyntaxDirectedTranslationResultInVar::readProperty_mActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
    return p->mProperty_mActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @grammarInstructionSyntaxDirectedTranslationResultInVar class
//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (inCompiler COMMA_THERE),
mProperty_mActualParameterName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (const GGS_lstring & in_mActualParameterName,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (inCompiler COMMA_THERE),
mProperty_mActualParameterName () {
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::description (String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@grammarInstructionSyntaxDirectedTranslationResultInVar:") ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (mProperty_mActualParameterName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::printNonNullClassInstanceProperties () ;
    mProperty_mActualParameterName.printNonNullClassInstanceProperties ("mActualParameterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionSyntaxDirectedTranslationResultInVar generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar ("grammarInstructionSyntaxDirectedTranslationResultInVar",
                                                                                                           & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarInstructionSyntaxDirectedTranslationResultInVar::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionSyntaxDirectedTranslationResultInVar::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionSyntaxDirectedTranslationResultInVar (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInVar GGS_grammarInstructionSyntaxDirectedTranslationResultInVar::extractObject (const GGS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInVar result ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar * p = (const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInVar", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak & inOperand) const {
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

GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak (void) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak & GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::operator = (const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak (const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar & inSource) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInVar GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::unwrappedValue (void) const {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInVar result ;
  if (isValid ()) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInstructionSyntaxDirectedTranslationResultInVar (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInVar GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::bang_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInVar result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
      result = GGS_grammarInstructionSyntaxDirectedTranslationResultInVar ((cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionSyntaxDirectedTranslationResultInVar.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak ("grammarInstructionSyntaxDirectedTranslationResultInVar.weak",
                                                                                                                   & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak result ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak * p = (const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInVar.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inOperand) const {
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

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (void) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::
init_21__21_ (const GGS_lstring & in_mActualParameterTypeName,
              const GGS_lstring & in_mActualParameterName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * object = nullptr ;
  macroMyNew (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (inCompiler COMMA_THERE)) ;
  object->grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_init_21__21_ (in_mActualParameterTypeName, in_mActualParameterName, inCompiler) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::
grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_init_21__21_ (const GGS_lstring & in_mActualParameterTypeName,
                                                                             const GGS_lstring & in_mActualParameterName,
                                                                             Compiler * /* inCompiler */) {
  mProperty_mActualParameterTypeName = in_mActualParameterTypeName ;
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * inSourcePtr) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::readProperty_mActualParameterTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
    return p->mProperty_mActualParameterTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::readProperty_mActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
    return p->mProperty_mActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar class
//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (inCompiler COMMA_THERE),
mProperty_mActualParameterTypeName (),
mProperty_mActualParameterName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (const GGS_lstring & in_mActualParameterTypeName,
                                                                                                                                          const GGS_lstring & in_mActualParameterName,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (inCompiler COMMA_THERE),
mProperty_mActualParameterTypeName (),
mProperty_mActualParameterName () {
  mProperty_mActualParameterTypeName = in_mActualParameterTypeName ;
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::description (String & ioString,
                                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar:") ;
  mProperty_mActualParameterTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (mProperty_mActualParameterTypeName, mProperty_mActualParameterName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::printNonNullClassInstanceProperties () ;
    mProperty_mActualParameterTypeName.printNonNullClassInstanceProperties ("mActualParameterTypeName") ;
    mProperty_mActualParameterName.printNonNullClassInstanceProperties ("mActualParameterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar",
                                                                                                                   & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::extractObject (const GGS_object & inObject,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar result ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * p = (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak & inOperand) const {
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

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak (void) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak & GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::operator = (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inSource) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::unwrappedValue (void) const {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar result ;
  if (isValid ()) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::bang_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
      result = GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ((cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.weak",
                                                                                                                           & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak result ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak * p = (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inOperand) const {
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

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (void) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::
init_21__21_ (const GGS_lstring & in_mActualParameterTypeName,
              const GGS_lstring & in_mActualParameterName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * object = nullptr ;
  macroMyNew (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (inCompiler COMMA_THERE)) ;
  object->grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_init_21__21_ (in_mActualParameterTypeName, in_mActualParameterName, inCompiler) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::
grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_init_21__21_ (const GGS_lstring & in_mActualParameterTypeName,
                                                                               const GGS_lstring & in_mActualParameterName,
                                                                               Compiler * /* inCompiler */) {
  mProperty_mActualParameterTypeName = in_mActualParameterTypeName ;
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * inSourcePtr) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::readProperty_mActualParameterTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
    return p->mProperty_mActualParameterTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::readProperty_mActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
    return p->mProperty_mActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst class
//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (inCompiler COMMA_THERE),
mProperty_mActualParameterTypeName (),
mProperty_mActualParameterName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (const GGS_lstring & in_mActualParameterTypeName,
                                                                                                                                              const GGS_lstring & in_mActualParameterName,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (inCompiler COMMA_THERE),
mProperty_mActualParameterTypeName (),
mProperty_mActualParameterName () {
  mProperty_mActualParameterTypeName = in_mActualParameterTypeName ;
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::description (String & ioString,
                                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst:") ;
  mProperty_mActualParameterTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (mProperty_mActualParameterTypeName, mProperty_mActualParameterName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::printNonNullClassInstanceProperties () ;
    mProperty_mActualParameterTypeName.printNonNullClassInstanceProperties ("mActualParameterTypeName") ;
    mProperty_mActualParameterName.printNonNullClassInstanceProperties ("mActualParameterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst",
                                                                                                                     & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::extractObject (const GGS_object & inObject,
                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst result ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * p = (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak & inOperand) const {
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

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak (void) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak & GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::operator = (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inSource) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::unwrappedValue (void) const {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst result ;
  if (isValid ()) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::bang_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
      result = GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ((cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.weak",
                                                                                                                             & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak result ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak * p = (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::objectCompare (const GGS_grammarInstructionWithSourceFileForGeneration_2E_weak & inOperand) const {
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

GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::GGS_grammarInstructionWithSourceFileForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceFileForGeneration_2E_weak & GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::operator = (const GGS_grammarInstructionWithSourceFileForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::GGS_grammarInstructionWithSourceFileForGeneration_2E_weak (const GGS_grammarInstructionWithSourceFileForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceFileForGeneration_2E_weak GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInstructionWithSourceFileForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceFileForGeneration GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_grammarInstructionWithSourceFileForGeneration result ;
  if (isValid ()) {
    const cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInstructionWithSourceFileForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceFileForGeneration GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::bang_grammarInstructionWithSourceFileForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInstructionWithSourceFileForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionWithSourceFileForGeneration) ;
      result = GGS_grammarInstructionWithSourceFileForGeneration ((cPtr_grammarInstructionWithSourceFileForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionWithSourceFileForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration_2E_weak ("grammarInstructionWithSourceFileForGeneration.weak",
                                                                                                          & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionWithSourceFileForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceFileForGeneration_2E_weak GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionWithSourceFileForGeneration_2E_weak result ;
  const GGS_grammarInstructionWithSourceFileForGeneration_2E_weak * p = (const GGS_grammarInstructionWithSourceFileForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionWithSourceFileForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionWithSourceFileForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::objectCompare (const GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak & GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::operator = (const GGS_grammarInstructionWithSourceExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak (const GGS_grammarInstructionWithSourceExpressionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceExpressionForGeneration GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_grammarInstructionWithSourceExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInstructionWithSourceExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceExpressionForGeneration GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::bang_grammarInstructionWithSourceExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInstructionWithSourceExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
      result = GGS_grammarInstructionWithSourceExpressionForGeneration ((cPtr_grammarInstructionWithSourceExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionWithSourceExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration_2E_weak ("grammarInstructionWithSourceExpressionForGeneration.weak",
                                                                                                                & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak result ;
  const GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak * p = (const GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionWithSourceExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_semanticInstructionAST_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionAST_5D_::GGS__5B_semanticInstructionAST_5D_ (void) :
AC_GALGAS_root (),
mSharedArray () {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionAST_5D_::GGS__5B_semanticInstructionAST_5D_ (const GGS__5B_semanticInstructionAST_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionAST_5D_ & GGS__5B_semanticInstructionAST_5D_::operator = (const GGS__5B_semanticInstructionAST_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionAST_5D_ GGS__5B_semanticInstructionAST_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_semanticInstructionAST_5D_ result ;
  result.mSharedArray.setCapacity (16) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS__5B_semanticInstructionAST_5D_::isValid (void) const {
  return mSharedArray.isAllocated () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_semanticInstructionAST_5D_::drop (void) {
  mSharedArray.removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_semanticInstructionAST_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mSharedArray.setCapacity (16) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_semanticInstructionAST_5D_::plusPlusAssignOperation (const GGS_semanticInstructionAST & inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mSharedArray.appendObject (inValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_semanticInstructionAST_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionAST_5D_ GGS__5B_semanticInstructionAST_5D_::add_operation (const GGS__5B_semanticInstructionAST_5D_ & inOperand,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_semanticInstructionAST_5D_ result ;
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

void GGS__5B_semanticInstructionAST_5D_::description (String & ioString,
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

void GGS__5B_semanticInstructionAST_5D_::plusAssignOperation (const GGS__5B_semanticInstructionAST_5D_ inOperand,
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

void GGS__5B_semanticInstructionAST_5D_::setter_append (const GGS_semanticInstructionAST inValue,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_semanticInstructionAST_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_semanticInstructionAST_5D_::setter_insertAtIndex (const GGS_semanticInstructionAST inValue,
                                                               const GGS_uint inInsertionIndex,
                                                               Compiler * /* inCompiler */
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_semanticInstructionAST_5D_::setter_removeAtIndex (GGS_semanticInstructionAST & outValue,
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

void GGS__5B_semanticInstructionAST_5D_::setter_popFirst (GGS_semanticInstructionAST & outValue,
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

void GGS__5B_semanticInstructionAST_5D_::setter_popLast (GGS_semanticInstructionAST & outValue,
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

void GGS__5B_semanticInstructionAST_5D_::method_first (GGS_semanticInstructionAST & outValue,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray (0 COMMA_THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_semanticInstructionAST_5D_::method_last (GGS_semanticInstructionAST & outValue,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray.lastObject (THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionAST GGS__5B_semanticInstructionAST_5D_::readSubscript__3F_ (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_semanticInstructionAST result ;
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
// Down Enumerator for @_5B_semanticInstructionAST_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_semanticInstructionAST_5D_::DownEnumerator__5B_semanticInstructionAST_5D_ (const GGS__5B_semanticInstructionAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionAST DownEnumerator__5B_semanticInstructionAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionAST DownEnumerator__5B_semanticInstructionAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_semanticInstructionAST_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_semanticInstructionAST_5D_::UpEnumerator__5B_semanticInstructionAST_5D_ (const GGS__5B_semanticInstructionAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionAST UpEnumerator__5B_semanticInstructionAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionAST UpEnumerator__5B_semanticInstructionAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[semanticInstructionAST] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_semanticInstructionAST_5D_ ("[semanticInstructionAST]",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_semanticInstructionAST_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_semanticInstructionAST_5D_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__5B_semanticInstructionAST_5D_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__5B_semanticInstructionAST_5D_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionAST_5D_ GGS__5B_semanticInstructionAST_5D_::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS__5B_semanticInstructionAST_5D_ result ;
  const GGS__5B_semanticInstructionAST_5D_ * p = (const GGS__5B_semanticInstructionAST_5D_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__5B_semanticInstructionAST_5D_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("[semanticInstructionAST]", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@semanticInstructionListForGeneration' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_semanticInstructionListForGeneration : public CollectionElementPtr {
  public: GGS_semanticInstructionListForGeneration_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_semanticInstructionListForGeneration (const GGS_semanticInstructionForGeneration & in_mInstruction
                                                                     COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_semanticInstructionListForGeneration (const GGS_semanticInstructionListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_semanticInstructionListForGeneration::CollectionElementPtr_semanticInstructionListForGeneration (const GGS_semanticInstructionForGeneration & in_mInstruction
                                                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_semanticInstructionListForGeneration::CollectionElementPtr_semanticInstructionListForGeneration (const GGS_semanticInstructionListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_semanticInstructionListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_semanticInstructionListForGeneration::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_semanticInstructionListForGeneration (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @semanticInstructionListForGeneration
//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration::GGS_semanticInstructionListForGeneration (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration::GGS_semanticInstructionListForGeneration (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_semanticInstructionListForGeneration * p = (CollectionElementPtr_semanticInstructionListForGeneration *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_semanticInstructionListForGeneration) ;
    const GGS_semanticInstructionListForGeneration_2E_element element (p->mObject.mProperty_mInstruction) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListForGeneration::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                          const GGS_semanticInstructionForGeneration & in_mInstruction
                                                                          COMMA_LOCATION_ARGS) {
  CollectionElementPtr_semanticInstructionListForGeneration * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_semanticInstructionListForGeneration (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_semanticInstructionListForGeneration::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_semanticInstructionListForGeneration::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListForGeneration::description (String & ioString,
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

GGS_semanticInstructionListForGeneration GGS_semanticInstructionListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticInstructionListForGeneration result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListForGeneration::plusPlusAssignOperation (const GGS_semanticInstructionListForGeneration_2E_element & inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_semanticInstructionListForGeneration::class_func_listWithValue (const GGS_semanticInstructionForGeneration & inOperand0
                                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_semanticInstructionListForGeneration_2E_element element (inOperand0) ;
  GGS_semanticInstructionListForGeneration result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListForGeneration::addAssignOperation (const GGS_semanticInstructionForGeneration & inOperand0
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_semanticInstructionListForGeneration_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListForGeneration::setter_append (const GGS_semanticInstructionForGeneration inOperand0,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  const GGS_semanticInstructionListForGeneration_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListForGeneration::setter_insertAtIndex (const GGS_semanticInstructionForGeneration inOperand0,
                                                                     const GGS_uint inInsertionIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  const GGS_semanticInstructionListForGeneration_2E_element newElement (inOperand0) ;
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

void GGS_semanticInstructionListForGeneration::setter_removeAtIndex (GGS_semanticInstructionForGeneration & outOperand0,
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

void GGS_semanticInstructionListForGeneration::setter_popFirst (GGS_semanticInstructionForGeneration & outOperand0,
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

void GGS_semanticInstructionListForGeneration::setter_popLast (GGS_semanticInstructionForGeneration & outOperand0,
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

void GGS_semanticInstructionListForGeneration::method_first (GGS_semanticInstructionForGeneration & outOperand0,
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

void GGS_semanticInstructionListForGeneration::method_last (GGS_semanticInstructionForGeneration & outOperand0,
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

GGS_semanticInstructionListForGeneration GGS_semanticInstructionListForGeneration::add_operation (const GGS_semanticInstructionListForGeneration & inOperand,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_semanticInstructionListForGeneration result ;
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

GGS_semanticInstructionListForGeneration GGS_semanticInstructionListForGeneration::subList (const int32_t inStart,
                                                                                            const int32_t inLength,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_semanticInstructionListForGeneration result ;
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

GGS_semanticInstructionListForGeneration GGS_semanticInstructionListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_semanticInstructionListForGeneration result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_semanticInstructionListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_semanticInstructionListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_semanticInstructionListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_semanticInstructionListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListForGeneration::plusAssignOperation (const GGS_semanticInstructionListForGeneration inList,
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

void GGS_semanticInstructionListForGeneration::setter_setMInstructionAtIndex (GGS_semanticInstructionForGeneration inOperand,
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

GGS_semanticInstructionForGeneration GGS_semanticInstructionListForGeneration::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_semanticInstructionForGeneration result ;
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
// Down Enumerator for @semanticInstructionListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_semanticInstructionListForGeneration::DownEnumerator_semanticInstructionListForGeneration (const GGS_semanticInstructionListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration_2E_element DownEnumerator_semanticInstructionListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionForGeneration DownEnumerator_semanticInstructionListForGeneration::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @semanticInstructionListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_semanticInstructionListForGeneration::UpEnumerator_semanticInstructionListForGeneration (const GGS_semanticInstructionListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration_2E_element UpEnumerator_semanticInstructionListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionForGeneration UpEnumerator_semanticInstructionListForGeneration::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//     @semanticInstructionListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticInstructionListForGeneration ("semanticInstructionListForGeneration",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticInstructionListForGeneration::staticTypeDescriptor (void) const {
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

ComparisonResult GGS_loopInstructionWithVariantForGeneration_2E_weak::objectCompare (const GGS_loopInstructionWithVariantForGeneration_2E_weak & inOperand) const {
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

GGS_loopInstructionWithVariantForGeneration_2E_weak::GGS_loopInstructionWithVariantForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantForGeneration_2E_weak & GGS_loopInstructionWithVariantForGeneration_2E_weak::operator = (const GGS_loopInstructionWithVariantForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantForGeneration_2E_weak::GGS_loopInstructionWithVariantForGeneration_2E_weak (const GGS_loopInstructionWithVariantForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantForGeneration_2E_weak GGS_loopInstructionWithVariantForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_loopInstructionWithVariantForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantForGeneration GGS_loopInstructionWithVariantForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_loopInstructionWithVariantForGeneration result ;
  if (isValid ()) {
    const cPtr_loopInstructionWithVariantForGeneration * p = (cPtr_loopInstructionWithVariantForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_loopInstructionWithVariantForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantForGeneration GGS_loopInstructionWithVariantForGeneration_2E_weak::bang_loopInstructionWithVariantForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_loopInstructionWithVariantForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_loopInstructionWithVariantForGeneration) ;
      result = GGS_loopInstructionWithVariantForGeneration ((cPtr_loopInstructionWithVariantForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @loopInstructionWithVariantForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithVariantForGeneration_2E_weak ("loopInstructionWithVariantForGeneration.weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_loopInstructionWithVariantForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithVariantForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_loopInstructionWithVariantForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_loopInstructionWithVariantForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantForGeneration_2E_weak GGS_loopInstructionWithVariantForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithVariantForGeneration_2E_weak result ;
  const GGS_loopInstructionWithVariantForGeneration_2E_weak * p = (const GGS_loopInstructionWithVariantForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_loopInstructionWithVariantForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithVariantForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum methodKind
//--------------------------------------------------------------------------------------------------

GGS_methodKind::GGS_methodKind (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_methodKind GGS_methodKind::class_func_definedAsMember (UNUSED_LOCATION_ARGS) {
  GGS_methodKind result ;
  result.mEnum = Enumeration::enum_definedAsMember ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodKind GGS_methodKind::class_func_definedAsExtension (UNUSED_LOCATION_ARGS) {
  GGS_methodKind result ;
  result.mEnum = Enumeration::enum_definedAsExtension ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_methodKind [3] = {
  "(not built)",
  "definedAsMember",
  "definedAsExtension"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_methodKind::getter_isDefinedAsMember (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_definedAsMember == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_methodKind::getter_isDefinedAsExtension (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_definedAsExtension == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_methodKind::description (String & ioString,
                                  const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @methodKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_methodKind [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_methodKind::objectCompare (const GGS_methodKind & inOperand) const {
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
//     @methodKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_methodKind ("methodKind",
                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_methodKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_methodKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_methodKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodKind GGS_methodKind::extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_methodKind result ;
  const GGS_methodKind * p = (const GGS_methodKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_methodKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("methodKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_methodCallInstructionForGeneration_2E_weak::objectCompare (const GGS_methodCallInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_methodCallInstructionForGeneration_2E_weak::GGS_methodCallInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionForGeneration_2E_weak & GGS_methodCallInstructionForGeneration_2E_weak::operator = (const GGS_methodCallInstructionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionForGeneration_2E_weak::GGS_methodCallInstructionForGeneration_2E_weak (const GGS_methodCallInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionForGeneration_2E_weak GGS_methodCallInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_methodCallInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionForGeneration GGS_methodCallInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_methodCallInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_methodCallInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionForGeneration GGS_methodCallInstructionForGeneration_2E_weak::bang_methodCallInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_methodCallInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_methodCallInstructionForGeneration) ;
      result = GGS_methodCallInstructionForGeneration ((cPtr_methodCallInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @methodCallInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_methodCallInstructionForGeneration_2E_weak ("methodCallInstructionForGeneration.weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_methodCallInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_methodCallInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_methodCallInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionForGeneration_2E_weak GGS_methodCallInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_methodCallInstructionForGeneration_2E_weak result ;
  const GGS_methodCallInstructionForGeneration_2E_weak * p = (const GGS_methodCallInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_methodCallInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("methodCallInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ifInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ifInstructionForGeneration::objectCompare (const GGS_ifInstructionForGeneration & inOperand) const {
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

GGS_ifInstructionForGeneration::GGS_ifInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ifInstructionForGeneration GGS_ifInstructionForGeneration::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_ifTestListForGeneration & in_mExpressions,
                      const GGS_semanticInstructionListForGeneration & in_m_5F_then_5F_instructionList,
                      const GGS_semanticInstructionListForGeneration & in_m_5F_else_5F_instructionList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_ifInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_ifInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->ifInstructionForGeneration_init_21__21__21__21_ (in_mInstructionLocation, in_mExpressions, in_m_5F_then_5F_instructionList, in_m_5F_else_5F_instructionList, inCompiler) ;
  const GGS_ifInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionForGeneration::
ifInstructionForGeneration_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                 const GGS_ifTestListForGeneration & in_mExpressions,
                                                 const GGS_semanticInstructionListForGeneration & in_m_5F_then_5F_instructionList,
                                                 const GGS_semanticInstructionListForGeneration & in_m_5F_else_5F_instructionList,
                                                 Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpressions = in_mExpressions ;
  mProperty_m_5F_then_5F_instructionList = in_m_5F_then_5F_instructionList ;
  mProperty_m_5F_else_5F_instructionList = in_m_5F_else_5F_instructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionForGeneration::GGS_ifInstructionForGeneration (const cPtr_ifInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_ifInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ifInstructionForGeneration * p = (cPtr_ifInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration GGS_ifInstructionForGeneration::readProperty_mExpressions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ifTestListForGeneration () ;
  }else{
    cPtr_ifInstructionForGeneration * p = (cPtr_ifInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionForGeneration) ;
    return p->mProperty_mExpressions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_ifInstructionForGeneration::readProperty_m_5F_then_5F_instructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_ifInstructionForGeneration * p = (cPtr_ifInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionForGeneration) ;
    return p->mProperty_m_5F_then_5F_instructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_ifInstructionForGeneration::readProperty_m_5F_else_5F_instructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_ifInstructionForGeneration * p = (cPtr_ifInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionForGeneration) ;
    return p->mProperty_m_5F_else_5F_instructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ifInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_ifInstructionForGeneration::cPtr_ifInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mExpressions (),
mProperty_m_5F_then_5F_instructionList (),
mProperty_m_5F_else_5F_instructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ifInstructionForGeneration::cPtr_ifInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                  const GGS_ifTestListForGeneration & in_mExpressions,
                                                                  const GGS_semanticInstructionListForGeneration & in_m_5F_then_5F_instructionList,
                                                                  const GGS_semanticInstructionListForGeneration & in_m_5F_else_5F_instructionList,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mExpressions (),
mProperty_m_5F_then_5F_instructionList (),
mProperty_m_5F_else_5F_instructionList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpressions = in_mExpressions ;
  mProperty_m_5F_then_5F_instructionList = in_m_5F_then_5F_instructionList ;
  mProperty_m_5F_else_5F_instructionList = in_m_5F_else_5F_instructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ifInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionForGeneration ;
}

void cPtr_ifInstructionForGeneration::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@ifInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_then_5F_instructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_else_5F_instructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_ifInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ifInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mExpressions, mProperty_m_5F_then_5F_instructionList, mProperty_m_5F_else_5F_instructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ifInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mExpressions.printNonNullClassInstanceProperties ("mExpressions") ;
    mProperty_m_5F_then_5F_instructionList.printNonNullClassInstanceProperties ("m_then_instructionList") ;
    mProperty_m_5F_else_5F_instructionList.printNonNullClassInstanceProperties ("m_else_instructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ifInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifInstructionForGeneration ("ifInstructionForGeneration",
                                                                               & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionForGeneration GGS_ifInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_ifInstructionForGeneration result ;
  const GGS_ifInstructionForGeneration * p = (const GGS_ifInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ifInstructionForGeneration_2E_weak::objectCompare (const GGS_ifInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_ifInstructionForGeneration_2E_weak::GGS_ifInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionForGeneration_2E_weak & GGS_ifInstructionForGeneration_2E_weak::operator = (const GGS_ifInstructionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionForGeneration_2E_weak::GGS_ifInstructionForGeneration_2E_weak (const GGS_ifInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifInstructionForGeneration_2E_weak GGS_ifInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ifInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionForGeneration GGS_ifInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_ifInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_ifInstructionForGeneration * p = (cPtr_ifInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_ifInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionForGeneration GGS_ifInstructionForGeneration_2E_weak::bang_ifInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ifInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ifInstructionForGeneration) ;
      result = GGS_ifInstructionForGeneration ((cPtr_ifInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ifInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifInstructionForGeneration_2E_weak ("ifInstructionForGeneration.weak",
                                                                                       & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionForGeneration_2E_weak GGS_ifInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ifInstructionForGeneration_2E_weak result ;
  const GGS_ifInstructionForGeneration_2E_weak * p = (const GGS_ifInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementAST::GGS_forInstructionEnumeratedObjectElementAST (void) :
mProperty_mOptionalTypeName (),
mProperty_mDeclaredAsUnused (),
mProperty_mOptionalConstantName () {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementAST::GGS_forInstructionEnumeratedObjectElementAST (const GGS_forInstructionEnumeratedObjectElementAST & inSource) :
mProperty_mOptionalTypeName (inSource.mProperty_mOptionalTypeName),
mProperty_mDeclaredAsUnused (inSource.mProperty_mDeclaredAsUnused),
mProperty_mOptionalConstantName (inSource.mProperty_mOptionalConstantName) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementAST & GGS_forInstructionEnumeratedObjectElementAST::operator = (const GGS_forInstructionEnumeratedObjectElementAST & inSource) {
  mProperty_mOptionalTypeName = inSource.mProperty_mOptionalTypeName ;
  mProperty_mDeclaredAsUnused = inSource.mProperty_mDeclaredAsUnused ;
  mProperty_mOptionalConstantName = inSource.mProperty_mOptionalConstantName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementAST GGS_forInstructionEnumeratedObjectElementAST::init_21__21__21_ (const GGS_lstring & in_mOptionalTypeName,
                                                                                                             const GGS_bool & in_mDeclaredAsUnused,
                                                                                                             const GGS_lstring & in_mOptionalConstantName,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectElementAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionalTypeName = in_mOptionalTypeName ;
  result.mProperty_mDeclaredAsUnused = in_mDeclaredAsUnused ;
  result.mProperty_mOptionalConstantName = in_mOptionalConstantName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementAST::GGS_forInstructionEnumeratedObjectElementAST (const GGS_lstring & inOperand0,
                                                                                            const GGS_bool & inOperand1,
                                                                                            const GGS_lstring & inOperand2) :
mProperty_mOptionalTypeName (inOperand0),
mProperty_mDeclaredAsUnused (inOperand1),
mProperty_mOptionalConstantName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_forInstructionEnumeratedObjectElementAST::isValid (void) const {
  return mProperty_mOptionalTypeName.isValid () && mProperty_mDeclaredAsUnused.isValid () && mProperty_mOptionalConstantName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementAST::drop (void) {
  mProperty_mOptionalTypeName.drop () ;
  mProperty_mDeclaredAsUnused.drop () ;
  mProperty_mOptionalConstantName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementAST::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @forInstructionEnumeratedObjectElementAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOptionalTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDeclaredAsUnused.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionalConstantName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @forInstructionEnumeratedObjectElementAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementAST ("forInstructionEnumeratedObjectElementAST",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_forInstructionEnumeratedObjectElementAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forInstructionEnumeratedObjectElementAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forInstructionEnumeratedObjectElementAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementAST GGS_forInstructionEnumeratedObjectElementAST::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectElementAST result ;
  const GGS_forInstructionEnumeratedObjectElementAST * p = (const GGS_forInstructionEnumeratedObjectElementAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forInstructionEnumeratedObjectElementAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectElementAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractEnumeratedCollectionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractEnumeratedCollectionAST::objectCompare (const GGS_abstractEnumeratedCollectionAST & inOperand) const {
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

GGS_abstractEnumeratedCollectionAST::GGS_abstractEnumeratedCollectionAST (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractEnumeratedCollectionAST::
abstractEnumeratedCollectionAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST::GGS_abstractEnumeratedCollectionAST (const cPtr_abstractEnumeratedCollectionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractEnumeratedCollectionAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractEnumeratedCollectionAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractEnumeratedCollectionAST::cPtr_abstractEnumeratedCollectionAST (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractEnumeratedCollectionAST::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractEnumeratedCollectionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST ("abstractEnumeratedCollectionAST",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractEnumeratedCollectionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractEnumeratedCollectionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractEnumeratedCollectionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST GGS_abstractEnumeratedCollectionAST::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_abstractEnumeratedCollectionAST result ;
  const GGS_abstractEnumeratedCollectionAST * p = (const GGS_abstractEnumeratedCollectionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractEnumeratedCollectionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractEnumeratedCollectionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractEnumeratedCollectionAST_2E_weak::objectCompare (const GGS_abstractEnumeratedCollectionAST_2E_weak & inOperand) const {
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

GGS_abstractEnumeratedCollectionAST_2E_weak::GGS_abstractEnumeratedCollectionAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST_2E_weak & GGS_abstractEnumeratedCollectionAST_2E_weak::operator = (const GGS_abstractEnumeratedCollectionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST_2E_weak::GGS_abstractEnumeratedCollectionAST_2E_weak (const GGS_abstractEnumeratedCollectionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST_2E_weak GGS_abstractEnumeratedCollectionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractEnumeratedCollectionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST GGS_abstractEnumeratedCollectionAST_2E_weak::unwrappedValue (void) const {
  GGS_abstractEnumeratedCollectionAST result ;
  if (isValid ()) {
    const cPtr_abstractEnumeratedCollectionAST * p = (cPtr_abstractEnumeratedCollectionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractEnumeratedCollectionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST GGS_abstractEnumeratedCollectionAST_2E_weak::bang_abstractEnumeratedCollectionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractEnumeratedCollectionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractEnumeratedCollectionAST) ;
      result = GGS_abstractEnumeratedCollectionAST ((cPtr_abstractEnumeratedCollectionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractEnumeratedCollectionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2E_weak ("abstractEnumeratedCollectionAST.weak",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractEnumeratedCollectionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractEnumeratedCollectionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractEnumeratedCollectionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST_2E_weak GGS_abstractEnumeratedCollectionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_abstractEnumeratedCollectionAST_2E_weak result ;
  const GGS_abstractEnumeratedCollectionAST_2E_weak * p = (const GGS_abstractEnumeratedCollectionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractEnumeratedCollectionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractEnumeratedCollectionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @enumeratedCollectionVarInExpAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumeratedCollectionVarInExpAST::objectCompare (const GGS_enumeratedCollectionVarInExpAST & inOperand) const {
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

GGS_enumeratedCollectionVarInExpAST::GGS_enumeratedCollectionVarInExpAST (void) :
GGS_abstractEnumeratedCollectionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_enumeratedCollectionVarInExpAST GGS_enumeratedCollectionVarInExpAST::
init_21__21__21__21_ (const GGS_lstring & in_mEnumerationOptionalTypeName,
                      const GGS_lstring & in_mEnumerationVariable,
                      const GGS_semanticExpressionAST & in_mEnumeratedExpression,
                      const GGS_location & in_mEndOfEnumerationExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_enumeratedCollectionVarInExpAST * object = nullptr ;
  macroMyNew (object, cPtr_enumeratedCollectionVarInExpAST (inCompiler COMMA_THERE)) ;
  object->enumeratedCollectionVarInExpAST_init_21__21__21__21_ (in_mEnumerationOptionalTypeName, in_mEnumerationVariable, in_mEnumeratedExpression, in_mEndOfEnumerationExpression, inCompiler) ;
  const GGS_enumeratedCollectionVarInExpAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionVarInExpAST::
enumeratedCollectionVarInExpAST_init_21__21__21__21_ (const GGS_lstring & in_mEnumerationOptionalTypeName,
                                                      const GGS_lstring & in_mEnumerationVariable,
                                                      const GGS_semanticExpressionAST & in_mEnumeratedExpression,
                                                      const GGS_location & in_mEndOfEnumerationExpression,
                                                      Compiler * /* inCompiler */) {
  mProperty_mEnumerationOptionalTypeName = in_mEnumerationOptionalTypeName ;
  mProperty_mEnumerationVariable = in_mEnumerationVariable ;
  mProperty_mEnumeratedExpression = in_mEnumeratedExpression ;
  mProperty_mEndOfEnumerationExpression = in_mEndOfEnumerationExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionVarInExpAST::GGS_enumeratedCollectionVarInExpAST (const cPtr_enumeratedCollectionVarInExpAST * inSourcePtr) :
GGS_abstractEnumeratedCollectionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumeratedCollectionVarInExpAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_enumeratedCollectionVarInExpAST::readProperty_mEnumerationOptionalTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_enumeratedCollectionVarInExpAST * p = (cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
    return p->mProperty_mEnumerationOptionalTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_enumeratedCollectionVarInExpAST::readProperty_mEnumerationVariable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_enumeratedCollectionVarInExpAST * p = (cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
    return p->mProperty_mEnumerationVariable ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_enumeratedCollectionVarInExpAST::readProperty_mEnumeratedExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_enumeratedCollectionVarInExpAST * p = (cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
    return p->mProperty_mEnumeratedExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_enumeratedCollectionVarInExpAST::readProperty_mEndOfEnumerationExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_enumeratedCollectionVarInExpAST * p = (cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
    return p->mProperty_mEndOfEnumerationExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @enumeratedCollectionVarInExpAST class
//--------------------------------------------------------------------------------------------------

cPtr_enumeratedCollectionVarInExpAST::cPtr_enumeratedCollectionVarInExpAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractEnumeratedCollectionAST (inCompiler COMMA_THERE),
mProperty_mEnumerationOptionalTypeName (),
mProperty_mEnumerationVariable (),
mProperty_mEnumeratedExpression (),
mProperty_mEndOfEnumerationExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_enumeratedCollectionVarInExpAST::cPtr_enumeratedCollectionVarInExpAST (const GGS_lstring & in_mEnumerationOptionalTypeName,
                                                                            const GGS_lstring & in_mEnumerationVariable,
                                                                            const GGS_semanticExpressionAST & in_mEnumeratedExpression,
                                                                            const GGS_location & in_mEndOfEnumerationExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractEnumeratedCollectionAST (inCompiler COMMA_THERE),
mProperty_mEnumerationOptionalTypeName (),
mProperty_mEnumerationVariable (),
mProperty_mEnumeratedExpression (),
mProperty_mEndOfEnumerationExpression () {
  mProperty_mEnumerationOptionalTypeName = in_mEnumerationOptionalTypeName ;
  mProperty_mEnumerationVariable = in_mEnumerationVariable ;
  mProperty_mEnumeratedExpression = in_mEnumeratedExpression ;
  mProperty_mEndOfEnumerationExpression = in_mEndOfEnumerationExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_enumeratedCollectionVarInExpAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST ;
}

void cPtr_enumeratedCollectionVarInExpAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@enumeratedCollectionVarInExpAST:") ;
  mProperty_mEnumerationOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEnumerationVariable.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEnumeratedExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfEnumerationExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_enumeratedCollectionVarInExpAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enumeratedCollectionVarInExpAST (mProperty_mEnumerationOptionalTypeName, mProperty_mEnumerationVariable, mProperty_mEnumeratedExpression, mProperty_mEndOfEnumerationExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_enumeratedCollectionVarInExpAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractEnumeratedCollectionAST::printNonNullClassInstanceProperties () ;
    mProperty_mEnumerationOptionalTypeName.printNonNullClassInstanceProperties ("mEnumerationOptionalTypeName") ;
    mProperty_mEnumerationVariable.printNonNullClassInstanceProperties ("mEnumerationVariable") ;
    mProperty_mEnumeratedExpression.printNonNullClassInstanceProperties ("mEnumeratedExpression") ;
    mProperty_mEndOfEnumerationExpression.printNonNullClassInstanceProperties ("mEndOfEnumerationExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @enumeratedCollectionVarInExpAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST ("enumeratedCollectionVarInExpAST",
                                                                                    & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumeratedCollectionVarInExpAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumeratedCollectionVarInExpAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumeratedCollectionVarInExpAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionVarInExpAST GGS_enumeratedCollectionVarInExpAST::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_enumeratedCollectionVarInExpAST result ;
  const GGS_enumeratedCollectionVarInExpAST * p = (const GGS_enumeratedCollectionVarInExpAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumeratedCollectionVarInExpAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionVarInExpAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumeratedCollectionVarInExpAST_2E_weak::objectCompare (const GGS_enumeratedCollectionVarInExpAST_2E_weak & inOperand) const {
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

GGS_enumeratedCollectionVarInExpAST_2E_weak::GGS_enumeratedCollectionVarInExpAST_2E_weak (void) :
GGS_abstractEnumeratedCollectionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionVarInExpAST_2E_weak & GGS_enumeratedCollectionVarInExpAST_2E_weak::operator = (const GGS_enumeratedCollectionVarInExpAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionVarInExpAST_2E_weak::GGS_enumeratedCollectionVarInExpAST_2E_weak (const GGS_enumeratedCollectionVarInExpAST & inSource) :
GGS_abstractEnumeratedCollectionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionVarInExpAST_2E_weak GGS_enumeratedCollectionVarInExpAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_enumeratedCollectionVarInExpAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionVarInExpAST GGS_enumeratedCollectionVarInExpAST_2E_weak::unwrappedValue (void) const {
  GGS_enumeratedCollectionVarInExpAST result ;
  if (isValid ()) {
    const cPtr_enumeratedCollectionVarInExpAST * p = (cPtr_enumeratedCollectionVarInExpAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_enumeratedCollectionVarInExpAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionVarInExpAST GGS_enumeratedCollectionVarInExpAST_2E_weak::bang_enumeratedCollectionVarInExpAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_enumeratedCollectionVarInExpAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumeratedCollectionVarInExpAST) ;
      result = GGS_enumeratedCollectionVarInExpAST ((cPtr_enumeratedCollectionVarInExpAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @enumeratedCollectionVarInExpAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST_2E_weak ("enumeratedCollectionVarInExpAST.weak",
                                                                                            & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumeratedCollectionVarInExpAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumeratedCollectionVarInExpAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumeratedCollectionVarInExpAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionVarInExpAST_2E_weak GGS_enumeratedCollectionVarInExpAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_enumeratedCollectionVarInExpAST_2E_weak result ;
  const GGS_enumeratedCollectionVarInExpAST_2E_weak * p = (const GGS_enumeratedCollectionVarInExpAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumeratedCollectionVarInExpAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionVarInExpAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_forInstructionEnumeratedObjectElementAST_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_forInstructionEnumeratedObjectElementAST_5D_::GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ (void) :
AC_GALGAS_root (),
mSharedArray () {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_forInstructionEnumeratedObjectElementAST_5D_::GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ (const GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ & GGS__5B_forInstructionEnumeratedObjectElementAST_5D_::operator = (const GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ GGS__5B_forInstructionEnumeratedObjectElementAST_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ result ;
  result.mSharedArray.setCapacity (16) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS__5B_forInstructionEnumeratedObjectElementAST_5D_::isValid (void) const {
  return mSharedArray.isAllocated () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_forInstructionEnumeratedObjectElementAST_5D_::drop (void) {
  mSharedArray.removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_forInstructionEnumeratedObjectElementAST_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mSharedArray.setCapacity (16) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_forInstructionEnumeratedObjectElementAST_5D_::plusPlusAssignOperation (const GGS_forInstructionEnumeratedObjectElementAST & inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mSharedArray.appendObject (inValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_forInstructionEnumeratedObjectElementAST_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ GGS__5B_forInstructionEnumeratedObjectElementAST_5D_::add_operation (const GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ & inOperand,
                                                                                                                          Compiler * /* inCompiler */
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ result ;
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

void GGS__5B_forInstructionEnumeratedObjectElementAST_5D_::description (String & ioString,
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

void GGS__5B_forInstructionEnumeratedObjectElementAST_5D_::plusAssignOperation (const GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ inOperand,
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

void GGS__5B_forInstructionEnumeratedObjectElementAST_5D_::setter_append (const GGS_forInstructionEnumeratedObjectElementAST inValue,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_forInstructionEnumeratedObjectElementAST_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_forInstructionEnumeratedObjectElementAST_5D_::setter_insertAtIndex (const GGS_forInstructionEnumeratedObjectElementAST inValue,
                                                                                 const GGS_uint inInsertionIndex,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_forInstructionEnumeratedObjectElementAST_5D_::setter_removeAtIndex (GGS_forInstructionEnumeratedObjectElementAST & outValue,
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

void GGS__5B_forInstructionEnumeratedObjectElementAST_5D_::setter_popFirst (GGS_forInstructionEnumeratedObjectElementAST & outValue,
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

void GGS__5B_forInstructionEnumeratedObjectElementAST_5D_::setter_popLast (GGS_forInstructionEnumeratedObjectElementAST & outValue,
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

void GGS__5B_forInstructionEnumeratedObjectElementAST_5D_::method_first (GGS_forInstructionEnumeratedObjectElementAST & outValue,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray (0 COMMA_THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_forInstructionEnumeratedObjectElementAST_5D_::method_last (GGS_forInstructionEnumeratedObjectElementAST & outValue,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray.lastObject (THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementAST GGS__5B_forInstructionEnumeratedObjectElementAST_5D_::readSubscript__3F_ (const GGS_uint & inIndex,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectElementAST result ;
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
// Down Enumerator for @_5B_forInstructionEnumeratedObjectElementAST_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_forInstructionEnumeratedObjectElementAST_5D_::DownEnumerator__5B_forInstructionEnumeratedObjectElementAST_5D_ (const GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementAST DownEnumerator__5B_forInstructionEnumeratedObjectElementAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementAST DownEnumerator__5B_forInstructionEnumeratedObjectElementAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_forInstructionEnumeratedObjectElementAST_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_forInstructionEnumeratedObjectElementAST_5D_::UpEnumerator__5B_forInstructionEnumeratedObjectElementAST_5D_ (const GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementAST UpEnumerator__5B_forInstructionEnumeratedObjectElementAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementAST UpEnumerator__5B_forInstructionEnumeratedObjectElementAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[forInstructionEnumeratedObjectElementAST] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_forInstructionEnumeratedObjectElementAST_5D_ ("[forInstructionEnumeratedObjectElementAST]",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_forInstructionEnumeratedObjectElementAST_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_forInstructionEnumeratedObjectElementAST_5D_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__5B_forInstructionEnumeratedObjectElementAST_5D_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ GGS__5B_forInstructionEnumeratedObjectElementAST_5D_::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ result ;
  const GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ * p = (const GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("[forInstructionEnumeratedObjectElementAST]", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @enumeratedCollectionCstListInExpAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumeratedCollectionCstListInExpAST::objectCompare (const GGS_enumeratedCollectionCstListInExpAST & inOperand) const {
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

GGS_enumeratedCollectionCstListInExpAST::GGS_enumeratedCollectionCstListInExpAST (void) :
GGS_abstractEnumeratedCollectionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST GGS_enumeratedCollectionCstListInExpAST::
init_21__21__21_ (const GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ & in_mElementList,
                  const GGS_semanticExpressionAST & in_mEnumeratedExpression,
                  const GGS_location & in_mEndOfEnumerationExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_enumeratedCollectionCstListInExpAST * object = nullptr ;
  macroMyNew (object, cPtr_enumeratedCollectionCstListInExpAST (inCompiler COMMA_THERE)) ;
  object->enumeratedCollectionCstListInExpAST_init_21__21__21_ (in_mElementList, in_mEnumeratedExpression, in_mEndOfEnumerationExpression, inCompiler) ;
  const GGS_enumeratedCollectionCstListInExpAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionCstListInExpAST::
enumeratedCollectionCstListInExpAST_init_21__21__21_ (const GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ & in_mElementList,
                                                      const GGS_semanticExpressionAST & in_mEnumeratedExpression,
                                                      const GGS_location & in_mEndOfEnumerationExpression,
                                                      Compiler * /* inCompiler */) {
  mProperty_mElementList = in_mElementList ;
  mProperty_mEnumeratedExpression = in_mEnumeratedExpression ;
  mProperty_mEndOfEnumerationExpression = in_mEndOfEnumerationExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST::GGS_enumeratedCollectionCstListInExpAST (const cPtr_enumeratedCollectionCstListInExpAST * inSourcePtr) :
GGS_abstractEnumeratedCollectionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumeratedCollectionCstListInExpAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ GGS_enumeratedCollectionCstListInExpAST::readProperty_mElementList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ () ;
  }else{
    cPtr_enumeratedCollectionCstListInExpAST * p = (cPtr_enumeratedCollectionCstListInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionCstListInExpAST) ;
    return p->mProperty_mElementList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_enumeratedCollectionCstListInExpAST::readProperty_mEnumeratedExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_enumeratedCollectionCstListInExpAST * p = (cPtr_enumeratedCollectionCstListInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionCstListInExpAST) ;
    return p->mProperty_mEnumeratedExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_enumeratedCollectionCstListInExpAST::readProperty_mEndOfEnumerationExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_enumeratedCollectionCstListInExpAST * p = (cPtr_enumeratedCollectionCstListInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionCstListInExpAST) ;
    return p->mProperty_mEndOfEnumerationExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @enumeratedCollectionCstListInExpAST class
//--------------------------------------------------------------------------------------------------

cPtr_enumeratedCollectionCstListInExpAST::cPtr_enumeratedCollectionCstListInExpAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractEnumeratedCollectionAST (inCompiler COMMA_THERE),
mProperty_mElementList (),
mProperty_mEnumeratedExpression (),
mProperty_mEndOfEnumerationExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_enumeratedCollectionCstListInExpAST::cPtr_enumeratedCollectionCstListInExpAST (const GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ & in_mElementList,
                                                                                    const GGS_semanticExpressionAST & in_mEnumeratedExpression,
                                                                                    const GGS_location & in_mEndOfEnumerationExpression,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractEnumeratedCollectionAST (inCompiler COMMA_THERE),
mProperty_mElementList (),
mProperty_mEnumeratedExpression (),
mProperty_mEndOfEnumerationExpression () {
  mProperty_mElementList = in_mElementList ;
  mProperty_mEnumeratedExpression = in_mEnumeratedExpression ;
  mProperty_mEndOfEnumerationExpression = in_mEndOfEnumerationExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_enumeratedCollectionCstListInExpAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST ;
}

void cPtr_enumeratedCollectionCstListInExpAST::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@enumeratedCollectionCstListInExpAST:") ;
  mProperty_mElementList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEnumeratedExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfEnumerationExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_enumeratedCollectionCstListInExpAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enumeratedCollectionCstListInExpAST (mProperty_mElementList, mProperty_mEnumeratedExpression, mProperty_mEndOfEnumerationExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_enumeratedCollectionCstListInExpAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractEnumeratedCollectionAST::printNonNullClassInstanceProperties () ;
    mProperty_mElementList.printNonNullClassInstanceProperties ("mElementList") ;
    mProperty_mEnumeratedExpression.printNonNullClassInstanceProperties ("mEnumeratedExpression") ;
    mProperty_mEndOfEnumerationExpression.printNonNullClassInstanceProperties ("mEndOfEnumerationExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @enumeratedCollectionCstListInExpAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST ("enumeratedCollectionCstListInExpAST",
                                                                                        & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumeratedCollectionCstListInExpAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumeratedCollectionCstListInExpAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumeratedCollectionCstListInExpAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST GGS_enumeratedCollectionCstListInExpAST::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_enumeratedCollectionCstListInExpAST result ;
  const GGS_enumeratedCollectionCstListInExpAST * p = (const GGS_enumeratedCollectionCstListInExpAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumeratedCollectionCstListInExpAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionCstListInExpAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumeratedCollectionCstListInExpAST_2E_weak::objectCompare (const GGS_enumeratedCollectionCstListInExpAST_2E_weak & inOperand) const {
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

GGS_enumeratedCollectionCstListInExpAST_2E_weak::GGS_enumeratedCollectionCstListInExpAST_2E_weak (void) :
GGS_abstractEnumeratedCollectionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST_2E_weak & GGS_enumeratedCollectionCstListInExpAST_2E_weak::operator = (const GGS_enumeratedCollectionCstListInExpAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST_2E_weak::GGS_enumeratedCollectionCstListInExpAST_2E_weak (const GGS_enumeratedCollectionCstListInExpAST & inSource) :
GGS_abstractEnumeratedCollectionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST_2E_weak GGS_enumeratedCollectionCstListInExpAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_enumeratedCollectionCstListInExpAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST GGS_enumeratedCollectionCstListInExpAST_2E_weak::unwrappedValue (void) const {
  GGS_enumeratedCollectionCstListInExpAST result ;
  if (isValid ()) {
    const cPtr_enumeratedCollectionCstListInExpAST * p = (cPtr_enumeratedCollectionCstListInExpAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_enumeratedCollectionCstListInExpAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST GGS_enumeratedCollectionCstListInExpAST_2E_weak::bang_enumeratedCollectionCstListInExpAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_enumeratedCollectionCstListInExpAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumeratedCollectionCstListInExpAST) ;
      result = GGS_enumeratedCollectionCstListInExpAST ((cPtr_enumeratedCollectionCstListInExpAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @enumeratedCollectionCstListInExpAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST_2E_weak ("enumeratedCollectionCstListInExpAST.weak",
                                                                                                & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumeratedCollectionCstListInExpAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumeratedCollectionCstListInExpAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumeratedCollectionCstListInExpAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST_2E_weak GGS_enumeratedCollectionCstListInExpAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_enumeratedCollectionCstListInExpAST_2E_weak result ;
  const GGS_enumeratedCollectionCstListInExpAST_2E_weak * p = (const GGS_enumeratedCollectionCstListInExpAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumeratedCollectionCstListInExpAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionCstListInExpAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectAST::GGS_forInstructionEnumeratedObjectAST (void) :
mProperty_mAscending (),
mProperty_mEnumeratedCollection () {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectAST::GGS_forInstructionEnumeratedObjectAST (const GGS_forInstructionEnumeratedObjectAST & inSource) :
mProperty_mAscending (inSource.mProperty_mAscending),
mProperty_mEnumeratedCollection (inSource.mProperty_mEnumeratedCollection) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectAST & GGS_forInstructionEnumeratedObjectAST::operator = (const GGS_forInstructionEnumeratedObjectAST & inSource) {
  mProperty_mAscending = inSource.mProperty_mAscending ;
  mProperty_mEnumeratedCollection = inSource.mProperty_mEnumeratedCollection ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectAST GGS_forInstructionEnumeratedObjectAST::init_21__21_ (const GGS_bool & in_mAscending,
                                                                                           const GGS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAscending = in_mAscending ;
  result.mProperty_mEnumeratedCollection = in_mEnumeratedCollection ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectAST::GGS_forInstructionEnumeratedObjectAST (const GGS_bool & inOperand0,
                                                                              const GGS_abstractEnumeratedCollectionAST & inOperand1) :
mProperty_mAscending (inOperand0),
mProperty_mEnumeratedCollection (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_forInstructionEnumeratedObjectAST::isValid (void) const {
  return mProperty_mAscending.isValid () && mProperty_mEnumeratedCollection.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectAST::drop (void) {
  mProperty_mAscending.drop () ;
  mProperty_mEnumeratedCollection.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @forInstructionEnumeratedObjectAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mAscending.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEnumeratedCollection.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @forInstructionEnumeratedObjectAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectAST ("forInstructionEnumeratedObjectAST",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_forInstructionEnumeratedObjectAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forInstructionEnumeratedObjectAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forInstructionEnumeratedObjectAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectAST GGS_forInstructionEnumeratedObjectAST::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectAST result ;
  const GGS_forInstructionEnumeratedObjectAST * p = (const GGS_forInstructionEnumeratedObjectAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forInstructionEnumeratedObjectAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_forInstructionEnumeratedObjectAST_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_forInstructionEnumeratedObjectAST_5D_::GGS__5B_forInstructionEnumeratedObjectAST_5D_ (void) :
AC_GALGAS_root (),
mSharedArray () {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_forInstructionEnumeratedObjectAST_5D_::GGS__5B_forInstructionEnumeratedObjectAST_5D_ (const GGS__5B_forInstructionEnumeratedObjectAST_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_forInstructionEnumeratedObjectAST_5D_ & GGS__5B_forInstructionEnumeratedObjectAST_5D_::operator = (const GGS__5B_forInstructionEnumeratedObjectAST_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_forInstructionEnumeratedObjectAST_5D_ GGS__5B_forInstructionEnumeratedObjectAST_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_forInstructionEnumeratedObjectAST_5D_ result ;
  result.mSharedArray.setCapacity (16) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS__5B_forInstructionEnumeratedObjectAST_5D_::isValid (void) const {
  return mSharedArray.isAllocated () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_forInstructionEnumeratedObjectAST_5D_::drop (void) {
  mSharedArray.removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_forInstructionEnumeratedObjectAST_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mSharedArray.setCapacity (16) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_forInstructionEnumeratedObjectAST_5D_::plusPlusAssignOperation (const GGS_forInstructionEnumeratedObjectAST & inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mSharedArray.appendObject (inValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_forInstructionEnumeratedObjectAST_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_forInstructionEnumeratedObjectAST_5D_ GGS__5B_forInstructionEnumeratedObjectAST_5D_::add_operation (const GGS__5B_forInstructionEnumeratedObjectAST_5D_ & inOperand,
                                                                                                            Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_forInstructionEnumeratedObjectAST_5D_ result ;
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

void GGS__5B_forInstructionEnumeratedObjectAST_5D_::description (String & ioString,
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

void GGS__5B_forInstructionEnumeratedObjectAST_5D_::plusAssignOperation (const GGS__5B_forInstructionEnumeratedObjectAST_5D_ inOperand,
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

void GGS__5B_forInstructionEnumeratedObjectAST_5D_::setter_append (const GGS_forInstructionEnumeratedObjectAST inValue,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_forInstructionEnumeratedObjectAST_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_forInstructionEnumeratedObjectAST_5D_::setter_insertAtIndex (const GGS_forInstructionEnumeratedObjectAST inValue,
                                                                          const GGS_uint inInsertionIndex,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_forInstructionEnumeratedObjectAST_5D_::setter_removeAtIndex (GGS_forInstructionEnumeratedObjectAST & outValue,
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

void GGS__5B_forInstructionEnumeratedObjectAST_5D_::setter_popFirst (GGS_forInstructionEnumeratedObjectAST & outValue,
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

void GGS__5B_forInstructionEnumeratedObjectAST_5D_::setter_popLast (GGS_forInstructionEnumeratedObjectAST & outValue,
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

void GGS__5B_forInstructionEnumeratedObjectAST_5D_::method_first (GGS_forInstructionEnumeratedObjectAST & outValue,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray (0 COMMA_THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_forInstructionEnumeratedObjectAST_5D_::method_last (GGS_forInstructionEnumeratedObjectAST & outValue,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray.lastObject (THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectAST GGS__5B_forInstructionEnumeratedObjectAST_5D_::readSubscript__3F_ (const GGS_uint & inIndex,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectAST result ;
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
// Down Enumerator for @_5B_forInstructionEnumeratedObjectAST_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_forInstructionEnumeratedObjectAST_5D_::DownEnumerator__5B_forInstructionEnumeratedObjectAST_5D_ (const GGS__5B_forInstructionEnumeratedObjectAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectAST DownEnumerator__5B_forInstructionEnumeratedObjectAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectAST DownEnumerator__5B_forInstructionEnumeratedObjectAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_forInstructionEnumeratedObjectAST_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_forInstructionEnumeratedObjectAST_5D_::UpEnumerator__5B_forInstructionEnumeratedObjectAST_5D_ (const GGS__5B_forInstructionEnumeratedObjectAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectAST UpEnumerator__5B_forInstructionEnumeratedObjectAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectAST UpEnumerator__5B_forInstructionEnumeratedObjectAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[forInstructionEnumeratedObjectAST] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_forInstructionEnumeratedObjectAST_5D_ ("[forInstructionEnumeratedObjectAST]",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_forInstructionEnumeratedObjectAST_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_forInstructionEnumeratedObjectAST_5D_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__5B_forInstructionEnumeratedObjectAST_5D_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__5B_forInstructionEnumeratedObjectAST_5D_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_forInstructionEnumeratedObjectAST_5D_ GGS__5B_forInstructionEnumeratedObjectAST_5D_::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS__5B_forInstructionEnumeratedObjectAST_5D_ result ;
  const GGS__5B_forInstructionEnumeratedObjectAST_5D_ * p = (const GGS__5B_forInstructionEnumeratedObjectAST_5D_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__5B_forInstructionEnumeratedObjectAST_5D_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("[forInstructionEnumeratedObjectAST]", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@abstractEnumeratedCollectionAST enterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInSemanticContext (cPtr_abstractEnumeratedCollectionAST * inObject,
                                                 GGS_unifiedTypeMap & io_ioTypeMap,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractEnumeratedCollectionAST) ;
    inObject->method_enterInSemanticContext (io_ioTypeMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@abstractEnumeratedCollectionAST analyzeEnumeration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeEnumeration (cPtr_abstractEnumeratedCollectionAST * inObject,
                                             const GGS_lstring constin_inUsefulnessCallerEntityName,
                                             GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                             const GGS_analysisContext constin_inAnalysisContext,
                                             GGS_unifiedTypeMap & io_ioTypeMap,
                                             GGS_localVarManager & io_ioVariableMap,
                                             GGS_localConstantList & io_ioLocalConstantListForDoBranch,
                                             GGS_string & out_outEnumeratorCppName,
                                             GGS_semanticExpressionForGeneration & out_outEnumerationExpression,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outEnumeratorCppName.drop () ;
  out_outEnumerationExpression.drop () ;
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractEnumeratedCollectionAST) ;
    inObject->method_analyzeEnumeration (constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inAnalysisContext, io_ioTypeMap, io_ioVariableMap, io_ioLocalConstantListForDoBranch, out_outEnumeratorCppName, out_outEnumerationExpression, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_forInstructionEnumeratedObjectForGeneration_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_::GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ (void) :
AC_GALGAS_root (),
mSharedArray () {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_::GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ (const GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ & GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_::operator = (const GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ result ;
  result.mSharedArray.setCapacity (16) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_::isValid (void) const {
  return mSharedArray.isAllocated () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_::drop (void) {
  mSharedArray.removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mSharedArray.setCapacity (16) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_::plusPlusAssignOperation (const GGS_forInstructionEnumeratedObjectForGeneration & inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mSharedArray.appendObject (inValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_::add_operation (const GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ & inOperand,
                                                                                                                                Compiler * /* inCompiler */
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ result ;
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

void GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_::description (String & ioString,
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

void GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_::plusAssignOperation (const GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ inOperand,
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

void GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_::setter_append (const GGS_forInstructionEnumeratedObjectForGeneration inValue,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_::setter_insertAtIndex (const GGS_forInstructionEnumeratedObjectForGeneration inValue,
                                                                                    const GGS_uint inInsertionIndex,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_::setter_removeAtIndex (GGS_forInstructionEnumeratedObjectForGeneration & outValue,
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

void GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_::setter_popFirst (GGS_forInstructionEnumeratedObjectForGeneration & outValue,
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

void GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_::setter_popLast (GGS_forInstructionEnumeratedObjectForGeneration & outValue,
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

void GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_::method_first (GGS_forInstructionEnumeratedObjectForGeneration & outValue,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray (0 COMMA_THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_::method_last (GGS_forInstructionEnumeratedObjectForGeneration & outValue,
                                                                           Compiler * /* inCompiler */
                                                                           COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray.lastObject (THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectForGeneration GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_::readSubscript__3F_ (const GGS_uint & inIndex,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectForGeneration result ;
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
// Down Enumerator for @_5B_forInstructionEnumeratedObjectForGeneration_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_forInstructionEnumeratedObjectForGeneration_5D_::DownEnumerator__5B_forInstructionEnumeratedObjectForGeneration_5D_ (const GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectForGeneration DownEnumerator__5B_forInstructionEnumeratedObjectForGeneration_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectForGeneration DownEnumerator__5B_forInstructionEnumeratedObjectForGeneration_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_forInstructionEnumeratedObjectForGeneration_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_forInstructionEnumeratedObjectForGeneration_5D_::UpEnumerator__5B_forInstructionEnumeratedObjectForGeneration_5D_ (const GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectForGeneration UpEnumerator__5B_forInstructionEnumeratedObjectForGeneration_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectForGeneration UpEnumerator__5B_forInstructionEnumeratedObjectForGeneration_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[forInstructionEnumeratedObjectForGeneration] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_forInstructionEnumeratedObjectForGeneration_5D_ ("[forInstructionEnumeratedObjectForGeneration]",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_forInstructionEnumeratedObjectForGeneration_5D_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ result ;
  const GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ * p = (const GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("[forInstructionEnumeratedObjectForGeneration]", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_forInstructionForGeneration_2E_weak::objectCompare (const GGS_forInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_forInstructionForGeneration_2E_weak::GGS_forInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionForGeneration_2E_weak & GGS_forInstructionForGeneration_2E_weak::operator = (const GGS_forInstructionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionForGeneration_2E_weak::GGS_forInstructionForGeneration_2E_weak (const GGS_forInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_forInstructionForGeneration_2E_weak GGS_forInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_forInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionForGeneration GGS_forInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_forInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_forInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionForGeneration GGS_forInstructionForGeneration_2E_weak::bang_forInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_forInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_forInstructionForGeneration) ;
      result = GGS_forInstructionForGeneration ((cPtr_forInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @forInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionForGeneration_2E_weak ("forInstructionForGeneration.weak",
                                                                                        & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_forInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionForGeneration_2E_weak GGS_forInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_forInstructionForGeneration_2E_weak result ;
  const GGS_forInstructionForGeneration_2E_weak * p = (const GGS_forInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_switchBranchAST_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_switchBranchAST_5D_::GGS__5B_switchBranchAST_5D_ (void) :
AC_GALGAS_root (),
mSharedArray () {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_switchBranchAST_5D_::GGS__5B_switchBranchAST_5D_ (const GGS__5B_switchBranchAST_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_switchBranchAST_5D_ & GGS__5B_switchBranchAST_5D_::operator = (const GGS__5B_switchBranchAST_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_switchBranchAST_5D_ GGS__5B_switchBranchAST_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_switchBranchAST_5D_ result ;
  result.mSharedArray.setCapacity (16) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS__5B_switchBranchAST_5D_::isValid (void) const {
  return mSharedArray.isAllocated () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_switchBranchAST_5D_::drop (void) {
  mSharedArray.removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_switchBranchAST_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mSharedArray.setCapacity (16) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_switchBranchAST_5D_::plusPlusAssignOperation (const GGS_switchBranchAST & inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mSharedArray.appendObject (inValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_switchBranchAST_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_switchBranchAST_5D_ GGS__5B_switchBranchAST_5D_::add_operation (const GGS__5B_switchBranchAST_5D_ & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_switchBranchAST_5D_ result ;
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

void GGS__5B_switchBranchAST_5D_::description (String & ioString,
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

void GGS__5B_switchBranchAST_5D_::plusAssignOperation (const GGS__5B_switchBranchAST_5D_ inOperand,
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

void GGS__5B_switchBranchAST_5D_::setter_append (const GGS_switchBranchAST inValue,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_switchBranchAST_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_switchBranchAST_5D_::setter_insertAtIndex (const GGS_switchBranchAST inValue,
                                                        const GGS_uint inInsertionIndex,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_switchBranchAST_5D_::setter_removeAtIndex (GGS_switchBranchAST & outValue,
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

void GGS__5B_switchBranchAST_5D_::setter_popFirst (GGS_switchBranchAST & outValue,
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

void GGS__5B_switchBranchAST_5D_::setter_popLast (GGS_switchBranchAST & outValue,
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

void GGS__5B_switchBranchAST_5D_::method_first (GGS_switchBranchAST & outValue,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray (0 COMMA_THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_switchBranchAST_5D_::method_last (GGS_switchBranchAST & outValue,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray.lastObject (THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchAST GGS__5B_switchBranchAST_5D_::readSubscript__3F_ (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_switchBranchAST result ;
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
// Down Enumerator for @_5B_switchBranchAST_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_switchBranchAST_5D_::DownEnumerator__5B_switchBranchAST_5D_ (const GGS__5B_switchBranchAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchAST DownEnumerator__5B_switchBranchAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchAST DownEnumerator__5B_switchBranchAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_switchBranchAST_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_switchBranchAST_5D_::UpEnumerator__5B_switchBranchAST_5D_ (const GGS__5B_switchBranchAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchAST UpEnumerator__5B_switchBranchAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchAST UpEnumerator__5B_switchBranchAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[switchBranchAST] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_switchBranchAST_5D_ ("[switchBranchAST]",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_switchBranchAST_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_switchBranchAST_5D_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__5B_switchBranchAST_5D_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__5B_switchBranchAST_5D_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_switchBranchAST_5D_ GGS__5B_switchBranchAST_5D_::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS__5B_switchBranchAST_5D_ result ;
  const GGS__5B_switchBranchAST_5D_ * p = (const GGS__5B_switchBranchAST_5D_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__5B_switchBranchAST_5D_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("[switchBranchAST]", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_switchExtractedValuesAST_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_switchExtractedValuesAST_5D_::GGS__5B_switchExtractedValuesAST_5D_ (void) :
AC_GALGAS_root (),
mSharedArray () {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_switchExtractedValuesAST_5D_::GGS__5B_switchExtractedValuesAST_5D_ (const GGS__5B_switchExtractedValuesAST_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_switchExtractedValuesAST_5D_ & GGS__5B_switchExtractedValuesAST_5D_::operator = (const GGS__5B_switchExtractedValuesAST_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_switchExtractedValuesAST_5D_ GGS__5B_switchExtractedValuesAST_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_switchExtractedValuesAST_5D_ result ;
  result.mSharedArray.setCapacity (16) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS__5B_switchExtractedValuesAST_5D_::isValid (void) const {
  return mSharedArray.isAllocated () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_switchExtractedValuesAST_5D_::drop (void) {
  mSharedArray.removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_switchExtractedValuesAST_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mSharedArray.setCapacity (16) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_switchExtractedValuesAST_5D_::plusPlusAssignOperation (const GGS_switchExtractedValuesAST & inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mSharedArray.appendObject (inValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_switchExtractedValuesAST_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_switchExtractedValuesAST_5D_ GGS__5B_switchExtractedValuesAST_5D_::add_operation (const GGS__5B_switchExtractedValuesAST_5D_ & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_switchExtractedValuesAST_5D_ result ;
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

void GGS__5B_switchExtractedValuesAST_5D_::description (String & ioString,
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

void GGS__5B_switchExtractedValuesAST_5D_::plusAssignOperation (const GGS__5B_switchExtractedValuesAST_5D_ inOperand,
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

void GGS__5B_switchExtractedValuesAST_5D_::setter_append (const GGS_switchExtractedValuesAST inValue,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_switchExtractedValuesAST_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_switchExtractedValuesAST_5D_::setter_insertAtIndex (const GGS_switchExtractedValuesAST inValue,
                                                                 const GGS_uint inInsertionIndex,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_switchExtractedValuesAST_5D_::setter_removeAtIndex (GGS_switchExtractedValuesAST & outValue,
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

void GGS__5B_switchExtractedValuesAST_5D_::setter_popFirst (GGS_switchExtractedValuesAST & outValue,
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

void GGS__5B_switchExtractedValuesAST_5D_::setter_popLast (GGS_switchExtractedValuesAST & outValue,
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

void GGS__5B_switchExtractedValuesAST_5D_::method_first (GGS_switchExtractedValuesAST & outValue,
                                                         Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray (0 COMMA_THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_switchExtractedValuesAST_5D_::method_last (GGS_switchExtractedValuesAST & outValue,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray.lastObject (THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesAST GGS__5B_switchExtractedValuesAST_5D_::readSubscript__3F_ (const GGS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_switchExtractedValuesAST result ;
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
// Down Enumerator for @_5B_switchExtractedValuesAST_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_switchExtractedValuesAST_5D_::DownEnumerator__5B_switchExtractedValuesAST_5D_ (const GGS__5B_switchExtractedValuesAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesAST DownEnumerator__5B_switchExtractedValuesAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesAST DownEnumerator__5B_switchExtractedValuesAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_switchExtractedValuesAST_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_switchExtractedValuesAST_5D_::UpEnumerator__5B_switchExtractedValuesAST_5D_ (const GGS__5B_switchExtractedValuesAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesAST UpEnumerator__5B_switchExtractedValuesAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesAST UpEnumerator__5B_switchExtractedValuesAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[switchExtractedValuesAST] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_switchExtractedValuesAST_5D_ ("[switchExtractedValuesAST]",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_switchExtractedValuesAST_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_switchExtractedValuesAST_5D_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__5B_switchExtractedValuesAST_5D_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__5B_switchExtractedValuesAST_5D_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_switchExtractedValuesAST_5D_ GGS__5B_switchExtractedValuesAST_5D_::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS__5B_switchExtractedValuesAST_5D_ result ;
  const GGS__5B_switchExtractedValuesAST_5D_ * p = (const GGS__5B_switchExtractedValuesAST_5D_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__5B_switchExtractedValuesAST_5D_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("[switchExtractedValuesAST]", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesAST::GGS_switchExtractedValuesAST (void) :
mProperty_mExtractedValueTypeName (),
mProperty_mExtractedValueName (),
mProperty_mMarkedAsUnused () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesAST::GGS_switchExtractedValuesAST (const GGS_switchExtractedValuesAST & inSource) :
mProperty_mExtractedValueTypeName (inSource.mProperty_mExtractedValueTypeName),
mProperty_mExtractedValueName (inSource.mProperty_mExtractedValueName),
mProperty_mMarkedAsUnused (inSource.mProperty_mMarkedAsUnused) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesAST & GGS_switchExtractedValuesAST::operator = (const GGS_switchExtractedValuesAST & inSource) {
  mProperty_mExtractedValueTypeName = inSource.mProperty_mExtractedValueTypeName ;
  mProperty_mExtractedValueName = inSource.mProperty_mExtractedValueName ;
  mProperty_mMarkedAsUnused = inSource.mProperty_mMarkedAsUnused ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_switchExtractedValuesAST GGS_switchExtractedValuesAST::init_21__21__21_ (const GGS_lstring & in_mExtractedValueTypeName,
                                                                             const GGS_lstring & in_mExtractedValueName,
                                                                             const GGS_bool & in_mMarkedAsUnused,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_switchExtractedValuesAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExtractedValueTypeName = in_mExtractedValueTypeName ;
  result.mProperty_mExtractedValueName = in_mExtractedValueName ;
  result.mProperty_mMarkedAsUnused = in_mMarkedAsUnused ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchExtractedValuesAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesAST::GGS_switchExtractedValuesAST (const GGS_lstring & inOperand0,
                                                            const GGS_lstring & inOperand1,
                                                            const GGS_bool & inOperand2) :
mProperty_mExtractedValueTypeName (inOperand0),
mProperty_mExtractedValueName (inOperand1),
mProperty_mMarkedAsUnused (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_switchExtractedValuesAST::isValid (void) const {
  return mProperty_mExtractedValueTypeName.isValid () && mProperty_mExtractedValueName.isValid () && mProperty_mMarkedAsUnused.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchExtractedValuesAST::drop (void) {
  mProperty_mExtractedValueTypeName.drop () ;
  mProperty_mExtractedValueName.drop () ;
  mProperty_mMarkedAsUnused.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchExtractedValuesAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @switchExtractedValuesAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mExtractedValueTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExtractedValueName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMarkedAsUnused.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @switchExtractedValuesAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchExtractedValuesAST ("switchExtractedValuesAST",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchExtractedValuesAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchExtractedValuesAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchExtractedValuesAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchExtractedValuesAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesAST GGS_switchExtractedValuesAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_switchExtractedValuesAST result ;
  const GGS_switchExtractedValuesAST * p = (const GGS_switchExtractedValuesAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchExtractedValuesAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchExtractedValuesAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_switchBranchForGeneration_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_switchBranchForGeneration_5D_::GGS__5B_switchBranchForGeneration_5D_ (void) :
AC_GALGAS_root (),
mSharedArray () {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_switchBranchForGeneration_5D_::GGS__5B_switchBranchForGeneration_5D_ (const GGS__5B_switchBranchForGeneration_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_switchBranchForGeneration_5D_ & GGS__5B_switchBranchForGeneration_5D_::operator = (const GGS__5B_switchBranchForGeneration_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_switchBranchForGeneration_5D_ GGS__5B_switchBranchForGeneration_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_switchBranchForGeneration_5D_ result ;
  result.mSharedArray.setCapacity (16) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS__5B_switchBranchForGeneration_5D_::isValid (void) const {
  return mSharedArray.isAllocated () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_switchBranchForGeneration_5D_::drop (void) {
  mSharedArray.removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_switchBranchForGeneration_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mSharedArray.setCapacity (16) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_switchBranchForGeneration_5D_::plusPlusAssignOperation (const GGS_switchBranchForGeneration & inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mSharedArray.appendObject (inValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_switchBranchForGeneration_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_switchBranchForGeneration_5D_ GGS__5B_switchBranchForGeneration_5D_::add_operation (const GGS__5B_switchBranchForGeneration_5D_ & inOperand,
                                                                                            Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_switchBranchForGeneration_5D_ result ;
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

void GGS__5B_switchBranchForGeneration_5D_::description (String & ioString,
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

void GGS__5B_switchBranchForGeneration_5D_::plusAssignOperation (const GGS__5B_switchBranchForGeneration_5D_ inOperand,
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

void GGS__5B_switchBranchForGeneration_5D_::setter_append (const GGS_switchBranchForGeneration inValue,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_switchBranchForGeneration_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_switchBranchForGeneration_5D_::setter_insertAtIndex (const GGS_switchBranchForGeneration inValue,
                                                                  const GGS_uint inInsertionIndex,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_switchBranchForGeneration_5D_::setter_removeAtIndex (GGS_switchBranchForGeneration & outValue,
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

void GGS__5B_switchBranchForGeneration_5D_::setter_popFirst (GGS_switchBranchForGeneration & outValue,
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

void GGS__5B_switchBranchForGeneration_5D_::setter_popLast (GGS_switchBranchForGeneration & outValue,
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

void GGS__5B_switchBranchForGeneration_5D_::method_first (GGS_switchBranchForGeneration & outValue,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray (0 COMMA_THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_switchBranchForGeneration_5D_::method_last (GGS_switchBranchForGeneration & outValue,
                                                         Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray.lastObject (THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchForGeneration GGS__5B_switchBranchForGeneration_5D_::readSubscript__3F_ (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_switchBranchForGeneration result ;
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
// Down Enumerator for @_5B_switchBranchForGeneration_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_switchBranchForGeneration_5D_::DownEnumerator__5B_switchBranchForGeneration_5D_ (const GGS__5B_switchBranchForGeneration_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchForGeneration DownEnumerator__5B_switchBranchForGeneration_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchForGeneration DownEnumerator__5B_switchBranchForGeneration_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_switchBranchForGeneration_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_switchBranchForGeneration_5D_::UpEnumerator__5B_switchBranchForGeneration_5D_ (const GGS__5B_switchBranchForGeneration_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchForGeneration UpEnumerator__5B_switchBranchForGeneration_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchForGeneration UpEnumerator__5B_switchBranchForGeneration_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[switchBranchForGeneration] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_switchBranchForGeneration_5D_ ("[switchBranchForGeneration]",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_switchBranchForGeneration_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_switchBranchForGeneration_5D_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__5B_switchBranchForGeneration_5D_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__5B_switchBranchForGeneration_5D_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_switchBranchForGeneration_5D_ GGS__5B_switchBranchForGeneration_5D_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS__5B_switchBranchForGeneration_5D_ result ;
  const GGS__5B_switchBranchForGeneration_5D_ * p = (const GGS__5B_switchBranchForGeneration_5D_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__5B_switchBranchForGeneration_5D_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("[switchBranchForGeneration]", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_extractedAssociatedValueForGeneration_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_extractedAssociatedValueForGeneration_5D_::GGS__5B_extractedAssociatedValueForGeneration_5D_ (void) :
AC_GALGAS_root (),
mSharedArray () {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_extractedAssociatedValueForGeneration_5D_::GGS__5B_extractedAssociatedValueForGeneration_5D_ (const GGS__5B_extractedAssociatedValueForGeneration_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_extractedAssociatedValueForGeneration_5D_ & GGS__5B_extractedAssociatedValueForGeneration_5D_::operator = (const GGS__5B_extractedAssociatedValueForGeneration_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_extractedAssociatedValueForGeneration_5D_ GGS__5B_extractedAssociatedValueForGeneration_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_extractedAssociatedValueForGeneration_5D_ result ;
  result.mSharedArray.setCapacity (16) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS__5B_extractedAssociatedValueForGeneration_5D_::isValid (void) const {
  return mSharedArray.isAllocated () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_extractedAssociatedValueForGeneration_5D_::drop (void) {
  mSharedArray.removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_extractedAssociatedValueForGeneration_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mSharedArray.setCapacity (16) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_extractedAssociatedValueForGeneration_5D_::plusPlusAssignOperation (const GGS_extractedAssociatedValueForGeneration & inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mSharedArray.appendObject (inValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_extractedAssociatedValueForGeneration_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_extractedAssociatedValueForGeneration_5D_ GGS__5B_extractedAssociatedValueForGeneration_5D_::add_operation (const GGS__5B_extractedAssociatedValueForGeneration_5D_ & inOperand,
                                                                                                                    Compiler * /* inCompiler */
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_extractedAssociatedValueForGeneration_5D_ result ;
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

void GGS__5B_extractedAssociatedValueForGeneration_5D_::description (String & ioString,
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

void GGS__5B_extractedAssociatedValueForGeneration_5D_::plusAssignOperation (const GGS__5B_extractedAssociatedValueForGeneration_5D_ inOperand,
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

void GGS__5B_extractedAssociatedValueForGeneration_5D_::setter_append (const GGS_extractedAssociatedValueForGeneration inValue,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_extractedAssociatedValueForGeneration_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_extractedAssociatedValueForGeneration_5D_::setter_insertAtIndex (const GGS_extractedAssociatedValueForGeneration inValue,
                                                                              const GGS_uint inInsertionIndex,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_extractedAssociatedValueForGeneration_5D_::setter_removeAtIndex (GGS_extractedAssociatedValueForGeneration & outValue,
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

void GGS__5B_extractedAssociatedValueForGeneration_5D_::setter_popFirst (GGS_extractedAssociatedValueForGeneration & outValue,
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

void GGS__5B_extractedAssociatedValueForGeneration_5D_::setter_popLast (GGS_extractedAssociatedValueForGeneration & outValue,
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

void GGS__5B_extractedAssociatedValueForGeneration_5D_::method_first (GGS_extractedAssociatedValueForGeneration & outValue,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray (0 COMMA_THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_extractedAssociatedValueForGeneration_5D_::method_last (GGS_extractedAssociatedValueForGeneration & outValue,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray.lastObject (THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValueForGeneration GGS__5B_extractedAssociatedValueForGeneration_5D_::readSubscript__3F_ (const GGS_uint & inIndex,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_extractedAssociatedValueForGeneration result ;
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
// Down Enumerator for @_5B_extractedAssociatedValueForGeneration_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_extractedAssociatedValueForGeneration_5D_::DownEnumerator__5B_extractedAssociatedValueForGeneration_5D_ (const GGS__5B_extractedAssociatedValueForGeneration_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValueForGeneration DownEnumerator__5B_extractedAssociatedValueForGeneration_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValueForGeneration DownEnumerator__5B_extractedAssociatedValueForGeneration_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_extractedAssociatedValueForGeneration_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_extractedAssociatedValueForGeneration_5D_::UpEnumerator__5B_extractedAssociatedValueForGeneration_5D_ (const GGS__5B_extractedAssociatedValueForGeneration_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValueForGeneration UpEnumerator__5B_extractedAssociatedValueForGeneration_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValueForGeneration UpEnumerator__5B_extractedAssociatedValueForGeneration_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[extractedAssociatedValueForGeneration] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_extractedAssociatedValueForGeneration_5D_ ("[extractedAssociatedValueForGeneration]",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_extractedAssociatedValueForGeneration_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_extractedAssociatedValueForGeneration_5D_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__5B_extractedAssociatedValueForGeneration_5D_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__5B_extractedAssociatedValueForGeneration_5D_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_extractedAssociatedValueForGeneration_5D_ GGS__5B_extractedAssociatedValueForGeneration_5D_::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS__5B_extractedAssociatedValueForGeneration_5D_ result ;
  const GGS__5B_extractedAssociatedValueForGeneration_5D_ * p = (const GGS__5B_extractedAssociatedValueForGeneration_5D_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__5B_extractedAssociatedValueForGeneration_5D_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("[extractedAssociatedValueForGeneration]", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValueForGeneration::GGS_extractedAssociatedValueForGeneration (void) :
mProperty_mType (),
mProperty_mCppName (),
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValueForGeneration::GGS_extractedAssociatedValueForGeneration (const GGS_extractedAssociatedValueForGeneration & inSource) :
mProperty_mType (inSource.mProperty_mType),
mProperty_mCppName (inSource.mProperty_mCppName),
mProperty_name (inSource.mProperty_name) {
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValueForGeneration & GGS_extractedAssociatedValueForGeneration::operator = (const GGS_extractedAssociatedValueForGeneration & inSource) {
  mProperty_mType = inSource.mProperty_mType ;
  mProperty_mCppName = inSource.mProperty_mCppName ;
  mProperty_name = inSource.mProperty_name ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_extractedAssociatedValueForGeneration GGS_extractedAssociatedValueForGeneration::init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mType,
                                                                                                       const GGS_string & in_mCppName,
                                                                                                       const GGS_string & in_name,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extractedAssociatedValueForGeneration result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mCppName = in_mCppName ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValueForGeneration::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValueForGeneration::GGS_extractedAssociatedValueForGeneration (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                                      const GGS_string & inOperand1,
                                                                                      const GGS_string & inOperand2) :
mProperty_mType (inOperand0),
mProperty_mCppName (inOperand1),
mProperty_name (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_extractedAssociatedValueForGeneration::isValid (void) const {
  return mProperty_mType.isValid () && mProperty_mCppName.isValid () && mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValueForGeneration::drop (void) {
  mProperty_mType.drop () ;
  mProperty_mCppName.drop () ;
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValueForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @extractedAssociatedValueForGeneration:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCppName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @extractedAssociatedValueForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extractedAssociatedValueForGeneration ("extractedAssociatedValueForGeneration",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extractedAssociatedValueForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extractedAssociatedValueForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extractedAssociatedValueForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extractedAssociatedValueForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValueForGeneration GGS_extractedAssociatedValueForGeneration::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_extractedAssociatedValueForGeneration result ;
  const GGS_extractedAssociatedValueForGeneration * p = (const GGS_extractedAssociatedValueForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extractedAssociatedValueForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extractedAssociatedValueForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_switchInstructionForGeneration_2E_weak::objectCompare (const GGS_switchInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_switchInstructionForGeneration_2E_weak::GGS_switchInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionForGeneration_2E_weak & GGS_switchInstructionForGeneration_2E_weak::operator = (const GGS_switchInstructionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionForGeneration_2E_weak::GGS_switchInstructionForGeneration_2E_weak (const GGS_switchInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_switchInstructionForGeneration_2E_weak GGS_switchInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_switchInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionForGeneration GGS_switchInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_switchInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_switchInstructionForGeneration * p = (cPtr_switchInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_switchInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionForGeneration GGS_switchInstructionForGeneration_2E_weak::bang_switchInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_switchInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_switchInstructionForGeneration) ;
      result = GGS_switchInstructionForGeneration ((cPtr_switchInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @switchInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionForGeneration_2E_weak ("switchInstructionForGeneration.weak",
                                                                                           & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionForGeneration_2E_weak GGS_switchInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_switchInstructionForGeneration_2E_weak result ;
  const GGS_switchInstructionForGeneration_2E_weak * p = (const GGS_switchInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @setterCallInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_setterCallInstructionForGeneration::objectCompare (const GGS_setterCallInstructionForGeneration & inOperand) const {
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

GGS_setterCallInstructionForGeneration::GGS_setterCallInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_setterCallInstructionForGeneration GGS_setterCallInstructionForGeneration::
init_21__21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                              const GGS_string & in_mReceiverCppName,
                                              const GGS_string & in_mReceiverBaseName,
                                              const GGS_lstringlist & in_mReceiverStructAttributes,
                                              const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                              const GGS_lstring & in_mSetterName,
                                              const GGS_methodKind & in_mKind,
                                              const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                              const GGS_bool & in_mHasCompilerArgument,
                                              const GGS_unifiedTypeMapEntry & in_mMethodBaseType,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cPtr_setterCallInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_setterCallInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->setterCallInstructionForGeneration_init_21__21__21__21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mReceiverCppName, in_mReceiverBaseName, in_mReceiverStructAttributes, in_mReceiverType, in_mSetterName, in_mKind, in_mActualParameterList, in_mHasCompilerArgument, in_mMethodBaseType, inCompiler) ;
  const GGS_setterCallInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_setterCallInstructionForGeneration::
setterCallInstructionForGeneration_init_21__21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                                 const GGS_string & in_mReceiverCppName,
                                                                                 const GGS_string & in_mReceiverBaseName,
                                                                                 const GGS_lstringlist & in_mReceiverStructAttributes,
                                                                                 const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                 const GGS_lstring & in_mSetterName,
                                                                                 const GGS_methodKind & in_mKind,
                                                                                 const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                 const GGS_bool & in_mHasCompilerArgument,
                                                                                 const GGS_unifiedTypeMapEntry & in_mMethodBaseType,
                                                                                 Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mReceiverCppName = in_mReceiverCppName ;
  mProperty_mReceiverBaseName = in_mReceiverBaseName ;
  mProperty_mReceiverStructAttributes = in_mReceiverStructAttributes ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mSetterName = in_mSetterName ;
  mProperty_mKind = in_mKind ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
  mProperty_mMethodBaseType = in_mMethodBaseType ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterCallInstructionForGeneration::GGS_setterCallInstructionForGeneration (const cPtr_setterCallInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_setterCallInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_setterCallInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_setterCallInstructionForGeneration::readProperty_mReceiverCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    return p->mProperty_mReceiverCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_setterCallInstructionForGeneration::readProperty_mReceiverBaseName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    return p->mProperty_mReceiverBaseName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_setterCallInstructionForGeneration::readProperty_mReceiverStructAttributes (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    return p->mProperty_mReceiverStructAttributes ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_setterCallInstructionForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_setterCallInstructionForGeneration::readProperty_mSetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    return p->mProperty_mSetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_methodKind GGS_setterCallInstructionForGeneration::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_methodKind () ;
  }else{
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_setterCallInstructionForGeneration::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualParameterListForGeneration () ;
  }else{
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_setterCallInstructionForGeneration::readProperty_mHasCompilerArgument (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    return p->mProperty_mHasCompilerArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_setterCallInstructionForGeneration::readProperty_mMethodBaseType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    return p->mProperty_mMethodBaseType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @setterCallInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_setterCallInstructionForGeneration::cPtr_setterCallInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mReceiverCppName (),
mProperty_mReceiverBaseName (),
mProperty_mReceiverStructAttributes (),
mProperty_mReceiverType (),
mProperty_mSetterName (),
mProperty_mKind (),
mProperty_mActualParameterList (),
mProperty_mHasCompilerArgument (),
mProperty_mMethodBaseType () {
}

//--------------------------------------------------------------------------------------------------

cPtr_setterCallInstructionForGeneration::cPtr_setterCallInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                                  const GGS_string & in_mReceiverCppName,
                                                                                  const GGS_string & in_mReceiverBaseName,
                                                                                  const GGS_lstringlist & in_mReceiverStructAttributes,
                                                                                  const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                  const GGS_lstring & in_mSetterName,
                                                                                  const GGS_methodKind & in_mKind,
                                                                                  const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                  const GGS_bool & in_mHasCompilerArgument,
                                                                                  const GGS_unifiedTypeMapEntry & in_mMethodBaseType,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mReceiverCppName (),
mProperty_mReceiverBaseName (),
mProperty_mReceiverStructAttributes (),
mProperty_mReceiverType (),
mProperty_mSetterName (),
mProperty_mKind (),
mProperty_mActualParameterList (),
mProperty_mHasCompilerArgument (),
mProperty_mMethodBaseType () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mReceiverCppName = in_mReceiverCppName ;
  mProperty_mReceiverBaseName = in_mReceiverBaseName ;
  mProperty_mReceiverStructAttributes = in_mReceiverStructAttributes ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mSetterName = in_mSetterName ;
  mProperty_mKind = in_mKind ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
  mProperty_mMethodBaseType = in_mMethodBaseType ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_setterCallInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterCallInstructionForGeneration ;
}

void cPtr_setterCallInstructionForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@setterCallInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverBaseName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverStructAttributes.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMethodBaseType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_setterCallInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_setterCallInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverCppName, mProperty_mReceiverBaseName, mProperty_mReceiverStructAttributes, mProperty_mReceiverType, mProperty_mSetterName, mProperty_mKind, mProperty_mActualParameterList, mProperty_mHasCompilerArgument, mProperty_mMethodBaseType, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_setterCallInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mReceiverCppName.printNonNullClassInstanceProperties ("mReceiverCppName") ;
    mProperty_mReceiverBaseName.printNonNullClassInstanceProperties ("mReceiverBaseName") ;
    mProperty_mReceiverStructAttributes.printNonNullClassInstanceProperties ("mReceiverStructAttributes") ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mSetterName.printNonNullClassInstanceProperties ("mSetterName") ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
    mProperty_mHasCompilerArgument.printNonNullClassInstanceProperties ("mHasCompilerArgument") ;
    mProperty_mMethodBaseType.printNonNullClassInstanceProperties ("mMethodBaseType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @setterCallInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_setterCallInstructionForGeneration ("setterCallInstructionForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_setterCallInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterCallInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_setterCallInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_setterCallInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterCallInstructionForGeneration GGS_setterCallInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_setterCallInstructionForGeneration result ;
  const GGS_setterCallInstructionForGeneration * p = (const GGS_setterCallInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_setterCallInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setterCallInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_setterCallInstructionForGeneration_2E_weak::objectCompare (const GGS_setterCallInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_setterCallInstructionForGeneration_2E_weak::GGS_setterCallInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_setterCallInstructionForGeneration_2E_weak & GGS_setterCallInstructionForGeneration_2E_weak::operator = (const GGS_setterCallInstructionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterCallInstructionForGeneration_2E_weak::GGS_setterCallInstructionForGeneration_2E_weak (const GGS_setterCallInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_setterCallInstructionForGeneration_2E_weak GGS_setterCallInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_setterCallInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterCallInstructionForGeneration GGS_setterCallInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_setterCallInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_setterCallInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterCallInstructionForGeneration GGS_setterCallInstructionForGeneration_2E_weak::bang_setterCallInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_setterCallInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_setterCallInstructionForGeneration) ;
      result = GGS_setterCallInstructionForGeneration ((cPtr_setterCallInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @setterCallInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_setterCallInstructionForGeneration_2E_weak ("setterCallInstructionForGeneration.weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_setterCallInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterCallInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_setterCallInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_setterCallInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterCallInstructionForGeneration_2E_weak GGS_setterCallInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_setterCallInstructionForGeneration_2E_weak result ;
  const GGS_setterCallInstructionForGeneration_2E_weak * p = (const GGS_setterCallInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_setterCallInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setterCallInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfSetterCallInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfSetterCallInstructionForGeneration::objectCompare (const GGS_selfSetterCallInstructionForGeneration & inOperand) const {
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

GGS_selfSetterCallInstructionForGeneration::GGS_selfSetterCallInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selfSetterCallInstructionForGeneration GGS_selfSetterCallInstructionForGeneration::
init_21__21__21__21__21__21_ (const GGS_string & in_mSelfCppName,
                              const GGS_unifiedTypeMapEntry & in_mReceiverType,
                              const GGS_lstring & in_mSetterName,
                              const GGS_methodKind & in_mKind,
                              const GGS_actualParameterListForGeneration & in_mActualParameterList,
                              const GGS_bool & in_mHasCompilerArgument,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_selfSetterCallInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_selfSetterCallInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->selfSetterCallInstructionForGeneration_init_21__21__21__21__21__21_ (in_mSelfCppName, in_mReceiverType, in_mSetterName, in_mKind, in_mActualParameterList, in_mHasCompilerArgument, inCompiler) ;
  const GGS_selfSetterCallInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfSetterCallInstructionForGeneration::
selfSetterCallInstructionForGeneration_init_21__21__21__21__21__21_ (const GGS_string & in_mSelfCppName,
                                                                     const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                     const GGS_lstring & in_mSetterName,
                                                                     const GGS_methodKind & in_mKind,
                                                                     const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                     const GGS_bool & in_mHasCompilerArgument,
                                                                     Compiler * /* inCompiler */) {
  mProperty_mSelfCppName = in_mSelfCppName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mSetterName = in_mSetterName ;
  mProperty_mKind = in_mKind ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfSetterCallInstructionForGeneration::GGS_selfSetterCallInstructionForGeneration (const cPtr_selfSetterCallInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfSetterCallInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_selfSetterCallInstructionForGeneration::readProperty_mSelfCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_selfSetterCallInstructionForGeneration * p = (cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    return p->mProperty_mSelfCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_selfSetterCallInstructionForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_selfSetterCallInstructionForGeneration * p = (cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_selfSetterCallInstructionForGeneration::readProperty_mSetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_selfSetterCallInstructionForGeneration * p = (cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    return p->mProperty_mSetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_methodKind GGS_selfSetterCallInstructionForGeneration::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_methodKind () ;
  }else{
    cPtr_selfSetterCallInstructionForGeneration * p = (cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_selfSetterCallInstructionForGeneration::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualParameterListForGeneration () ;
  }else{
    cPtr_selfSetterCallInstructionForGeneration * p = (cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_selfSetterCallInstructionForGeneration::readProperty_mHasCompilerArgument (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_selfSetterCallInstructionForGeneration * p = (cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    return p->mProperty_mHasCompilerArgument ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfSetterCallInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_selfSetterCallInstructionForGeneration::cPtr_selfSetterCallInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mSelfCppName (),
mProperty_mReceiverType (),
mProperty_mSetterName (),
mProperty_mKind (),
mProperty_mActualParameterList (),
mProperty_mHasCompilerArgument () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selfSetterCallInstructionForGeneration::cPtr_selfSetterCallInstructionForGeneration (const GGS_string & in_mSelfCppName,
                                                                                          const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                          const GGS_lstring & in_mSetterName,
                                                                                          const GGS_methodKind & in_mKind,
                                                                                          const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                          const GGS_bool & in_mHasCompilerArgument,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mSelfCppName (),
mProperty_mReceiverType (),
mProperty_mSetterName (),
mProperty_mKind (),
mProperty_mActualParameterList (),
mProperty_mHasCompilerArgument () {
  mProperty_mSelfCppName = in_mSelfCppName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mSetterName = in_mSetterName ;
  mProperty_mKind = in_mKind ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_selfSetterCallInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration ;
}

void cPtr_selfSetterCallInstructionForGeneration::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@selfSetterCallInstructionForGeneration:") ;
  mProperty_mSelfCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_selfSetterCallInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfSetterCallInstructionForGeneration (mProperty_mSelfCppName, mProperty_mReceiverType, mProperty_mSetterName, mProperty_mKind, mProperty_mActualParameterList, mProperty_mHasCompilerArgument, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfSetterCallInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mSelfCppName.printNonNullClassInstanceProperties ("mSelfCppName") ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mSetterName.printNonNullClassInstanceProperties ("mSetterName") ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
    mProperty_mHasCompilerArgument.printNonNullClassInstanceProperties ("mHasCompilerArgument") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @selfSetterCallInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration ("selfSetterCallInstructionForGeneration",
                                                                                           & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfSetterCallInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfSetterCallInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfSetterCallInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfSetterCallInstructionForGeneration GGS_selfSetterCallInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_selfSetterCallInstructionForGeneration result ;
  const GGS_selfSetterCallInstructionForGeneration * p = (const GGS_selfSetterCallInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfSetterCallInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfSetterCallInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfSetterCallInstructionForGeneration_2E_weak::objectCompare (const GGS_selfSetterCallInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_selfSetterCallInstructionForGeneration_2E_weak::GGS_selfSetterCallInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfSetterCallInstructionForGeneration_2E_weak & GGS_selfSetterCallInstructionForGeneration_2E_weak::operator = (const GGS_selfSetterCallInstructionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfSetterCallInstructionForGeneration_2E_weak::GGS_selfSetterCallInstructionForGeneration_2E_weak (const GGS_selfSetterCallInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_selfSetterCallInstructionForGeneration_2E_weak GGS_selfSetterCallInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selfSetterCallInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfSetterCallInstructionForGeneration GGS_selfSetterCallInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_selfSetterCallInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_selfSetterCallInstructionForGeneration * p = (cPtr_selfSetterCallInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_selfSetterCallInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfSetterCallInstructionForGeneration GGS_selfSetterCallInstructionForGeneration_2E_weak::bang_selfSetterCallInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selfSetterCallInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfSetterCallInstructionForGeneration) ;
      result = GGS_selfSetterCallInstructionForGeneration ((cPtr_selfSetterCallInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selfSetterCallInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration_2E_weak ("selfSetterCallInstructionForGeneration.weak",
                                                                                                   & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfSetterCallInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfSetterCallInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfSetterCallInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfSetterCallInstructionForGeneration_2E_weak GGS_selfSetterCallInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_selfSetterCallInstructionForGeneration_2E_weak result ;
  const GGS_selfSetterCallInstructionForGeneration_2E_weak * p = (const GGS_selfSetterCallInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfSetterCallInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfSetterCallInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @loopInstructionWithoutVariantForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_loopInstructionWithoutVariantForGeneration::objectCompare (const GGS_loopInstructionWithoutVariantForGeneration & inOperand) const {
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

GGS_loopInstructionWithoutVariantForGeneration::GGS_loopInstructionWithoutVariantForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration GGS_loopInstructionWithoutVariantForGeneration::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_semanticInstructionListForGeneration & in_mFirstInstructions,
                      const GGS_ifTestListForGeneration & in_mLoopExpression,
                      const GGS_semanticInstructionListForGeneration & in_mSecondInstructions,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_loopInstructionWithoutVariantForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_loopInstructionWithoutVariantForGeneration (inCompiler COMMA_THERE)) ;
  object->loopInstructionWithoutVariantForGeneration_init_21__21__21__21_ (in_mInstructionLocation, in_mFirstInstructions, in_mLoopExpression, in_mSecondInstructions, inCompiler) ;
  const GGS_loopInstructionWithoutVariantForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithoutVariantForGeneration::
loopInstructionWithoutVariantForGeneration_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                 const GGS_semanticInstructionListForGeneration & in_mFirstInstructions,
                                                                 const GGS_ifTestListForGeneration & in_mLoopExpression,
                                                                 const GGS_semanticInstructionListForGeneration & in_mSecondInstructions,
                                                                 Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFirstInstructions = in_mFirstInstructions ;
  mProperty_mLoopExpression = in_mLoopExpression ;
  mProperty_mSecondInstructions = in_mSecondInstructions ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration::GGS_loopInstructionWithoutVariantForGeneration (const cPtr_loopInstructionWithoutVariantForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loopInstructionWithoutVariantForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithoutVariantForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithoutVariantForGeneration * p = (cPtr_loopInstructionWithoutVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_loopInstructionWithoutVariantForGeneration::readProperty_mFirstInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_loopInstructionWithoutVariantForGeneration * p = (cPtr_loopInstructionWithoutVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantForGeneration) ;
    return p->mProperty_mFirstInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration GGS_loopInstructionWithoutVariantForGeneration::readProperty_mLoopExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ifTestListForGeneration () ;
  }else{
    cPtr_loopInstructionWithoutVariantForGeneration * p = (cPtr_loopInstructionWithoutVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantForGeneration) ;
    return p->mProperty_mLoopExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_loopInstructionWithoutVariantForGeneration::readProperty_mSecondInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_loopInstructionWithoutVariantForGeneration * p = (cPtr_loopInstructionWithoutVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantForGeneration) ;
    return p->mProperty_mSecondInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @loopInstructionWithoutVariantForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_loopInstructionWithoutVariantForGeneration::cPtr_loopInstructionWithoutVariantForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mFirstInstructions (),
mProperty_mLoopExpression (),
mProperty_mSecondInstructions () {
}

//--------------------------------------------------------------------------------------------------

cPtr_loopInstructionWithoutVariantForGeneration::cPtr_loopInstructionWithoutVariantForGeneration (const GGS_location & in_mInstructionLocation,
                                                                                                  const GGS_semanticInstructionListForGeneration & in_mFirstInstructions,
                                                                                                  const GGS_ifTestListForGeneration & in_mLoopExpression,
                                                                                                  const GGS_semanticInstructionListForGeneration & in_mSecondInstructions,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mFirstInstructions (),
mProperty_mLoopExpression (),
mProperty_mSecondInstructions () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFirstInstructions = in_mFirstInstructions ;
  mProperty_mLoopExpression = in_mLoopExpression ;
  mProperty_mSecondInstructions = in_mSecondInstructions ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_loopInstructionWithoutVariantForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration ;
}

void cPtr_loopInstructionWithoutVariantForGeneration::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@loopInstructionWithoutVariantForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFirstInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLoopExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSecondInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_loopInstructionWithoutVariantForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_loopInstructionWithoutVariantForGeneration (mProperty_mInstructionLocation, mProperty_mFirstInstructions, mProperty_mLoopExpression, mProperty_mSecondInstructions, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_loopInstructionWithoutVariantForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mFirstInstructions.printNonNullClassInstanceProperties ("mFirstInstructions") ;
    mProperty_mLoopExpression.printNonNullClassInstanceProperties ("mLoopExpression") ;
    mProperty_mSecondInstructions.printNonNullClassInstanceProperties ("mSecondInstructions") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @loopInstructionWithoutVariantForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration ("loopInstructionWithoutVariantForGeneration",
                                                                                               & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_loopInstructionWithoutVariantForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_loopInstructionWithoutVariantForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_loopInstructionWithoutVariantForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration GGS_loopInstructionWithoutVariantForGeneration::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithoutVariantForGeneration result ;
  const GGS_loopInstructionWithoutVariantForGeneration * p = (const GGS_loopInstructionWithoutVariantForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_loopInstructionWithoutVariantForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithoutVariantForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_loopInstructionWithoutVariantForGeneration_2E_weak::objectCompare (const GGS_loopInstructionWithoutVariantForGeneration_2E_weak & inOperand) const {
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

GGS_loopInstructionWithoutVariantForGeneration_2E_weak::GGS_loopInstructionWithoutVariantForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration_2E_weak & GGS_loopInstructionWithoutVariantForGeneration_2E_weak::operator = (const GGS_loopInstructionWithoutVariantForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration_2E_weak::GGS_loopInstructionWithoutVariantForGeneration_2E_weak (const GGS_loopInstructionWithoutVariantForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration_2E_weak GGS_loopInstructionWithoutVariantForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_loopInstructionWithoutVariantForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration GGS_loopInstructionWithoutVariantForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_loopInstructionWithoutVariantForGeneration result ;
  if (isValid ()) {
    const cPtr_loopInstructionWithoutVariantForGeneration * p = (cPtr_loopInstructionWithoutVariantForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_loopInstructionWithoutVariantForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration GGS_loopInstructionWithoutVariantForGeneration_2E_weak::bang_loopInstructionWithoutVariantForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_loopInstructionWithoutVariantForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_loopInstructionWithoutVariantForGeneration) ;
      result = GGS_loopInstructionWithoutVariantForGeneration ((cPtr_loopInstructionWithoutVariantForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @loopInstructionWithoutVariantForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration_2E_weak ("loopInstructionWithoutVariantForGeneration.weak",
                                                                                                       & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_loopInstructionWithoutVariantForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_loopInstructionWithoutVariantForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_loopInstructionWithoutVariantForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration_2E_weak GGS_loopInstructionWithoutVariantForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithoutVariantForGeneration_2E_weak result ;
  const GGS_loopInstructionWithoutVariantForGeneration_2E_weak * p = (const GGS_loopInstructionWithoutVariantForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_loopInstructionWithoutVariantForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithoutVariantForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @undefinedLocalConstantDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_undefinedLocalConstantDeclarationForGeneration::objectCompare (const GGS_undefinedLocalConstantDeclarationForGeneration & inOperand) const {
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

GGS_undefinedLocalConstantDeclarationForGeneration::GGS_undefinedLocalConstantDeclarationForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationForGeneration GGS_undefinedLocalConstantDeclarationForGeneration::
init_21__21_ (const GGS_unifiedTypeMapEntry & in_mTargetType,
              const GGS_string & in_mCppVariableName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_undefinedLocalConstantDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_undefinedLocalConstantDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->undefinedLocalConstantDeclarationForGeneration_init_21__21_ (in_mTargetType, in_mCppVariableName, inCompiler) ;
  const GGS_undefinedLocalConstantDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_undefinedLocalConstantDeclarationForGeneration::
undefinedLocalConstantDeclarationForGeneration_init_21__21_ (const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                             const GGS_string & in_mCppVariableName,
                                                             Compiler * /* inCompiler */) {
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mCppVariableName = in_mCppVariableName ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationForGeneration::GGS_undefinedLocalConstantDeclarationForGeneration (const cPtr_undefinedLocalConstantDeclarationForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_undefinedLocalConstantDeclarationForGeneration::readProperty_mTargetType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_undefinedLocalConstantDeclarationForGeneration * p = (cPtr_undefinedLocalConstantDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
    return p->mProperty_mTargetType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_undefinedLocalConstantDeclarationForGeneration::readProperty_mCppVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_undefinedLocalConstantDeclarationForGeneration * p = (cPtr_undefinedLocalConstantDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
    return p->mProperty_mCppVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @undefinedLocalConstantDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_undefinedLocalConstantDeclarationForGeneration::cPtr_undefinedLocalConstantDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mTargetType (),
mProperty_mCppVariableName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_undefinedLocalConstantDeclarationForGeneration::cPtr_undefinedLocalConstantDeclarationForGeneration (const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                                                                          const GGS_string & in_mCppVariableName,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mTargetType (),
mProperty_mCppVariableName () {
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mCppVariableName = in_mCppVariableName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_undefinedLocalConstantDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ;
}

void cPtr_undefinedLocalConstantDeclarationForGeneration::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@undefinedLocalConstantDeclarationForGeneration:") ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_undefinedLocalConstantDeclarationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_undefinedLocalConstantDeclarationForGeneration (mProperty_mTargetType, mProperty_mCppVariableName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_undefinedLocalConstantDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mTargetType.printNonNullClassInstanceProperties ("mTargetType") ;
    mProperty_mCppVariableName.printNonNullClassInstanceProperties ("mCppVariableName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @undefinedLocalConstantDeclarationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ("undefinedLocalConstantDeclarationForGeneration",
                                                                                                   & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_undefinedLocalConstantDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_undefinedLocalConstantDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_undefinedLocalConstantDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationForGeneration GGS_undefinedLocalConstantDeclarationForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_undefinedLocalConstantDeclarationForGeneration result ;
  const GGS_undefinedLocalConstantDeclarationForGeneration * p = (const GGS_undefinedLocalConstantDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_undefinedLocalConstantDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("undefinedLocalConstantDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

