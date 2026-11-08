#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//--------------------------------------------------------------------------------------------------
//Class for element of '@syntaxInstructionListForGrammarAnalysis' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_syntaxInstructionListForGrammarAnalysis : public CollectionElementPtr {
  public: GGS_syntaxInstructionListForGrammarAnalysis_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_syntaxInstructionListForGrammarAnalysis (const GGS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction
                                                                        COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_syntaxInstructionListForGrammarAnalysis (const GGS_syntaxInstructionListForGrammarAnalysis_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_syntaxInstructionListForGrammarAnalysis::CollectionElementPtr_syntaxInstructionListForGrammarAnalysis (const GGS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction
                                                                                                                            COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_syntaxInstructionListForGrammarAnalysis::CollectionElementPtr_syntaxInstructionListForGrammarAnalysis (const GGS_syntaxInstructionListForGrammarAnalysis_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_syntaxInstructionListForGrammarAnalysis::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_syntaxInstructionListForGrammarAnalysis::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_syntaxInstructionListForGrammarAnalysis (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @syntaxInstructionListForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis::GGS_syntaxInstructionListForGrammarAnalysis (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis::GGS_syntaxInstructionListForGrammarAnalysis (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_syntaxInstructionListForGrammarAnalysis * p = (CollectionElementPtr_syntaxInstructionListForGrammarAnalysis *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_syntaxInstructionListForGrammarAnalysis) ;
    const GGS_syntaxInstructionListForGrammarAnalysis_2E_element element (p->mObject.mProperty_mInstruction) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                             const GGS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction
                                                                             COMMA_LOCATION_ARGS) {
  CollectionElementPtr_syntaxInstructionListForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_syntaxInstructionListForGrammarAnalysis (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_syntaxInstructionListForGrammarAnalysis::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_syntaxInstructionListForGrammarAnalysis::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis::description (String & ioString,
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

GGS_syntaxInstructionListForGrammarAnalysis GGS_syntaxInstructionListForGrammarAnalysis::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syntaxInstructionListForGrammarAnalysis result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis::plusPlusAssignOperation (const GGS_syntaxInstructionListForGrammarAnalysis_2E_element & inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis GGS_syntaxInstructionListForGrammarAnalysis::class_func_listWithValue (const GGS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0
                                                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_syntaxInstructionListForGrammarAnalysis_2E_element element (inOperand0) ;
  GGS_syntaxInstructionListForGrammarAnalysis result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis::addAssignOperation (const GGS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0
                                                                      COMMA_LOCATION_ARGS) {
  const GGS_syntaxInstructionListForGrammarAnalysis_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis::setter_append (const GGS_abstractSyntaxInstructionForGrammarAnalysis inOperand0,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_syntaxInstructionListForGrammarAnalysis_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis::setter_insertAtIndex (const GGS_abstractSyntaxInstructionForGrammarAnalysis inOperand0,
                                                                        const GGS_uint inInsertionIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  const GGS_syntaxInstructionListForGrammarAnalysis_2E_element newElement (inOperand0) ;
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

void GGS_syntaxInstructionListForGrammarAnalysis::setter_removeAtIndex (GGS_abstractSyntaxInstructionForGrammarAnalysis & outOperand0,
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

void GGS_syntaxInstructionListForGrammarAnalysis::setter_popFirst (GGS_abstractSyntaxInstructionForGrammarAnalysis & outOperand0,
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

void GGS_syntaxInstructionListForGrammarAnalysis::setter_popLast (GGS_abstractSyntaxInstructionForGrammarAnalysis & outOperand0,
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

void GGS_syntaxInstructionListForGrammarAnalysis::method_first (GGS_abstractSyntaxInstructionForGrammarAnalysis & outOperand0,
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

void GGS_syntaxInstructionListForGrammarAnalysis::method_last (GGS_abstractSyntaxInstructionForGrammarAnalysis & outOperand0,
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

GGS_syntaxInstructionListForGrammarAnalysis GGS_syntaxInstructionListForGrammarAnalysis::add_operation (const GGS_syntaxInstructionListForGrammarAnalysis & inOperand,
                                                                                                        Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_syntaxInstructionListForGrammarAnalysis result ;
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

GGS_syntaxInstructionListForGrammarAnalysis GGS_syntaxInstructionListForGrammarAnalysis::subList (const int32_t inStart,
                                                                                                  const int32_t inLength,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_syntaxInstructionListForGrammarAnalysis result ;
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

GGS_syntaxInstructionListForGrammarAnalysis GGS_syntaxInstructionListForGrammarAnalysis::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_syntaxInstructionListForGrammarAnalysis result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis GGS_syntaxInstructionListForGrammarAnalysis::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_syntaxInstructionListForGrammarAnalysis result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis GGS_syntaxInstructionListForGrammarAnalysis::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_syntaxInstructionListForGrammarAnalysis result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis::plusAssignOperation (const GGS_syntaxInstructionListForGrammarAnalysis inList,
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

void GGS_syntaxInstructionListForGrammarAnalysis::setter_setMInstructionAtIndex (GGS_abstractSyntaxInstructionForGrammarAnalysis inOperand,
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

GGS_abstractSyntaxInstructionForGrammarAnalysis GGS_syntaxInstructionListForGrammarAnalysis::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_abstractSyntaxInstructionForGrammarAnalysis result ;
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
// Down Enumerator for @syntaxInstructionListForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

DownEnumerator_syntaxInstructionListForGrammarAnalysis::DownEnumerator_syntaxInstructionListForGrammarAnalysis (const GGS_syntaxInstructionListForGrammarAnalysis & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis_2E_element DownEnumerator_syntaxInstructionListForGrammarAnalysis::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis DownEnumerator_syntaxInstructionListForGrammarAnalysis::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @syntaxInstructionListForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

UpEnumerator_syntaxInstructionListForGrammarAnalysis::UpEnumerator_syntaxInstructionListForGrammarAnalysis (const GGS_syntaxInstructionListForGrammarAnalysis & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis_2E_element UpEnumerator_syntaxInstructionListForGrammarAnalysis::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis UpEnumerator_syntaxInstructionListForGrammarAnalysis::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//     @syntaxInstructionListForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis ("syntaxInstructionListForGrammarAnalysis",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxInstructionListForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxInstructionListForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxInstructionListForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis GGS_syntaxInstructionListForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_syntaxInstructionListForGrammarAnalysis result ;
  const GGS_syntaxInstructionListForGrammarAnalysis * p = (const GGS_syntaxInstructionListForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxInstructionListForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionListForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@rowList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_rowList : public CollectionElementPtr {
  public: GGS_rowList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_rowList (const GGS__32_stringlist & in_columns
                                        COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_rowList (const GGS_rowList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_rowList::CollectionElementPtr_rowList (const GGS__32_stringlist & in_columns
                                                            COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_columns) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_rowList::CollectionElementPtr_rowList (const GGS_rowList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_columns) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_rowList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_rowList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_rowList (mObject.mProperty_columns COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @rowList
//--------------------------------------------------------------------------------------------------

GGS_rowList::GGS_rowList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_rowList::GGS_rowList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_rowList * p = (CollectionElementPtr_rowList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_rowList) ;
    const GGS_rowList_2E_element element (p->mObject.mProperty_columns) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_rowList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                             const GGS__32_stringlist & in_columns
                                             COMMA_LOCATION_ARGS) {
  CollectionElementPtr_rowList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_rowList (in_columns COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_rowList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_rowList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_rowList::description (String & ioString,
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
      ioString.appendString ("columns:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_columns.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_rowList GGS_rowList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_rowList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_rowList::plusPlusAssignOperation (const GGS_rowList_2E_element & inValue
                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_rowList GGS_rowList::class_func_listWithValue (const GGS__32_stringlist & inOperand0
                                                   COMMA_LOCATION_ARGS) {
  const GGS_rowList_2E_element element (inOperand0) ;
  GGS_rowList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_rowList::addAssignOperation (const GGS__32_stringlist & inOperand0
                                      COMMA_LOCATION_ARGS) {
  const GGS_rowList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_rowList::setter_append (const GGS__32_stringlist inOperand0,
                                 Compiler * /* inCompiler */
                                 COMMA_LOCATION_ARGS) {
  const GGS_rowList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_rowList::setter_insertAtIndex (const GGS__32_stringlist inOperand0,
                                        const GGS_uint inInsertionIndex,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  const GGS_rowList_2E_element newElement (inOperand0) ;
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

void GGS_rowList::setter_removeAtIndex (GGS__32_stringlist & outOperand0,
                                        const GGS_uint inRemoveIndex,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_columns ;
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

void GGS_rowList::setter_popFirst (GGS__32_stringlist & outOperand0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_columns ;
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

void GGS_rowList::setter_popLast (GGS__32_stringlist & outOperand0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_columns ;
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

void GGS_rowList::method_first (GGS__32_stringlist & outOperand0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_columns ;
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

void GGS_rowList::method_last (GGS__32_stringlist & outOperand0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_columns ;
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

GGS_rowList GGS_rowList::add_operation (const GGS_rowList & inOperand,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_rowList result ;
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

GGS_rowList GGS_rowList::subList (const int32_t inStart,
                                  const int32_t inLength,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) const {
  GGS_rowList result ;
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

GGS_rowList GGS_rowList::getter_subListWithRange (const GGS_range & inRange,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_rowList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_rowList GGS_rowList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_rowList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_rowList GGS_rowList::getter_subListToIndex (const GGS_uint & inIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  GGS_rowList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_rowList::plusAssignOperation (const GGS_rowList inList,
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

void GGS_rowList::setter_setColumnsAtIndex (GGS__32_stringlist inOperand,
                                            GGS_uint inIndex,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_columns = inOperand ;
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

GGS__32_stringlist GGS_rowList::getter_columnsAtIndex (const GGS_uint & inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS__32_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_columns ;
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
// Down Enumerator for @rowList
//--------------------------------------------------------------------------------------------------

DownEnumerator_rowList::DownEnumerator_rowList (const GGS_rowList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_rowList_2E_element DownEnumerator_rowList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist DownEnumerator_rowList::current_columns (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_columns ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @rowList
//--------------------------------------------------------------------------------------------------

UpEnumerator_rowList::UpEnumerator_rowList (const GGS_rowList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_rowList_2E_element UpEnumerator_rowList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist UpEnumerator_rowList::current_columns (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_columns ;
}




//--------------------------------------------------------------------------------------------------
//     @rowList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_rowList ("rowList",
                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_rowList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_rowList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_rowList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_rowList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_rowList GGS_rowList::extractObject (const GGS_object & inObject,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GGS_rowList result ;
  const GGS_rowList * p = (const GGS_rowList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_rowList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("rowList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@rowList appendRow'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendRow (GGS_rowList & ioObject,
                                const GGS_string constinArgument_inNodeDefinition,
                                const GGS_uint constinArgument_inRow,
                                const GGS_uint constinArgument_inColumn,
                                GGS_string & outArgument_outNodeName,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNodeName.drop () ; // Release 'out' argument
  const GGS_rowList temp_0 = ioObject ;
  GGS_uint var_length_10324 = temp_0.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas4", 282)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::lowerOrEqual, var_length_10324.objectCompare (constinArgument_inRow)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      UpEnumerator_range enumerator_10394 (GGS_range (var_length_10324, constinArgument_inRow.substract_operation (var_length_10324, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 284)).add_operation (GGS_uint (1), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 284)))) ;
      while (enumerator_10394.hasCurrentObject ()) {
        ioObject.plusAssignOperation(GGS_rowList::init (inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 285)) ;
        enumerator_10394.gotoNextObject () ;
      }
    }
  }
  const GGS_rowList temp_2 = ioObject ;
  GGS__32_stringlist var_cols_10455 = temp_2.getter_columnsAtIndex (constinArgument_inRow, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 289)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::lowerOrEqual, var_cols_10455.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas4", 291)).objectCompare (constinArgument_inColumn)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      UpEnumerator_range enumerator_10580 (GGS_range (var_cols_10455.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas4", 292)), constinArgument_inColumn.substract_operation (var_cols_10455.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas4", 292)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 292)).add_operation (GGS_uint (1), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 292)))) ;
      while (enumerator_10580.hasCurrentObject ()) {
        var_cols_10455.plusPlusAssignOperation (GGS__32_stringlist_2E_element::init_21__21_ (GGS_string::makeEmptyString (), GGS_string::makeEmptyString (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 293)) ;
        enumerator_10580.gotoNextObject () ;
      }
    }
  }
  outArgument_outNodeName = GGS_string ("p").add_operation (constinArgument_inRow.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas4", 297)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 297)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 297)).add_operation (var_cols_10455.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas4", 297)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas4", 297)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 297)) ;
  var_cols_10455.plusPlusAssignOperation (GGS__32_stringlist_2E_element::init_21__21_ (outArgument_outNodeName, constinArgument_inNodeDefinition, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 298)) ;
  {
  ioObject.setter_setColumnsAtIndex (var_cols_10455, constinArgument_inRow, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 300)) ;
  }
}


//--------------------------------------------------------------------------------------------------
// @abstractSyntaxInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractSyntaxInstructionForGrammarAnalysis::objectCompare (const GGS_abstractSyntaxInstructionForGrammarAnalysis & inOperand) const {
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

GGS_abstractSyntaxInstructionForGrammarAnalysis::GGS_abstractSyntaxInstructionForGrammarAnalysis (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractSyntaxInstructionForGrammarAnalysis::
abstractSyntaxInstructionForGrammarAnalysis_init_21_ (const GGS_location & in_mStartLocation,
                                                      Compiler * /* inCompiler */) {
  mProperty_mStartLocation = in_mStartLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis::GGS_abstractSyntaxInstructionForGrammarAnalysis (const cPtr_abstractSyntaxInstructionForGrammarAnalysis * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_abstractSyntaxInstructionForGrammarAnalysis::readProperty_mStartLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_abstractSyntaxInstructionForGrammarAnalysis * p = (cPtr_abstractSyntaxInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
    return p->mProperty_mStartLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractSyntaxInstructionForGrammarAnalysis class
//--------------------------------------------------------------------------------------------------

cPtr_abstractSyntaxInstructionForGrammarAnalysis::cPtr_abstractSyntaxInstructionForGrammarAnalysis (Compiler * inCompiler COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE),
mProperty_mStartLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_abstractSyntaxInstructionForGrammarAnalysis::cPtr_abstractSyntaxInstructionForGrammarAnalysis (const GGS_location & in_mStartLocation,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE),
mProperty_mStartLocation () {
  mProperty_mStartLocation = in_mStartLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractSyntaxInstructionForGrammarAnalysis::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
    mProperty_mStartLocation.printNonNullClassInstanceProperties ("mStartLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractSyntaxInstructionForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis ("abstractSyntaxInstructionForGrammarAnalysis",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractSyntaxInstructionForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractSyntaxInstructionForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractSyntaxInstructionForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis GGS_abstractSyntaxInstructionForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_abstractSyntaxInstructionForGrammarAnalysis result ;
  const GGS_abstractSyntaxInstructionForGrammarAnalysis * p = (const GGS_abstractSyntaxInstructionForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractSyntaxInstructionForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractSyntaxInstructionForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@syntaxInstructionListForGrammarAnalysis displayVertically'
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_displayVertically (const GGS_syntaxInstructionListForGrammarAnalysis & inObject,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_result ; // Returned variable
  const GGS_syntaxInstructionListForGrammarAnalysis temp_0 = inObject ;
  result_result = GGS_bool (ComparisonKind::greaterThan, temp_0.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas4", 548)).objectCompare (GGS_uint (uint32_t (4U)))) ;
  const GGS_syntaxInstructionListForGrammarAnalysis temp_1 = inObject ;
  UpEnumerator_syntaxInstructionListForGrammarAnalysis enumerator_19136 (temp_1) ;
  bool bool_2 = result_result.isValidAndTrue () ;
  if (enumerator_19136.hasCurrentObject () && bool_2) {
    while (enumerator_19136.hasCurrentObject () && bool_2) {
      result_result = callExtensionGetter_isLinear ((const cPtr_abstractSyntaxInstructionForGrammarAnalysis *) enumerator_19136.current (HERE).readProperty_mInstruction ().ptr (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 550)) ;
      enumerator_19136.gotoNextObject () ;
      if (enumerator_19136.hasCurrentObject ()) {
        bool_2 = result_result.isValidAndTrue () ;
      }
    }
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@abstractSyntaxInstructionForGrammarAnalysis isLinear'
//
//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_isLinear (const cPtr_abstractSyntaxInstructionForGrammarAnalysis * inObject,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_isLinear (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@lexicalSendSearchListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_lexicalSendSearchListAST : public CollectionElementPtr {
  public: GGS_lexicalSendSearchListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_lexicalSendSearchListAST (const GGS_lstring & in_mAttributeName,
                                                         const GGS_lstring & in_mSearchListName
                                                         COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_lexicalSendSearchListAST (const GGS_lexicalSendSearchListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_lexicalSendSearchListAST::CollectionElementPtr_lexicalSendSearchListAST (const GGS_lstring & in_mAttributeName,
                                                                                              const GGS_lstring & in_mSearchListName
                                                                                              COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mAttributeName, in_mSearchListName) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_lexicalSendSearchListAST::CollectionElementPtr_lexicalSendSearchListAST (const GGS_lexicalSendSearchListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mAttributeName, inElement.mProperty_mSearchListName) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_lexicalSendSearchListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_lexicalSendSearchListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_lexicalSendSearchListAST (mObject.mProperty_mAttributeName, mObject.mProperty_mSearchListName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @lexicalSendSearchListAST
//--------------------------------------------------------------------------------------------------

GGS_lexicalSendSearchListAST::GGS_lexicalSendSearchListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendSearchListAST::GGS_lexicalSendSearchListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_lexicalSendSearchListAST * p = (CollectionElementPtr_lexicalSendSearchListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_lexicalSendSearchListAST) ;
    const GGS_lexicalSendSearchListAST_2E_element element (p->mObject.mProperty_mAttributeName, p->mObject.mProperty_mSearchListName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSendSearchListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                              const GGS_lstring & in_mAttributeName,
                                                              const GGS_lstring & in_mSearchListName
                                                              COMMA_LOCATION_ARGS) {
  CollectionElementPtr_lexicalSendSearchListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_lexicalSendSearchListAST (in_mAttributeName, in_mSearchListName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalSendSearchListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_lexicalSendSearchListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSendSearchListAST::description (String & ioString,
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
      ioString.appendString ("mAttributeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mAttributeName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSearchListName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSearchListName.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendSearchListAST GGS_lexicalSendSearchListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalSendSearchListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSendSearchListAST::plusPlusAssignOperation (const GGS_lexicalSendSearchListAST_2E_element & inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendSearchListAST GGS_lexicalSendSearchListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                     const GGS_lstring & inOperand1
                                                                                     COMMA_LOCATION_ARGS) {
  const GGS_lexicalSendSearchListAST_2E_element element (inOperand0, inOperand1) ;
  GGS_lexicalSendSearchListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSendSearchListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                       const GGS_lstring & inOperand1
                                                       COMMA_LOCATION_ARGS) {
  const GGS_lexicalSendSearchListAST_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSendSearchListAST::setter_append (const GGS_lstring inOperand0,
                                                  const GGS_lstring inOperand1,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  const GGS_lexicalSendSearchListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSendSearchListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                         const GGS_lstring inOperand1,
                                                         const GGS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  const GGS_lexicalSendSearchListAST_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_lexicalSendSearchListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                         GGS_lstring & outOperand1,
                                                         const GGS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mAttributeName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mSearchListName ;
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

void GGS_lexicalSendSearchListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                    GGS_lstring & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mAttributeName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSearchListName ;
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

void GGS_lexicalSendSearchListAST::setter_popLast (GGS_lstring & outOperand0,
                                                   GGS_lstring & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mAttributeName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSearchListName ;
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

void GGS_lexicalSendSearchListAST::method_first (GGS_lstring & outOperand0,
                                                 GGS_lstring & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mAttributeName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSearchListName ;
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

void GGS_lexicalSendSearchListAST::method_last (GGS_lstring & outOperand0,
                                                GGS_lstring & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mAttributeName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSearchListName ;
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

GGS_lexicalSendSearchListAST GGS_lexicalSendSearchListAST::add_operation (const GGS_lexicalSendSearchListAST & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalSendSearchListAST result ;
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

GGS_lexicalSendSearchListAST GGS_lexicalSendSearchListAST::subList (const int32_t inStart,
                                                                    const int32_t inLength,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lexicalSendSearchListAST result ;
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

GGS_lexicalSendSearchListAST GGS_lexicalSendSearchListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lexicalSendSearchListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendSearchListAST GGS_lexicalSendSearchListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lexicalSendSearchListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendSearchListAST GGS_lexicalSendSearchListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lexicalSendSearchListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSendSearchListAST::plusAssignOperation (const GGS_lexicalSendSearchListAST inList,
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

void GGS_lexicalSendSearchListAST::setter_setMAttributeNameAtIndex (GGS_lstring inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mAttributeName = inOperand ;
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

GGS_lstring GGS_lexicalSendSearchListAST::getter_mAttributeNameAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mAttributeName ;
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

void GGS_lexicalSendSearchListAST::setter_setMSearchListNameAtIndex (GGS_lstring inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSearchListName = inOperand ;
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

GGS_lstring GGS_lexicalSendSearchListAST::getter_mSearchListNameAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSearchListName ;
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
// Down Enumerator for @lexicalSendSearchListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalSendSearchListAST::DownEnumerator_lexicalSendSearchListAST (const GGS_lexicalSendSearchListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendSearchListAST_2E_element DownEnumerator_lexicalSendSearchListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalSendSearchListAST::current_mAttributeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalSendSearchListAST::current_mSearchListName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSearchListName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @lexicalSendSearchListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalSendSearchListAST::UpEnumerator_lexicalSendSearchListAST (const GGS_lexicalSendSearchListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendSearchListAST_2E_element UpEnumerator_lexicalSendSearchListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalSendSearchListAST::current_mAttributeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalSendSearchListAST::current_mSearchListName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSearchListName ;
}




//--------------------------------------------------------------------------------------------------
//     @lexicalSendSearchListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSendSearchListAST ("lexicalSendSearchListAST",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalSendSearchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendSearchListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalSendSearchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalSendSearchListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendSearchListAST GGS_lexicalSendSearchListAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalSendSearchListAST result ;
  const GGS_lexicalSendSearchListAST * p = (const GGS_lexicalSendSearchListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalSendSearchListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSendSearchListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalInstructionAST_2E_weak::objectCompare (const GGS_lexicalInstructionAST_2E_weak & inOperand) const {
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

GGS_lexicalInstructionAST_2E_weak::GGS_lexicalInstructionAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionAST_2E_weak & GGS_lexicalInstructionAST_2E_weak::operator = (const GGS_lexicalInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak ("lexicalInstructionAST.weak",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalInstructionAST_2E_weak::staticTypeDescriptor (void) const {
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
// @abstractLexicalRoutineActualArgumentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractLexicalRoutineActualArgumentAST::objectCompare (const GGS_abstractLexicalRoutineActualArgumentAST & inOperand) const {
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

GGS_abstractLexicalRoutineActualArgumentAST::GGS_abstractLexicalRoutineActualArgumentAST (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractLexicalRoutineActualArgumentAST::
abstractLexicalRoutineActualArgumentAST_init_21_ (const GGS_location & in_mActualPassingModeLocation,
                                                  Compiler * /* inCompiler */) {
  mProperty_mActualPassingModeLocation = in_mActualPassingModeLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST::GGS_abstractLexicalRoutineActualArgumentAST (const cPtr_abstractLexicalRoutineActualArgumentAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractLexicalRoutineActualArgumentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_abstractLexicalRoutineActualArgumentAST::readProperty_mActualPassingModeLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_abstractLexicalRoutineActualArgumentAST * p = (cPtr_abstractLexicalRoutineActualArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractLexicalRoutineActualArgumentAST) ;
    return p->mProperty_mActualPassingModeLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractLexicalRoutineActualArgumentAST class
//--------------------------------------------------------------------------------------------------

cPtr_abstractLexicalRoutineActualArgumentAST::cPtr_abstractLexicalRoutineActualArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE),
mProperty_mActualPassingModeLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_abstractLexicalRoutineActualArgumentAST::cPtr_abstractLexicalRoutineActualArgumentAST (const GGS_location & in_mActualPassingModeLocation,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE),
mProperty_mActualPassingModeLocation () {
  mProperty_mActualPassingModeLocation = in_mActualPassingModeLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractLexicalRoutineActualArgumentAST::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
    mProperty_mActualPassingModeLocation.printNonNullClassInstanceProperties ("mActualPassingModeLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractLexicalRoutineActualArgumentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST ("abstractLexicalRoutineActualArgumentAST",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractLexicalRoutineActualArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractLexicalRoutineActualArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractLexicalRoutineActualArgumentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST GGS_abstractLexicalRoutineActualArgumentAST::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_abstractLexicalRoutineActualArgumentAST result ;
  const GGS_abstractLexicalRoutineActualArgumentAST * p = (const GGS_abstractLexicalRoutineActualArgumentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractLexicalRoutineActualArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractLexicalRoutineActualArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractLexicalRoutineActualArgumentAST_2E_weak::objectCompare (const GGS_abstractLexicalRoutineActualArgumentAST_2E_weak & inOperand) const {
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

GGS_abstractLexicalRoutineActualArgumentAST_2E_weak::GGS_abstractLexicalRoutineActualArgumentAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST_2E_weak & GGS_abstractLexicalRoutineActualArgumentAST_2E_weak::operator = (const GGS_abstractLexicalRoutineActualArgumentAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST_2E_weak::GGS_abstractLexicalRoutineActualArgumentAST_2E_weak (const GGS_abstractLexicalRoutineActualArgumentAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST_2E_weak GGS_abstractLexicalRoutineActualArgumentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractLexicalRoutineActualArgumentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST GGS_abstractLexicalRoutineActualArgumentAST_2E_weak::unwrappedValue (void) const {
  GGS_abstractLexicalRoutineActualArgumentAST result ;
  if (isValid ()) {
    const cPtr_abstractLexicalRoutineActualArgumentAST * p = (cPtr_abstractLexicalRoutineActualArgumentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractLexicalRoutineActualArgumentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST GGS_abstractLexicalRoutineActualArgumentAST_2E_weak::bang_abstractLexicalRoutineActualArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractLexicalRoutineActualArgumentAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractLexicalRoutineActualArgumentAST) ;
      result = GGS_abstractLexicalRoutineActualArgumentAST ((cPtr_abstractLexicalRoutineActualArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractLexicalRoutineActualArgumentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST_2E_weak ("abstractLexicalRoutineActualArgumentAST.weak",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractLexicalRoutineActualArgumentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractLexicalRoutineActualArgumentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractLexicalRoutineActualArgumentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST_2E_weak GGS_abstractLexicalRoutineActualArgumentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_abstractLexicalRoutineActualArgumentAST_2E_weak result ;
  const GGS_abstractLexicalRoutineActualArgumentAST_2E_weak * p = (const GGS_abstractLexicalRoutineActualArgumentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractLexicalRoutineActualArgumentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractLexicalRoutineActualArgumentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalAttributeInputOutputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalAttributeInputOutputArgumentAST::objectCompare (const GGS_lexicalAttributeInputOutputArgumentAST & inOperand) const {
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

GGS_lexicalAttributeInputOutputArgumentAST::GGS_lexicalAttributeInputOutputArgumentAST (void) :
GGS_abstractLexicalRoutineActualArgumentAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalAttributeInputOutputArgumentAST GGS_lexicalAttributeInputOutputArgumentAST::
init_21__21_ (const GGS_location & in_mActualPassingModeLocation,
              const GGS_lstring & in_mAttributeName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalAttributeInputOutputArgumentAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalAttributeInputOutputArgumentAST (inCompiler COMMA_THERE)) ;
  object->lexicalAttributeInputOutputArgumentAST_init_21__21_ (in_mActualPassingModeLocation, in_mAttributeName, inCompiler) ;
  const GGS_lexicalAttributeInputOutputArgumentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputOutputArgumentAST::
lexicalAttributeInputOutputArgumentAST_init_21__21_ (const GGS_location & in_mActualPassingModeLocation,
                                                     const GGS_lstring & in_mAttributeName,
                                                     Compiler * /* inCompiler */) {
  mProperty_mActualPassingModeLocation = in_mActualPassingModeLocation ;
  mProperty_mAttributeName = in_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputOutputArgumentAST::GGS_lexicalAttributeInputOutputArgumentAST (const cPtr_lexicalAttributeInputOutputArgumentAST * inSourcePtr) :
GGS_abstractLexicalRoutineActualArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalAttributeInputOutputArgumentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalAttributeInputOutputArgumentAST::readProperty_mAttributeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalAttributeInputOutputArgumentAST * p = (cPtr_lexicalAttributeInputOutputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalAttributeInputOutputArgumentAST) ;
    return p->mProperty_mAttributeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalAttributeInputOutputArgumentAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalAttributeInputOutputArgumentAST::cPtr_lexicalAttributeInputOutputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRoutineActualArgumentAST (inCompiler COMMA_THERE),
mProperty_mAttributeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalAttributeInputOutputArgumentAST::cPtr_lexicalAttributeInputOutputArgumentAST (const GGS_location & in_mActualPassingModeLocation,
                                                                                          const GGS_lstring & in_mAttributeName,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRoutineActualArgumentAST (in_mActualPassingModeLocation, inCompiler COMMA_THERE),
mProperty_mAttributeName () {
  mProperty_mActualPassingModeLocation = in_mActualPassingModeLocation ;
  mProperty_mAttributeName = in_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalAttributeInputOutputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST ;
}

void cPtr_lexicalAttributeInputOutputArgumentAST::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalAttributeInputOutputArgumentAST:") ;
  mProperty_mActualPassingModeLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAttributeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalAttributeInputOutputArgumentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalAttributeInputOutputArgumentAST (mProperty_mActualPassingModeLocation, mProperty_mAttributeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalAttributeInputOutputArgumentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractLexicalRoutineActualArgumentAST::printNonNullClassInstanceProperties () ;
    mProperty_mAttributeName.printNonNullClassInstanceProperties ("mAttributeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalAttributeInputOutputArgumentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST ("lexicalAttributeInputOutputArgumentAST",
                                                                                           & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalAttributeInputOutputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalAttributeInputOutputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalAttributeInputOutputArgumentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputOutputArgumentAST GGS_lexicalAttributeInputOutputArgumentAST::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_lexicalAttributeInputOutputArgumentAST result ;
  const GGS_lexicalAttributeInputOutputArgumentAST * p = (const GGS_lexicalAttributeInputOutputArgumentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalAttributeInputOutputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeInputOutputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalAttributeInputOutputArgumentAST_2E_weak::objectCompare (const GGS_lexicalAttributeInputOutputArgumentAST_2E_weak & inOperand) const {
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

GGS_lexicalAttributeInputOutputArgumentAST_2E_weak::GGS_lexicalAttributeInputOutputArgumentAST_2E_weak (void) :
GGS_abstractLexicalRoutineActualArgumentAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputOutputArgumentAST_2E_weak & GGS_lexicalAttributeInputOutputArgumentAST_2E_weak::operator = (const GGS_lexicalAttributeInputOutputArgumentAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputOutputArgumentAST_2E_weak::GGS_lexicalAttributeInputOutputArgumentAST_2E_weak (const GGS_lexicalAttributeInputOutputArgumentAST & inSource) :
GGS_abstractLexicalRoutineActualArgumentAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputOutputArgumentAST_2E_weak GGS_lexicalAttributeInputOutputArgumentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalAttributeInputOutputArgumentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputOutputArgumentAST GGS_lexicalAttributeInputOutputArgumentAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalAttributeInputOutputArgumentAST result ;
  if (isValid ()) {
    const cPtr_lexicalAttributeInputOutputArgumentAST * p = (cPtr_lexicalAttributeInputOutputArgumentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalAttributeInputOutputArgumentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputOutputArgumentAST GGS_lexicalAttributeInputOutputArgumentAST_2E_weak::bang_lexicalAttributeInputOutputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalAttributeInputOutputArgumentAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalAttributeInputOutputArgumentAST) ;
      result = GGS_lexicalAttributeInputOutputArgumentAST ((cPtr_lexicalAttributeInputOutputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalAttributeInputOutputArgumentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST_2E_weak ("lexicalAttributeInputOutputArgumentAST.weak",
                                                                                                   & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalAttributeInputOutputArgumentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalAttributeInputOutputArgumentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalAttributeInputOutputArgumentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputOutputArgumentAST_2E_weak GGS_lexicalAttributeInputOutputArgumentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_lexicalAttributeInputOutputArgumentAST_2E_weak result ;
  const GGS_lexicalAttributeInputOutputArgumentAST_2E_weak * p = (const GGS_lexicalAttributeInputOutputArgumentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalAttributeInputOutputArgumentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeInputOutputArgumentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalFormalInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalFormalInputArgumentAST::objectCompare (const GGS_lexicalFormalInputArgumentAST & inOperand) const {
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

GGS_lexicalFormalInputArgumentAST::GGS_lexicalFormalInputArgumentAST (void) :
GGS_abstractLexicalRoutineActualArgumentAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalFormalInputArgumentAST GGS_lexicalFormalInputArgumentAST::
init_21__21_ (const GGS_location & in_mActualPassingModeLocation,
              const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mRoutineOrFunctionFormalInputArgument,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalFormalInputArgumentAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalFormalInputArgumentAST (inCompiler COMMA_THERE)) ;
  object->lexicalFormalInputArgumentAST_init_21__21_ (in_mActualPassingModeLocation, in_mRoutineOrFunctionFormalInputArgument, inCompiler) ;
  const GGS_lexicalFormalInputArgumentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalFormalInputArgumentAST::
lexicalFormalInputArgumentAST_init_21__21_ (const GGS_location & in_mActualPassingModeLocation,
                                            const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mRoutineOrFunctionFormalInputArgument,
                                            Compiler * /* inCompiler */) {
  mProperty_mActualPassingModeLocation = in_mActualPassingModeLocation ;
  mProperty_mRoutineOrFunctionFormalInputArgument = in_mRoutineOrFunctionFormalInputArgument ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFormalInputArgumentAST::GGS_lexicalFormalInputArgumentAST (const cPtr_lexicalFormalInputArgumentAST * inSourcePtr) :
GGS_abstractLexicalRoutineActualArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalFormalInputArgumentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineOrFunctionFormalInputArgumentAST GGS_lexicalFormalInputArgumentAST::readProperty_mRoutineOrFunctionFormalInputArgument (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalRoutineOrFunctionFormalInputArgumentAST () ;
  }else{
    cPtr_lexicalFormalInputArgumentAST * p = (cPtr_lexicalFormalInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFormalInputArgumentAST) ;
    return p->mProperty_mRoutineOrFunctionFormalInputArgument ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalFormalInputArgumentAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalFormalInputArgumentAST::cPtr_lexicalFormalInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRoutineActualArgumentAST (inCompiler COMMA_THERE),
mProperty_mRoutineOrFunctionFormalInputArgument () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalFormalInputArgumentAST::cPtr_lexicalFormalInputArgumentAST (const GGS_location & in_mActualPassingModeLocation,
                                                                        const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mRoutineOrFunctionFormalInputArgument,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRoutineActualArgumentAST (in_mActualPassingModeLocation, inCompiler COMMA_THERE),
mProperty_mRoutineOrFunctionFormalInputArgument () {
  mProperty_mActualPassingModeLocation = in_mActualPassingModeLocation ;
  mProperty_mRoutineOrFunctionFormalInputArgument = in_mRoutineOrFunctionFormalInputArgument ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalFormalInputArgumentAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_lexicalFormalInputArgumentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalFormalInputArgumentAST (mProperty_mActualPassingModeLocation, mProperty_mRoutineOrFunctionFormalInputArgument, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalFormalInputArgumentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractLexicalRoutineActualArgumentAST::printNonNullClassInstanceProperties () ;
    mProperty_mRoutineOrFunctionFormalInputArgument.printNonNullClassInstanceProperties ("mRoutineOrFunctionFormalInputArgument") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalFormalInputArgumentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST ("lexicalFormalInputArgumentAST",
                                                                                  & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalFormalInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalFormalInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalFormalInputArgumentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFormalInputArgumentAST GGS_lexicalFormalInputArgumentAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_lexicalFormalInputArgumentAST result ;
  const GGS_lexicalFormalInputArgumentAST * p = (const GGS_lexicalFormalInputArgumentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalFormalInputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFormalInputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalFormalInputArgumentAST_2E_weak::objectCompare (const GGS_lexicalFormalInputArgumentAST_2E_weak & inOperand) const {
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

GGS_lexicalFormalInputArgumentAST_2E_weak::GGS_lexicalFormalInputArgumentAST_2E_weak (void) :
GGS_abstractLexicalRoutineActualArgumentAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFormalInputArgumentAST_2E_weak & GGS_lexicalFormalInputArgumentAST_2E_weak::operator = (const GGS_lexicalFormalInputArgumentAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFormalInputArgumentAST_2E_weak::GGS_lexicalFormalInputArgumentAST_2E_weak (const GGS_lexicalFormalInputArgumentAST & inSource) :
GGS_abstractLexicalRoutineActualArgumentAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalFormalInputArgumentAST_2E_weak GGS_lexicalFormalInputArgumentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalFormalInputArgumentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFormalInputArgumentAST GGS_lexicalFormalInputArgumentAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalFormalInputArgumentAST result ;
  if (isValid ()) {
    const cPtr_lexicalFormalInputArgumentAST * p = (cPtr_lexicalFormalInputArgumentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalFormalInputArgumentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFormalInputArgumentAST GGS_lexicalFormalInputArgumentAST_2E_weak::bang_lexicalFormalInputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalFormalInputArgumentAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalFormalInputArgumentAST) ;
      result = GGS_lexicalFormalInputArgumentAST ((cPtr_lexicalFormalInputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalFormalInputArgumentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST_2E_weak ("lexicalFormalInputArgumentAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalFormalInputArgumentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalFormalInputArgumentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalFormalInputArgumentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFormalInputArgumentAST_2E_weak GGS_lexicalFormalInputArgumentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_lexicalFormalInputArgumentAST_2E_weak result ;
  const GGS_lexicalFormalInputArgumentAST_2E_weak * p = (const GGS_lexicalFormalInputArgumentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalFormalInputArgumentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFormalInputArgumentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_abstractLexicalRoutineActualArgumentAST_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_::GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_ (void) :
AC_GALGAS_root (),
mSharedArray () {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_::GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_ (const GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_ & GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_::operator = (const GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_ GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_ result ;
  result.mSharedArray.setCapacity (16) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_::isValid (void) const {
  return mSharedArray.isAllocated () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_::drop (void) {
  mSharedArray.removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mSharedArray.setCapacity (16) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_::plusPlusAssignOperation (const GGS_abstractLexicalRoutineActualArgumentAST & inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mSharedArray.appendObject (inValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_ GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_::add_operation (const GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_ & inOperand,
                                                                                                                        Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_ result ;
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

void GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_::description (String & ioString,
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

void GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_::plusAssignOperation (const GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_ inOperand,
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

void GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_::setter_append (const GGS_abstractLexicalRoutineActualArgumentAST inValue,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_::setter_insertAtIndex (const GGS_abstractLexicalRoutineActualArgumentAST inValue,
                                                                                const GGS_uint inInsertionIndex,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_::setter_removeAtIndex (GGS_abstractLexicalRoutineActualArgumentAST & outValue,
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

void GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_::setter_popFirst (GGS_abstractLexicalRoutineActualArgumentAST & outValue,
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

void GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_::setter_popLast (GGS_abstractLexicalRoutineActualArgumentAST & outValue,
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

void GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_::method_first (GGS_abstractLexicalRoutineActualArgumentAST & outValue,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray (0 COMMA_THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_::method_last (GGS_abstractLexicalRoutineActualArgumentAST & outValue,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray.lastObject (THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_::readSubscript__3F_ (const GGS_uint & inIndex,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_abstractLexicalRoutineActualArgumentAST result ;
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
// Down Enumerator for @_5B_abstractLexicalRoutineActualArgumentAST_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_abstractLexicalRoutineActualArgumentAST_5D_::DownEnumerator__5B_abstractLexicalRoutineActualArgumentAST_5D_ (const GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST DownEnumerator__5B_abstractLexicalRoutineActualArgumentAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST DownEnumerator__5B_abstractLexicalRoutineActualArgumentAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_abstractLexicalRoutineActualArgumentAST_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_abstractLexicalRoutineActualArgumentAST_5D_::UpEnumerator__5B_abstractLexicalRoutineActualArgumentAST_5D_ (const GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST UpEnumerator__5B_abstractLexicalRoutineActualArgumentAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRoutineActualArgumentAST UpEnumerator__5B_abstractLexicalRoutineActualArgumentAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[abstractLexicalRoutineActualArgumentAST] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_abstractLexicalRoutineActualArgumentAST_5D_ ("[abstractLexicalRoutineActualArgumentAST]",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_abstractLexicalRoutineActualArgumentAST_5D_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_ GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_ result ;
  const GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_ * p = (const GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("[abstractLexicalRoutineActualArgumentAST]", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalRoutineCallInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalRoutineCallInstructionAST::objectCompare (const GGS_lexicalRoutineCallInstructionAST & inOperand) const {
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

GGS_lexicalRoutineCallInstructionAST::GGS_lexicalRoutineCallInstructionAST (void) :
GGS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalRoutineCallInstructionAST GGS_lexicalRoutineCallInstructionAST::
init_21__21__21_ (const GGS_lstring & in_mRoutineName,
                  const GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_ & in_mActualArgumentList,
                  const GGS_lstringlist & in_mErrorMessageList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_lexicalRoutineCallInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalRoutineCallInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalRoutineCallInstructionAST_init_21__21__21_ (in_mRoutineName, in_mActualArgumentList, in_mErrorMessageList, inCompiler) ;
  const GGS_lexicalRoutineCallInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRoutineCallInstructionAST::
lexicalRoutineCallInstructionAST_init_21__21__21_ (const GGS_lstring & in_mRoutineName,
                                                   const GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_ & in_mActualArgumentList,
                                                   const GGS_lstringlist & in_mErrorMessageList,
                                                   Compiler * /* inCompiler */) {
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mActualArgumentList = in_mActualArgumentList ;
  mProperty_mErrorMessageList = in_mErrorMessageList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallInstructionAST::GGS_lexicalRoutineCallInstructionAST (const cPtr_lexicalRoutineCallInstructionAST * inSourcePtr) :
GGS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalRoutineCallInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalRoutineCallInstructionAST::readProperty_mRoutineName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalRoutineCallInstructionAST * p = (cPtr_lexicalRoutineCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRoutineCallInstructionAST) ;
    return p->mProperty_mRoutineName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_ GGS_lexicalRoutineCallInstructionAST::readProperty_mActualArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_ () ;
  }else{
    cPtr_lexicalRoutineCallInstructionAST * p = (cPtr_lexicalRoutineCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRoutineCallInstructionAST) ;
    return p->mProperty_mActualArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_lexicalRoutineCallInstructionAST::readProperty_mErrorMessageList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_lexicalRoutineCallInstructionAST * p = (cPtr_lexicalRoutineCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRoutineCallInstructionAST) ;
    return p->mProperty_mErrorMessageList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalRoutineCallInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalRoutineCallInstructionAST::cPtr_lexicalRoutineCallInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mActualArgumentList (),
mProperty_mErrorMessageList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalRoutineCallInstructionAST::cPtr_lexicalRoutineCallInstructionAST (const GGS_lstring & in_mRoutineName,
                                                                              const GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_ & in_mActualArgumentList,
                                                                              const GGS_lstringlist & in_mErrorMessageList,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mActualArgumentList (),
mProperty_mErrorMessageList () {
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mActualArgumentList = in_mActualArgumentList ;
  mProperty_mErrorMessageList = in_mErrorMessageList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalRoutineCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineCallInstructionAST ;
}

void cPtr_lexicalRoutineCallInstructionAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalRoutineCallInstructionAST:") ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mErrorMessageList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalRoutineCallInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalRoutineCallInstructionAST (mProperty_mRoutineName, mProperty_mActualArgumentList, mProperty_mErrorMessageList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalRoutineCallInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mRoutineName.printNonNullClassInstanceProperties ("mRoutineName") ;
    mProperty_mActualArgumentList.printNonNullClassInstanceProperties ("mActualArgumentList") ;
    mProperty_mErrorMessageList.printNonNullClassInstanceProperties ("mErrorMessageList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalRoutineCallInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineCallInstructionAST ("lexicalRoutineCallInstructionAST",
                                                                                     & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalRoutineCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineCallInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRoutineCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRoutineCallInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallInstructionAST GGS_lexicalRoutineCallInstructionAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalRoutineCallInstructionAST result ;
  const GGS_lexicalRoutineCallInstructionAST * p = (const GGS_lexicalRoutineCallInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRoutineCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalRoutineCallInstructionAST_2E_weak::objectCompare (const GGS_lexicalRoutineCallInstructionAST_2E_weak & inOperand) const {
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

GGS_lexicalRoutineCallInstructionAST_2E_weak::GGS_lexicalRoutineCallInstructionAST_2E_weak (void) :
GGS_lexicalInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallInstructionAST_2E_weak & GGS_lexicalRoutineCallInstructionAST_2E_weak::operator = (const GGS_lexicalRoutineCallInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallInstructionAST_2E_weak::GGS_lexicalRoutineCallInstructionAST_2E_weak (const GGS_lexicalRoutineCallInstructionAST & inSource) :
GGS_lexicalInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallInstructionAST_2E_weak GGS_lexicalRoutineCallInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalRoutineCallInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallInstructionAST GGS_lexicalRoutineCallInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalRoutineCallInstructionAST result ;
  if (isValid ()) {
    const cPtr_lexicalRoutineCallInstructionAST * p = (cPtr_lexicalRoutineCallInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalRoutineCallInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallInstructionAST GGS_lexicalRoutineCallInstructionAST_2E_weak::bang_lexicalRoutineCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalRoutineCallInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalRoutineCallInstructionAST) ;
      result = GGS_lexicalRoutineCallInstructionAST ((cPtr_lexicalRoutineCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalRoutineCallInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineCallInstructionAST_2E_weak ("lexicalRoutineCallInstructionAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalRoutineCallInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineCallInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRoutineCallInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRoutineCallInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallInstructionAST_2E_weak GGS_lexicalRoutineCallInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalRoutineCallInstructionAST_2E_weak result ;
  const GGS_lexicalRoutineCallInstructionAST_2E_weak * p = (const GGS_lexicalRoutineCallInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRoutineCallInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineCallInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@abstractLexicalRoutineActualArgumentAST generateSwiftCocoaRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateSwiftCocoaRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                  const GGS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateSwiftCocoaRoutineArgument (in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@abstractLexicalRoutineActualArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalRoutineCallArgument (cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                          GGS_lexiqueAnalysisContext & io__5F_ioLexiqueAnalysisContext,
                                                          const GGS_lexicalArgumentModeAST constin__5F_inLexicalRoutineFormalArgumentMode,
                                                          const GGS_lexicalTypeEnum constin__5F_inLexicalRoutineFormalArgumentType,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLexicalRoutineActualArgumentAST) ;
    inObject->method_checkLexicalRoutineCallArgument (io__5F_ioLexiqueAnalysisContext, constin__5F_inLexicalRoutineFormalArgumentMode, constin__5F_inLexicalRoutineFormalArgumentType, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@abstractLexicalRoutineActualArgumentAST generateRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateRoutineArgument (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalTagInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalTagInstructionAST::objectCompare (const GGS_lexicalTagInstructionAST & inOperand) const {
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

GGS_lexicalTagInstructionAST::GGS_lexicalTagInstructionAST (void) :
GGS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalTagInstructionAST GGS_lexicalTagInstructionAST::
init_21_ (const GGS_lstring & in_mLexicalTagName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalTagInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalTagInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalTagInstructionAST_init_21_ (in_mLexicalTagName, inCompiler) ;
  const GGS_lexicalTagInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalTagInstructionAST::
lexicalTagInstructionAST_init_21_ (const GGS_lstring & in_mLexicalTagName,
                                   Compiler * /* inCompiler */) {
  mProperty_mLexicalTagName = in_mLexicalTagName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagInstructionAST::GGS_lexicalTagInstructionAST (const cPtr_lexicalTagInstructionAST * inSourcePtr) :
GGS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalTagInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalTagInstructionAST::readProperty_mLexicalTagName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalTagInstructionAST * p = (cPtr_lexicalTagInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalTagInstructionAST) ;
    return p->mProperty_mLexicalTagName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalTagInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalTagInstructionAST::cPtr_lexicalTagInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mLexicalTagName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalTagInstructionAST::cPtr_lexicalTagInstructionAST (const GGS_lstring & in_mLexicalTagName,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mLexicalTagName () {
  mProperty_mLexicalTagName = in_mLexicalTagName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalTagInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTagInstructionAST ;
}

void cPtr_lexicalTagInstructionAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalTagInstructionAST:") ;
  mProperty_mLexicalTagName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalTagInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalTagInstructionAST (mProperty_mLexicalTagName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalTagInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLexicalTagName.printNonNullClassInstanceProperties ("mLexicalTagName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalTagInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalTagInstructionAST ("lexicalTagInstructionAST",
                                                                             & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalTagInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTagInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalTagInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalTagInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagInstructionAST GGS_lexicalTagInstructionAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalTagInstructionAST result ;
  const GGS_lexicalTagInstructionAST * p = (const GGS_lexicalTagInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalTagInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTagInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalTagInstructionAST_2E_weak::objectCompare (const GGS_lexicalTagInstructionAST_2E_weak & inOperand) const {
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

GGS_lexicalTagInstructionAST_2E_weak::GGS_lexicalTagInstructionAST_2E_weak (void) :
GGS_lexicalInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagInstructionAST_2E_weak & GGS_lexicalTagInstructionAST_2E_weak::operator = (const GGS_lexicalTagInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagInstructionAST_2E_weak::GGS_lexicalTagInstructionAST_2E_weak (const GGS_lexicalTagInstructionAST & inSource) :
GGS_lexicalInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalTagInstructionAST_2E_weak GGS_lexicalTagInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalTagInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagInstructionAST GGS_lexicalTagInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalTagInstructionAST result ;
  if (isValid ()) {
    const cPtr_lexicalTagInstructionAST * p = (cPtr_lexicalTagInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalTagInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagInstructionAST GGS_lexicalTagInstructionAST_2E_weak::bang_lexicalTagInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalTagInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalTagInstructionAST) ;
      result = GGS_lexicalTagInstructionAST ((cPtr_lexicalTagInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalTagInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalTagInstructionAST_2E_weak ("lexicalTagInstructionAST.weak",
                                                                                     & kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalTagInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTagInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalTagInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalTagInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagInstructionAST_2E_weak GGS_lexicalTagInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalTagInstructionAST_2E_weak result ;
  const GGS_lexicalTagInstructionAST_2E_weak * p = (const GGS_lexicalTagInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalTagInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTagInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@lexicalSelectBranchListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_lexicalSelectBranchListAST : public CollectionElementPtr {
  public: GGS_lexicalSelectBranchListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_lexicalSelectBranchListAST (const GGS_lexicalExpressionAST & in_mSelectExpression,
                                                           const GGS_lexicalInstructionListAST & in_mSelectInstructionList
                                                           COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_lexicalSelectBranchListAST (const GGS_lexicalSelectBranchListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_lexicalSelectBranchListAST::CollectionElementPtr_lexicalSelectBranchListAST (const GGS_lexicalExpressionAST & in_mSelectExpression,
                                                                                                  const GGS_lexicalInstructionListAST & in_mSelectInstructionList
                                                                                                  COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mSelectExpression, in_mSelectInstructionList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_lexicalSelectBranchListAST::CollectionElementPtr_lexicalSelectBranchListAST (const GGS_lexicalSelectBranchListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mSelectExpression, inElement.mProperty_mSelectInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_lexicalSelectBranchListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_lexicalSelectBranchListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_lexicalSelectBranchListAST (mObject.mProperty_mSelectExpression, mObject.mProperty_mSelectInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @lexicalSelectBranchListAST
//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST::GGS_lexicalSelectBranchListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST::GGS_lexicalSelectBranchListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_lexicalSelectBranchListAST * p = (CollectionElementPtr_lexicalSelectBranchListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_lexicalSelectBranchListAST) ;
    const GGS_lexicalSelectBranchListAST_2E_element element (p->mObject.mProperty_mSelectExpression, p->mObject.mProperty_mSelectInstructionList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSelectBranchListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                const GGS_lexicalExpressionAST & in_mSelectExpression,
                                                                const GGS_lexicalInstructionListAST & in_mSelectInstructionList
                                                                COMMA_LOCATION_ARGS) {
  CollectionElementPtr_lexicalSelectBranchListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_lexicalSelectBranchListAST (in_mSelectExpression, in_mSelectInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalSelectBranchListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_lexicalSelectBranchListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSelectBranchListAST::description (String & ioString,
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
      ioString.appendString ("mSelectExpression:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSelectExpression.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSelectInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSelectInstructionList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST GGS_lexicalSelectBranchListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalSelectBranchListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSelectBranchListAST::plusPlusAssignOperation (const GGS_lexicalSelectBranchListAST_2E_element & inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST GGS_lexicalSelectBranchListAST::class_func_listWithValue (const GGS_lexicalExpressionAST & inOperand0,
                                                                                         const GGS_lexicalInstructionListAST & inOperand1
                                                                                         COMMA_LOCATION_ARGS) {
  const GGS_lexicalSelectBranchListAST_2E_element element (inOperand0, inOperand1) ;
  GGS_lexicalSelectBranchListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSelectBranchListAST::addAssignOperation (const GGS_lexicalExpressionAST & inOperand0,
                                                         const GGS_lexicalInstructionListAST & inOperand1
                                                         COMMA_LOCATION_ARGS) {
  const GGS_lexicalSelectBranchListAST_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSelectBranchListAST::setter_append (const GGS_lexicalExpressionAST inOperand0,
                                                    const GGS_lexicalInstructionListAST inOperand1,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  const GGS_lexicalSelectBranchListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSelectBranchListAST::setter_insertAtIndex (const GGS_lexicalExpressionAST inOperand0,
                                                           const GGS_lexicalInstructionListAST inOperand1,
                                                           const GGS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  const GGS_lexicalSelectBranchListAST_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_lexicalSelectBranchListAST::setter_removeAtIndex (GGS_lexicalExpressionAST & outOperand0,
                                                           GGS_lexicalInstructionListAST & outOperand1,
                                                           const GGS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mSelectExpression ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mSelectInstructionList ;
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

void GGS_lexicalSelectBranchListAST::setter_popFirst (GGS_lexicalExpressionAST & outOperand0,
                                                      GGS_lexicalInstructionListAST & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSelectExpression ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSelectInstructionList ;
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

void GGS_lexicalSelectBranchListAST::setter_popLast (GGS_lexicalExpressionAST & outOperand0,
                                                     GGS_lexicalInstructionListAST & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSelectExpression ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSelectInstructionList ;
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

void GGS_lexicalSelectBranchListAST::method_first (GGS_lexicalExpressionAST & outOperand0,
                                                   GGS_lexicalInstructionListAST & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSelectExpression ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSelectInstructionList ;
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

void GGS_lexicalSelectBranchListAST::method_last (GGS_lexicalExpressionAST & outOperand0,
                                                  GGS_lexicalInstructionListAST & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSelectExpression ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSelectInstructionList ;
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

GGS_lexicalSelectBranchListAST GGS_lexicalSelectBranchListAST::add_operation (const GGS_lexicalSelectBranchListAST & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalSelectBranchListAST result ;
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

GGS_lexicalSelectBranchListAST GGS_lexicalSelectBranchListAST::subList (const int32_t inStart,
                                                                        const int32_t inLength,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_lexicalSelectBranchListAST result ;
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

GGS_lexicalSelectBranchListAST GGS_lexicalSelectBranchListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_lexicalSelectBranchListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST GGS_lexicalSelectBranchListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_lexicalSelectBranchListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST GGS_lexicalSelectBranchListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lexicalSelectBranchListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSelectBranchListAST::plusAssignOperation (const GGS_lexicalSelectBranchListAST inList,
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

void GGS_lexicalSelectBranchListAST::setter_setMSelectExpressionAtIndex (GGS_lexicalExpressionAST inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSelectExpression = inOperand ;
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

GGS_lexicalExpressionAST GGS_lexicalSelectBranchListAST::getter_mSelectExpressionAtIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_lexicalExpressionAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSelectExpression ;
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

void GGS_lexicalSelectBranchListAST::setter_setMSelectInstructionListAtIndex (GGS_lexicalInstructionListAST inOperand,
                                                                              GGS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSelectInstructionList = inOperand ;
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

GGS_lexicalInstructionListAST GGS_lexicalSelectBranchListAST::getter_mSelectInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lexicalInstructionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSelectInstructionList ;
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
// Down Enumerator for @lexicalSelectBranchListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalSelectBranchListAST::DownEnumerator_lexicalSelectBranchListAST (const GGS_lexicalSelectBranchListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST_2E_element DownEnumerator_lexicalSelectBranchListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExpressionAST DownEnumerator_lexicalSelectBranchListAST::current_mSelectExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSelectExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST DownEnumerator_lexicalSelectBranchListAST::current_mSelectInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSelectInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @lexicalSelectBranchListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalSelectBranchListAST::UpEnumerator_lexicalSelectBranchListAST (const GGS_lexicalSelectBranchListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST_2E_element UpEnumerator_lexicalSelectBranchListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExpressionAST UpEnumerator_lexicalSelectBranchListAST::current_mSelectExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSelectExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST UpEnumerator_lexicalSelectBranchListAST::current_mSelectInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSelectInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//     @lexicalSelectBranchListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSelectBranchListAST ("lexicalSelectBranchListAST",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalSelectBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectBranchListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalSelectBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalSelectBranchListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST GGS_lexicalSelectBranchListAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_lexicalSelectBranchListAST result ;
  const GGS_lexicalSelectBranchListAST * p = (const GGS_lexicalSelectBranchListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalSelectBranchListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSelectBranchListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@lexicalInstructionListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_lexicalInstructionListAST : public CollectionElementPtr {
  public: GGS_lexicalInstructionListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_lexicalInstructionListAST (const GGS_lexicalInstructionAST & in_mInstruction
                                                          COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_lexicalInstructionListAST (const GGS_lexicalInstructionListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
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
// @lexicalSimpleSendInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalSimpleSendInstructionAST::objectCompare (const GGS_lexicalSimpleSendInstructionAST & inOperand) const {
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

GGS_lexicalSimpleSendInstructionAST::GGS_lexicalSimpleSendInstructionAST (void) :
GGS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalSimpleSendInstructionAST GGS_lexicalSimpleSendInstructionAST::
init_21_ (const GGS_lstring & in_mSentTerminal,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalSimpleSendInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalSimpleSendInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalSimpleSendInstructionAST_init_21_ (in_mSentTerminal, inCompiler) ;
  const GGS_lexicalSimpleSendInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSimpleSendInstructionAST::
lexicalSimpleSendInstructionAST_init_21_ (const GGS_lstring & in_mSentTerminal,
                                          Compiler * /* inCompiler */) {
  mProperty_mSentTerminal = in_mSentTerminal ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSimpleSendInstructionAST::GGS_lexicalSimpleSendInstructionAST (const cPtr_lexicalSimpleSendInstructionAST * inSourcePtr) :
GGS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalSimpleSendInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalSimpleSendInstructionAST::readProperty_mSentTerminal (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalSimpleSendInstructionAST * p = (cPtr_lexicalSimpleSendInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSimpleSendInstructionAST) ;
    return p->mProperty_mSentTerminal ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalSimpleSendInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalSimpleSendInstructionAST::cPtr_lexicalSimpleSendInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mSentTerminal () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalSimpleSendInstructionAST::cPtr_lexicalSimpleSendInstructionAST (const GGS_lstring & in_mSentTerminal,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mSentTerminal () {
  mProperty_mSentTerminal = in_mSentTerminal ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalSimpleSendInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST ;
}

void cPtr_lexicalSimpleSendInstructionAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalSimpleSendInstructionAST:") ;
  mProperty_mSentTerminal.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalSimpleSendInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalSimpleSendInstructionAST (mProperty_mSentTerminal, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalSimpleSendInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mSentTerminal.printNonNullClassInstanceProperties ("mSentTerminal") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalSimpleSendInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST ("lexicalSimpleSendInstructionAST",
                                                                                    & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalSimpleSendInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalSimpleSendInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalSimpleSendInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSimpleSendInstructionAST GGS_lexicalSimpleSendInstructionAST::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_lexicalSimpleSendInstructionAST result ;
  const GGS_lexicalSimpleSendInstructionAST * p = (const GGS_lexicalSimpleSendInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalSimpleSendInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSimpleSendInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
// @lexicalRewindInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalRewindInstructionAST::objectCompare (const GGS_lexicalRewindInstructionAST & inOperand) const {
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

GGS_lexicalRewindInstructionAST::GGS_lexicalRewindInstructionAST (void) :
GGS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalRewindInstructionAST GGS_lexicalRewindInstructionAST::
init_21__21_ (const GGS_lstring & in_mLexicalTagName,
              const GGS_lstring & in_mTerminalName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalRewindInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalRewindInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalRewindInstructionAST_init_21__21_ (in_mLexicalTagName, in_mTerminalName, inCompiler) ;
  const GGS_lexicalRewindInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRewindInstructionAST::
lexicalRewindInstructionAST_init_21__21_ (const GGS_lstring & in_mLexicalTagName,
                                          const GGS_lstring & in_mTerminalName,
                                          Compiler * /* inCompiler */) {
  mProperty_mLexicalTagName = in_mLexicalTagName ;
  mProperty_mTerminalName = in_mTerminalName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRewindInstructionAST::GGS_lexicalRewindInstructionAST (const cPtr_lexicalRewindInstructionAST * inSourcePtr) :
GGS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalRewindInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalRewindInstructionAST::readProperty_mLexicalTagName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalRewindInstructionAST * p = (cPtr_lexicalRewindInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRewindInstructionAST) ;
    return p->mProperty_mLexicalTagName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalRewindInstructionAST::readProperty_mTerminalName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalRewindInstructionAST * p = (cPtr_lexicalRewindInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRewindInstructionAST) ;
    return p->mProperty_mTerminalName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalRewindInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalRewindInstructionAST::cPtr_lexicalRewindInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mLexicalTagName (),
mProperty_mTerminalName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalRewindInstructionAST::cPtr_lexicalRewindInstructionAST (const GGS_lstring & in_mLexicalTagName,
                                                                    const GGS_lstring & in_mTerminalName,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mLexicalTagName (),
mProperty_mTerminalName () {
  mProperty_mLexicalTagName = in_mLexicalTagName ;
  mProperty_mTerminalName = in_mTerminalName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalRewindInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRewindInstructionAST ;
}

void cPtr_lexicalRewindInstructionAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalRewindInstructionAST:") ;
  mProperty_mLexicalTagName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTerminalName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalRewindInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalRewindInstructionAST (mProperty_mLexicalTagName, mProperty_mTerminalName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalRewindInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLexicalTagName.printNonNullClassInstanceProperties ("mLexicalTagName") ;
    mProperty_mTerminalName.printNonNullClassInstanceProperties ("mTerminalName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalRewindInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRewindInstructionAST ("lexicalRewindInstructionAST",
                                                                                & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalRewindInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRewindInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRewindInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRewindInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRewindInstructionAST GGS_lexicalRewindInstructionAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalRewindInstructionAST result ;
  const GGS_lexicalRewindInstructionAST * p = (const GGS_lexicalRewindInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRewindInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRewindInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
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
// @lexicalWarningInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalWarningInstructionAST::objectCompare (const GGS_lexicalWarningInstructionAST & inOperand) const {
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

GGS_lexicalWarningInstructionAST::GGS_lexicalWarningInstructionAST (void) :
GGS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalWarningInstructionAST GGS_lexicalWarningInstructionAST::
init_21_ (const GGS_lstring & in_mWarningMessageName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalWarningInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalWarningInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalWarningInstructionAST_init_21_ (in_mWarningMessageName, inCompiler) ;
  const GGS_lexicalWarningInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalWarningInstructionAST::
lexicalWarningInstructionAST_init_21_ (const GGS_lstring & in_mWarningMessageName,
                                       Compiler * /* inCompiler */) {
  mProperty_mWarningMessageName = in_mWarningMessageName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWarningInstructionAST::GGS_lexicalWarningInstructionAST (const cPtr_lexicalWarningInstructionAST * inSourcePtr) :
GGS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalWarningInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalWarningInstructionAST::readProperty_mWarningMessageName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalWarningInstructionAST * p = (cPtr_lexicalWarningInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalWarningInstructionAST) ;
    return p->mProperty_mWarningMessageName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalWarningInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalWarningInstructionAST::cPtr_lexicalWarningInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mWarningMessageName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalWarningInstructionAST::cPtr_lexicalWarningInstructionAST (const GGS_lstring & in_mWarningMessageName,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mWarningMessageName () {
  mProperty_mWarningMessageName = in_mWarningMessageName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalWarningInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalWarningInstructionAST ;
}

void cPtr_lexicalWarningInstructionAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalWarningInstructionAST:") ;
  mProperty_mWarningMessageName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalWarningInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalWarningInstructionAST (mProperty_mWarningMessageName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalWarningInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mWarningMessageName.printNonNullClassInstanceProperties ("mWarningMessageName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalWarningInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalWarningInstructionAST ("lexicalWarningInstructionAST",
                                                                                 & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalWarningInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalWarningInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalWarningInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalWarningInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWarningInstructionAST GGS_lexicalWarningInstructionAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_lexicalWarningInstructionAST result ;
  const GGS_lexicalWarningInstructionAST * p = (const GGS_lexicalWarningInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalWarningInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalWarningInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
// @lexicalDropInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalDropInstructionAST::objectCompare (const GGS_lexicalDropInstructionAST & inOperand) const {
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

GGS_lexicalDropInstructionAST::GGS_lexicalDropInstructionAST (void) :
GGS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalDropInstructionAST GGS_lexicalDropInstructionAST::
init_21_ (const GGS_lstring & in_mTerminalName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalDropInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalDropInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalDropInstructionAST_init_21_ (in_mTerminalName, inCompiler) ;
  const GGS_lexicalDropInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalDropInstructionAST::
lexicalDropInstructionAST_init_21_ (const GGS_lstring & in_mTerminalName,
                                    Compiler * /* inCompiler */) {
  mProperty_mTerminalName = in_mTerminalName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalDropInstructionAST::GGS_lexicalDropInstructionAST (const cPtr_lexicalDropInstructionAST * inSourcePtr) :
GGS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalDropInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalDropInstructionAST::readProperty_mTerminalName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalDropInstructionAST * p = (cPtr_lexicalDropInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalDropInstructionAST) ;
    return p->mProperty_mTerminalName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalDropInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalDropInstructionAST::cPtr_lexicalDropInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mTerminalName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalDropInstructionAST::cPtr_lexicalDropInstructionAST (const GGS_lstring & in_mTerminalName,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mTerminalName () {
  mProperty_mTerminalName = in_mTerminalName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalDropInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalDropInstructionAST ;
}

void cPtr_lexicalDropInstructionAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalDropInstructionAST:") ;
  mProperty_mTerminalName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalDropInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalDropInstructionAST (mProperty_mTerminalName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalDropInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTerminalName.printNonNullClassInstanceProperties ("mTerminalName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalDropInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalDropInstructionAST ("lexicalDropInstructionAST",
                                                                              & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalDropInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalDropInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalDropInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalDropInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalDropInstructionAST GGS_lexicalDropInstructionAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_lexicalDropInstructionAST result ;
  const GGS_lexicalDropInstructionAST * p = (const GGS_lexicalDropInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalDropInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalDropInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
// @lexicalErrorInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalErrorInstructionAST::objectCompare (const GGS_lexicalErrorInstructionAST & inOperand) const {
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

GGS_lexicalErrorInstructionAST::GGS_lexicalErrorInstructionAST (void) :
GGS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalErrorInstructionAST GGS_lexicalErrorInstructionAST::
init_21_ (const GGS_lstring & in_mErrorMessageName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalErrorInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalErrorInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalErrorInstructionAST_init_21_ (in_mErrorMessageName, inCompiler) ;
  const GGS_lexicalErrorInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalErrorInstructionAST::
lexicalErrorInstructionAST_init_21_ (const GGS_lstring & in_mErrorMessageName,
                                     Compiler * /* inCompiler */) {
  mProperty_mErrorMessageName = in_mErrorMessageName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorInstructionAST::GGS_lexicalErrorInstructionAST (const cPtr_lexicalErrorInstructionAST * inSourcePtr) :
GGS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalErrorInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalErrorInstructionAST::readProperty_mErrorMessageName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalErrorInstructionAST * p = (cPtr_lexicalErrorInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalErrorInstructionAST) ;
    return p->mProperty_mErrorMessageName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalErrorInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalErrorInstructionAST::cPtr_lexicalErrorInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mErrorMessageName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalErrorInstructionAST::cPtr_lexicalErrorInstructionAST (const GGS_lstring & in_mErrorMessageName,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mErrorMessageName () {
  mProperty_mErrorMessageName = in_mErrorMessageName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalErrorInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorInstructionAST ;
}

void cPtr_lexicalErrorInstructionAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalErrorInstructionAST:") ;
  mProperty_mErrorMessageName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalErrorInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalErrorInstructionAST (mProperty_mErrorMessageName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalErrorInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mErrorMessageName.printNonNullClassInstanceProperties ("mErrorMessageName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalErrorInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalErrorInstructionAST ("lexicalErrorInstructionAST",
                                                                               & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalErrorInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalErrorInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalErrorInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorInstructionAST GGS_lexicalErrorInstructionAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_lexicalErrorInstructionAST result ;
  const GGS_lexicalErrorInstructionAST * p = (const GGS_lexicalErrorInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalErrorInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalErrorInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
//'@usefulEntitiesGraph' graph
//--------------------------------------------------------------------------------------------------

class GraphNode_usefulEntitiesGraph final {
  public: GraphNode_usefulEntitiesGraph * mInfPtr ;
  public: GraphNode_usefulEntitiesGraph * mSupPtr ;
  public: int32_t mBalance ;
  public: const String mKey ;
  public: const uint32_t mNodeID ;
  public: GGS_lstring mElement ;
  public: GGS_location mDefinitionLocation ;
  public: GenericUniqueArray <GGS_location> mReferenceLocationArray ;
  public: bool mIsDefined ;

//--- Constructors
  public: GraphNode_usefulEntitiesGraph (const String & inKey,
                                        const uint32_t inNodeID) ;

  public: GraphNode_usefulEntitiesGraph (GraphNode_usefulEntitiesGraph * inNode) ;

  public: void accumulateNodes (GGS__5B_lstring_5D_ & outNodeList) const ;

//--- Destructor
  public: ~ GraphNode_usefulEntitiesGraph (void) ;

//--- No copy
  private: GraphNode_usefulEntitiesGraph (const GraphNode_usefulEntitiesGraph &) = delete ;
  private: GraphNode_usefulEntitiesGraph & operator = (const GraphNode_usefulEntitiesGraph &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

GraphNode_usefulEntitiesGraph::~ GraphNode_usefulEntitiesGraph (void) {
  macroMyDelete (mInfPtr) ;
  macroMyDelete (mSupPtr) ;
}

//--------------------------------------------------------------------------------------------------

class SharedGraph_usefulEntitiesGraph : public SharedObject {
//--------------------------------- Attributes
  private: GraphNode_usefulEntitiesGraph * mRoot ;
  public: inline const GraphNode_usefulEntitiesGraph * root (void) const { return mRoot ; }
  private: DirectedGraph mDirectedGraph ;
  private: GenericUniqueArray <GraphNode_usefulEntitiesGraph *> mNodeArray ;

//--- Constructor
  public: SharedGraph_usefulEntitiesGraph (LOCATION_ARGS) ;

//--- Destructor
  public: virtual ~ SharedGraph_usefulEntitiesGraph (void) ;

//--- Count
  public: inline uint32_t allNodeCount (void) const { return (uint32_t) mNodeArray.count () ; }

//--- isNodeDefined
  public: bool isNodeDefined (const String & inKey) const ;

//--- locationForKey
  public: GGS_location locationForKey (const String & inKey,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const ;

//--- Internal methods
  public: void description (String & ioString,
                            const int32_t inIndentation) const ;

  public: void copyFrom (const SharedGraph_usefulEntitiesGraph * inSource) ;

  public: void copyReversedGraphFrom (const SharedGraph_usefulEntitiesGraph * inSource) ;

  public: int32_t graphCompare (const SharedGraph_usefulEntitiesGraph * inOperand) const ;

  public: GraphNode_usefulEntitiesGraph * findOrAddNodeForKey (const String & inKey) ;

  protected: GraphNode_usefulEntitiesGraph * internalInsert (GraphNode_usefulEntitiesGraph * & ioRootPtr,
                                          const String & inKey,
                                          bool & ioExtension) ;

  public: void internalAddNode (const GGS_lstring & inKey,
                                const char * inErrorMessage,
                                const GGS_lstring & inElement,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void addEdge (const String & inSourceNodeKey,
                        const GGS_location & inSourceNodeLocation,
                        const String & inTargetNodeKey,
                        const GGS_location & inTargetNodeLocation) ;

  public: void removeEdgesToDominators (LOCATION_ARGS) ;

  public: void removeEdgesToNode (const String & inNodeName,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void internalTopologicalSort (GGS__5B_lstring_5D_ & outSortedList,
                                        GGS__5B_lstring_5D_ & outSortedNodeKeyList,
                                        GGS__5B_lstring_5D_ & outUnsortedList,
                                        GGS__5B_lstring_5D_ & outUnsortedNodeKeyList) const ;


  public: void internalFindCircularities (GGS__5B_lstring_5D_ & outInfoList,
                                          GGS__5B_lstring_5D_ & outNodeKeyList) const ;

  public: void internalNodesWithNoPredecessor (GGS__5B_lstring_5D_ & outInfoList,
                                               GGS__5B_lstring_5D_ & outNodeKeyList) const ;

  public: void internalNodesWithNoSuccessor (GGS__5B_lstring_5D_ & outInfoList,
                                             GGS__5B_lstring_5D_ & outNodeKeyList) const ;

  public: void internalDepthFirstTopologicalSort (GGS__5B_lstring_5D_ & outSortedList,
                                                  GGS__5B_lstring_5D_ & outSortedNodeKeyList,
                                                  GGS__5B_lstring_5D_ & outUnsortedList,
                                                  GGS__5B_lstring_5D_ & outUnsortedNodeKeyList) const ;

  public: void subGraph (GGS_usefulEntitiesGraph & outResultingGraph,
                         const GGS__5B_lstring_5D_ & inStartNodes,
                         const GGS_stringset & inNodesToExclude,
                         Compiler * inCompiler
                         COMMA_LOCATION_ARGS) const ;

  public: void graph (GGS__5B_lstring_5D_ & outNodeList) const ;

  public: GGS__5B_string_5D_ keyList (void) const ;

  public: GGS__5B_lstring_5D_ lkeyList (void) const ;

  public: String getter_graphviz (void) const ;

  public: void edges (GGS__32_stringlist & ioList) const ;

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: void checkGraph (LOCATION_ARGS) const ;
  #endif

//--- No copy
  private: SharedGraph_usefulEntitiesGraph (const SharedGraph_usefulEntitiesGraph &) = delete ;
  private: SharedGraph_usefulEntitiesGraph & operator = (const SharedGraph_usefulEntitiesGraph &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

SharedGraph_usefulEntitiesGraph::SharedGraph_usefulEntitiesGraph (LOCATION_ARGS) :
SharedObject (THERE),
mRoot (nullptr),
mDirectedGraph (),
mNodeArray () {
}

//--------------------------------------------------------------------------------------------------

SharedGraph_usefulEntitiesGraph::~ SharedGraph_usefulEntitiesGraph (void) {
  macroMyDelete (mRoot) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Copy
#endif

//--------------------------------------------------------------------------------------------------

GraphNode_usefulEntitiesGraph::GraphNode_usefulEntitiesGraph (GraphNode_usefulEntitiesGraph * inNode) :
mInfPtr (nullptr),
mSupPtr (nullptr),
mBalance (inNode->mBalance),
mKey (inNode->mKey),
mNodeID (inNode->mNodeID),
mElement (inNode->mElement),
mDefinitionLocation (inNode->mDefinitionLocation),
mReferenceLocationArray (),
mIsDefined (inNode->mIsDefined) {
  mReferenceLocationArray.setCapacity (inNode->mReferenceLocationArray.count ()) ;
  for (int32_t i=0 ; i<inNode->mReferenceLocationArray.count () ; i++) {
    mReferenceLocationArray.appendObject (inNode->mReferenceLocationArray (i COMMA_HERE)) ;
  }
  if (nullptr != inNode->mInfPtr) {
    macroMyNew (mInfPtr, GraphNode_usefulEntitiesGraph (inNode->mInfPtr)) ;
  }
  if (nullptr != inNode->mSupPtr) {
    macroMyNew (mSupPtr, GraphNode_usefulEntitiesGraph (inNode->mSupPtr)) ;
  }
}

//--------------------------------------------------------------------------------------------------

static void buildNodeArray (GraphNode_usefulEntitiesGraph * inNode,
                            GenericUniqueArray <GraphNode_usefulEntitiesGraph *> & ioNodeArray) {
  if (nullptr != inNode) {
    macroAssert (ioNodeArray ((int32_t) inNode->mNodeID COMMA_HERE) == nullptr, "ioNodeArray (%lld COMMA_HERE) != nullptr", inNode->mNodeID, 0) ;
    ioNodeArray ((int32_t) inNode->mNodeID COMMA_HERE) = inNode ;
    buildNodeArray (inNode->mInfPtr, ioNodeArray) ;
    buildNodeArray (inNode->mSupPtr, ioNodeArray) ;
  }
}

//--------------------------------------------------------------------------------------------------

void SharedGraph_usefulEntitiesGraph::copyFrom (const SharedGraph_usefulEntitiesGraph * inSource) {
  macroUniqueSharedObject (this) ;
  if (nullptr != inSource->mRoot) {
    macroMyNew (mRoot, GraphNode_usefulEntitiesGraph (inSource->mRoot)) ;
    mNodeArray.appendObjects (inSource->mNodeArray.count (), nullptr) ;
    buildNodeArray (mRoot, mNodeArray) ;
    mDirectedGraph = inSource->mDirectedGraph ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkGraph (HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

void SharedGraph_usefulEntitiesGraph::description (String & ioString,
                                const int32_t /* inIndentation */) const {
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (mDirectedGraph.nodeCount ()) ;
  ioString.appendCString (" node") ;
  ioString.appendCString ((mDirectedGraph.nodeCount () > 1) ? "s" : "") ;
  ioString.appendCString (", ") ;
  ioString.appendUnsigned (mDirectedGraph.edgeCount ()) ;
  ioString.appendCString (" edge") ;
  ioString.appendCString ((mDirectedGraph.edgeCount () > 1) ? "s" : "") ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void SharedGraph_usefulEntitiesGraph::checkGraph (LOCATION_ARGS) const {
    GenericUniqueArray <GraphNode_usefulEntitiesGraph *> nodeArray (mNodeArray.count () COMMA_HERE) ;
    nodeArray.appendObjects (mNodeArray.count (), nullptr) ;
    buildNodeArray (mRoot, nodeArray) ;
    macroAssertThere (nodeArray.count() == mNodeArray.count (), "nodeArray.count() == %lld != mNodeArray.count () %lld", nodeArray.count(), mNodeArray.count ()) ;
    for (int32_t i=0 ; i<nodeArray.count() ; i++) {
      macroAssertThere (nodeArray (i COMMA_HERE) == mNodeArray (i COMMA_HERE), "nodeArray.(%lld) != mNodeArray.(%lld)", i, i) ;
      macroAssertThere (mDirectedGraph.isNodeDefined ((uint32_t) i), "! mDirectedGraph.isNodeDefined (i) : %lld != 0", i, 0) ;
    }
  }
#endif

//--------------------------------------------------------------------------------------------------
//    GGS_usefulEntitiesGraph
//--------------------------------------------------------------------------------------------------

GGS_usefulEntitiesGraph::GGS_usefulEntitiesGraph (void) :
AC_GALGAS_root (),
mSharedGraph (nullptr) {
}

//--------------------------------------------------------------------------------------------------

GGS_usefulEntitiesGraph::~ GGS_usefulEntitiesGraph (void) {
  macroDetachSharedObject (mSharedGraph) ;
}

//--------------------------------------------------------------------------------------------------

GGS_usefulEntitiesGraph::GGS_usefulEntitiesGraph (const GGS_usefulEntitiesGraph & inSource) :
AC_GALGAS_root (),
mSharedGraph (nullptr) {
  macroAssignSharedObject (mSharedGraph, inSource.mSharedGraph) ;
}

//--------------------------------------------------------------------------------------------------

GGS_usefulEntitiesGraph & GGS_usefulEntitiesGraph::operator = (const GGS_usefulEntitiesGraph & inSource) {
  macroAssignSharedObject (mSharedGraph, inSource.mSharedGraph) ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::makeNewEmptyGraph (LOCATION_ARGS) {
  macroMyNew (mSharedGraph, SharedGraph_usefulEntitiesGraph (THERE)) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<graph @") ;
  ioString.appendCString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    mSharedGraph->description (ioString, inIndentation) ;
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

uint32_t GGS_usefulEntitiesGraph::count () const {
  uint32_t result = 0 ;
  if (isValid ()) {
    result = mSharedGraph->allNodeCount () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_usefulEntitiesGraph::getter_count (UNUSED_LOCATION_ARGS) const {
  return GGS_uint (count ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::drop (void) {
  macroDetachSharedObject (mSharedGraph) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::insulateGraph (LOCATION_ARGS) {
  if ((mSharedGraph != nullptr) && !mSharedGraph->isUniquelyReferenced ()) {
    SharedGraph_usefulEntitiesGraph * p = nullptr ;
    macroMyNew (p, SharedGraph_usefulEntitiesGraph (THERE)) ;
    p->copyFrom (mSharedGraph) ;
    macroAssignSharedObject (mSharedGraph, p) ;
    macroDetachSharedObject (p) ;
    #ifndef DO_NOT_GENERATE_CHECKINGS
      mSharedGraph->checkGraph (HERE) ;
    #endif
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark getter_hasKey
#endif

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_usefulEntitiesGraph::getter_isNodeDefined (const GGS_string & inKey
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = mSharedGraph->isNodeDefined (inKey.stringValue ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool SharedGraph_usefulEntitiesGraph::isNodeDefined (const String & inKey) const {
  bool result = false ;
  for (int32_t i=0 ; (i<mNodeArray.count ()) && !result ; i++) {
    const GraphNode_usefulEntitiesGraph * p = mNodeArray (i COMMA_HERE) ;
    result = p->mIsDefined && (p->mKey == inKey) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark getter_locationForKey
#endif

//--------------------------------------------------------------------------------------------------

GGS_location GGS_usefulEntitiesGraph::getter_locationForKey (const GGS_string & inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    result = mSharedGraph->locationForKey (inKey.stringValue (), inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location SharedGraph_usefulEntitiesGraph::locationForKey (const String & inKey,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  bool found = false ;
  bool ok = false ;
  for (int32_t i=0 ; (i<mNodeArray.count ()) && !found ; i++) {
    const GraphNode_usefulEntitiesGraph * p = mNodeArray (i COMMA_HERE) ;
    found = p->mKey == inKey ;
    if (found && p->mIsDefined) {
      ok = true ;
      result = p->mDefinitionLocation ;
    }
  }
  if (!ok) {
    inCompiler->emitSemanticError (
      GGS_location (),
      String ("graph locationForKey: node '") + inKey + String ("' is undefined"),
      GenericArray <FixItDescription> ()
      COMMA_THERE
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark getter_keyList
#endif

//--------------------------------------------------------------------------------------------------

GGS__5B_string_5D_ SharedGraph_usefulEntitiesGraph::keyList (void) const {
  GGS__5B_string_5D_ result = GGS__5B_string_5D_::init (nullptr COMMA_HERE) ;
  for (int32_t i=0 ; i<mNodeArray.count () ; i++) {
    result.plusPlusAssignOperation (mNodeArray (i COMMA_HERE)->mKey COMMA_HERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_string_5D_ GGS_usefulEntitiesGraph::getter_keyList (UNUSED_LOCATION_ARGS) const {
  GGS__5B_string_5D_ result ;
  if (isValid ()) {
    result = mSharedGraph->keyList () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark getter_lkeyList
#endif

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ SharedGraph_usefulEntitiesGraph::lkeyList (void) const {
  GGS__5B_lstring_5D_ result = GGS__5B_lstring_5D_::init (nullptr COMMA_HERE) ;
  for (int32_t i=0 ; i<mNodeArray.count () ; i++) {
    const GraphNode_usefulEntitiesGraph * p = mNodeArray (i COMMA_HERE) ;
    GGS_location loc = p->mDefinitionLocation ;
    if (! loc.isValid ()) {
      loc = GGS_location::class_func_nowhere (HERE) ;
    }
    result.plusPlusAssignOperation (GGS_lstring (p->mKey, loc) COMMA_HERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS_usefulEntitiesGraph::getter_lkeyList (UNUSED_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ result ;
  if (isValid ()) {
    result = mSharedGraph->lkeyList () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark internalFindNode
#endif

//--------------------------------------------------------------------------------------------------

static const GraphNode_usefulEntitiesGraph * findNode (const String & inKey,
                                   const GraphNode_usefulEntitiesGraph * inNode) {
  const GraphNode_usefulEntitiesGraph * result = nullptr ;
  while ((nullptr != inNode) && (result == nullptr)) {
    const int32_t r = inKey.compare (inNode->mKey) ;
    if (r < 0) {
      inNode = inNode->mInfPtr ;
    }else if (r > 0) {
      inNode = inNode->mSupPtr ;
    }else{
      result = inNode ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark graph
#endif

//--------------------------------------------------------------------------------------------------

void GraphNode_usefulEntitiesGraph::accumulateNodes (GGS__5B_lstring_5D_ & outNodeList) const {
  outNodeList.plusPlusAssignOperation (mElement COMMA_HERE) ;
  if (mInfPtr != nullptr) {
    mInfPtr->accumulateNodes (outNodeList) ;
  }
  if (mSupPtr != nullptr) {
    mSupPtr->accumulateNodes (outNodeList) ;
  }
}

//--------------------------------------------------------------------------------------------------

void SharedGraph_usefulEntitiesGraph::graph (GGS__5B_lstring_5D_ & outNodeList) const {
  if (mRoot != nullptr) {
    mRoot->accumulateNodes (outNodeList) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS_usefulEntitiesGraph::graph (void) const {
  GGS__5B_lstring_5D_ result ;
  if (isValid ()) {
    mSharedGraph->graph (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark subGraph
#endif

//--------------------------------------------------------------------------------------------------

void SharedGraph_usefulEntitiesGraph::subGraph (GGS_usefulEntitiesGraph & outResultingGraph,
                            const GGS__5B_lstring_5D_ & inStartNodes,
                            const GGS_stringset & inNodesToExclude,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const {
//--- Build start node set
  UInt32Set startNodeSet ;
  UpEnumerator__5B_lstring_5D_ enumerator1 (inStartNodes) ;
  while (enumerator1.hasCurrentObject ()) {
    const GraphNode_usefulEntitiesGraph * nodePtr = findNode (enumerator1.current (THERE).mProperty_string.stringValue(), root()) ;
    if (nullptr == nodePtr) {
      String message ("subgraphFromNodes: '") ;
      message.appendString (enumerator1.current (THERE).mProperty_string.stringValue()) ;
      message.appendCString ("' is not a declared node, cannot start from it") ;
      inCompiler->emitSemanticError (
        enumerator1.current (THERE).mProperty_location,
        message,
        GenericArray <FixItDescription> ()
        COMMA_THERE
      ) ;
    }else{
      startNodeSet.add (nodePtr->mNodeID) ;
    }
    enumerator1.gotoNextObject () ;
  }
//--- Build node to exclude set
  UInt32Set nodesToExcludeSet ;
  UpEnumerator_stringset enumerator2 (inNodesToExclude) ;
  while (enumerator2.hasCurrentObject ()) {
    const GraphNode_usefulEntitiesGraph * nodePtr = findNode (enumerator2.current_key (THERE).stringValue(), root()) ;
    if (nullptr == nodePtr) {
      String message ("subgraphFromNodes: '") ;
      message.appendString (enumerator2.current_key (THERE).stringValue()) ;
      message.appendCString ("' is not a declared node, cannot be excluded") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      nodesToExcludeSet.add (nodePtr->mNodeID) ;
    }
    enumerator2.gotoNextObject () ;
  }
//--- Build sub graph
  const DirectedGraph theSubGraph = mDirectedGraph.subGraphFromNodes (
    startNodeSet,
    nodesToExcludeSet
  ) ;
//--- Enter nodes
  GenericUniqueArray <uint32_t> nodeArray ; theSubGraph.getNodeValueArray (nodeArray) ;
  for (int32_t i=0 ; i<nodeArray.count () ; i++) {
    const uint32_t nodeIndex = nodeArray (i COMMA_HERE) ;
    const GraphNode_usefulEntitiesGraph * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_THERE) ;
    GGS_lstring lkey ;
    lkey.mProperty_string = nodePtr->mKey ;
    lkey.mProperty_location = nodePtr->mDefinitionLocation ;
    outResultingGraph.internalAddNode (
      lkey,
      "subgraphFromNodes Internal error",
      nodePtr->mElement,
      inCompiler
      COMMA_THERE
    ) ;
  }
//--- Enter edges
  GenericUniqueArray <GraphEdge> edgeArray ; theSubGraph.getEdges (edgeArray) ;
  for (int32_t i=0 ; i<edgeArray.count () ; i++) {
    const uint32_t sourceNodeIndex = edgeArray (i COMMA_HERE).mSource ;
    const GraphNode_usefulEntitiesGraph * sourceNodePtr = mNodeArray ((int32_t) sourceNodeIndex COMMA_THERE) ;
    GGS_lstring source ;
    source.mProperty_string = sourceNodePtr->mKey ;
    source.mProperty_location = sourceNodePtr->mDefinitionLocation ;
    const uint32_t targetNodeIndex = edgeArray (i COMMA_HERE).mTarget ;
    const GraphNode_usefulEntitiesGraph * targetNodePtr = mNodeArray ((int32_t) targetNodeIndex COMMA_THERE) ;
    GGS_lstring target ;
    target.mProperty_string = targetNodePtr->mKey ;
    target.mProperty_location = targetNodePtr->mDefinitionLocation ;
    outResultingGraph.setter_addEdge (source, target COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::subGraph (GGS_usefulEntitiesGraph & outResultingGraph,
                                const GGS__5B_lstring_5D_ & inStartNodes,
                                const GGS_stringset & inNodesToExclude,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const {
  if (isValid () && inStartNodes.isValid () && inNodesToExclude.isValid ()) {
    outResultingGraph.makeNewEmptyGraph (THERE) ;
    mSharedGraph->subGraph (
      outResultingGraph,
      inStartNodes,
      inNodesToExclude,
      inCompiler
      COMMA_THERE
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Reversed Graph
#endif

//--------------------------------------------------------------------------------------------------

void SharedGraph_usefulEntitiesGraph::copyReversedGraphFrom (const SharedGraph_usefulEntitiesGraph * inSource) {
  macroUniqueSharedObject (this) ;
  if (nullptr != inSource->mRoot) {
    macroMyNew (mRoot, GraphNode_usefulEntitiesGraph (inSource->mRoot)) ;
    mNodeArray.appendObjects (inSource->mNodeArray.count (), nullptr) ;
    buildNodeArray (mRoot, mNodeArray) ;
    mDirectedGraph = inSource->mDirectedGraph.reversedGraph () ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkGraph (HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::reversedGraphFromGraph (const GGS_usefulEntitiesGraph & inGraph
                                              COMMA_LOCATION_ARGS) {
  macroDetachSharedObject (mSharedGraph) ;
  if (inGraph.isValid ()) {
    macroMyNew (mSharedGraph, SharedGraph_usefulEntitiesGraph (THERE)) ;
    mSharedGraph->copyReversedGraphFrom (inGraph.mSharedGraph) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Object Compare
#endif

//--------------------------------------------------------------------------------------------------

int32_t SharedGraph_usefulEntitiesGraph::graphCompare (const SharedGraph_usefulEntitiesGraph * inOperand) const {
  const int32_t r = int32_t (allNodeCount ()) - int32_t (inOperand->allNodeCount ()) ;
  return r ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_usefulEntitiesGraph::objectCompare (const GGS_usefulEntitiesGraph & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t r = mSharedGraph->graphCompare (inOperand.mSharedGraph) ;
    if (r < 0) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (r > 0) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Node Insertion
#endif

//--------------------------------------------------------------------------------------------------

static void rotateLeft (GraphNode_usefulEntitiesGraph * & ioRootPtr) {
  GraphNode_usefulEntitiesGraph * b = ioRootPtr->mSupPtr ;
  ioRootPtr->mSupPtr = b->mInfPtr ;
  b->mInfPtr = ioRootPtr;

  if (b->mBalance >= 0) {
    ioRootPtr->mBalance += 1 ;
  }else{
    ioRootPtr->mBalance += 1 - b->mBalance ;
  }

  if (ioRootPtr->mBalance > 0) {
    b->mBalance += ioRootPtr->mBalance + 1 ;
  }else{
    b->mBalance += 1 ;
  }
  ioRootPtr = b ;
}

//--------------------------------------------------------------------------------------------------

static void rotateRight (GraphNode_usefulEntitiesGraph * & ioRootPtr) {
  GraphNode_usefulEntitiesGraph * b = ioRootPtr->mInfPtr ;
  ioRootPtr->mInfPtr = b->mSupPtr ;
  b->mSupPtr = ioRootPtr ;

  if (b->mBalance > 0) {
    ioRootPtr->mBalance += -b->mBalance - 1 ;
  }else{
    ioRootPtr->mBalance -= 1 ;
  }
  if (ioRootPtr->mBalance >= 0) {
    b->mBalance -= 1 ;
  }else{
    b->mBalance += ioRootPtr->mBalance - 1 ;
  }
  ioRootPtr = b ;
}

//--------------------------------------------------------------------------------------------------

GraphNode_usefulEntitiesGraph::GraphNode_usefulEntitiesGraph (const String & inKey,
                                                            const uint32_t inNodeID) :
mInfPtr (nullptr),
mSupPtr (nullptr),
mBalance (0),
mKey (inKey),
mNodeID (inNodeID),
mElement (),
mDefinitionLocation (),
mReferenceLocationArray (),
mIsDefined (false) {
}

//--------------------------------------------------------------------------------------------------

GraphNode_usefulEntitiesGraph * SharedGraph_usefulEntitiesGraph::internalInsert (GraphNode_usefulEntitiesGraph * & ioRootPtr,
                                         const String & inKey,
                                         bool & ioExtension) {
  GraphNode_usefulEntitiesGraph * matchingEntry = nullptr ;
  if (ioRootPtr == nullptr) {
    macroMyNew (ioRootPtr, GraphNode_usefulEntitiesGraph (inKey, (uint32_t) mNodeArray.count ())) ;
    mDirectedGraph.addNode ((uint32_t) mNodeArray.count ()) ;
    mNodeArray.appendObject (ioRootPtr) ;
    ioExtension = true ;
    matchingEntry = ioRootPtr ;
  }else{
    macroValidPointer (ioRootPtr) ;
    const int32_t comparaison = ioRootPtr->mKey.compare (inKey) ;
    if (comparaison > 0) {
      matchingEntry = internalInsert (ioRootPtr->mInfPtr, inKey, ioExtension) ;
      if (ioExtension) {
        ioRootPtr->mBalance += 1 ;
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
    }else if (comparaison < 0) {
      matchingEntry = internalInsert (ioRootPtr->mSupPtr, inKey, ioExtension) ;
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
    }else{ // Entry already exists
      matchingEntry = ioRootPtr ;
      ioExtension = false ;
    }
  }
  return matchingEntry ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark internalAddNode
#endif

//--------------------------------------------------------------------------------------------------

GraphNode_usefulEntitiesGraph * SharedGraph_usefulEntitiesGraph::findOrAddNodeForKey (const String & inKey) {
  bool extension = false ; // Unused here
  return internalInsert (mRoot, inKey, extension) ;
}

//--------------------------------------------------------------------------------------------------

void SharedGraph_usefulEntitiesGraph::internalAddNode (const GGS_lstring & inKey,
                                   const char * inErrorMessage,
                                   const GGS_lstring & inElement,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) {
  GraphNode_usefulEntitiesGraph * node = findOrAddNodeForKey (inKey.mProperty_string.stringValue ()) ;
  if (!node->mIsDefined) { // Node exists, but is undefined
    node->mElement = inElement ;
    node->mDefinitionLocation = inKey.mProperty_location ;
    node->mIsDefined = true ;
  }else{ // Error : node redefinition
    GGS_lstring existingKey ;
    existingKey.mProperty_location = node->mDefinitionLocation ;
    existingKey.mProperty_string = GGS_string (node->mKey) ;
    inCompiler->semanticErrorWith_K_L_message (existingKey, inErrorMessage, inKey.mProperty_location COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::internalAddNode (const GGS_lstring & inKey,
                                       const char * inErrorMessage,
                                       const GGS_lstring & inElement,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid () && inElement.isValid ()) {
    insulateGraph (THERE) ;
    macroAssert (nullptr != mSharedGraph, "mSharedGraph == nullptr", 0, 0) ;
    if (nullptr != mSharedGraph) {
      mSharedGraph->internalAddNode (inKey, inErrorMessage, inElement, inCompiler COMMA_THERE) ;
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      mSharedGraph->checkGraph (HERE) ;
    #endif
  }
}


//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark modifier noteNode
#endif

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::setter_noteNode (const GGS_lstring & inKey
                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulateGraph (THERE) ;
    macroAssert (nullptr != mSharedGraph, "mSharedGraph == nullptr", 0, 0) ;
    GraphNode_usefulEntitiesGraph * node = (nullptr == mSharedGraph)
      ? nullptr
      : mSharedGraph->findOrAddNodeForKey (inKey.mProperty_string.stringValue ())
    ;
    if (nullptr != node) {
      node->mReferenceLocationArray.appendObject (inKey.mProperty_location) ;
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      mSharedGraph->checkGraph (HERE) ;
    #endif
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Modifier addEdge
#endif

//--------------------------------------------------------------------------------------------------

void SharedGraph_usefulEntitiesGraph::addEdge (const String & inSourceNodeKey,
                           const GGS_location & inSourceNodeLocation,
                           const String & inTargetNodeKey,
                           const GGS_location & inTargetNodeLocation) {
  GraphNode_usefulEntitiesGraph * sourceNode = findOrAddNodeForKey (inSourceNodeKey) ;
  macroValidPointer (sourceNode) ;
  GraphNode_usefulEntitiesGraph * targetNode = findOrAddNodeForKey (inTargetNodeKey) ;
  macroValidPointer (targetNode) ;
  sourceNode->mReferenceLocationArray.appendObject (inSourceNodeLocation) ;
  targetNode->mReferenceLocationArray.appendObject (inTargetNodeLocation) ;
  mDirectedGraph.addEdge (sourceNode->mNodeID, targetNode->mNodeID) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::setter_addEdge (const GGS_lstring & inSourceNodeKey,
                                      const GGS_lstring & inTargetNodeKey
                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inSourceNodeKey.isValid () && inTargetNodeKey.isValid ()) {
    insulateGraph (HERE) ;
    macroAssert (nullptr != mSharedGraph, "mSharedGraph == nullptr", 0, 0) ;
    if (nullptr != mSharedGraph) {
      mSharedGraph->addEdge (inSourceNodeKey.mProperty_string.stringValue (),
                             inSourceNodeKey.mProperty_location,
                             inTargetNodeKey.mProperty_string.stringValue (),
                             inTargetNodeKey.mProperty_location) ;
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      mSharedGraph->checkGraph (HERE) ;
    #endif
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Output graphviz text
#endif

//--------------------------------------------------------------------------------------------------

String SharedGraph_usefulEntitiesGraph::getter_graphviz (void) const {
  GenericUniqueArray <String> nodeNameArray ;
  for (int32_t i=0 ; i<mNodeArray.count () ; i++) {
    nodeNameArray.appendObject (mNodeArray (i COMMA_HERE)->mKey) ;
  }
  return mDirectedGraph.graphvizString (nodeNameArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_usefulEntitiesGraph::getter_graphviz (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    result = GGS_string (mSharedGraph->getter_graphviz ()) ;
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Output arc list
#endif

//--------------------------------------------------------------------------------------------------

void SharedGraph_usefulEntitiesGraph::edges (GGS__32_stringlist & ioList) const {
  GenericUniqueArray <GraphEdge> edgeArray ; mDirectedGraph.getEdges (edgeArray) ;
  for (int32_t i=0 ; i<edgeArray.count () ; i++) {
    const GraphEdge edge = edgeArray (i COMMA_HERE) ;
    ioList.addAssignOperation (
      mNodeArray ((int32_t) edge.mSource COMMA_HERE)->mKey,
      mNodeArray ((int32_t) edge.mTarget COMMA_HERE)->mKey
      COMMA_HERE
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist GGS_usefulEntitiesGraph::getter_edges (LOCATION_ARGS) const {
  GGS__32_stringlist result ;
  if (isValid ()) {
    result = GGS__32_stringlist::init (nullptr COMMA_THERE) ;
    mSharedGraph->edges (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark getter_undefinedNodeCount
#endif

//--------------------------------------------------------------------------------------------------

static void countUndefinedNodeCount (const GraphNode_usefulEntitiesGraph * inNode, uint32_t & ioCount) {
  if (nullptr != inNode) {
    countUndefinedNodeCount (inNode->mInfPtr, ioCount) ;
    if (! inNode->mIsDefined) {
      ioCount += 1 ;
    }
    countUndefinedNodeCount (inNode->mSupPtr, ioCount) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_usefulEntitiesGraph::getter_undefinedNodeCount (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    uint32_t undefinedNodeCount = 0 ;
    countUndefinedNodeCount (mSharedGraph->root (), undefinedNodeCount) ;
    result = GGS_uint (undefinedNodeCount) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark getter_undefinedNodeKeyList
#endif

//--------------------------------------------------------------------------------------------------

static void buildUndefinedNodeKeyList (const GraphNode_usefulEntitiesGraph * inNode, GGS_stringlist & ioResult) {
  if (nullptr != inNode) {
    buildUndefinedNodeKeyList (inNode->mInfPtr, ioResult) ;
    if (! inNode->mIsDefined) {
      ioResult.addAssignOperation (GGS_string (inNode->mKey) COMMA_HERE) ;
    }
    buildUndefinedNodeKeyList (inNode->mSupPtr, ioResult) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_usefulEntitiesGraph::getter_undefinedNodeKeyList (LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid ()) {
    result = GGS_stringlist::init (nullptr COMMA_THERE) ;
    buildUndefinedNodeKeyList (mSharedGraph->root (), result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Find circularities
#endif

//--------------------------------------------------------------------------------------------------

void SharedGraph_usefulEntitiesGraph::internalFindCircularities (GGS__5B_lstring_5D_ & outInfoList,
                                             GGS__5B_lstring_5D_ & outNodeKeyList) const {
  GenericUniqueArray <uint32_t> nodeArray ; mDirectedGraph.getNodesInvolvedInCircularities (nodeArray) ;
//--- Add nodes
  outInfoList.removeAll () ;
  outNodeKeyList = GGS__5B_lstring_5D_::init (nullptr COMMA_HERE) ;
  for (int32_t i=0 ; i<nodeArray.count () ; i++) {
    const uint32_t nodeIndex = nodeArray (i COMMA_HERE) ;
    const GraphNode_usefulEntitiesGraph * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;
    outInfoList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;
    GGS_lstring lkey ;
    lkey.mProperty_location = nodePtr->mDefinitionLocation ;
    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;
    outNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::internalFindCircularities (GGS__5B_lstring_5D_ & outInfoList,
                                                 GGS__5B_lstring_5D_ & outNodeKeyList
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  outNodeKeyList.drop () ;
  if (isValid ()) {
    mSharedGraph->internalFindCircularities (outInfoList, outNodeKeyList) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Nodes with no predecessor
#endif

//--------------------------------------------------------------------------------------------------

void SharedGraph_usefulEntitiesGraph::internalNodesWithNoPredecessor (GGS__5B_lstring_5D_ & outInfoList,
                                                  GGS__5B_lstring_5D_ & outNodeKeyList) const {
  GenericUniqueArray <uint32_t> nodeArray ; mDirectedGraph.getNodesWithNoPredecessor (nodeArray) ;
//--- Add nodes
  outInfoList.removeAll () ;
  outNodeKeyList = GGS__5B_lstring_5D_::init (nullptr COMMA_HERE) ;
  for (int32_t i=0 ; i<nodeArray.count () ; i++) {
    const uint32_t nodeIndex = nodeArray (i COMMA_HERE) ;
    const GraphNode_usefulEntitiesGraph * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;
    outInfoList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;
    GGS_lstring lkey ;
    lkey.mProperty_location = nodePtr->mDefinitionLocation ;
    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;
    outNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::internalNodesWithNoPredecessor (GGS__5B_lstring_5D_ & outInfoList,
                                                      GGS__5B_lstring_5D_ & outNodeKeyList
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  outNodeKeyList.drop () ;
  if (isValid ()) {
    mSharedGraph->internalNodesWithNoPredecessor (outInfoList, outNodeKeyList) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Nodes with no successor
#endif

//--------------------------------------------------------------------------------------------------

void SharedGraph_usefulEntitiesGraph::internalNodesWithNoSuccessor (GGS__5B_lstring_5D_ & outInfoList,
                                                GGS__5B_lstring_5D_ & outNodeKeyList) const {
  GenericUniqueArray <uint32_t> nodeArray ; mDirectedGraph.getNodesWithNoSuccessor (nodeArray) ;
//--- Add nodes
  outInfoList.removeAll () ;
  outNodeKeyList = GGS__5B_lstring_5D_::init (nullptr COMMA_HERE) ;
  for (int32_t i=0 ; i<nodeArray.count () ; i++) {
    const uint32_t nodeIndex = nodeArray (i COMMA_HERE) ;
    const GraphNode_usefulEntitiesGraph * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;
    outInfoList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;
    GGS_lstring lkey ;
    lkey.mProperty_location = nodePtr->mDefinitionLocation ;
    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;
    outNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::internalNodesWithNoSuccessor (GGS__5B_lstring_5D_ & outInfoList,
                                                    GGS__5B_lstring_5D_ & outNodeKeyList
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  outNodeKeyList.drop () ;
  if (isValid ()) {
    mSharedGraph->internalNodesWithNoSuccessor (outInfoList, outNodeKeyList) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Breath First Topological sort
#endif

//--------------------------------------------------------------------------------------------------

void SharedGraph_usefulEntitiesGraph::internalTopologicalSort (GGS__5B_lstring_5D_ & outSortedList,
                                           GGS__5B_lstring_5D_ & outSortedNodeKeyList,
                                           GGS__5B_lstring_5D_ & outUnsortedList,
                                           GGS__5B_lstring_5D_ & outUnsortedNodeKeyList) const {
  GenericUniqueArray <uint32_t> sortedNodes ;
  GenericUniqueArray <uint32_t> unsortedNodes ;
  mDirectedGraph.topologicalSort (sortedNodes, unsortedNodes) ;
//--- Add sorted nodes
  outSortedList.removeAll () ;
  outSortedNodeKeyList = GGS__5B_lstring_5D_::init (nullptr COMMA_HERE) ;
  for (int32_t i=0 ; i<sortedNodes.count () ; i++) {
    const uint32_t nodeIndex = sortedNodes (i COMMA_HERE) ;
    const GraphNode_usefulEntitiesGraph * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;
    outSortedList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;
    GGS_lstring lkey ;
    lkey.mProperty_location = nodePtr->mDefinitionLocation ;
    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;
    outSortedNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;
  }
//--- Add unsorted nodes
  outUnsortedList.removeAll () ;
  outUnsortedNodeKeyList = GGS__5B_lstring_5D_::init (nullptr COMMA_HERE) ;
  for (int32_t i=0 ; i<unsortedNodes.count () ; i++) {
    const uint32_t nodeIndex = unsortedNodes (i COMMA_HERE) ;
    const GraphNode_usefulEntitiesGraph * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;
    outUnsortedList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;
    GGS_lstring lkey ;
    lkey.mProperty_location = nodePtr->mDefinitionLocation ;
    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;
    outUnsortedNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::internalTopologicalSort (GGS__5B_lstring_5D_ & outSortedList,
                                               GGS__5B_lstring_5D_ & outSortedNodeKeyList,
                                               GGS__5B_lstring_5D_ & outUnsortedList,
                                               GGS__5B_lstring_5D_ & outUnsortedNodeKeyList,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  outSortedNodeKeyList.drop () ;
  outUnsortedNodeKeyList.drop () ;
  if (isValid ()) {
    uint32_t undefinedNodeCount = 0 ;
    countUndefinedNodeCount (mSharedGraph->root (), undefinedNodeCount) ;
    if (0 != undefinedNodeCount) {
      String s ("Cannot apply graph topologicalSort: there ") ;
      if (undefinedNodeCount > 1) {
        s.appendCString ("are ") ;
        s.appendUnsigned (undefinedNodeCount) ;
        s.appendCString (" undefined nodes") ;
      }else{
        s.appendCString ("is 1 undefined node") ;
      }
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }else{
      mSharedGraph->internalTopologicalSort (outSortedList, outSortedNodeKeyList, outUnsortedList, outUnsortedNodeKeyList) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Depth First Topological sort
#endif

//--------------------------------------------------------------------------------------------------

void SharedGraph_usefulEntitiesGraph::internalDepthFirstTopologicalSort (GGS__5B_lstring_5D_ & outSortedList,
                                                     GGS__5B_lstring_5D_ & outSortedNodeKeyList,
                                                     GGS__5B_lstring_5D_ & outUnsortedList,
                                                     GGS__5B_lstring_5D_ & outUnsortedNodeKeyList) const {
  GenericUniqueArray <uint32_t> sortedNodes ;
  GenericUniqueArray <uint32_t> unsortedNodes ;
  mDirectedGraph.depthFirstTopologicalSort (sortedNodes, unsortedNodes) ;
//--- Add sorted nodes
  outSortedList.removeAll () ;
  outSortedNodeKeyList = GGS__5B_lstring_5D_::init (nullptr COMMA_HERE) ;
  for (int32_t i=0 ; i<sortedNodes.count () ; i++) {
    const uint32_t nodeIndex = sortedNodes (i COMMA_HERE) ;
    const GraphNode_usefulEntitiesGraph * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;
    outSortedList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;
    GGS_lstring lkey ;
    lkey.mProperty_location = nodePtr->mDefinitionLocation ;
    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;
    outSortedNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;
  }
//--- Add unsorted nodes
  outUnsortedList.removeAll () ;
  outUnsortedNodeKeyList = GGS__5B_lstring_5D_::init (nullptr COMMA_HERE) ;
  for (int32_t i=0 ; i<unsortedNodes.count () ; i++) {
    const uint32_t nodeIndex = unsortedNodes (i COMMA_HERE) ;
    const GraphNode_usefulEntitiesGraph * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;
    outUnsortedList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;
    GGS_lstring lkey ;
    lkey.mProperty_location = nodePtr->mDefinitionLocation ;
    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;
    outUnsortedNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::internalDepthFirstTopologicalSort (GGS__5B_lstring_5D_ & outSortedList,
                                                         GGS__5B_lstring_5D_ & outSortedNodeKeyList,
                                                         GGS__5B_lstring_5D_ & outUnsortedList,
                                                         GGS__5B_lstring_5D_ & outUnsortedNodeKeyList,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  outSortedNodeKeyList.drop () ;
  outUnsortedNodeKeyList.drop () ;
  if (isValid ()) {
    uint32_t undefinedNodeCount = 0 ;
    countUndefinedNodeCount (mSharedGraph->root (), undefinedNodeCount) ;
    if (0 != undefinedNodeCount) {
      String s ("Cannot apply graph topologicalSort: there ") ;
      if (undefinedNodeCount > 1) {
        s.appendCString ("are ") ;
        s.appendUnsigned (undefinedNodeCount) ;
        s.appendCString (" undefined nodes") ;
      }else{
        s.appendCString ("is 1 undefined node") ;
      }
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }else{
      mSharedGraph->internalDepthFirstTopologicalSort (outSortedList, outSortedNodeKeyList, outUnsortedList, outUnsortedNodeKeyList) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark getter_undefinedNodeReferenceList
#endif

//--------------------------------------------------------------------------------------------------

static void buildUndefinedNodeReferenceList (const GraphNode_usefulEntitiesGraph * inNode,
                                             GGS__5B_lstring_5D_ & ioResult) {
  if (nullptr != inNode) {
    buildUndefinedNodeReferenceList (inNode->mInfPtr, ioResult) ;
    if (!inNode->mIsDefined) {
      GGS_lstring lkey ;
      lkey.mProperty_string = GGS_string (inNode->mKey) ;
      for (int32_t i=0 ; i < inNode->mReferenceLocationArray.count () ; i++) {
        lkey.mProperty_location = inNode->mReferenceLocationArray (i COMMA_HERE) ;
        ioResult.plusPlusAssignOperation (lkey COMMA_HERE) ;
      }
    }
    buildUndefinedNodeReferenceList (inNode->mSupPtr, ioResult) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS_usefulEntitiesGraph::getter_undefinedNodeReferenceList (LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ result ;
  if (isValid ()) {
    result = GGS__5B_lstring_5D_::init (nullptr COMMA_THERE) ;
    buildUndefinedNodeReferenceList (mSharedGraph->root (), result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Modifier removeEdgesToNode
#endif

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::setter_removeEdgesToNode (const GGS_string & inNodeName,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inNodeName.isValid ()) {
    insulateGraph (HERE) ;
    macroAssert (nullptr != mSharedGraph, "mSharedGraph == nullptr", 0, 0) ;
    if (nullptr != mSharedGraph) {
      mSharedGraph->removeEdgesToNode (inNodeName.stringValue (), inCompiler COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void SharedGraph_usefulEntitiesGraph::removeEdgesToNode (const String & inNodeName,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
//--- Find node
  const GraphNode_usefulEntitiesGraph * node = findNode (inNodeName, mRoot) ;
  if (nullptr == node) {
    String s ("graph removeEdgesToNode: node '") ;
    s.appendString (inNodeName) ;
    s.appendCString ("' does not exist") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const uint32_t nodeIndex = node->mNodeID ;
    mDirectedGraph.removeEdgesToNode (nodeIndex COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Modifier removeEdgesToDominators
#endif

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::setter_removeEdgesToDominators (LOCATION_ARGS) {
  if (isValid ()) {
    insulateGraph (HERE) ;
    macroAssert (nullptr != mSharedGraph, "mSharedGraph == nullptr", 0, 0) ;
    if (nullptr != mSharedGraph) {
      mSharedGraph->removeEdgesToDominators (THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void SharedGraph_usefulEntitiesGraph::removeEdgesToDominators (LOCATION_ARGS) {
//--- Find start nodes
  GenericUniqueArray <uint32_t> startNodes ; mDirectedGraph.getNodesWithNoPredecessor (startNodes) ;
//--- Add a dummy start node for handling case where there several start nodes
  const uint32_t dummyNodeIndex = mDirectedGraph.unusedNodeIndex () ;
//--- Add edges from dummy node to start nodes
  for (int32_t i=0 ; i<startNodes.count () ; i++) {
    mDirectedGraph.addEdge (dummyNodeIndex, startNodes (i COMMA_HERE)) ;
  }
//--- Remove edge to dominator
  mDirectedGraph.removeEdgesToDominator (THERE) ;
//--- Remove dummy node
  mDirectedGraph.removeNode (dummyNodeIndex) ;
}

//--------------------------------------------------------------------------------------------------

GGS_usefulEntitiesGraph GGS_usefulEntitiesGraph::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_usefulEntitiesGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::setter_addNode (GGS_lstring inKey,
                                              GGS_lstring inElement,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  const char * kErrorMessage = "the '%K' entity is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, inElement, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::method_topologicalSort (GGS__5B_lstring_5D_ & outSortedList,
                                                      GGS__5B_lstring_5D_ & outSortedKeyList,
                                                      GGS__5B_lstring_5D_ & outUnsortedList,
                                                      GGS__5B_lstring_5D_ & outUnsortedKeyList,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ sortedList ;
  GGS__5B_lstring_5D_ unsortedList ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS__5B_lstring_5D_ (sortedList) ;
  outUnsortedList = GGS__5B_lstring_5D_ (unsortedList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::method_depthFirstTopologicalSort (GGS__5B_lstring_5D_ & outSortedList,
                                                                GGS__5B_lstring_5D_ & outSortedKeyList,
                                                                GGS__5B_lstring_5D_ & outUnsortedList,
                                                                GGS__5B_lstring_5D_ & outUnsortedKeyList,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ sortedList ;
  GGS__5B_lstring_5D_ unsortedList ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS__5B_lstring_5D_ (sortedList) ;
  outUnsortedList = GGS__5B_lstring_5D_ (unsortedList) ;
}


//--------------------------------------------------------------------------------------------------

GGS_usefulEntitiesGraph GGS_usefulEntitiesGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GGS_usefulEntitiesGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::method_circularities (GGS__5B_lstring_5D_ & outInfoList,
                                                    GGS__5B_lstring_5D_ & outKeyList
                                                    COMMA_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS__5B_lstring_5D_ (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::method_nodesWithNoSuccessor (GGS__5B_lstring_5D_ & outInfoList,
                                                           GGS__5B_lstring_5D_ & outKeyList
                                                           COMMA_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS__5B_lstring_5D_ (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::method_nodesWithNoPredecessor (GGS__5B_lstring_5D_ & outInfoList,
                                                             GGS__5B_lstring_5D_ & outKeyList
                                                             COMMA_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS__5B_lstring_5D_ (infoList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_usefulEntitiesGraph GGS_usefulEntitiesGraph::getter_subgraphFromNodes (const GGS__5B_lstring_5D_ & inStartKeyList,
                                                                           const GGS_stringset & inKeysToExclude,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_usefulEntitiesGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS_usefulEntitiesGraph::getter_nodeList (UNUSED_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ resultingList ;
  if (isValid ()) {
    resultingList = graph () ;
  }
  return resultingList ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS_usefulEntitiesGraph::getter_accessibleNodesFrom (const GGS__5B_lstring_5D_ & inStartKeyList,
                                                                         const GGS_stringset & inNodesToExclude,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ result ;
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

GGS_bool GGS_uselessEntityLocationMap::getter_contains (const GGS_string & inKey
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
//Class for element of '@_5B_commandLineOptionAST_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_commandLineOptionAST_5D_::GGS__5B_commandLineOptionAST_5D_ (void) :
AC_GALGAS_root (),
mSharedArray () {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_commandLineOptionAST_5D_::GGS__5B_commandLineOptionAST_5D_ (const GGS__5B_commandLineOptionAST_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_commandLineOptionAST_5D_ & GGS__5B_commandLineOptionAST_5D_::operator = (const GGS__5B_commandLineOptionAST_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_commandLineOptionAST_5D_ GGS__5B_commandLineOptionAST_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_commandLineOptionAST_5D_ result ;
  result.mSharedArray.setCapacity (16) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS__5B_commandLineOptionAST_5D_::isValid (void) const {
  return mSharedArray.isAllocated () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_commandLineOptionAST_5D_::drop (void) {
  mSharedArray.removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_commandLineOptionAST_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mSharedArray.setCapacity (16) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_commandLineOptionAST_5D_::plusPlusAssignOperation (const GGS_commandLineOptionAST & inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mSharedArray.appendObject (inValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_commandLineOptionAST_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_commandLineOptionAST_5D_ GGS__5B_commandLineOptionAST_5D_::add_operation (const GGS__5B_commandLineOptionAST_5D_ & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_commandLineOptionAST_5D_ result ;
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

void GGS__5B_commandLineOptionAST_5D_::description (String & ioString,
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

void GGS__5B_commandLineOptionAST_5D_::plusAssignOperation (const GGS__5B_commandLineOptionAST_5D_ inOperand,
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

void GGS__5B_commandLineOptionAST_5D_::setter_append (const GGS_commandLineOptionAST inValue,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_commandLineOptionAST_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_commandLineOptionAST_5D_::setter_insertAtIndex (const GGS_commandLineOptionAST inValue,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_commandLineOptionAST_5D_::setter_removeAtIndex (GGS_commandLineOptionAST & outValue,
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

void GGS__5B_commandLineOptionAST_5D_::setter_popFirst (GGS_commandLineOptionAST & outValue,
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

void GGS__5B_commandLineOptionAST_5D_::setter_popLast (GGS_commandLineOptionAST & outValue,
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

void GGS__5B_commandLineOptionAST_5D_::method_first (GGS_commandLineOptionAST & outValue,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray (0 COMMA_THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_commandLineOptionAST_5D_::method_last (GGS_commandLineOptionAST & outValue,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray.lastObject (THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionAST GGS__5B_commandLineOptionAST_5D_::readSubscript__3F_ (const GGS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_commandLineOptionAST result ;
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
// Down Enumerator for @_5B_commandLineOptionAST_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_commandLineOptionAST_5D_::DownEnumerator__5B_commandLineOptionAST_5D_ (const GGS__5B_commandLineOptionAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionAST DownEnumerator__5B_commandLineOptionAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionAST DownEnumerator__5B_commandLineOptionAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_commandLineOptionAST_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_commandLineOptionAST_5D_::UpEnumerator__5B_commandLineOptionAST_5D_ (const GGS__5B_commandLineOptionAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionAST UpEnumerator__5B_commandLineOptionAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionAST UpEnumerator__5B_commandLineOptionAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[commandLineOptionAST] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_commandLineOptionAST_5D_ ("[commandLineOptionAST]",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_commandLineOptionAST_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_commandLineOptionAST_5D_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__5B_commandLineOptionAST_5D_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__5B_commandLineOptionAST_5D_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_commandLineOptionAST_5D_ GGS__5B_commandLineOptionAST_5D_::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS__5B_commandLineOptionAST_5D_ result ;
  const GGS__5B_commandLineOptionAST_5D_ * p = (const GGS__5B_commandLineOptionAST_5D_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__5B_commandLineOptionAST_5D_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("[commandLineOptionAST]", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_bool GGS_headerCompositionMap::getter_contains (const GGS_string & inKey
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

GGS_bool GGS_headerRepartitionMap::getter_contains (const GGS_string & inKey
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
// @externProcedureDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_externProcedureDeclarationAST::objectCompare (const GGS_externProcedureDeclarationAST & inOperand) const {
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

GGS_externProcedureDeclarationAST::GGS_externProcedureDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_externProcedureDeclarationAST GGS_externProcedureDeclarationAST::
init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure (const GGS_bool & in_isPredefined,
                                                                   const GGS_bool & in_isFilePrivate,
                                                                   const GGS_lstring & in_mRoutineName,
                                                                   const GGS_formalParameterListAST & in_mFormalArgumentListAST,
                                                                   const GGS_bool & in_usefullProcedure,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cPtr_externProcedureDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_externProcedureDeclarationAST (inCompiler COMMA_THERE)) ;
  object->externProcedureDeclarationAST_init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure (in_isPredefined, in_isFilePrivate, in_mRoutineName, in_mFormalArgumentListAST, in_usefullProcedure, inCompiler) ;
  const GGS_externProcedureDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_externProcedureDeclarationAST::
externProcedureDeclarationAST_init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure (const GGS_bool & in_isPredefined,
                                                                                                 const GGS_bool & in_isFilePrivate,
                                                                                                 const GGS_lstring & in_mRoutineName,
                                                                                                 const GGS_formalParameterListAST & in_mFormalArgumentListAST,
                                                                                                 const GGS_bool & in_usefullProcedure,
                                                                                                 Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_isFilePrivate = in_isFilePrivate ;
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mFormalArgumentListAST = in_mFormalArgumentListAST ;
  mProperty_usefullProcedure = in_usefullProcedure ;
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureDeclarationAST::GGS_externProcedureDeclarationAST (const cPtr_externProcedureDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externProcedureDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_externProcedureDeclarationAST::readProperty_isFilePrivate (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_externProcedureDeclarationAST * p = (cPtr_externProcedureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externProcedureDeclarationAST) ;
    return p->mProperty_isFilePrivate ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_externProcedureDeclarationAST::readProperty_mRoutineName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_externProcedureDeclarationAST * p = (cPtr_externProcedureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externProcedureDeclarationAST) ;
    return p->mProperty_mRoutineName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST GGS_externProcedureDeclarationAST::readProperty_mFormalArgumentListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalParameterListAST () ;
  }else{
    cPtr_externProcedureDeclarationAST * p = (cPtr_externProcedureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externProcedureDeclarationAST) ;
    return p->mProperty_mFormalArgumentListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_externProcedureDeclarationAST::readProperty_usefullProcedure (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_externProcedureDeclarationAST * p = (cPtr_externProcedureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externProcedureDeclarationAST) ;
    return p->mProperty_usefullProcedure ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @externProcedureDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_externProcedureDeclarationAST::cPtr_externProcedureDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_isFilePrivate (),
mProperty_mRoutineName (),
mProperty_mFormalArgumentListAST (),
mProperty_usefullProcedure () {
}

//--------------------------------------------------------------------------------------------------

cPtr_externProcedureDeclarationAST::cPtr_externProcedureDeclarationAST (const GGS_bool & in_isPredefined,
                                                                        const GGS_bool & in_isFilePrivate,
                                                                        const GGS_lstring & in_mRoutineName,
                                                                        const GGS_formalParameterListAST & in_mFormalArgumentListAST,
                                                                        const GGS_bool & in_usefullProcedure,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_externProcedureDeclarationAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_externProcedureDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_externProcedureDeclarationAST (mProperty_isPredefined, mProperty_isFilePrivate, mProperty_mRoutineName, mProperty_mFormalArgumentListAST, mProperty_usefullProcedure, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @externProcedureDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externProcedureDeclarationAST ("externProcedureDeclarationAST",
                                                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externProcedureDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externProcedureDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externProcedureDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externProcedureDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureDeclarationAST GGS_externProcedureDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_externProcedureDeclarationAST result ;
  const GGS_externProcedureDeclarationAST * p = (const GGS_externProcedureDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externProcedureDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externProcedureDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
// @routinePrototypeDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_routinePrototypeDeclarationForGeneration::objectCompare (const GGS_routinePrototypeDeclarationForGeneration & inOperand) const {
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

GGS_routinePrototypeDeclarationForGeneration::GGS_routinePrototypeDeclarationForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_routinePrototypeDeclarationForGeneration GGS_routinePrototypeDeclarationForGeneration::
init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21_ (const GGS_string & in_infoMessage,
                                                                                              const GGS_bool & in_generateHeader,
                                                                                              const GGS_string & in_implementationCppFileName,
                                                                                              const GGS_string & in_routineMangledName,
                                                                                              const GGS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  cPtr_routinePrototypeDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_routinePrototypeDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->routinePrototypeDeclarationForGeneration_init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21_ (in_infoMessage, in_generateHeader, in_implementationCppFileName, in_routineMangledName, in_mFormalArgumentList, inCompiler) ;
  const GGS_routinePrototypeDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_routinePrototypeDeclarationForGeneration::
routinePrototypeDeclarationForGeneration_init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21_ (const GGS_string & in_infoMessage,
                                                                                                                                       const GGS_bool & in_generateHeader,
                                                                                                                                       const GGS_string & in_implementationCppFileName,
                                                                                                                                       const GGS_string & in_routineMangledName,
                                                                                                                                       const GGS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                                                                                                       Compiler * /* inCompiler */) {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_routineMangledName = in_routineMangledName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
}

//--------------------------------------------------------------------------------------------------

GGS_routinePrototypeDeclarationForGeneration::GGS_routinePrototypeDeclarationForGeneration (const cPtr_routinePrototypeDeclarationForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_routinePrototypeDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_routinePrototypeDeclarationForGeneration::readProperty_routineMangledName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_routinePrototypeDeclarationForGeneration * p = (cPtr_routinePrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routinePrototypeDeclarationForGeneration) ;
    return p->mProperty_routineMangledName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration GGS_routinePrototypeDeclarationForGeneration::readProperty_mFormalArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalParameterListForGeneration () ;
  }else{
    cPtr_routinePrototypeDeclarationForGeneration * p = (cPtr_routinePrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routinePrototypeDeclarationForGeneration) ;
    return p->mProperty_mFormalArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @routinePrototypeDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_routinePrototypeDeclarationForGeneration::cPtr_routinePrototypeDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_routineMangledName (),
mProperty_mFormalArgumentList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_routinePrototypeDeclarationForGeneration::cPtr_routinePrototypeDeclarationForGeneration (const GGS_string & in_infoMessage,
                                                                                              const GGS_bool & in_generateHeader,
                                                                                              const GGS_string & in_implementationCppFileName,
                                                                                              const GGS_string & in_routineMangledName,
                                                                                              const GGS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_infoMessage, in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_routineMangledName (),
mProperty_mFormalArgumentList () {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_routineMangledName = in_routineMangledName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_routinePrototypeDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration ;
}

void cPtr_routinePrototypeDeclarationForGeneration::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@routinePrototypeDeclarationForGeneration:") ;
  mProperty_infoMessage.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
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

AbstractPtrClass * cPtr_routinePrototypeDeclarationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_routinePrototypeDeclarationForGeneration (mProperty_infoMessage, mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_routineMangledName, mProperty_mFormalArgumentList, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @routinePrototypeDeclarationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration ("routinePrototypeDeclarationForGeneration",
                                                                                             & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routinePrototypeDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routinePrototypeDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routinePrototypeDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routinePrototypeDeclarationForGeneration GGS_routinePrototypeDeclarationForGeneration::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_routinePrototypeDeclarationForGeneration result ;
  const GGS_routinePrototypeDeclarationForGeneration * p = (const GGS_routinePrototypeDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routinePrototypeDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routinePrototypeDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
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

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
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

GGS_bool GGS_lexicalExplicitTokenListMap::getter_contains (const GGS_string & inKey
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
      inCompiler->onTheFlyRunTimeError ("'popSmallest' proc invoked on an empty list" COMMA_THERE) ;
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
      inCompiler->onTheFlyRunTimeError ("'popGreatest' proc invoked on an empty list" COMMA_THERE) ;
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
      inCompiler->onTheFlyRunTimeError ("'smallest' proc invoked on an empty list" COMMA_THERE) ;
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
      inCompiler->onTheFlyRunTimeError ("'greatest' proc invoked on an empty list" COMMA_THERE) ;
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

GGS_bool GGS_lexicalExplicitTokenListMapMap::getter_contains (const GGS_string & inKey
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

GGS_bool GGS_lexicalMessageMap::getter_contains (const GGS_string & inKey
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

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
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

GGS_bool GGS_lexicalRoutineMap::getter_contains (const GGS_string & inKey
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

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
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

