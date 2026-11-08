#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

//--------------------------------------------------------------------------------------------------
//Class for element of '@terminalLabelListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_terminalLabelListAST : public CollectionElementPtr {
  public: GGS_terminalLabelListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_terminalLabelListAST (const GGS_lstring & in_mTerminal,
                                                     const GGS_uint & in_mDisplayFlags
                                                     COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_terminalLabelListAST (const GGS_terminalLabelListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_terminalLabelListAST::CollectionElementPtr_terminalLabelListAST (const GGS_lstring & in_mTerminal,
                                                                                      const GGS_uint & in_mDisplayFlags
                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mTerminal, in_mDisplayFlags) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_terminalLabelListAST::CollectionElementPtr_terminalLabelListAST (const GGS_terminalLabelListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mTerminal, inElement.mProperty_mDisplayFlags) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_terminalLabelListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_terminalLabelListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_terminalLabelListAST (mObject.mProperty_mTerminal, mObject.mProperty_mDisplayFlags COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @terminalLabelListAST
//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST::GGS_terminalLabelListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST::GGS_terminalLabelListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_terminalLabelListAST * p = (CollectionElementPtr_terminalLabelListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_terminalLabelListAST) ;
    const GGS_terminalLabelListAST_2E_element element (p->mObject.mProperty_mTerminal, p->mObject.mProperty_mDisplayFlags) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                          const GGS_lstring & in_mTerminal,
                                                          const GGS_uint & in_mDisplayFlags
                                                          COMMA_LOCATION_ARGS) {
  CollectionElementPtr_terminalLabelListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_terminalLabelListAST (in_mTerminal, in_mDisplayFlags COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_terminalLabelListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_terminalLabelListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::description (String & ioString,
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
      ioString.appendString ("mTerminal:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTerminal.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mDisplayFlags:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mDisplayFlags.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST GGS_terminalLabelListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_terminalLabelListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::plusPlusAssignOperation (const GGS_terminalLabelListAST_2E_element & inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST GGS_terminalLabelListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                             const GGS_uint & inOperand1
                                                                             COMMA_LOCATION_ARGS) {
  const GGS_terminalLabelListAST_2E_element element (inOperand0, inOperand1) ;
  GGS_terminalLabelListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                   const GGS_uint & inOperand1
                                                   COMMA_LOCATION_ARGS) {
  const GGS_terminalLabelListAST_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::setter_append (const GGS_lstring inOperand0,
                                              const GGS_uint inOperand1,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  const GGS_terminalLabelListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                     const GGS_uint inOperand1,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const GGS_terminalLabelListAST_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_terminalLabelListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                     GGS_uint & outOperand1,
                                                     const GGS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mTerminal ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mDisplayFlags ;
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

void GGS_terminalLabelListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                GGS_uint & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTerminal ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mDisplayFlags ;
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

void GGS_terminalLabelListAST::setter_popLast (GGS_lstring & outOperand0,
                                               GGS_uint & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTerminal ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mDisplayFlags ;
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

void GGS_terminalLabelListAST::method_first (GGS_lstring & outOperand0,
                                             GGS_uint & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTerminal ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mDisplayFlags ;
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

void GGS_terminalLabelListAST::method_last (GGS_lstring & outOperand0,
                                            GGS_uint & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTerminal ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mDisplayFlags ;
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

GGS_terminalLabelListAST GGS_terminalLabelListAST::add_operation (const GGS_terminalLabelListAST & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_terminalLabelListAST result ;
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

GGS_terminalLabelListAST GGS_terminalLabelListAST::subList (const int32_t inStart,
                                                            const int32_t inLength,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_terminalLabelListAST result ;
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

GGS_terminalLabelListAST GGS_terminalLabelListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_terminalLabelListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST GGS_terminalLabelListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_terminalLabelListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST GGS_terminalLabelListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_terminalLabelListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST::plusAssignOperation (const GGS_terminalLabelListAST inList,
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

void GGS_terminalLabelListAST::setter_setMTerminalAtIndex (GGS_lstring inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTerminal = inOperand ;
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

GGS_lstring GGS_terminalLabelListAST::getter_mTerminalAtIndex (const GGS_uint & inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTerminal ;
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

void GGS_terminalLabelListAST::setter_setMDisplayFlagsAtIndex (GGS_uint inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mDisplayFlags = inOperand ;
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

GGS_uint GGS_terminalLabelListAST::getter_mDisplayFlagsAtIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mDisplayFlags ;
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
// Down Enumerator for @terminalLabelListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_terminalLabelListAST::DownEnumerator_terminalLabelListAST (const GGS_terminalLabelListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST_2E_element DownEnumerator_terminalLabelListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_terminalLabelListAST::current_mTerminal (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTerminal ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_terminalLabelListAST::current_mDisplayFlags (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDisplayFlags ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @terminalLabelListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_terminalLabelListAST::UpEnumerator_terminalLabelListAST (const GGS_terminalLabelListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST_2E_element UpEnumerator_terminalLabelListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_terminalLabelListAST::current_mTerminal (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTerminal ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_terminalLabelListAST::current_mDisplayFlags (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDisplayFlags ;
}




//--------------------------------------------------------------------------------------------------
//     @terminalLabelListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalLabelListAST ("terminalLabelListAST",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalLabelListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalLabelListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalLabelListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalLabelListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST GGS_terminalLabelListAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_terminalLabelListAST result ;
  const GGS_terminalLabelListAST * p = (const GGS_terminalLabelListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalLabelListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalLabelListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@guiLabelListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_guiLabelListAST : public CollectionElementPtr {
  public: GGS_guiLabelListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_guiLabelListAST (const GGS_uint & in_mLeadingCharacterStrippedCount,
                                                const GGS_terminalLabelListAST & in_mTerminalList,
                                                const GGS_location & in_mLocation
                                                COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_guiLabelListAST (const GGS_guiLabelListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_guiLabelListAST::CollectionElementPtr_guiLabelListAST (const GGS_uint & in_mLeadingCharacterStrippedCount,
                                                                            const GGS_terminalLabelListAST & in_mTerminalList,
                                                                            const GGS_location & in_mLocation
                                                                            COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mLeadingCharacterStrippedCount, in_mTerminalList, in_mLocation) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_guiLabelListAST::CollectionElementPtr_guiLabelListAST (const GGS_guiLabelListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mLeadingCharacterStrippedCount, inElement.mProperty_mTerminalList, inElement.mProperty_mLocation) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_guiLabelListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_guiLabelListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_guiLabelListAST (mObject.mProperty_mLeadingCharacterStrippedCount, mObject.mProperty_mTerminalList, mObject.mProperty_mLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @guiLabelListAST
//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST::GGS_guiLabelListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST::GGS_guiLabelListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_guiLabelListAST * p = (CollectionElementPtr_guiLabelListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_guiLabelListAST) ;
    const GGS_guiLabelListAST_2E_element element (p->mObject.mProperty_mLeadingCharacterStrippedCount, p->mObject.mProperty_mTerminalList, p->mObject.mProperty_mLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                     const GGS_uint & in_mLeadingCharacterStrippedCount,
                                                     const GGS_terminalLabelListAST & in_mTerminalList,
                                                     const GGS_location & in_mLocation
                                                     COMMA_LOCATION_ARGS) {
  CollectionElementPtr_guiLabelListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_guiLabelListAST (in_mLeadingCharacterStrippedCount, in_mTerminalList, in_mLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_guiLabelListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_guiLabelListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::description (String & ioString,
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
      ioString.appendString ("mLeadingCharacterStrippedCount:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLeadingCharacterStrippedCount.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTerminalList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTerminalList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mLocation:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLocation.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST GGS_guiLabelListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guiLabelListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::plusPlusAssignOperation (const GGS_guiLabelListAST_2E_element & inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST GGS_guiLabelListAST::class_func_listWithValue (const GGS_uint & inOperand0,
                                                                   const GGS_terminalLabelListAST & inOperand1,
                                                                   const GGS_location & inOperand2
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_guiLabelListAST_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_guiLabelListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::addAssignOperation (const GGS_uint & inOperand0,
                                              const GGS_terminalLabelListAST & inOperand1,
                                              const GGS_location & inOperand2
                                              COMMA_LOCATION_ARGS) {
  const GGS_guiLabelListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::setter_append (const GGS_uint inOperand0,
                                         const GGS_terminalLabelListAST inOperand1,
                                         const GGS_location inOperand2,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  const GGS_guiLabelListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::setter_insertAtIndex (const GGS_uint inOperand0,
                                                const GGS_terminalLabelListAST inOperand1,
                                                const GGS_location inOperand2,
                                                const GGS_uint inInsertionIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const GGS_guiLabelListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_guiLabelListAST::setter_removeAtIndex (GGS_uint & outOperand0,
                                                GGS_terminalLabelListAST & outOperand1,
                                                GGS_location & outOperand2,
                                                const GGS_uint inRemoveIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mLeadingCharacterStrippedCount ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mTerminalList ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mLocation ;
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

void GGS_guiLabelListAST::setter_popFirst (GGS_uint & outOperand0,
                                           GGS_terminalLabelListAST & outOperand1,
                                           GGS_location & outOperand2,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLeadingCharacterStrippedCount ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mTerminalList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mLocation ;
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

void GGS_guiLabelListAST::setter_popLast (GGS_uint & outOperand0,
                                          GGS_terminalLabelListAST & outOperand1,
                                          GGS_location & outOperand2,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLeadingCharacterStrippedCount ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mTerminalList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mLocation ;
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

void GGS_guiLabelListAST::method_first (GGS_uint & outOperand0,
                                        GGS_terminalLabelListAST & outOperand1,
                                        GGS_location & outOperand2,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLeadingCharacterStrippedCount ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mTerminalList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mLocation ;
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

void GGS_guiLabelListAST::method_last (GGS_uint & outOperand0,
                                       GGS_terminalLabelListAST & outOperand1,
                                       GGS_location & outOperand2,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLeadingCharacterStrippedCount ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mTerminalList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mLocation ;
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

GGS_guiLabelListAST GGS_guiLabelListAST::add_operation (const GGS_guiLabelListAST & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_guiLabelListAST result ;
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

GGS_guiLabelListAST GGS_guiLabelListAST::subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_guiLabelListAST result ;
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

GGS_guiLabelListAST GGS_guiLabelListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_guiLabelListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST GGS_guiLabelListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_guiLabelListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST GGS_guiLabelListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_guiLabelListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST::plusAssignOperation (const GGS_guiLabelListAST inList,
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

void GGS_guiLabelListAST::setter_setMLeadingCharacterStrippedCountAtIndex (GGS_uint inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLeadingCharacterStrippedCount = inOperand ;
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

GGS_uint GGS_guiLabelListAST::getter_mLeadingCharacterStrippedCountAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLeadingCharacterStrippedCount ;
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

void GGS_guiLabelListAST::setter_setMTerminalListAtIndex (GGS_terminalLabelListAST inOperand,
                                                          GGS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTerminalList = inOperand ;
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

GGS_terminalLabelListAST GGS_guiLabelListAST::getter_mTerminalListAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_terminalLabelListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTerminalList ;
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

void GGS_guiLabelListAST::setter_setMLocationAtIndex (GGS_location inOperand,
                                                      GGS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLocation = inOperand ;
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

GGS_location GGS_guiLabelListAST::getter_mLocationAtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLocation ;
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
// Down Enumerator for @guiLabelListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_guiLabelListAST::DownEnumerator_guiLabelListAST (const GGS_guiLabelListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST_2E_element DownEnumerator_guiLabelListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_guiLabelListAST::current_mLeadingCharacterStrippedCount (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLeadingCharacterStrippedCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST DownEnumerator_guiLabelListAST::current_mTerminalList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTerminalList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_guiLabelListAST::current_mLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @guiLabelListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_guiLabelListAST::UpEnumerator_guiLabelListAST (const GGS_guiLabelListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST_2E_element UpEnumerator_guiLabelListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_guiLabelListAST::current_mLeadingCharacterStrippedCount (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLeadingCharacterStrippedCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST UpEnumerator_guiLabelListAST::current_mTerminalList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTerminalList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_guiLabelListAST::current_mLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @guiLabelListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guiLabelListAST ("guiLabelListAST",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guiLabelListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiLabelListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guiLabelListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guiLabelListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST GGS_guiLabelListAST::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_guiLabelListAST result ;
  const GGS_guiLabelListAST * p = (const GGS_guiLabelListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guiLabelListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiLabelListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@withLexiqueListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_withLexiqueListAST : public CollectionElementPtr {
  public: GGS_withLexiqueListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_withLexiqueListAST (const GGS_lstring & in_mLexiqueFileName,
                                                   const GGS_guiLabelListAST & in_mLabels,
                                                   const GGS_guiSimpleAttributeListAST & in_mSimpleAttributes,
                                                   const GGS_guiCompoundAttributeListAST & in_mCompoundAttributes
                                                   COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_withLexiqueListAST (const GGS_withLexiqueListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_withLexiqueListAST::CollectionElementPtr_withLexiqueListAST (const GGS_lstring & in_mLexiqueFileName,
                                                                                  const GGS_guiLabelListAST & in_mLabels,
                                                                                  const GGS_guiSimpleAttributeListAST & in_mSimpleAttributes,
                                                                                  const GGS_guiCompoundAttributeListAST & in_mCompoundAttributes
                                                                                  COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mLexiqueFileName, in_mLabels, in_mSimpleAttributes, in_mCompoundAttributes) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_withLexiqueListAST::CollectionElementPtr_withLexiqueListAST (const GGS_withLexiqueListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mLexiqueFileName, inElement.mProperty_mLabels, inElement.mProperty_mSimpleAttributes, inElement.mProperty_mCompoundAttributes) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_withLexiqueListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_withLexiqueListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_withLexiqueListAST (mObject.mProperty_mLexiqueFileName, mObject.mProperty_mLabels, mObject.mProperty_mSimpleAttributes, mObject.mProperty_mCompoundAttributes COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @withLexiqueListAST
//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST::GGS_withLexiqueListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST::GGS_withLexiqueListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_withLexiqueListAST * p = (CollectionElementPtr_withLexiqueListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_withLexiqueListAST) ;
    const GGS_withLexiqueListAST_2E_element element (p->mObject.mProperty_mLexiqueFileName, p->mObject.mProperty_mLabels, p->mObject.mProperty_mSimpleAttributes, p->mObject.mProperty_mCompoundAttributes) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                        const GGS_lstring & in_mLexiqueFileName,
                                                        const GGS_guiLabelListAST & in_mLabels,
                                                        const GGS_guiSimpleAttributeListAST & in_mSimpleAttributes,
                                                        const GGS_guiCompoundAttributeListAST & in_mCompoundAttributes
                                                        COMMA_LOCATION_ARGS) {
  CollectionElementPtr_withLexiqueListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_withLexiqueListAST (in_mLexiqueFileName, in_mLabels, in_mSimpleAttributes, in_mCompoundAttributes COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_withLexiqueListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_withLexiqueListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::description (String & ioString,
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
      ioString.appendString ("mLexiqueFileName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLexiqueFileName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mLabels:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLabels.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSimpleAttributes:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSimpleAttributes.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mCompoundAttributes:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mCompoundAttributes.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST GGS_withLexiqueListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_withLexiqueListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::plusPlusAssignOperation (const GGS_withLexiqueListAST_2E_element & inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST GGS_withLexiqueListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                         const GGS_guiLabelListAST & inOperand1,
                                                                         const GGS_guiSimpleAttributeListAST & inOperand2,
                                                                         const GGS_guiCompoundAttributeListAST & inOperand3
                                                                         COMMA_LOCATION_ARGS) {
  const GGS_withLexiqueListAST_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  GGS_withLexiqueListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                 const GGS_guiLabelListAST & inOperand1,
                                                 const GGS_guiSimpleAttributeListAST & inOperand2,
                                                 const GGS_guiCompoundAttributeListAST & inOperand3
                                                 COMMA_LOCATION_ARGS) {
  const GGS_withLexiqueListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::setter_append (const GGS_lstring inOperand0,
                                            const GGS_guiLabelListAST inOperand1,
                                            const GGS_guiSimpleAttributeListAST inOperand2,
                                            const GGS_guiCompoundAttributeListAST inOperand3,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  const GGS_withLexiqueListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                   const GGS_guiLabelListAST inOperand1,
                                                   const GGS_guiSimpleAttributeListAST inOperand2,
                                                   const GGS_guiCompoundAttributeListAST inOperand3,
                                                   const GGS_uint inInsertionIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  const GGS_withLexiqueListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
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

void GGS_withLexiqueListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                   GGS_guiLabelListAST & outOperand1,
                                                   GGS_guiSimpleAttributeListAST & outOperand2,
                                                   GGS_guiCompoundAttributeListAST & outOperand3,
                                                   const GGS_uint inRemoveIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mLexiqueFileName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mLabels ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mSimpleAttributes ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mCompoundAttributes ;
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

void GGS_withLexiqueListAST::setter_popFirst (GGS_lstring & outOperand0,
                                              GGS_guiLabelListAST & outOperand1,
                                              GGS_guiSimpleAttributeListAST & outOperand2,
                                              GGS_guiCompoundAttributeListAST & outOperand3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLexiqueFileName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mLabels ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mSimpleAttributes ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mCompoundAttributes ;
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

void GGS_withLexiqueListAST::setter_popLast (GGS_lstring & outOperand0,
                                             GGS_guiLabelListAST & outOperand1,
                                             GGS_guiSimpleAttributeListAST & outOperand2,
                                             GGS_guiCompoundAttributeListAST & outOperand3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLexiqueFileName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mLabels ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mSimpleAttributes ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mCompoundAttributes ;
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

void GGS_withLexiqueListAST::method_first (GGS_lstring & outOperand0,
                                           GGS_guiLabelListAST & outOperand1,
                                           GGS_guiSimpleAttributeListAST & outOperand2,
                                           GGS_guiCompoundAttributeListAST & outOperand3,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLexiqueFileName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mLabels ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mSimpleAttributes ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mCompoundAttributes ;
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

void GGS_withLexiqueListAST::method_last (GGS_lstring & outOperand0,
                                          GGS_guiLabelListAST & outOperand1,
                                          GGS_guiSimpleAttributeListAST & outOperand2,
                                          GGS_guiCompoundAttributeListAST & outOperand3,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLexiqueFileName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mLabels ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mSimpleAttributes ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mCompoundAttributes ;
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

GGS_withLexiqueListAST GGS_withLexiqueListAST::add_operation (const GGS_withLexiqueListAST & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_withLexiqueListAST result ;
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

GGS_withLexiqueListAST GGS_withLexiqueListAST::subList (const int32_t inStart,
                                                        const int32_t inLength,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_withLexiqueListAST result ;
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

GGS_withLexiqueListAST GGS_withLexiqueListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_withLexiqueListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST GGS_withLexiqueListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_withLexiqueListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST GGS_withLexiqueListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_withLexiqueListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST::plusAssignOperation (const GGS_withLexiqueListAST inList,
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

void GGS_withLexiqueListAST::setter_setMLexiqueFileNameAtIndex (GGS_lstring inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLexiqueFileName = inOperand ;
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

GGS_lstring GGS_withLexiqueListAST::getter_mLexiqueFileNameAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLexiqueFileName ;
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

void GGS_withLexiqueListAST::setter_setMLabelsAtIndex (GGS_guiLabelListAST inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLabels = inOperand ;
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

GGS_guiLabelListAST GGS_withLexiqueListAST::getter_mLabelsAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_guiLabelListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLabels ;
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

void GGS_withLexiqueListAST::setter_setMSimpleAttributesAtIndex (GGS_guiSimpleAttributeListAST inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSimpleAttributes = inOperand ;
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

GGS_guiSimpleAttributeListAST GGS_withLexiqueListAST::getter_mSimpleAttributesAtIndex (const GGS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_guiSimpleAttributeListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSimpleAttributes ;
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

void GGS_withLexiqueListAST::setter_setMCompoundAttributesAtIndex (GGS_guiCompoundAttributeListAST inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mCompoundAttributes = inOperand ;
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

GGS_guiCompoundAttributeListAST GGS_withLexiqueListAST::getter_mCompoundAttributesAtIndex (const GGS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_guiCompoundAttributeListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mCompoundAttributes ;
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
// Down Enumerator for @withLexiqueListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_withLexiqueListAST::DownEnumerator_withLexiqueListAST (const GGS_withLexiqueListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST_2E_element DownEnumerator_withLexiqueListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_withLexiqueListAST::current_mLexiqueFileName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLexiqueFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST DownEnumerator_withLexiqueListAST::current_mLabels (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLabels ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST DownEnumerator_withLexiqueListAST::current_mSimpleAttributes (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSimpleAttributes ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST DownEnumerator_withLexiqueListAST::current_mCompoundAttributes (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCompoundAttributes ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @withLexiqueListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_withLexiqueListAST::UpEnumerator_withLexiqueListAST (const GGS_withLexiqueListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST_2E_element UpEnumerator_withLexiqueListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_withLexiqueListAST::current_mLexiqueFileName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLexiqueFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST UpEnumerator_withLexiqueListAST::current_mLabels (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLabels ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST UpEnumerator_withLexiqueListAST::current_mSimpleAttributes (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSimpleAttributes ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST UpEnumerator_withLexiqueListAST::current_mCompoundAttributes (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCompoundAttributes ;
}




//--------------------------------------------------------------------------------------------------
//     @withLexiqueListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_withLexiqueListAST ("withLexiqueListAST",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_withLexiqueListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_withLexiqueListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_withLexiqueListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_withLexiqueListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST GGS_withLexiqueListAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_withLexiqueListAST result ;
  const GGS_withLexiqueListAST * p = (const GGS_withLexiqueListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_withLexiqueListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("withLexiqueListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@guiCommandLineOptionList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_guiCommandLineOptionList : public CollectionElementPtr {
  public: GGS_guiCommandLineOptionList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_guiCommandLineOptionList (const GGS_string & in_mOptionComponent,
                                                         const GGS_string & in_mOptionIdentifier,
                                                         const GGS_char & in_mOptionChar,
                                                         const GGS_string & in_mOptionString,
                                                         const GGS_string & in_mComment
                                                         COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_guiCommandLineOptionList (const GGS_guiCommandLineOptionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_guiCommandLineOptionList::CollectionElementPtr_guiCommandLineOptionList (const GGS_string & in_mOptionComponent,
                                                                                              const GGS_string & in_mOptionIdentifier,
                                                                                              const GGS_char & in_mOptionChar,
                                                                                              const GGS_string & in_mOptionString,
                                                                                              const GGS_string & in_mComment
                                                                                              COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mOptionComponent, in_mOptionIdentifier, in_mOptionChar, in_mOptionString, in_mComment) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_guiCommandLineOptionList::CollectionElementPtr_guiCommandLineOptionList (const GGS_guiCommandLineOptionList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mOptionComponent, inElement.mProperty_mOptionIdentifier, inElement.mProperty_mOptionChar, inElement.mProperty_mOptionString, inElement.mProperty_mComment) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_guiCommandLineOptionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_guiCommandLineOptionList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_guiCommandLineOptionList (mObject.mProperty_mOptionComponent, mObject.mProperty_mOptionIdentifier, mObject.mProperty_mOptionChar, mObject.mProperty_mOptionString, mObject.mProperty_mComment COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @guiCommandLineOptionList
//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList::GGS_guiCommandLineOptionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList::GGS_guiCommandLineOptionList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_guiCommandLineOptionList * p = (CollectionElementPtr_guiCommandLineOptionList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_guiCommandLineOptionList) ;
    const GGS_guiCommandLineOptionList_2E_element element (p->mObject.mProperty_mOptionComponent, p->mObject.mProperty_mOptionIdentifier, p->mObject.mProperty_mOptionChar, p->mObject.mProperty_mOptionString, p->mObject.mProperty_mComment) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                              const GGS_string & in_mOptionComponent,
                                                              const GGS_string & in_mOptionIdentifier,
                                                              const GGS_char & in_mOptionChar,
                                                              const GGS_string & in_mOptionString,
                                                              const GGS_string & in_mComment
                                                              COMMA_LOCATION_ARGS) {
  CollectionElementPtr_guiCommandLineOptionList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_guiCommandLineOptionList (in_mOptionComponent, in_mOptionIdentifier, in_mOptionChar, in_mOptionString, in_mComment COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_guiCommandLineOptionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_guiCommandLineOptionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::description (String & ioString,
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
      ioString.appendString ("mOptionComponent:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOptionComponent.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mOptionIdentifier:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOptionIdentifier.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mOptionChar:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOptionChar.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mOptionString:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOptionString.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mComment:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mComment.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList GGS_guiCommandLineOptionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guiCommandLineOptionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::plusPlusAssignOperation (const GGS_guiCommandLineOptionList_2E_element & inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList GGS_guiCommandLineOptionList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                     const GGS_string & inOperand1,
                                                                                     const GGS_char & inOperand2,
                                                                                     const GGS_string & inOperand3,
                                                                                     const GGS_string & inOperand4
                                                                                     COMMA_LOCATION_ARGS) {
  const GGS_guiCommandLineOptionList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  GGS_guiCommandLineOptionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::addAssignOperation (const GGS_string & inOperand0,
                                                       const GGS_string & inOperand1,
                                                       const GGS_char & inOperand2,
                                                       const GGS_string & inOperand3,
                                                       const GGS_string & inOperand4
                                                       COMMA_LOCATION_ARGS) {
  const GGS_guiCommandLineOptionList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::setter_append (const GGS_string inOperand0,
                                                  const GGS_string inOperand1,
                                                  const GGS_char inOperand2,
                                                  const GGS_string inOperand3,
                                                  const GGS_string inOperand4,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  const GGS_guiCommandLineOptionList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::setter_insertAtIndex (const GGS_string inOperand0,
                                                         const GGS_string inOperand1,
                                                         const GGS_char inOperand2,
                                                         const GGS_string inOperand3,
                                                         const GGS_string inOperand4,
                                                         const GGS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  const GGS_guiCommandLineOptionList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
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

void GGS_guiCommandLineOptionList::setter_removeAtIndex (GGS_string & outOperand0,
                                                         GGS_string & outOperand1,
                                                         GGS_char & outOperand2,
                                                         GGS_string & outOperand3,
                                                         GGS_string & outOperand4,
                                                         const GGS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mOptionComponent ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mOptionIdentifier ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mOptionChar ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mOptionString ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mComment ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::setter_popFirst (GGS_string & outOperand0,
                                                    GGS_string & outOperand1,
                                                    GGS_char & outOperand2,
                                                    GGS_string & outOperand3,
                                                    GGS_string & outOperand4,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mOptionComponent ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mOptionIdentifier ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mOptionChar ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mOptionString ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mComment ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::setter_popLast (GGS_string & outOperand0,
                                                   GGS_string & outOperand1,
                                                   GGS_char & outOperand2,
                                                   GGS_string & outOperand3,
                                                   GGS_string & outOperand4,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mOptionComponent ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mOptionIdentifier ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mOptionChar ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mOptionString ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mComment ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::method_first (GGS_string & outOperand0,
                                                 GGS_string & outOperand1,
                                                 GGS_char & outOperand2,
                                                 GGS_string & outOperand3,
                                                 GGS_string & outOperand4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mOptionComponent ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mOptionIdentifier ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mOptionChar ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mOptionString ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mComment ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::method_last (GGS_string & outOperand0,
                                                GGS_string & outOperand1,
                                                GGS_char & outOperand2,
                                                GGS_string & outOperand3,
                                                GGS_string & outOperand4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mOptionComponent ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mOptionIdentifier ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mOptionChar ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mOptionString ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mComment ;
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
  }
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList GGS_guiCommandLineOptionList::add_operation (const GGS_guiCommandLineOptionList & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_guiCommandLineOptionList result ;
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

GGS_guiCommandLineOptionList GGS_guiCommandLineOptionList::subList (const int32_t inStart,
                                                                    const int32_t inLength,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_guiCommandLineOptionList result ;
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

GGS_guiCommandLineOptionList GGS_guiCommandLineOptionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_guiCommandLineOptionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList GGS_guiCommandLineOptionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_guiCommandLineOptionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList GGS_guiCommandLineOptionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_guiCommandLineOptionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList::plusAssignOperation (const GGS_guiCommandLineOptionList inList,
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

void GGS_guiCommandLineOptionList::setter_setMOptionComponentAtIndex (GGS_string inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mOptionComponent = inOperand ;
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

GGS_string GGS_guiCommandLineOptionList::getter_mOptionComponentAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mOptionComponent ;
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

void GGS_guiCommandLineOptionList::setter_setMOptionIdentifierAtIndex (GGS_string inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mOptionIdentifier = inOperand ;
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

GGS_string GGS_guiCommandLineOptionList::getter_mOptionIdentifierAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mOptionIdentifier ;
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

void GGS_guiCommandLineOptionList::setter_setMOptionCharAtIndex (GGS_char inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mOptionChar = inOperand ;
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

GGS_char GGS_guiCommandLineOptionList::getter_mOptionCharAtIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_char result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mOptionChar ;
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

void GGS_guiCommandLineOptionList::setter_setMOptionStringAtIndex (GGS_string inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mOptionString = inOperand ;
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

GGS_string GGS_guiCommandLineOptionList::getter_mOptionStringAtIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mOptionString ;
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

void GGS_guiCommandLineOptionList::setter_setMCommentAtIndex (GGS_string inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mComment = inOperand ;
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

GGS_string GGS_guiCommandLineOptionList::getter_mCommentAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mComment ;
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
// Down Enumerator for @guiCommandLineOptionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_guiCommandLineOptionList::DownEnumerator_guiCommandLineOptionList (const GGS_guiCommandLineOptionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList_2E_element DownEnumerator_guiCommandLineOptionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_guiCommandLineOptionList::current_mOptionComponent (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOptionComponent ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_guiCommandLineOptionList::current_mOptionIdentifier (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOptionIdentifier ;
}

//--------------------------------------------------------------------------------------------------

GGS_char DownEnumerator_guiCommandLineOptionList::current_mOptionChar (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOptionChar ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_guiCommandLineOptionList::current_mOptionString (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOptionString ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_guiCommandLineOptionList::current_mComment (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mComment ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @guiCommandLineOptionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_guiCommandLineOptionList::UpEnumerator_guiCommandLineOptionList (const GGS_guiCommandLineOptionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList_2E_element UpEnumerator_guiCommandLineOptionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_guiCommandLineOptionList::current_mOptionComponent (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOptionComponent ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_guiCommandLineOptionList::current_mOptionIdentifier (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOptionIdentifier ;
}

//--------------------------------------------------------------------------------------------------

GGS_char UpEnumerator_guiCommandLineOptionList::current_mOptionChar (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOptionChar ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_guiCommandLineOptionList::current_mOptionString (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOptionString ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_guiCommandLineOptionList::current_mComment (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mComment ;
}




//--------------------------------------------------------------------------------------------------
//     @guiCommandLineOptionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guiCommandLineOptionList ("guiCommandLineOptionList",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guiCommandLineOptionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiCommandLineOptionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guiCommandLineOptionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guiCommandLineOptionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList GGS_guiCommandLineOptionList::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_guiCommandLineOptionList result ;
  const GGS_guiCommandLineOptionList * p = (const GGS_guiCommandLineOptionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guiCommandLineOptionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiCommandLineOptionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @extensionMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_extensionMap::GGS_extensionMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap::~ GGS_extensionMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap::GGS_extensionMap (const GGS_extensionMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap & GGS_extensionMap::operator = (const GGS_extensionMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap GGS_extensionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_extensionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionMap::getter_contains (const GGS_string & inKey
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                 const GGS_uint & inLevel
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extensionMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extensionMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_extensionMap::getter_locationForKey (const GGS_string & inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_extensionMap::getter_keyList (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_extensionMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMap::performInsert (const GGS_extensionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_extensionMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element>
GGS_extensionMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_extensionMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element>>
GGS_extensionMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_extensionMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap_2E_element_3F_ GGS_extensionMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extensionMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_extensionMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_extensionMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mLexiqueName = info->mProperty_mLexiqueName ;
      element.mProperty_mIndex = info->mProperty_mIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap GGS_extensionMap::class_func_mapWithMapToOverride (const GGS_extensionMap & inMapToOverride
                                                                    COMMA_LOCATION_ARGS) {
  GGS_extensionMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_extensionMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap GGS_extensionMap::getter_overriddenMap (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_extensionMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMap::setter_insertKey (GGS_lstring inLKey,
                                         GGS_string inArgument0,
                                         GGS_uint inArgument1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  const GGS_extensionMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' extension is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_extensionMap::getter_mLexiqueNameForKey (const GGS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mLexiqueName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extensionMap::getter_mIndexForKey (const GGS_string & inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIndex ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_extensionMap::setter_setMLexiqueNameForKey (GGS_string inValue,
                                                     GGS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_extensionMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mLexiqueName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_extensionMap::setter_setMIndexForKey (GGS_uint inValue,
                                               GGS_string inKey,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_extensionMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIndex = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_extensionMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element>> & inArray,
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
    ioString.appendString ("mLexiqueName:") ;
    inArray (i COMMA_HERE)->mProperty_mLexiqueName.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mIndex:") ;
    inArray (i COMMA_HERE)->mProperty_mIndex.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element>> array = sortedInfoArray () ;
    GGS_extensionMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_extensionMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_extensionMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @extensionMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_extensionMap::DownEnumerator_extensionMap (const GGS_extensionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap_2E_element DownEnumerator_extensionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_extensionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_extensionMap::current_mLexiqueName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLexiqueName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_extensionMap::current_mIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @extensionMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_extensionMap::UpEnumerator_extensionMap (const GGS_extensionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap_2E_element UpEnumerator_extensionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_extensionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_extensionMap::current_mLexiqueName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLexiqueName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_extensionMap::current_mIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndex ;
}


//--------------------------------------------------------------------------------------------------
//     @extensionMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMap ("extensionMap",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap GGS_extensionMap::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_extensionMap result ;
  const GGS_extensionMap * p = (const GGS_extensionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@textMacroList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_textMacroList : public CollectionElementPtr {
  public: GGS_textMacroList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_textMacroList (const GGS_string & in_mKey,
                                              const GGS_string & in_mContents
                                              COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_textMacroList (const GGS_textMacroList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_textMacroList::CollectionElementPtr_textMacroList (const GGS_string & in_mKey,
                                                                        const GGS_string & in_mContents
                                                                        COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mKey, in_mContents) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_textMacroList::CollectionElementPtr_textMacroList (const GGS_textMacroList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mKey, inElement.mProperty_mContents) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_textMacroList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_textMacroList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_textMacroList (mObject.mProperty_mKey, mObject.mProperty_mContents COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @textMacroList
//--------------------------------------------------------------------------------------------------

GGS_textMacroList::GGS_textMacroList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList::GGS_textMacroList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_textMacroList * p = (CollectionElementPtr_textMacroList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_textMacroList) ;
    const GGS_textMacroList_2E_element element (p->mObject.mProperty_mKey, p->mObject.mProperty_mContents) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_textMacroList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                   const GGS_string & in_mKey,
                                                   const GGS_string & in_mContents
                                                   COMMA_LOCATION_ARGS) {
  CollectionElementPtr_textMacroList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_textMacroList (in_mKey, in_mContents COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_textMacroList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_textMacroList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_textMacroList::description (String & ioString,
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
      ioString.appendString ("mKey:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mKey.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mContents:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mContents.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList GGS_textMacroList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_textMacroList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_textMacroList::plusPlusAssignOperation (const GGS_textMacroList_2E_element & inValue
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList GGS_textMacroList::class_func_listWithValue (const GGS_string & inOperand0,
                                                               const GGS_string & inOperand1
                                                               COMMA_LOCATION_ARGS) {
  const GGS_textMacroList_2E_element element (inOperand0, inOperand1) ;
  GGS_textMacroList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_textMacroList::addAssignOperation (const GGS_string & inOperand0,
                                            const GGS_string & inOperand1
                                            COMMA_LOCATION_ARGS) {
  const GGS_textMacroList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_textMacroList::setter_append (const GGS_string inOperand0,
                                       const GGS_string inOperand1,
                                       Compiler * /* inCompiler */
                                       COMMA_LOCATION_ARGS) {
  const GGS_textMacroList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_textMacroList::setter_insertAtIndex (const GGS_string inOperand0,
                                              const GGS_string inOperand1,
                                              const GGS_uint inInsertionIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  const GGS_textMacroList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_textMacroList::setter_removeAtIndex (GGS_string & outOperand0,
                                              GGS_string & outOperand1,
                                              const GGS_uint inRemoveIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mKey ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mContents ;
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

void GGS_textMacroList::setter_popFirst (GGS_string & outOperand0,
                                         GGS_string & outOperand1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mKey ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mContents ;
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

void GGS_textMacroList::setter_popLast (GGS_string & outOperand0,
                                        GGS_string & outOperand1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mKey ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mContents ;
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

void GGS_textMacroList::method_first (GGS_string & outOperand0,
                                      GGS_string & outOperand1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mKey ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mContents ;
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

void GGS_textMacroList::method_last (GGS_string & outOperand0,
                                     GGS_string & outOperand1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mKey ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mContents ;
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

GGS_textMacroList GGS_textMacroList::add_operation (const GGS_textMacroList & inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_textMacroList result ;
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

GGS_textMacroList GGS_textMacroList::subList (const int32_t inStart,
                                              const int32_t inLength,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  GGS_textMacroList result ;
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

GGS_textMacroList GGS_textMacroList::getter_subListWithRange (const GGS_range & inRange,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_textMacroList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList GGS_textMacroList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_textMacroList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList GGS_textMacroList::getter_subListToIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_textMacroList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_textMacroList::plusAssignOperation (const GGS_textMacroList inList,
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

void GGS_textMacroList::setter_setMKeyAtIndex (GGS_string inOperand,
                                               GGS_uint inIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mKey = inOperand ;
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

GGS_string GGS_textMacroList::getter_mKeyAtIndex (const GGS_uint & inIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mKey ;
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

void GGS_textMacroList::setter_setMContentsAtIndex (GGS_string inOperand,
                                                    GGS_uint inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mContents = inOperand ;
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

GGS_string GGS_textMacroList::getter_mContentsAtIndex (const GGS_uint & inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mContents ;
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
// Down Enumerator for @textMacroList
//--------------------------------------------------------------------------------------------------

DownEnumerator_textMacroList::DownEnumerator_textMacroList (const GGS_textMacroList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList_2E_element DownEnumerator_textMacroList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_textMacroList::current_mKey (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mKey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_textMacroList::current_mContents (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mContents ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @textMacroList
//--------------------------------------------------------------------------------------------------

UpEnumerator_textMacroList::UpEnumerator_textMacroList (const GGS_textMacroList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList_2E_element UpEnumerator_textMacroList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_textMacroList::current_mKey (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mKey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_textMacroList::current_mContents (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mContents ;
}




//--------------------------------------------------------------------------------------------------
//     @textMacroList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_textMacroList ("textMacroList",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_textMacroList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_textMacroList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_textMacroList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_textMacroList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList GGS_textMacroList::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_textMacroList result ;
  const GGS_textMacroList * p = (const GGS_textMacroList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_textMacroList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("textMacroList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@importedLexiqueList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_importedLexiqueList : public CollectionElementPtr {
  public: GGS_importedLexiqueList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_importedLexiqueList (const GGS_string & in_mLexiqueClassName,
                                                    const GGS_uint & in_mIndex,
                                                    const GGS_string & in_mBlockComment,
                                                    const GGS_string & in_mTitle,
                                                    const GGS_textMacroList & in_mTextMacroList,
                                                    const GGS_guiLabelListAST & in_mLabels,
                                                    const GGS_lexicalStyleListAST & in_mLexicalStyleList
                                                    COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_importedLexiqueList (const GGS_importedLexiqueList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_importedLexiqueList::CollectionElementPtr_importedLexiqueList (const GGS_string & in_mLexiqueClassName,
                                                                                    const GGS_uint & in_mIndex,
                                                                                    const GGS_string & in_mBlockComment,
                                                                                    const GGS_string & in_mTitle,
                                                                                    const GGS_textMacroList & in_mTextMacroList,
                                                                                    const GGS_guiLabelListAST & in_mLabels,
                                                                                    const GGS_lexicalStyleListAST & in_mLexicalStyleList
                                                                                    COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mLexiqueClassName, in_mIndex, in_mBlockComment, in_mTitle, in_mTextMacroList, in_mLabels, in_mLexicalStyleList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_importedLexiqueList::CollectionElementPtr_importedLexiqueList (const GGS_importedLexiqueList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mLexiqueClassName, inElement.mProperty_mIndex, inElement.mProperty_mBlockComment, inElement.mProperty_mTitle, inElement.mProperty_mTextMacroList, inElement.mProperty_mLabels, inElement.mProperty_mLexicalStyleList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_importedLexiqueList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_importedLexiqueList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_importedLexiqueList (mObject.mProperty_mLexiqueClassName, mObject.mProperty_mIndex, mObject.mProperty_mBlockComment, mObject.mProperty_mTitle, mObject.mProperty_mTextMacroList, mObject.mProperty_mLabels, mObject.mProperty_mLexicalStyleList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @importedLexiqueList
//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList::GGS_importedLexiqueList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList::GGS_importedLexiqueList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_importedLexiqueList * p = (CollectionElementPtr_importedLexiqueList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_importedLexiqueList) ;
    const GGS_importedLexiqueList_2E_element element (p->mObject.mProperty_mLexiqueClassName, p->mObject.mProperty_mIndex, p->mObject.mProperty_mBlockComment, p->mObject.mProperty_mTitle, p->mObject.mProperty_mTextMacroList, p->mObject.mProperty_mLabels, p->mObject.mProperty_mLexicalStyleList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                         const GGS_string & in_mLexiqueClassName,
                                                         const GGS_uint & in_mIndex,
                                                         const GGS_string & in_mBlockComment,
                                                         const GGS_string & in_mTitle,
                                                         const GGS_textMacroList & in_mTextMacroList,
                                                         const GGS_guiLabelListAST & in_mLabels,
                                                         const GGS_lexicalStyleListAST & in_mLexicalStyleList
                                                         COMMA_LOCATION_ARGS) {
  CollectionElementPtr_importedLexiqueList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_importedLexiqueList (in_mLexiqueClassName, in_mIndex, in_mBlockComment, in_mTitle, in_mTextMacroList, in_mLabels, in_mLexicalStyleList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_importedLexiqueList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_importedLexiqueList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList::description (String & ioString,
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
      ioString.appendString ("mLexiqueClassName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLexiqueClassName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mIndex:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mIndex.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBlockComment:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBlockComment.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTitle:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTitle.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTextMacroList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTextMacroList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mLabels:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLabels.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mLexicalStyleList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLexicalStyleList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList GGS_importedLexiqueList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_importedLexiqueList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList::plusPlusAssignOperation (const GGS_importedLexiqueList_2E_element & inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList GGS_importedLexiqueList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                           const GGS_uint & inOperand1,
                                                                           const GGS_string & inOperand2,
                                                                           const GGS_string & inOperand3,
                                                                           const GGS_textMacroList & inOperand4,
                                                                           const GGS_guiLabelListAST & inOperand5,
                                                                           const GGS_lexicalStyleListAST & inOperand6
                                                                           COMMA_LOCATION_ARGS) {
  const GGS_importedLexiqueList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  GGS_importedLexiqueList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList::addAssignOperation (const GGS_string & inOperand0,
                                                  const GGS_uint & inOperand1,
                                                  const GGS_string & inOperand2,
                                                  const GGS_string & inOperand3,
                                                  const GGS_textMacroList & inOperand4,
                                                  const GGS_guiLabelListAST & inOperand5,
                                                  const GGS_lexicalStyleListAST & inOperand6
                                                  COMMA_LOCATION_ARGS) {
  const GGS_importedLexiqueList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList::setter_append (const GGS_string inOperand0,
                                             const GGS_uint inOperand1,
                                             const GGS_string inOperand2,
                                             const GGS_string inOperand3,
                                             const GGS_textMacroList inOperand4,
                                             const GGS_guiLabelListAST inOperand5,
                                             const GGS_lexicalStyleListAST inOperand6,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  const GGS_importedLexiqueList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList::setter_insertAtIndex (const GGS_string inOperand0,
                                                    const GGS_uint inOperand1,
                                                    const GGS_string inOperand2,
                                                    const GGS_string inOperand3,
                                                    const GGS_textMacroList inOperand4,
                                                    const GGS_guiLabelListAST inOperand5,
                                                    const GGS_lexicalStyleListAST inOperand6,
                                                    const GGS_uint inInsertionIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  const GGS_importedLexiqueList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
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

void GGS_importedLexiqueList::setter_removeAtIndex (GGS_string & outOperand0,
                                                    GGS_uint & outOperand1,
                                                    GGS_string & outOperand2,
                                                    GGS_string & outOperand3,
                                                    GGS_textMacroList & outOperand4,
                                                    GGS_guiLabelListAST & outOperand5,
                                                    GGS_lexicalStyleListAST & outOperand6,
                                                    const GGS_uint inRemoveIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mLexiqueClassName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mIndex ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mBlockComment ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mTitle ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mTextMacroList ;
      outOperand5 = mArray (idx COMMA_HERE).mProperty_mLabels ;
      outOperand6 = mArray (idx COMMA_HERE).mProperty_mLexicalStyleList ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList::setter_popFirst (GGS_string & outOperand0,
                                               GGS_uint & outOperand1,
                                               GGS_string & outOperand2,
                                               GGS_string & outOperand3,
                                               GGS_textMacroList & outOperand4,
                                               GGS_guiLabelListAST & outOperand5,
                                               GGS_lexicalStyleListAST & outOperand6,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLexiqueClassName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mIndex ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mBlockComment ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mTitle ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mTextMacroList ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mLabels ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mLexicalStyleList ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList::setter_popLast (GGS_string & outOperand0,
                                              GGS_uint & outOperand1,
                                              GGS_string & outOperand2,
                                              GGS_string & outOperand3,
                                              GGS_textMacroList & outOperand4,
                                              GGS_guiLabelListAST & outOperand5,
                                              GGS_lexicalStyleListAST & outOperand6,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLexiqueClassName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mIndex ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mBlockComment ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mTitle ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mTextMacroList ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mLabels ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mLexicalStyleList ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList::method_first (GGS_string & outOperand0,
                                            GGS_uint & outOperand1,
                                            GGS_string & outOperand2,
                                            GGS_string & outOperand3,
                                            GGS_textMacroList & outOperand4,
                                            GGS_guiLabelListAST & outOperand5,
                                            GGS_lexicalStyleListAST & outOperand6,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLexiqueClassName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mIndex ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mBlockComment ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mTitle ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mTextMacroList ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mLabels ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mLexicalStyleList ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList::method_last (GGS_string & outOperand0,
                                           GGS_uint & outOperand1,
                                           GGS_string & outOperand2,
                                           GGS_string & outOperand3,
                                           GGS_textMacroList & outOperand4,
                                           GGS_guiLabelListAST & outOperand5,
                                           GGS_lexicalStyleListAST & outOperand6,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLexiqueClassName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mIndex ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mBlockComment ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mTitle ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mTextMacroList ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mLabels ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mLexicalStyleList ;
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
  }
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList GGS_importedLexiqueList::add_operation (const GGS_importedLexiqueList & inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_importedLexiqueList result ;
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

GGS_importedLexiqueList GGS_importedLexiqueList::subList (const int32_t inStart,
                                                          const int32_t inLength,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_importedLexiqueList result ;
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

GGS_importedLexiqueList GGS_importedLexiqueList::getter_subListWithRange (const GGS_range & inRange,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_importedLexiqueList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList GGS_importedLexiqueList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_importedLexiqueList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList GGS_importedLexiqueList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_importedLexiqueList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList::plusAssignOperation (const GGS_importedLexiqueList inList,
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

void GGS_importedLexiqueList::setter_setMLexiqueClassNameAtIndex (GGS_string inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLexiqueClassName = inOperand ;
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

GGS_string GGS_importedLexiqueList::getter_mLexiqueClassNameAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLexiqueClassName ;
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

void GGS_importedLexiqueList::setter_setMIndexAtIndex (GGS_uint inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mIndex = inOperand ;
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

GGS_uint GGS_importedLexiqueList::getter_mIndexAtIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mIndex ;
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

void GGS_importedLexiqueList::setter_setMBlockCommentAtIndex (GGS_string inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBlockComment = inOperand ;
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

GGS_string GGS_importedLexiqueList::getter_mBlockCommentAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBlockComment ;
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

void GGS_importedLexiqueList::setter_setMTitleAtIndex (GGS_string inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTitle = inOperand ;
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

GGS_string GGS_importedLexiqueList::getter_mTitleAtIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTitle ;
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

void GGS_importedLexiqueList::setter_setMTextMacroListAtIndex (GGS_textMacroList inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTextMacroList = inOperand ;
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

GGS_textMacroList GGS_importedLexiqueList::getter_mTextMacroListAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_textMacroList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTextMacroList ;
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

void GGS_importedLexiqueList::setter_setMLabelsAtIndex (GGS_guiLabelListAST inOperand,
                                                        GGS_uint inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLabels = inOperand ;
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

GGS_guiLabelListAST GGS_importedLexiqueList::getter_mLabelsAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_guiLabelListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLabels ;
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

void GGS_importedLexiqueList::setter_setMLexicalStyleListAtIndex (GGS_lexicalStyleListAST inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLexicalStyleList = inOperand ;
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

GGS_lexicalStyleListAST GGS_importedLexiqueList::getter_mLexicalStyleListAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lexicalStyleListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLexicalStyleList ;
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
// Down Enumerator for @importedLexiqueList
//--------------------------------------------------------------------------------------------------

DownEnumerator_importedLexiqueList::DownEnumerator_importedLexiqueList (const GGS_importedLexiqueList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList_2E_element DownEnumerator_importedLexiqueList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_importedLexiqueList::current_mLexiqueClassName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLexiqueClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_importedLexiqueList::current_mIndex (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_importedLexiqueList::current_mBlockComment (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBlockComment ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_importedLexiqueList::current_mTitle (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTitle ;
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList DownEnumerator_importedLexiqueList::current_mTextMacroList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTextMacroList ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST DownEnumerator_importedLexiqueList::current_mLabels (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLabels ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleListAST DownEnumerator_importedLexiqueList::current_mLexicalStyleList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLexicalStyleList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @importedLexiqueList
//--------------------------------------------------------------------------------------------------

UpEnumerator_importedLexiqueList::UpEnumerator_importedLexiqueList (const GGS_importedLexiqueList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList_2E_element UpEnumerator_importedLexiqueList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_importedLexiqueList::current_mLexiqueClassName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLexiqueClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_importedLexiqueList::current_mIndex (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_importedLexiqueList::current_mBlockComment (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBlockComment ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_importedLexiqueList::current_mTitle (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTitle ;
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList UpEnumerator_importedLexiqueList::current_mTextMacroList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTextMacroList ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST UpEnumerator_importedLexiqueList::current_mLabels (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLabels ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleListAST UpEnumerator_importedLexiqueList::current_mLexicalStyleList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLexicalStyleList ;
}




//--------------------------------------------------------------------------------------------------
//     @importedLexiqueList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_importedLexiqueList ("importedLexiqueList",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_importedLexiqueList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_importedLexiqueList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_importedLexiqueList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_importedLexiqueList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList GGS_importedLexiqueList::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_importedLexiqueList result ;
  const GGS_importedLexiqueList * p = (const GGS_importedLexiqueList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_importedLexiqueList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("importedLexiqueList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@projectIndexingDescriptorList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_projectIndexingDescriptorList : public CollectionElementPtr {
  public: GGS_projectIndexingDescriptorList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_projectIndexingDescriptorList (const GGS_lstring & in_mProjectFileExtension,
                                                              const GGS_lstring & in_indexingPathSuffix
                                                              COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_projectIndexingDescriptorList (const GGS_projectIndexingDescriptorList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_projectIndexingDescriptorList::CollectionElementPtr_projectIndexingDescriptorList (const GGS_lstring & in_mProjectFileExtension,
                                                                                                        const GGS_lstring & in_indexingPathSuffix
                                                                                                        COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mProjectFileExtension, in_indexingPathSuffix) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_projectIndexingDescriptorList::CollectionElementPtr_projectIndexingDescriptorList (const GGS_projectIndexingDescriptorList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mProjectFileExtension, inElement.mProperty_indexingPathSuffix) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_projectIndexingDescriptorList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_projectIndexingDescriptorList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_projectIndexingDescriptorList (mObject.mProperty_mProjectFileExtension, mObject.mProperty_indexingPathSuffix COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @projectIndexingDescriptorList
//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList::GGS_projectIndexingDescriptorList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList::GGS_projectIndexingDescriptorList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_projectIndexingDescriptorList * p = (CollectionElementPtr_projectIndexingDescriptorList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_projectIndexingDescriptorList) ;
    const GGS_projectIndexingDescriptorList_2E_element element (p->mObject.mProperty_mProjectFileExtension, p->mObject.mProperty_indexingPathSuffix) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_projectIndexingDescriptorList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                   const GGS_lstring & in_mProjectFileExtension,
                                                                   const GGS_lstring & in_indexingPathSuffix
                                                                   COMMA_LOCATION_ARGS) {
  CollectionElementPtr_projectIndexingDescriptorList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_projectIndexingDescriptorList (in_mProjectFileExtension, in_indexingPathSuffix COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_projectIndexingDescriptorList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_projectIndexingDescriptorList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectIndexingDescriptorList::description (String & ioString,
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
      ioString.appendString ("mProjectFileExtension:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mProjectFileExtension.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("indexingPathSuffix:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_indexingPathSuffix.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList GGS_projectIndexingDescriptorList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_projectIndexingDescriptorList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectIndexingDescriptorList::plusPlusAssignOperation (const GGS_projectIndexingDescriptorList_2E_element & inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList GGS_projectIndexingDescriptorList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                               const GGS_lstring & inOperand1
                                                                                               COMMA_LOCATION_ARGS) {
  const GGS_projectIndexingDescriptorList_2E_element element (inOperand0, inOperand1) ;
  GGS_projectIndexingDescriptorList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectIndexingDescriptorList::addAssignOperation (const GGS_lstring & inOperand0,
                                                            const GGS_lstring & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  const GGS_projectIndexingDescriptorList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectIndexingDescriptorList::setter_append (const GGS_lstring inOperand0,
                                                       const GGS_lstring inOperand1,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  const GGS_projectIndexingDescriptorList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_projectIndexingDescriptorList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                              const GGS_lstring inOperand1,
                                                              const GGS_uint inInsertionIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  const GGS_projectIndexingDescriptorList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_projectIndexingDescriptorList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                              GGS_lstring & outOperand1,
                                                              const GGS_uint inRemoveIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mProjectFileExtension ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_indexingPathSuffix ;
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

void GGS_projectIndexingDescriptorList::setter_popFirst (GGS_lstring & outOperand0,
                                                         GGS_lstring & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mProjectFileExtension ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_indexingPathSuffix ;
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

void GGS_projectIndexingDescriptorList::setter_popLast (GGS_lstring & outOperand0,
                                                        GGS_lstring & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mProjectFileExtension ;
      outOperand1 = mArray.lastObject (HERE).mProperty_indexingPathSuffix ;
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

void GGS_projectIndexingDescriptorList::method_first (GGS_lstring & outOperand0,
                                                      GGS_lstring & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mProjectFileExtension ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_indexingPathSuffix ;
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

void GGS_projectIndexingDescriptorList::method_last (GGS_lstring & outOperand0,
                                                     GGS_lstring & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mProjectFileExtension ;
      outOperand1 = mArray.lastObject (HERE).mProperty_indexingPathSuffix ;
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

GGS_projectIndexingDescriptorList GGS_projectIndexingDescriptorList::add_operation (const GGS_projectIndexingDescriptorList & inOperand,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_projectIndexingDescriptorList result ;
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

GGS_projectIndexingDescriptorList GGS_projectIndexingDescriptorList::subList (const int32_t inStart,
                                                                              const int32_t inLength,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_projectIndexingDescriptorList result ;
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

GGS_projectIndexingDescriptorList GGS_projectIndexingDescriptorList::getter_subListWithRange (const GGS_range & inRange,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_projectIndexingDescriptorList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList GGS_projectIndexingDescriptorList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_projectIndexingDescriptorList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList GGS_projectIndexingDescriptorList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_projectIndexingDescriptorList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectIndexingDescriptorList::plusAssignOperation (const GGS_projectIndexingDescriptorList inList,
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

void GGS_projectIndexingDescriptorList::setter_setMProjectFileExtensionAtIndex (GGS_lstring inOperand,
                                                                                GGS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mProjectFileExtension = inOperand ;
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

GGS_lstring GGS_projectIndexingDescriptorList::getter_mProjectFileExtensionAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mProjectFileExtension ;
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

void GGS_projectIndexingDescriptorList::setter_setIndexingPathSuffixAtIndex (GGS_lstring inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_indexingPathSuffix = inOperand ;
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

GGS_lstring GGS_projectIndexingDescriptorList::getter_indexingPathSuffixAtIndex (const GGS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_indexingPathSuffix ;
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
// Down Enumerator for @projectIndexingDescriptorList
//--------------------------------------------------------------------------------------------------

DownEnumerator_projectIndexingDescriptorList::DownEnumerator_projectIndexingDescriptorList (const GGS_projectIndexingDescriptorList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList_2E_element DownEnumerator_projectIndexingDescriptorList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_projectIndexingDescriptorList::current_mProjectFileExtension (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProjectFileExtension ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_projectIndexingDescriptorList::current_indexingPathSuffix (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_indexingPathSuffix ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @projectIndexingDescriptorList
//--------------------------------------------------------------------------------------------------

UpEnumerator_projectIndexingDescriptorList::UpEnumerator_projectIndexingDescriptorList (const GGS_projectIndexingDescriptorList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList_2E_element UpEnumerator_projectIndexingDescriptorList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_projectIndexingDescriptorList::current_mProjectFileExtension (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProjectFileExtension ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_projectIndexingDescriptorList::current_indexingPathSuffix (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_indexingPathSuffix ;
}




//--------------------------------------------------------------------------------------------------
//     @projectIndexingDescriptorList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_projectIndexingDescriptorList ("projectIndexingDescriptorList",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_projectIndexingDescriptorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_projectIndexingDescriptorList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_projectIndexingDescriptorList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_projectIndexingDescriptorList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList GGS_projectIndexingDescriptorList::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_projectIndexingDescriptorList result ;
  const GGS_projectIndexingDescriptorList * p = (const GGS_projectIndexingDescriptorList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_projectIndexingDescriptorList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("projectIndexingDescriptorList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@galgasGUIComponentListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_galgasGUIComponentListAST : public CollectionElementPtr {
  public: GGS_galgasGUIComponentListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_galgasGUIComponentListAST (const GGS_lstring & in_mGUIComponentName,
                                                          const GGS_lstringlist & in_mImportedOptionList,
                                                          const GGS_guiSimpleAttributeListAST & in_mGlobalSimpleAttributeList,
                                                          const GGS_withLexiqueListAST & in_mWithLexiqueList,
                                                          const GGS_projectIndexingDescriptorList & in_mProjectIndexingDescriptorList
                                                          COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_galgasGUIComponentListAST (const GGS_galgasGUIComponentListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_galgasGUIComponentListAST::CollectionElementPtr_galgasGUIComponentListAST (const GGS_lstring & in_mGUIComponentName,
                                                                                                const GGS_lstringlist & in_mImportedOptionList,
                                                                                                const GGS_guiSimpleAttributeListAST & in_mGlobalSimpleAttributeList,
                                                                                                const GGS_withLexiqueListAST & in_mWithLexiqueList,
                                                                                                const GGS_projectIndexingDescriptorList & in_mProjectIndexingDescriptorList
                                                                                                COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mGUIComponentName, in_mImportedOptionList, in_mGlobalSimpleAttributeList, in_mWithLexiqueList, in_mProjectIndexingDescriptorList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_galgasGUIComponentListAST::CollectionElementPtr_galgasGUIComponentListAST (const GGS_galgasGUIComponentListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mGUIComponentName, inElement.mProperty_mImportedOptionList, inElement.mProperty_mGlobalSimpleAttributeList, inElement.mProperty_mWithLexiqueList, inElement.mProperty_mProjectIndexingDescriptorList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_galgasGUIComponentListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_galgasGUIComponentListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_galgasGUIComponentListAST (mObject.mProperty_mGUIComponentName, mObject.mProperty_mImportedOptionList, mObject.mProperty_mGlobalSimpleAttributeList, mObject.mProperty_mWithLexiqueList, mObject.mProperty_mProjectIndexingDescriptorList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @galgasGUIComponentListAST
//--------------------------------------------------------------------------------------------------

GGS_galgasGUIComponentListAST::GGS_galgasGUIComponentListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgasGUIComponentListAST::GGS_galgasGUIComponentListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_galgasGUIComponentListAST * p = (CollectionElementPtr_galgasGUIComponentListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_galgasGUIComponentListAST) ;
    const GGS_galgasGUIComponentListAST_2E_element element (p->mObject.mProperty_mGUIComponentName, p->mObject.mProperty_mImportedOptionList, p->mObject.mProperty_mGlobalSimpleAttributeList, p->mObject.mProperty_mWithLexiqueList, p->mObject.mProperty_mProjectIndexingDescriptorList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                               const GGS_lstring & in_mGUIComponentName,
                                                               const GGS_lstringlist & in_mImportedOptionList,
                                                               const GGS_guiSimpleAttributeListAST & in_mGlobalSimpleAttributeList,
                                                               const GGS_withLexiqueListAST & in_mWithLexiqueList,
                                                               const GGS_projectIndexingDescriptorList & in_mProjectIndexingDescriptorList
                                                               COMMA_LOCATION_ARGS) {
  CollectionElementPtr_galgasGUIComponentListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_galgasGUIComponentListAST (in_mGUIComponentName, in_mImportedOptionList, in_mGlobalSimpleAttributeList, in_mWithLexiqueList, in_mProjectIndexingDescriptorList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_galgasGUIComponentListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_galgasGUIComponentListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST::description (String & ioString,
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
      ioString.appendString ("mGUIComponentName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mGUIComponentName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mImportedOptionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mImportedOptionList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mGlobalSimpleAttributeList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mGlobalSimpleAttributeList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mWithLexiqueList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mWithLexiqueList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mProjectIndexingDescriptorList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mProjectIndexingDescriptorList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasGUIComponentListAST GGS_galgasGUIComponentListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_galgasGUIComponentListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST::plusPlusAssignOperation (const GGS_galgasGUIComponentListAST_2E_element & inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_galgasGUIComponentListAST GGS_galgasGUIComponentListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                       const GGS_lstringlist & inOperand1,
                                                                                       const GGS_guiSimpleAttributeListAST & inOperand2,
                                                                                       const GGS_withLexiqueListAST & inOperand3,
                                                                                       const GGS_projectIndexingDescriptorList & inOperand4
                                                                                       COMMA_LOCATION_ARGS) {
  const GGS_galgasGUIComponentListAST_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  GGS_galgasGUIComponentListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                        const GGS_lstringlist & inOperand1,
                                                        const GGS_guiSimpleAttributeListAST & inOperand2,
                                                        const GGS_withLexiqueListAST & inOperand3,
                                                        const GGS_projectIndexingDescriptorList & inOperand4
                                                        COMMA_LOCATION_ARGS) {
  const GGS_galgasGUIComponentListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST::setter_append (const GGS_lstring inOperand0,
                                                   const GGS_lstringlist inOperand1,
                                                   const GGS_guiSimpleAttributeListAST inOperand2,
                                                   const GGS_withLexiqueListAST inOperand3,
                                                   const GGS_projectIndexingDescriptorList inOperand4,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  const GGS_galgasGUIComponentListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                          const GGS_lstringlist inOperand1,
                                                          const GGS_guiSimpleAttributeListAST inOperand2,
                                                          const GGS_withLexiqueListAST inOperand3,
                                                          const GGS_projectIndexingDescriptorList inOperand4,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  const GGS_galgasGUIComponentListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
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

void GGS_galgasGUIComponentListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                          GGS_lstringlist & outOperand1,
                                                          GGS_guiSimpleAttributeListAST & outOperand2,
                                                          GGS_withLexiqueListAST & outOperand3,
                                                          GGS_projectIndexingDescriptorList & outOperand4,
                                                          const GGS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mGUIComponentName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mImportedOptionList ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mGlobalSimpleAttributeList ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mWithLexiqueList ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mProjectIndexingDescriptorList ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                     GGS_lstringlist & outOperand1,
                                                     GGS_guiSimpleAttributeListAST & outOperand2,
                                                     GGS_withLexiqueListAST & outOperand3,
                                                     GGS_projectIndexingDescriptorList & outOperand4,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mGUIComponentName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mImportedOptionList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mGlobalSimpleAttributeList ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mWithLexiqueList ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mProjectIndexingDescriptorList ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST::setter_popLast (GGS_lstring & outOperand0,
                                                    GGS_lstringlist & outOperand1,
                                                    GGS_guiSimpleAttributeListAST & outOperand2,
                                                    GGS_withLexiqueListAST & outOperand3,
                                                    GGS_projectIndexingDescriptorList & outOperand4,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mGUIComponentName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mImportedOptionList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mGlobalSimpleAttributeList ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mWithLexiqueList ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mProjectIndexingDescriptorList ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST::method_first (GGS_lstring & outOperand0,
                                                  GGS_lstringlist & outOperand1,
                                                  GGS_guiSimpleAttributeListAST & outOperand2,
                                                  GGS_withLexiqueListAST & outOperand3,
                                                  GGS_projectIndexingDescriptorList & outOperand4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mGUIComponentName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mImportedOptionList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mGlobalSimpleAttributeList ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mWithLexiqueList ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mProjectIndexingDescriptorList ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST::method_last (GGS_lstring & outOperand0,
                                                 GGS_lstringlist & outOperand1,
                                                 GGS_guiSimpleAttributeListAST & outOperand2,
                                                 GGS_withLexiqueListAST & outOperand3,
                                                 GGS_projectIndexingDescriptorList & outOperand4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mGUIComponentName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mImportedOptionList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mGlobalSimpleAttributeList ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mWithLexiqueList ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mProjectIndexingDescriptorList ;
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
  }
}

//--------------------------------------------------------------------------------------------------

GGS_galgasGUIComponentListAST GGS_galgasGUIComponentListAST::add_operation (const GGS_galgasGUIComponentListAST & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_galgasGUIComponentListAST result ;
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

GGS_galgasGUIComponentListAST GGS_galgasGUIComponentListAST::subList (const int32_t inStart,
                                                                      const int32_t inLength,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_galgasGUIComponentListAST result ;
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

GGS_galgasGUIComponentListAST GGS_galgasGUIComponentListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_galgasGUIComponentListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasGUIComponentListAST GGS_galgasGUIComponentListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_galgasGUIComponentListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasGUIComponentListAST GGS_galgasGUIComponentListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_galgasGUIComponentListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST::plusAssignOperation (const GGS_galgasGUIComponentListAST inList,
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

void GGS_galgasGUIComponentListAST::setter_setMGUIComponentNameAtIndex (GGS_lstring inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mGUIComponentName = inOperand ;
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

GGS_lstring GGS_galgasGUIComponentListAST::getter_mGUIComponentNameAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mGUIComponentName ;
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

void GGS_galgasGUIComponentListAST::setter_setMImportedOptionListAtIndex (GGS_lstringlist inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mImportedOptionList = inOperand ;
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

GGS_lstringlist GGS_galgasGUIComponentListAST::getter_mImportedOptionListAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mImportedOptionList ;
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

void GGS_galgasGUIComponentListAST::setter_setMGlobalSimpleAttributeListAtIndex (GGS_guiSimpleAttributeListAST inOperand,
                                                                                 GGS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mGlobalSimpleAttributeList = inOperand ;
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

GGS_guiSimpleAttributeListAST GGS_galgasGUIComponentListAST::getter_mGlobalSimpleAttributeListAtIndex (const GGS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_guiSimpleAttributeListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mGlobalSimpleAttributeList ;
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

void GGS_galgasGUIComponentListAST::setter_setMWithLexiqueListAtIndex (GGS_withLexiqueListAST inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mWithLexiqueList = inOperand ;
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

GGS_withLexiqueListAST GGS_galgasGUIComponentListAST::getter_mWithLexiqueListAtIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_withLexiqueListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mWithLexiqueList ;
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

void GGS_galgasGUIComponentListAST::setter_setMProjectIndexingDescriptorListAtIndex (GGS_projectIndexingDescriptorList inOperand,
                                                                                     GGS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mProjectIndexingDescriptorList = inOperand ;
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

GGS_projectIndexingDescriptorList GGS_galgasGUIComponentListAST::getter_mProjectIndexingDescriptorListAtIndex (const GGS_uint & inIndex,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_projectIndexingDescriptorList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mProjectIndexingDescriptorList ;
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
// Down Enumerator for @galgasGUIComponentListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_galgasGUIComponentListAST::DownEnumerator_galgasGUIComponentListAST (const GGS_galgasGUIComponentListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasGUIComponentListAST_2E_element DownEnumerator_galgasGUIComponentListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_galgasGUIComponentListAST::current_mGUIComponentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGUIComponentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist DownEnumerator_galgasGUIComponentListAST::current_mImportedOptionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mImportedOptionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST DownEnumerator_galgasGUIComponentListAST::current_mGlobalSimpleAttributeList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGlobalSimpleAttributeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST DownEnumerator_galgasGUIComponentListAST::current_mWithLexiqueList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mWithLexiqueList ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList DownEnumerator_galgasGUIComponentListAST::current_mProjectIndexingDescriptorList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProjectIndexingDescriptorList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @galgasGUIComponentListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_galgasGUIComponentListAST::UpEnumerator_galgasGUIComponentListAST (const GGS_galgasGUIComponentListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgasGUIComponentListAST_2E_element UpEnumerator_galgasGUIComponentListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_galgasGUIComponentListAST::current_mGUIComponentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGUIComponentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist UpEnumerator_galgasGUIComponentListAST::current_mImportedOptionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mImportedOptionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST UpEnumerator_galgasGUIComponentListAST::current_mGlobalSimpleAttributeList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGlobalSimpleAttributeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST UpEnumerator_galgasGUIComponentListAST::current_mWithLexiqueList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mWithLexiqueList ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList UpEnumerator_galgasGUIComponentListAST::current_mProjectIndexingDescriptorList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProjectIndexingDescriptorList ;
}




//--------------------------------------------------------------------------------------------------
//     @galgasGUIComponentListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgasGUIComponentListAST ("galgasGUIComponentListAST",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgasGUIComponentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgasGUIComponentListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgasGUIComponentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgasGUIComponentListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasGUIComponentListAST GGS_galgasGUIComponentListAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_galgasGUIComponentListAST result ;
  const GGS_galgasGUIComponentListAST * p = (const GGS_galgasGUIComponentListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgasGUIComponentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgasGUIComponentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiAnalysisContext::GGS_guiAnalysisContext (void) :
mProperty_mImportedOptionComponentList (),
mProperty_mBoolOptionList (),
mProperty_mUIntOptionList (),
mProperty_mStringOptionList (),
mProperty_mNibAndClassList (),
mProperty_mExtensionMap (),
mProperty_mWithLexiqueList (),
mProperty_mBuildRunOption (),
mProperty_mProjectIndexingDescriptorList () {
}

//--------------------------------------------------------------------------------------------------

GGS_guiAnalysisContext::GGS_guiAnalysisContext (const GGS_guiAnalysisContext & inSource) :
mProperty_mImportedOptionComponentList (inSource.mProperty_mImportedOptionComponentList),
mProperty_mBoolOptionList (inSource.mProperty_mBoolOptionList),
mProperty_mUIntOptionList (inSource.mProperty_mUIntOptionList),
mProperty_mStringOptionList (inSource.mProperty_mStringOptionList),
mProperty_mNibAndClassList (inSource.mProperty_mNibAndClassList),
mProperty_mExtensionMap (inSource.mProperty_mExtensionMap),
mProperty_mWithLexiqueList (inSource.mProperty_mWithLexiqueList),
mProperty_mBuildRunOption (inSource.mProperty_mBuildRunOption),
mProperty_mProjectIndexingDescriptorList (inSource.mProperty_mProjectIndexingDescriptorList) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiAnalysisContext & GGS_guiAnalysisContext::operator = (const GGS_guiAnalysisContext & inSource) {
  mProperty_mImportedOptionComponentList = inSource.mProperty_mImportedOptionComponentList ;
  mProperty_mBoolOptionList = inSource.mProperty_mBoolOptionList ;
  mProperty_mUIntOptionList = inSource.mProperty_mUIntOptionList ;
  mProperty_mStringOptionList = inSource.mProperty_mStringOptionList ;
  mProperty_mNibAndClassList = inSource.mProperty_mNibAndClassList ;
  mProperty_mExtensionMap = inSource.mProperty_mExtensionMap ;
  mProperty_mWithLexiqueList = inSource.mProperty_mWithLexiqueList ;
  mProperty_mBuildRunOption = inSource.mProperty_mBuildRunOption ;
  mProperty_mProjectIndexingDescriptorList = inSource.mProperty_mProjectIndexingDescriptorList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_guiAnalysisContext GGS_guiAnalysisContext::init (Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guiAnalysisContext result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiAnalysisContext::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mImportedOptionComponentList = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  mProperty_mBoolOptionList = GGS_guiCommandLineOptionList::init (inCompiler COMMA_HERE) ;
  mProperty_mUIntOptionList = GGS_guiCommandLineOptionList::init (inCompiler COMMA_HERE) ;
  mProperty_mStringOptionList = GGS_guiCommandLineOptionList::init (inCompiler COMMA_HERE) ;
  mProperty_mNibAndClassList = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  mProperty_mExtensionMap = GGS_extensionMap::init (inCompiler COMMA_HERE) ;
  mProperty_mWithLexiqueList = GGS_importedLexiqueList::init (inCompiler COMMA_HERE) ;
  mProperty_mBuildRunOption = GGS_string::makeEmptyString () ;
  mProperty_mProjectIndexingDescriptorList = GGS_projectIndexingDescriptorList::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiAnalysisContext::GGS_guiAnalysisContext (const GGS_stringlist & inOperand0,
                                                const GGS_guiCommandLineOptionList & inOperand1,
                                                const GGS_guiCommandLineOptionList & inOperand2,
                                                const GGS_guiCommandLineOptionList & inOperand3,
                                                const GGS_stringlist & inOperand4,
                                                const GGS_extensionMap & inOperand5,
                                                const GGS_importedLexiqueList & inOperand6,
                                                const GGS_string & inOperand7,
                                                const GGS_projectIndexingDescriptorList & inOperand8) :
mProperty_mImportedOptionComponentList (inOperand0),
mProperty_mBoolOptionList (inOperand1),
mProperty_mUIntOptionList (inOperand2),
mProperty_mStringOptionList (inOperand3),
mProperty_mNibAndClassList (inOperand4),
mProperty_mExtensionMap (inOperand5),
mProperty_mWithLexiqueList (inOperand6),
mProperty_mBuildRunOption (inOperand7),
mProperty_mProjectIndexingDescriptorList (inOperand8) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_guiAnalysisContext::isValid (void) const {
  return mProperty_mImportedOptionComponentList.isValid () && mProperty_mBoolOptionList.isValid () && mProperty_mUIntOptionList.isValid () && mProperty_mStringOptionList.isValid () && mProperty_mNibAndClassList.isValid () && mProperty_mExtensionMap.isValid () && mProperty_mWithLexiqueList.isValid () && mProperty_mBuildRunOption.isValid () && mProperty_mProjectIndexingDescriptorList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiAnalysisContext::drop (void) {
  mProperty_mImportedOptionComponentList.drop () ;
  mProperty_mBoolOptionList.drop () ;
  mProperty_mUIntOptionList.drop () ;
  mProperty_mStringOptionList.drop () ;
  mProperty_mNibAndClassList.drop () ;
  mProperty_mExtensionMap.drop () ;
  mProperty_mWithLexiqueList.drop () ;
  mProperty_mBuildRunOption.drop () ;
  mProperty_mProjectIndexingDescriptorList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiAnalysisContext::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @guiAnalysisContext:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mImportedOptionComponentList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBoolOptionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mUIntOptionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStringOptionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNibAndClassList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExtensionMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mWithLexiqueList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildRunOption.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProjectIndexingDescriptorList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @guiAnalysisContext generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guiAnalysisContext ("guiAnalysisContext",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guiAnalysisContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiAnalysisContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guiAnalysisContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guiAnalysisContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiAnalysisContext GGS_guiAnalysisContext::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_guiAnalysisContext result ;
  const GGS_guiAnalysisContext * p = (const GGS_guiAnalysisContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guiAnalysisContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiAnalysisContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @optionComponentMapForGeneration
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration::GGS_optionComponentMapForGeneration (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration::~ GGS_optionComponentMapForGeneration (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration::GGS_optionComponentMapForGeneration (const GGS_optionComponentMapForGeneration & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration & GGS_optionComponentMapForGeneration::operator = (const GGS_optionComponentMapForGeneration & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration GGS_optionComponentMapForGeneration::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_optionComponentMapForGeneration result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionComponentMapForGeneration::getter_contains (const GGS_string & inKey
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionComponentMapForGeneration::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                    const GGS_uint & inLevel
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_optionComponentMapForGeneration::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_optionComponentMapForGeneration::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_optionComponentMapForGeneration::getter_locationForKey (const GGS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForGeneration_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_optionComponentMapForGeneration::getter_keyList (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_optionComponentMapForGeneration::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForGeneration::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForGeneration::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_optionComponentMapForGeneration_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForGeneration::performInsert (const GGS_optionComponentMapForGeneration_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_optionComponentMapForGeneration_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForGeneration_2E_element>
GGS_optionComponentMapForGeneration::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForGeneration_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_optionComponentMapForGeneration::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForGeneration_2E_element>>
GGS_optionComponentMapForGeneration::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForGeneration_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_optionComponentMapForGeneration::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForGeneration::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration_2E_element_3F_ GGS_optionComponentMapForGeneration
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_optionComponentMapForGeneration_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForGeneration_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_optionComponentMapForGeneration_2E_element_3F_::init_nil () ;
    }else{
      GGS_optionComponentMapForGeneration_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mGuiComponentContext = info->mProperty_mGuiComponentContext ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration GGS_optionComponentMapForGeneration::class_func_mapWithMapToOverride (const GGS_optionComponentMapForGeneration & inMapToOverride
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_optionComponentMapForGeneration result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_optionComponentMapForGeneration_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration GGS_optionComponentMapForGeneration::getter_overriddenMap (Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_optionComponentMapForGeneration result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForGeneration::setter_insertKey (GGS_lstring inLKey,
                                                            GGS_guiAnalysisContext inArgument0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  const GGS_optionComponentMapForGeneration_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "redefinition of the '%K' option component: it has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiAnalysisContext GGS_optionComponentMapForGeneration::getter_mGuiComponentContextForKey (const GGS_string & inKey,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_guiAnalysisContext result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForGeneration_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mGuiComponentContext ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForGeneration::setter_setMGuiComponentContextForKey (GGS_guiAnalysisContext inValue,
                                                                                GGS_string inKey,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_optionComponentMapForGeneration_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mGuiComponentContext = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_optionComponentMapForGeneration_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForGeneration_2E_element>> & inArray,
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
    ioString.appendString ("mGuiComponentContext:") ;
    inArray (i COMMA_HERE)->mProperty_mGuiComponentContext.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForGeneration::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForGeneration_2E_element>> array = sortedInfoArray () ;
    GGS_optionComponentMapForGeneration_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_optionComponentMapForGeneration_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_optionComponentMapForGeneration_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @optionComponentMapForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_optionComponentMapForGeneration::DownEnumerator_optionComponentMapForGeneration (const GGS_optionComponentMapForGeneration & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration_2E_element DownEnumerator_optionComponentMapForGeneration::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_optionComponentMapForGeneration::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiAnalysisContext DownEnumerator_optionComponentMapForGeneration::current_mGuiComponentContext (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mGuiComponentContext ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @optionComponentMapForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_optionComponentMapForGeneration::UpEnumerator_optionComponentMapForGeneration (const GGS_optionComponentMapForGeneration & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration_2E_element UpEnumerator_optionComponentMapForGeneration::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_optionComponentMapForGeneration::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiAnalysisContext UpEnumerator_optionComponentMapForGeneration::current_mGuiComponentContext (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mGuiComponentContext ;
}


//--------------------------------------------------------------------------------------------------
//     @optionComponentMapForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionComponentMapForGeneration ("optionComponentMapForGeneration",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionComponentMapForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentMapForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionComponentMapForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionComponentMapForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration GGS_optionComponentMapForGeneration::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_optionComponentMapForGeneration result ;
  const GGS_optionComponentMapForGeneration * p = (const GGS_optionComponentMapForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionComponentMapForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentMapForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @nonterminalCallInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_nonterminalCallInstruction::objectCompare (const GGS_nonterminalCallInstruction & inOperand) const {
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

GGS_nonterminalCallInstruction::GGS_nonterminalCallInstruction (void) :
GGS_syntaxInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_nonterminalCallInstruction GGS_nonterminalCallInstruction::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_lstring & in_mNonterminalName,
                      const GGS_actualParameterListAST & in_mActualParameterList,
                      const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_nonterminalCallInstruction * object = nullptr ;
  macroMyNew (object, cPtr_nonterminalCallInstruction (inCompiler COMMA_THERE)) ;
  object->nonterminalCallInstruction_init_21__21__21__21_ (in_mInstructionLocation, in_mNonterminalName, in_mActualParameterList, in_mGrammarInstructionSyntaxDirectedTranslationResult, inCompiler) ;
  const GGS_nonterminalCallInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_nonterminalCallInstruction::
nonterminalCallInstruction_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                 const GGS_lstring & in_mNonterminalName,
                                                 const GGS_actualParameterListAST & in_mActualParameterList,
                                                 const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult,
                                                 Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mNonterminalName = in_mNonterminalName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationResult = in_mGrammarInstructionSyntaxDirectedTranslationResult ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalCallInstruction::GGS_nonterminalCallInstruction (const cPtr_nonterminalCallInstruction * inSourcePtr) :
GGS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_nonterminalCallInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_nonterminalCallInstruction::readProperty_mNonterminalName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_nonterminalCallInstruction * p = (cPtr_nonterminalCallInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalCallInstruction) ;
    return p->mProperty_mNonterminalName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST GGS_nonterminalCallInstruction::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualParameterListAST () ;
  }else{
    cPtr_nonterminalCallInstruction * p = (cPtr_nonterminalCallInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalCallInstruction) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult GGS_nonterminalCallInstruction::readProperty_mGrammarInstructionSyntaxDirectedTranslationResult (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult () ;
  }else{
    cPtr_nonterminalCallInstruction * p = (cPtr_nonterminalCallInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalCallInstruction) ;
    return p->mProperty_mGrammarInstructionSyntaxDirectedTranslationResult ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @nonterminalCallInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_nonterminalCallInstruction::cPtr_nonterminalCallInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (inCompiler COMMA_THERE),
mProperty_mNonterminalName (),
mProperty_mActualParameterList (),
mProperty_mGrammarInstructionSyntaxDirectedTranslationResult () {
}

//--------------------------------------------------------------------------------------------------

cPtr_nonterminalCallInstruction::cPtr_nonterminalCallInstruction (const GGS_location & in_mInstructionLocation,
                                                                  const GGS_lstring & in_mNonterminalName,
                                                                  const GGS_actualParameterListAST & in_mActualParameterList,
                                                                  const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mNonterminalName (),
mProperty_mActualParameterList (),
mProperty_mGrammarInstructionSyntaxDirectedTranslationResult () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mNonterminalName = in_mNonterminalName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationResult = in_mGrammarInstructionSyntaxDirectedTranslationResult ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_nonterminalCallInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalCallInstruction ;
}

void cPtr_nonterminalCallInstruction::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@nonterminalCallInstruction:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNonterminalName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationResult.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_nonterminalCallInstruction::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_nonterminalCallInstruction (mProperty_mInstructionLocation, mProperty_mNonterminalName, mProperty_mActualParameterList, mProperty_mGrammarInstructionSyntaxDirectedTranslationResult, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_nonterminalCallInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mNonterminalName.printNonNullClassInstanceProperties ("mNonterminalName") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
    mProperty_mGrammarInstructionSyntaxDirectedTranslationResult.printNonNullClassInstanceProperties ("mGrammarInstructionSyntaxDirectedTranslationResult") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @nonterminalCallInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalCallInstruction ("nonterminalCallInstruction",
                                                                               & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonterminalCallInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalCallInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonterminalCallInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonterminalCallInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalCallInstruction GGS_nonterminalCallInstruction::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_nonterminalCallInstruction result ;
  const GGS_nonterminalCallInstruction * p = (const GGS_nonterminalCallInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonterminalCallInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalCallInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_nonterminalCallInstruction_2E_weak::objectCompare (const GGS_nonterminalCallInstruction_2E_weak & inOperand) const {
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

GGS_nonterminalCallInstruction_2E_weak::GGS_nonterminalCallInstruction_2E_weak (void) :
GGS_syntaxInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalCallInstruction_2E_weak & GGS_nonterminalCallInstruction_2E_weak::operator = (const GGS_nonterminalCallInstruction & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalCallInstruction_2E_weak::GGS_nonterminalCallInstruction_2E_weak (const GGS_nonterminalCallInstruction & inSource) :
GGS_syntaxInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_nonterminalCallInstruction_2E_weak GGS_nonterminalCallInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_nonterminalCallInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalCallInstruction GGS_nonterminalCallInstruction_2E_weak::unwrappedValue (void) const {
  GGS_nonterminalCallInstruction result ;
  if (isValid ()) {
    const cPtr_nonterminalCallInstruction * p = (cPtr_nonterminalCallInstruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_nonterminalCallInstruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalCallInstruction GGS_nonterminalCallInstruction_2E_weak::bang_nonterminalCallInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_nonterminalCallInstruction result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_nonterminalCallInstruction) ;
      result = GGS_nonterminalCallInstruction ((cPtr_nonterminalCallInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @nonterminalCallInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalCallInstruction_2E_weak ("nonterminalCallInstruction.weak",
                                                                                       & kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonterminalCallInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalCallInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonterminalCallInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonterminalCallInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalCallInstruction_2E_weak GGS_nonterminalCallInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_nonterminalCallInstruction_2E_weak result ;
  const GGS_nonterminalCallInstruction_2E_weak * p = (const GGS_nonterminalCallInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonterminalCallInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalCallInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @nonterminalInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_nonterminalInstructionForGeneration::objectCompare (const GGS_nonterminalInstructionForGeneration & inOperand) const {
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

GGS_nonterminalInstructionForGeneration::GGS_nonterminalInstructionForGeneration (void) :
GGS_syntaxInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_nonterminalInstructionForGeneration GGS_nonterminalInstructionForGeneration::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_string & in_mNonterminalName,
                          const GGS_string & in_mLabelName,
                          const GGS_actualParameterListForGeneration & in_mActualParameterList,
                          const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_nonterminalInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_nonterminalInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->nonterminalInstructionForGeneration_init_21__21__21__21__21_ (in_mInstructionLocation, in_mNonterminalName, in_mLabelName, in_mActualParameterList, in_mGrammarInstructionSyntaxDirectedTranslationResult, inCompiler) ;
  const GGS_nonterminalInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_nonterminalInstructionForGeneration::
nonterminalInstructionForGeneration_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                              const GGS_string & in_mNonterminalName,
                                                              const GGS_string & in_mLabelName,
                                                              const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                              const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult,
                                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mNonterminalName = in_mNonterminalName ;
  mProperty_mLabelName = in_mLabelName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationResult = in_mGrammarInstructionSyntaxDirectedTranslationResult ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalInstructionForGeneration::GGS_nonterminalInstructionForGeneration (const cPtr_nonterminalInstructionForGeneration * inSourcePtr) :
GGS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_nonterminalInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_nonterminalInstructionForGeneration::readProperty_mNonterminalName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_nonterminalInstructionForGeneration * p = (cPtr_nonterminalInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalInstructionForGeneration) ;
    return p->mProperty_mNonterminalName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_nonterminalInstructionForGeneration::readProperty_mLabelName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_nonterminalInstructionForGeneration * p = (cPtr_nonterminalInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalInstructionForGeneration) ;
    return p->mProperty_mLabelName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_nonterminalInstructionForGeneration::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualParameterListForGeneration () ;
  }else{
    cPtr_nonterminalInstructionForGeneration * p = (cPtr_nonterminalInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalInstructionForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult GGS_nonterminalInstructionForGeneration::readProperty_mGrammarInstructionSyntaxDirectedTranslationResult (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult () ;
  }else{
    cPtr_nonterminalInstructionForGeneration * p = (cPtr_nonterminalInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalInstructionForGeneration) ;
    return p->mProperty_mGrammarInstructionSyntaxDirectedTranslationResult ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @nonterminalInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_nonterminalInstructionForGeneration::cPtr_nonterminalInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mNonterminalName (),
mProperty_mLabelName (),
mProperty_mActualParameterList (),
mProperty_mGrammarInstructionSyntaxDirectedTranslationResult () {
}

//--------------------------------------------------------------------------------------------------

cPtr_nonterminalInstructionForGeneration::cPtr_nonterminalInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                                    const GGS_string & in_mNonterminalName,
                                                                                    const GGS_string & in_mLabelName,
                                                                                    const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                    const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mNonterminalName (),
mProperty_mLabelName (),
mProperty_mActualParameterList (),
mProperty_mGrammarInstructionSyntaxDirectedTranslationResult () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mNonterminalName = in_mNonterminalName ;
  mProperty_mLabelName = in_mLabelName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationResult = in_mGrammarInstructionSyntaxDirectedTranslationResult ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_nonterminalInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration ;
}

void cPtr_nonterminalInstructionForGeneration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@nonterminalInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNonterminalName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLabelName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationResult.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_nonterminalInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_nonterminalInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mNonterminalName, mProperty_mLabelName, mProperty_mActualParameterList, mProperty_mGrammarInstructionSyntaxDirectedTranslationResult, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_nonterminalInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mNonterminalName.printNonNullClassInstanceProperties ("mNonterminalName") ;
    mProperty_mLabelName.printNonNullClassInstanceProperties ("mLabelName") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
    mProperty_mGrammarInstructionSyntaxDirectedTranslationResult.printNonNullClassInstanceProperties ("mGrammarInstructionSyntaxDirectedTranslationResult") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @nonterminalInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration ("nonterminalInstructionForGeneration",
                                                                                        & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonterminalInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonterminalInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonterminalInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalInstructionForGeneration GGS_nonterminalInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_nonterminalInstructionForGeneration result ;
  const GGS_nonterminalInstructionForGeneration * p = (const GGS_nonterminalInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonterminalInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_nonterminalInstructionForGeneration_2E_weak::objectCompare (const GGS_nonterminalInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_nonterminalInstructionForGeneration_2E_weak::GGS_nonterminalInstructionForGeneration_2E_weak (void) :
GGS_syntaxInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalInstructionForGeneration_2E_weak & GGS_nonterminalInstructionForGeneration_2E_weak::operator = (const GGS_nonterminalInstructionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalInstructionForGeneration_2E_weak::GGS_nonterminalInstructionForGeneration_2E_weak (const GGS_nonterminalInstructionForGeneration & inSource) :
GGS_syntaxInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_nonterminalInstructionForGeneration_2E_weak GGS_nonterminalInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_nonterminalInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalInstructionForGeneration GGS_nonterminalInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_nonterminalInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_nonterminalInstructionForGeneration * p = (cPtr_nonterminalInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_nonterminalInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalInstructionForGeneration GGS_nonterminalInstructionForGeneration_2E_weak::bang_nonterminalInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_nonterminalInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_nonterminalInstructionForGeneration) ;
      result = GGS_nonterminalInstructionForGeneration ((cPtr_nonterminalInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @nonterminalInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration_2E_weak ("nonterminalInstructionForGeneration.weak",
                                                                                                & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonterminalInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonterminalInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonterminalInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalInstructionForGeneration_2E_weak GGS_nonterminalInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_nonterminalInstructionForGeneration_2E_weak result ;
  const GGS_nonterminalInstructionForGeneration_2E_weak * p = (const GGS_nonterminalInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonterminalInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_terminalCheckAssignement_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_terminalCheckAssignement_5D_::GGS__5B_terminalCheckAssignement_5D_ (void) :
AC_GALGAS_root (),
mSharedArray () {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_terminalCheckAssignement_5D_::GGS__5B_terminalCheckAssignement_5D_ (const GGS__5B_terminalCheckAssignement_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_terminalCheckAssignement_5D_ & GGS__5B_terminalCheckAssignement_5D_::operator = (const GGS__5B_terminalCheckAssignement_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_terminalCheckAssignement_5D_ GGS__5B_terminalCheckAssignement_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_terminalCheckAssignement_5D_ result ;
  result.mSharedArray.setCapacity (16) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS__5B_terminalCheckAssignement_5D_::isValid (void) const {
  return mSharedArray.isAllocated () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_terminalCheckAssignement_5D_::drop (void) {
  mSharedArray.removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_terminalCheckAssignement_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mSharedArray.setCapacity (16) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_terminalCheckAssignement_5D_::plusPlusAssignOperation (const GGS_terminalCheckAssignement & inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mSharedArray.appendObject (inValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_terminalCheckAssignement_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_terminalCheckAssignement_5D_ GGS__5B_terminalCheckAssignement_5D_::add_operation (const GGS__5B_terminalCheckAssignement_5D_ & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_terminalCheckAssignement_5D_ result ;
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

void GGS__5B_terminalCheckAssignement_5D_::description (String & ioString,
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

void GGS__5B_terminalCheckAssignement_5D_::plusAssignOperation (const GGS__5B_terminalCheckAssignement_5D_ inOperand,
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

void GGS__5B_terminalCheckAssignement_5D_::setter_append (const GGS_terminalCheckAssignement inValue,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_terminalCheckAssignement_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_terminalCheckAssignement_5D_::setter_insertAtIndex (const GGS_terminalCheckAssignement inValue,
                                                                 const GGS_uint inInsertionIndex,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_terminalCheckAssignement_5D_::setter_removeAtIndex (GGS_terminalCheckAssignement & outValue,
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

void GGS__5B_terminalCheckAssignement_5D_::setter_popFirst (GGS_terminalCheckAssignement & outValue,
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

void GGS__5B_terminalCheckAssignement_5D_::setter_popLast (GGS_terminalCheckAssignement & outValue,
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

void GGS__5B_terminalCheckAssignement_5D_::method_first (GGS_terminalCheckAssignement & outValue,
                                                         Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray (0 COMMA_THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_terminalCheckAssignement_5D_::method_last (GGS_terminalCheckAssignement & outValue,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray.lastObject (THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignement GGS__5B_terminalCheckAssignement_5D_::readSubscript__3F_ (const GGS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_terminalCheckAssignement result ;
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
// Down Enumerator for @_5B_terminalCheckAssignement_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_terminalCheckAssignement_5D_::DownEnumerator__5B_terminalCheckAssignement_5D_ (const GGS__5B_terminalCheckAssignement_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignement DownEnumerator__5B_terminalCheckAssignement_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_terminalCheckAssignement_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_terminalCheckAssignement_5D_::UpEnumerator__5B_terminalCheckAssignement_5D_ (const GGS__5B_terminalCheckAssignement_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignement UpEnumerator__5B_terminalCheckAssignement_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[terminalCheckAssignement] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_terminalCheckAssignement_5D_ ("[terminalCheckAssignement]",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_terminalCheckAssignement_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_terminalCheckAssignement_5D_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__5B_terminalCheckAssignement_5D_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__5B_terminalCheckAssignement_5D_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_terminalCheckAssignement_5D_ GGS__5B_terminalCheckAssignement_5D_::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS__5B_terminalCheckAssignement_5D_ result ;
  const GGS__5B_terminalCheckAssignement_5D_ * p = (const GGS__5B_terminalCheckAssignement_5D_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__5B_terminalCheckAssignement_5D_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("[terminalCheckAssignement]", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignement::GGS_terminalCheckAssignement (void) :
mProperty_mTypeName (),
mProperty_mTargetVarCppName (),
mProperty_mSourceLexicalAttributeName () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignement::GGS_terminalCheckAssignement (const GGS_terminalCheckAssignement & inSource) :
mProperty_mTypeName (inSource.mProperty_mTypeName),
mProperty_mTargetVarCppName (inSource.mProperty_mTargetVarCppName),
mProperty_mSourceLexicalAttributeName (inSource.mProperty_mSourceLexicalAttributeName) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignement & GGS_terminalCheckAssignement::operator = (const GGS_terminalCheckAssignement & inSource) {
  mProperty_mTypeName = inSource.mProperty_mTypeName ;
  mProperty_mTargetVarCppName = inSource.mProperty_mTargetVarCppName ;
  mProperty_mSourceLexicalAttributeName = inSource.mProperty_mSourceLexicalAttributeName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_terminalCheckAssignement GGS_terminalCheckAssignement::init_21__21__21_ (const GGS_string & in_mTypeName,
                                                                             const GGS_string & in_mTargetVarCppName,
                                                                             const GGS_string & in_mSourceLexicalAttributeName,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_terminalCheckAssignement result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTypeName = in_mTypeName ;
  result.mProperty_mTargetVarCppName = in_mTargetVarCppName ;
  result.mProperty_mSourceLexicalAttributeName = in_mSourceLexicalAttributeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignement::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignement::GGS_terminalCheckAssignement (const GGS_string & inOperand0,
                                                            const GGS_string & inOperand1,
                                                            const GGS_string & inOperand2) :
mProperty_mTypeName (inOperand0),
mProperty_mTargetVarCppName (inOperand1),
mProperty_mSourceLexicalAttributeName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_terminalCheckAssignement::isValid (void) const {
  return mProperty_mTypeName.isValid () && mProperty_mTargetVarCppName.isValid () && mProperty_mSourceLexicalAttributeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignement::drop (void) {
  mProperty_mTypeName.drop () ;
  mProperty_mTargetVarCppName.drop () ;
  mProperty_mSourceLexicalAttributeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignement::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @terminalCheckAssignement:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTargetVarCppName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSourceLexicalAttributeName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @terminalCheckAssignement generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalCheckAssignement ("terminalCheckAssignement",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalCheckAssignement::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckAssignement ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalCheckAssignement::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalCheckAssignement (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignement GGS_terminalCheckAssignement::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_terminalCheckAssignement result ;
  const GGS_terminalCheckAssignement * p = (const GGS_terminalCheckAssignement *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalCheckAssignement *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalCheckAssignement", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@actualInputParameterListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_actualInputParameterListAST : public CollectionElementPtr {
  public: GGS_actualInputParameterListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_actualInputParameterListAST (const GGS_lstring & in_mActualSelector,
                                                            const GGS_abstractInputParameter & in_mInputParameter
                                                            COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_actualInputParameterListAST (const GGS_actualInputParameterListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_actualInputParameterListAST::CollectionElementPtr_actualInputParameterListAST (const GGS_lstring & in_mActualSelector,
                                                                                                    const GGS_abstractInputParameter & in_mInputParameter
                                                                                                    COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mActualSelector, in_mInputParameter) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_actualInputParameterListAST::CollectionElementPtr_actualInputParameterListAST (const GGS_actualInputParameterListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mActualSelector, inElement.mProperty_mInputParameter) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_actualInputParameterListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_actualInputParameterListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_actualInputParameterListAST (mObject.mProperty_mActualSelector, mObject.mProperty_mInputParameter COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @actualInputParameterListAST
//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterListAST::GGS_actualInputParameterListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterListAST::GGS_actualInputParameterListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_actualInputParameterListAST * p = (CollectionElementPtr_actualInputParameterListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_actualInputParameterListAST) ;
    const GGS_actualInputParameterListAST_2E_element element (p->mObject.mProperty_mActualSelector, p->mObject.mProperty_mInputParameter) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualInputParameterListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                 const GGS_lstring & in_mActualSelector,
                                                                 const GGS_abstractInputParameter & in_mInputParameter
                                                                 COMMA_LOCATION_ARGS) {
  CollectionElementPtr_actualInputParameterListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_actualInputParameterListAST (in_mActualSelector, in_mInputParameter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_actualInputParameterListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_actualInputParameterListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualInputParameterListAST::description (String & ioString,
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
      ioString.appendString ("mActualSelector:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mActualSelector.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInputParameter:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInputParameter.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterListAST GGS_actualInputParameterListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actualInputParameterListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualInputParameterListAST::plusPlusAssignOperation (const GGS_actualInputParameterListAST_2E_element & inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterListAST GGS_actualInputParameterListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                           const GGS_abstractInputParameter & inOperand1
                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_actualInputParameterListAST_2E_element element (inOperand0, inOperand1) ;
  GGS_actualInputParameterListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualInputParameterListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                          const GGS_abstractInputParameter & inOperand1
                                                          COMMA_LOCATION_ARGS) {
  const GGS_actualInputParameterListAST_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualInputParameterListAST::setter_append (const GGS_lstring inOperand0,
                                                     const GGS_abstractInputParameter inOperand1,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  const GGS_actualInputParameterListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualInputParameterListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                            const GGS_abstractInputParameter inOperand1,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  const GGS_actualInputParameterListAST_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_actualInputParameterListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                            GGS_abstractInputParameter & outOperand1,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mActualSelector ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mInputParameter ;
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

void GGS_actualInputParameterListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                       GGS_abstractInputParameter & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mActualSelector ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mInputParameter ;
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

void GGS_actualInputParameterListAST::setter_popLast (GGS_lstring & outOperand0,
                                                      GGS_abstractInputParameter & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mActualSelector ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mInputParameter ;
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

void GGS_actualInputParameterListAST::method_first (GGS_lstring & outOperand0,
                                                    GGS_abstractInputParameter & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mActualSelector ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mInputParameter ;
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

void GGS_actualInputParameterListAST::method_last (GGS_lstring & outOperand0,
                                                   GGS_abstractInputParameter & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mActualSelector ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mInputParameter ;
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

GGS_actualInputParameterListAST GGS_actualInputParameterListAST::add_operation (const GGS_actualInputParameterListAST & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_actualInputParameterListAST result ;
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

GGS_actualInputParameterListAST GGS_actualInputParameterListAST::subList (const int32_t inStart,
                                                                          const int32_t inLength,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_actualInputParameterListAST result ;
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

GGS_actualInputParameterListAST GGS_actualInputParameterListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_actualInputParameterListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterListAST GGS_actualInputParameterListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_actualInputParameterListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterListAST GGS_actualInputParameterListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_actualInputParameterListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualInputParameterListAST::plusAssignOperation (const GGS_actualInputParameterListAST inList,
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

void GGS_actualInputParameterListAST::setter_setMActualSelectorAtIndex (GGS_lstring inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mActualSelector = inOperand ;
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

GGS_lstring GGS_actualInputParameterListAST::getter_mActualSelectorAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mActualSelector ;
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

void GGS_actualInputParameterListAST::setter_setMInputParameterAtIndex (GGS_abstractInputParameter inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInputParameter = inOperand ;
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

GGS_abstractInputParameter GGS_actualInputParameterListAST::getter_mInputParameterAtIndex (const GGS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_abstractInputParameter result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInputParameter ;
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
// Down Enumerator for @actualInputParameterListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_actualInputParameterListAST::DownEnumerator_actualInputParameterListAST (const GGS_actualInputParameterListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterListAST_2E_element DownEnumerator_actualInputParameterListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_actualInputParameterListAST::current_mActualSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mActualSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInputParameter DownEnumerator_actualInputParameterListAST::current_mInputParameter (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInputParameter ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @actualInputParameterListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_actualInputParameterListAST::UpEnumerator_actualInputParameterListAST (const GGS_actualInputParameterListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterListAST_2E_element UpEnumerator_actualInputParameterListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_actualInputParameterListAST::current_mActualSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mActualSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInputParameter UpEnumerator_actualInputParameterListAST::current_mInputParameter (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInputParameter ;
}




//--------------------------------------------------------------------------------------------------
//     @actualInputParameterListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualInputParameterListAST ("actualInputParameterListAST",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_actualInputParameterListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualInputParameterListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actualInputParameterListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actualInputParameterListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterListAST GGS_actualInputParameterListAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_actualInputParameterListAST result ;
  const GGS_actualInputParameterListAST * p = (const GGS_actualInputParameterListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actualInputParameterListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualInputParameterListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_terminalCheckInstructionAST_2E_weak::objectCompare (const GGS_terminalCheckInstructionAST_2E_weak & inOperand) const {
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

GGS_terminalCheckInstructionAST_2E_weak::GGS_terminalCheckInstructionAST_2E_weak (void) :
GGS_syntaxInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionAST_2E_weak & GGS_terminalCheckInstructionAST_2E_weak::operator = (const GGS_terminalCheckInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionAST_2E_weak::GGS_terminalCheckInstructionAST_2E_weak (const GGS_terminalCheckInstructionAST & inSource) :
GGS_syntaxInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionAST_2E_weak GGS_terminalCheckInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_terminalCheckInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionAST GGS_terminalCheckInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_terminalCheckInstructionAST result ;
  if (isValid ()) {
    const cPtr_terminalCheckInstructionAST * p = (cPtr_terminalCheckInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_terminalCheckInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionAST GGS_terminalCheckInstructionAST_2E_weak::bang_terminalCheckInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_terminalCheckInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_terminalCheckInstructionAST) ;
      result = GGS_terminalCheckInstructionAST ((cPtr_terminalCheckInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @terminalCheckInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalCheckInstructionAST_2E_weak ("terminalCheckInstructionAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalCheckInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalCheckInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalCheckInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionAST_2E_weak GGS_terminalCheckInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_terminalCheckInstructionAST_2E_weak result ;
  const GGS_terminalCheckInstructionAST_2E_weak * p = (const GGS_terminalCheckInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalCheckInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalCheckInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @terminalInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_terminalInstructionForGrammarAnalysis::objectCompare (const GGS_terminalInstructionForGrammarAnalysis & inOperand) const {
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

GGS_terminalInstructionForGrammarAnalysis::GGS_terminalInstructionForGrammarAnalysis (void) :
GGS_abstractSyntaxInstructionForGrammarAnalysis () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_terminalInstructionForGrammarAnalysis GGS_terminalInstructionForGrammarAnalysis::
init_21__21__21_ (const GGS_location & in_mStartLocation,
                  const GGS_lstring & in_mTerminalSymbolName,
                  const GGS_uint & in_mTerminalSymbolIndex,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_terminalInstructionForGrammarAnalysis * object = nullptr ;
  macroMyNew (object, cPtr_terminalInstructionForGrammarAnalysis (inCompiler COMMA_THERE)) ;
  object->terminalInstructionForGrammarAnalysis_init_21__21__21_ (in_mStartLocation, in_mTerminalSymbolName, in_mTerminalSymbolIndex, inCompiler) ;
  const GGS_terminalInstructionForGrammarAnalysis result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_terminalInstructionForGrammarAnalysis::
terminalInstructionForGrammarAnalysis_init_21__21__21_ (const GGS_location & in_mStartLocation,
                                                        const GGS_lstring & in_mTerminalSymbolName,
                                                        const GGS_uint & in_mTerminalSymbolIndex,
                                                        Compiler * /* inCompiler */) {
  mProperty_mStartLocation = in_mStartLocation ;
  mProperty_mTerminalSymbolName = in_mTerminalSymbolName ;
  mProperty_mTerminalSymbolIndex = in_mTerminalSymbolIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalInstructionForGrammarAnalysis::GGS_terminalInstructionForGrammarAnalysis (const cPtr_terminalInstructionForGrammarAnalysis * inSourcePtr) :
GGS_abstractSyntaxInstructionForGrammarAnalysis (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_terminalInstructionForGrammarAnalysis) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_terminalInstructionForGrammarAnalysis::readProperty_mTerminalSymbolName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_terminalInstructionForGrammarAnalysis * p = (cPtr_terminalInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalInstructionForGrammarAnalysis) ;
    return p->mProperty_mTerminalSymbolName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_terminalInstructionForGrammarAnalysis::readProperty_mTerminalSymbolIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_terminalInstructionForGrammarAnalysis * p = (cPtr_terminalInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalInstructionForGrammarAnalysis) ;
    return p->mProperty_mTerminalSymbolIndex ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @terminalInstructionForGrammarAnalysis class
//--------------------------------------------------------------------------------------------------

cPtr_terminalInstructionForGrammarAnalysis::cPtr_terminalInstructionForGrammarAnalysis (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (inCompiler COMMA_THERE),
mProperty_mTerminalSymbolName (),
mProperty_mTerminalSymbolIndex () {
}

//--------------------------------------------------------------------------------------------------

cPtr_terminalInstructionForGrammarAnalysis::cPtr_terminalInstructionForGrammarAnalysis (const GGS_location & in_mStartLocation,
                                                                                        const GGS_lstring & in_mTerminalSymbolName,
                                                                                        const GGS_uint & in_mTerminalSymbolIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (in_mStartLocation, inCompiler COMMA_THERE),
mProperty_mTerminalSymbolName (),
mProperty_mTerminalSymbolIndex () {
  mProperty_mStartLocation = in_mStartLocation ;
  mProperty_mTerminalSymbolName = in_mTerminalSymbolName ;
  mProperty_mTerminalSymbolIndex = in_mTerminalSymbolIndex ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_terminalInstructionForGrammarAnalysis::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis ;
}

void cPtr_terminalInstructionForGrammarAnalysis::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@terminalInstructionForGrammarAnalysis:") ;
  mProperty_mStartLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTerminalSymbolName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTerminalSymbolIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_terminalInstructionForGrammarAnalysis::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_terminalInstructionForGrammarAnalysis (mProperty_mStartLocation, mProperty_mTerminalSymbolName, mProperty_mTerminalSymbolIndex, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_terminalInstructionForGrammarAnalysis::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractSyntaxInstructionForGrammarAnalysis::printNonNullClassInstanceProperties () ;
    mProperty_mTerminalSymbolName.printNonNullClassInstanceProperties ("mTerminalSymbolName") ;
    mProperty_mTerminalSymbolIndex.printNonNullClassInstanceProperties ("mTerminalSymbolIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @terminalInstructionForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis ("terminalInstructionForGrammarAnalysis",
                                                                                          & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalInstructionForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalInstructionForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalInstructionForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalInstructionForGrammarAnalysis GGS_terminalInstructionForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_terminalInstructionForGrammarAnalysis result ;
  const GGS_terminalInstructionForGrammarAnalysis * p = (const GGS_terminalInstructionForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalInstructionForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalInstructionForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::objectCompare (const GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak & inOperand) const {
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

GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak & GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::operator = (const GGS_abstractSyntaxInstructionForGrammarAnalysis & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (const GGS_abstractSyntaxInstructionForGrammarAnalysis & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::unwrappedValue (void) const {
  GGS_abstractSyntaxInstructionForGrammarAnalysis result ;
  if (isValid ()) {
    const cPtr_abstractSyntaxInstructionForGrammarAnalysis * p = (cPtr_abstractSyntaxInstructionForGrammarAnalysis *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractSyntaxInstructionForGrammarAnalysis (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::bang_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractSyntaxInstructionForGrammarAnalysis result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
      result = GGS_abstractSyntaxInstructionForGrammarAnalysis ((cPtr_abstractSyntaxInstructionForGrammarAnalysis *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractSyntaxInstructionForGrammarAnalysis.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak ("abstractSyntaxInstructionForGrammarAnalysis.weak",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak result ;
  const GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak * p = (const GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractSyntaxInstructionForGrammarAnalysis.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @terminalCheckInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_terminalCheckInstructionForGeneration::objectCompare (const GGS_terminalCheckInstructionForGeneration & inOperand) const {
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

GGS_terminalCheckInstructionForGeneration::GGS_terminalCheckInstructionForGeneration (void) :
GGS_syntaxInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration GGS_terminalCheckInstructionForGeneration::
init_21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                  const GGS_lstring & in_mTerminalName,
                                  const GGS_string & in_mLexiqueIdentifier,
                                  const GGS__5B_terminalCheckAssignement_5D_ & in_mTerminalCheckAssignementList,
                                  const GGS__32_lstringlist & in_mIndexingKeyList,
                                  const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                  const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_terminalCheckInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_terminalCheckInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->terminalCheckInstructionForGeneration_init_21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mTerminalName, in_mLexiqueIdentifier, in_mTerminalCheckAssignementList, in_mIndexingKeyList, in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor, in_mGrammarInstructionSyntaxDirectedTranslationToken, inCompiler) ;
  const GGS_terminalCheckInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionForGeneration::
terminalCheckInstructionForGeneration_init_21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                        const GGS_lstring & in_mTerminalName,
                                                                        const GGS_string & in_mLexiqueIdentifier,
                                                                        const GGS__5B_terminalCheckAssignement_5D_ & in_mTerminalCheckAssignementList,
                                                                        const GGS__32_lstringlist & in_mIndexingKeyList,
                                                                        const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                                                        const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken,
                                                                        Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTerminalName = in_mTerminalName ;
  mProperty_mLexiqueIdentifier = in_mLexiqueIdentifier ;
  mProperty_mTerminalCheckAssignementList = in_mTerminalCheckAssignementList ;
  mProperty_mIndexingKeyList = in_mIndexingKeyList ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor = in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationToken = in_mGrammarInstructionSyntaxDirectedTranslationToken ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration::GGS_terminalCheckInstructionForGeneration (const cPtr_terminalCheckInstructionForGeneration * inSourcePtr) :
GGS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_terminalCheckInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_terminalCheckInstructionForGeneration::readProperty_mTerminalName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_terminalCheckInstructionForGeneration * p = (cPtr_terminalCheckInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionForGeneration) ;
    return p->mProperty_mTerminalName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_terminalCheckInstructionForGeneration::readProperty_mLexiqueIdentifier (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_terminalCheckInstructionForGeneration * p = (cPtr_terminalCheckInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionForGeneration) ;
    return p->mProperty_mLexiqueIdentifier ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_terminalCheckAssignement_5D_ GGS_terminalCheckInstructionForGeneration::readProperty_mTerminalCheckAssignementList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_terminalCheckAssignement_5D_ () ;
  }else{
    cPtr_terminalCheckInstructionForGeneration * p = (cPtr_terminalCheckInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionForGeneration) ;
    return p->mProperty_mTerminalCheckAssignementList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS_terminalCheckInstructionForGeneration::readProperty_mIndexingKeyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__32_lstringlist () ;
  }else{
    cPtr_terminalCheckInstructionForGeneration * p = (cPtr_terminalCheckInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionForGeneration) ;
    return p->mProperty_mIndexingKeyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult GGS_terminalCheckInstructionForGeneration::readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult () ;
  }else{
    cPtr_terminalCheckInstructionForGeneration * p = (cPtr_terminalCheckInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionForGeneration) ;
    return p->mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult GGS_terminalCheckInstructionForGeneration::readProperty_mGrammarInstructionSyntaxDirectedTranslationToken (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult () ;
  }else{
    cPtr_terminalCheckInstructionForGeneration * p = (cPtr_terminalCheckInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionForGeneration) ;
    return p->mProperty_mGrammarInstructionSyntaxDirectedTranslationToken ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @terminalCheckInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_terminalCheckInstructionForGeneration::cPtr_terminalCheckInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mTerminalName (),
mProperty_mLexiqueIdentifier (),
mProperty_mTerminalCheckAssignementList (),
mProperty_mIndexingKeyList (),
mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (),
mProperty_mGrammarInstructionSyntaxDirectedTranslationToken () {
}

//--------------------------------------------------------------------------------------------------

cPtr_terminalCheckInstructionForGeneration::cPtr_terminalCheckInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                                        const GGS_lstring & in_mTerminalName,
                                                                                        const GGS_string & in_mLexiqueIdentifier,
                                                                                        const GGS__5B_terminalCheckAssignement_5D_ & in_mTerminalCheckAssignementList,
                                                                                        const GGS__32_lstringlist & in_mIndexingKeyList,
                                                                                        const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                                                                        const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTerminalName (),
mProperty_mLexiqueIdentifier (),
mProperty_mTerminalCheckAssignementList (),
mProperty_mIndexingKeyList (),
mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (),
mProperty_mGrammarInstructionSyntaxDirectedTranslationToken () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTerminalName = in_mTerminalName ;
  mProperty_mLexiqueIdentifier = in_mLexiqueIdentifier ;
  mProperty_mTerminalCheckAssignementList = in_mTerminalCheckAssignementList ;
  mProperty_mIndexingKeyList = in_mIndexingKeyList ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor = in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationToken = in_mGrammarInstructionSyntaxDirectedTranslationToken ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_terminalCheckInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration ;
}

void cPtr_terminalCheckInstructionForGeneration::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@terminalCheckInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTerminalName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueIdentifier.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTerminalCheckAssignementList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIndexingKeyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationToken.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_terminalCheckInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_terminalCheckInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mTerminalName, mProperty_mLexiqueIdentifier, mProperty_mTerminalCheckAssignementList, mProperty_mIndexingKeyList, mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor, mProperty_mGrammarInstructionSyntaxDirectedTranslationToken, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_terminalCheckInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mTerminalName.printNonNullClassInstanceProperties ("mTerminalName") ;
    mProperty_mLexiqueIdentifier.printNonNullClassInstanceProperties ("mLexiqueIdentifier") ;
    mProperty_mTerminalCheckAssignementList.printNonNullClassInstanceProperties ("mTerminalCheckAssignementList") ;
    mProperty_mIndexingKeyList.printNonNullClassInstanceProperties ("mIndexingKeyList") ;
    mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.printNonNullClassInstanceProperties ("mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor") ;
    mProperty_mGrammarInstructionSyntaxDirectedTranslationToken.printNonNullClassInstanceProperties ("mGrammarInstructionSyntaxDirectedTranslationToken") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @terminalCheckInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration ("terminalCheckInstructionForGeneration",
                                                                                          & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalCheckInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalCheckInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalCheckInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration GGS_terminalCheckInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_terminalCheckInstructionForGeneration result ;
  const GGS_terminalCheckInstructionForGeneration * p = (const GGS_terminalCheckInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalCheckInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalCheckInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_terminalCheckInstructionForGeneration_2E_weak::objectCompare (const GGS_terminalCheckInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_terminalCheckInstructionForGeneration_2E_weak::GGS_terminalCheckInstructionForGeneration_2E_weak (void) :
GGS_syntaxInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration_2E_weak & GGS_terminalCheckInstructionForGeneration_2E_weak::operator = (const GGS_terminalCheckInstructionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration_2E_weak::GGS_terminalCheckInstructionForGeneration_2E_weak (const GGS_terminalCheckInstructionForGeneration & inSource) :
GGS_syntaxInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration_2E_weak GGS_terminalCheckInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_terminalCheckInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration GGS_terminalCheckInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_terminalCheckInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_terminalCheckInstructionForGeneration * p = (cPtr_terminalCheckInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_terminalCheckInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration GGS_terminalCheckInstructionForGeneration_2E_weak::bang_terminalCheckInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_terminalCheckInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_terminalCheckInstructionForGeneration) ;
      result = GGS_terminalCheckInstructionForGeneration ((cPtr_terminalCheckInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @terminalCheckInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration_2E_weak ("terminalCheckInstructionForGeneration.weak",
                                                                                                  & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalCheckInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalCheckInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalCheckInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration_2E_weak GGS_terminalCheckInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_terminalCheckInstructionForGeneration_2E_weak result ;
  const GGS_terminalCheckInstructionForGeneration_2E_weak * p = (const GGS_terminalCheckInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalCheckInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalCheckInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@listOfSyntaxInstructionList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_listOfSyntaxInstructionList : public CollectionElementPtr {
  public: GGS_listOfSyntaxInstructionList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_listOfSyntaxInstructionList (const GGS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                            const GGS_location & in_mEndOf_5F_instructions
                                                            COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_listOfSyntaxInstructionList (const GGS_listOfSyntaxInstructionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_listOfSyntaxInstructionList::CollectionElementPtr_listOfSyntaxInstructionList (const GGS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                                                                    const GGS_location & in_mEndOf_5F_instructions
                                                                                                    COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mSyntaxInstructionList, in_mEndOf_5F_instructions) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_listOfSyntaxInstructionList::CollectionElementPtr_listOfSyntaxInstructionList (const GGS_listOfSyntaxInstructionList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mSyntaxInstructionList, inElement.mProperty_mEndOf_5F_instructions) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_listOfSyntaxInstructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_listOfSyntaxInstructionList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_listOfSyntaxInstructionList (mObject.mProperty_mSyntaxInstructionList, mObject.mProperty_mEndOf_5F_instructions COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @listOfSyntaxInstructionList
//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList::GGS_listOfSyntaxInstructionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList::GGS_listOfSyntaxInstructionList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_listOfSyntaxInstructionList * p = (CollectionElementPtr_listOfSyntaxInstructionList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_listOfSyntaxInstructionList) ;
    const GGS_listOfSyntaxInstructionList_2E_element element (p->mObject.mProperty_mSyntaxInstructionList, p->mObject.mProperty_mEndOf_5F_instructions) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                 const GGS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                                 const GGS_location & in_mEndOf_5F_instructions
                                                                 COMMA_LOCATION_ARGS) {
  CollectionElementPtr_listOfSyntaxInstructionList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_listOfSyntaxInstructionList (in_mSyntaxInstructionList, in_mEndOf_5F_instructions COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_listOfSyntaxInstructionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_listOfSyntaxInstructionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::description (String & ioString,
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
      ioString.appendString ("mSyntaxInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSyntaxInstructionList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEndOf_instructions:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEndOf_5F_instructions.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList GGS_listOfSyntaxInstructionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_listOfSyntaxInstructionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::plusPlusAssignOperation (const GGS_listOfSyntaxInstructionList_2E_element & inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList GGS_listOfSyntaxInstructionList::class_func_listWithValue (const GGS_syntaxInstructionList & inOperand0,
                                                                                           const GGS_location & inOperand1
                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_listOfSyntaxInstructionList_2E_element element (inOperand0, inOperand1) ;
  GGS_listOfSyntaxInstructionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::addAssignOperation (const GGS_syntaxInstructionList & inOperand0,
                                                          const GGS_location & inOperand1
                                                          COMMA_LOCATION_ARGS) {
  const GGS_listOfSyntaxInstructionList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::setter_append (const GGS_syntaxInstructionList inOperand0,
                                                     const GGS_location inOperand1,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  const GGS_listOfSyntaxInstructionList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::setter_insertAtIndex (const GGS_syntaxInstructionList inOperand0,
                                                            const GGS_location inOperand1,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  const GGS_listOfSyntaxInstructionList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_listOfSyntaxInstructionList::setter_removeAtIndex (GGS_syntaxInstructionList & outOperand0,
                                                            GGS_location & outOperand1,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mSyntaxInstructionList ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mEndOf_5F_instructions ;
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

void GGS_listOfSyntaxInstructionList::setter_popFirst (GGS_syntaxInstructionList & outOperand0,
                                                       GGS_location & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSyntaxInstructionList ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mEndOf_5F_instructions ;
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

void GGS_listOfSyntaxInstructionList::setter_popLast (GGS_syntaxInstructionList & outOperand0,
                                                      GGS_location & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSyntaxInstructionList ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mEndOf_5F_instructions ;
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

void GGS_listOfSyntaxInstructionList::method_first (GGS_syntaxInstructionList & outOperand0,
                                                    GGS_location & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSyntaxInstructionList ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mEndOf_5F_instructions ;
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

void GGS_listOfSyntaxInstructionList::method_last (GGS_syntaxInstructionList & outOperand0,
                                                   GGS_location & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSyntaxInstructionList ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mEndOf_5F_instructions ;
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

GGS_listOfSyntaxInstructionList GGS_listOfSyntaxInstructionList::add_operation (const GGS_listOfSyntaxInstructionList & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_listOfSyntaxInstructionList result ;
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

GGS_listOfSyntaxInstructionList GGS_listOfSyntaxInstructionList::subList (const int32_t inStart,
                                                                          const int32_t inLength,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_listOfSyntaxInstructionList result ;
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

GGS_listOfSyntaxInstructionList GGS_listOfSyntaxInstructionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_listOfSyntaxInstructionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList GGS_listOfSyntaxInstructionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_listOfSyntaxInstructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList GGS_listOfSyntaxInstructionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_listOfSyntaxInstructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::plusAssignOperation (const GGS_listOfSyntaxInstructionList inList,
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

void GGS_listOfSyntaxInstructionList::setter_setMSyntaxInstructionListAtIndex (GGS_syntaxInstructionList inOperand,
                                                                               GGS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSyntaxInstructionList = inOperand ;
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

GGS_syntaxInstructionList GGS_listOfSyntaxInstructionList::getter_mSyntaxInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_syntaxInstructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSyntaxInstructionList ;
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

void GGS_listOfSyntaxInstructionList::setter_setMEndOf_5F_instructionsAtIndex (GGS_location inOperand,
                                                                               GGS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOf_5F_instructions = inOperand ;
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

GGS_location GGS_listOfSyntaxInstructionList::getter_mEndOf_5F_instructionsAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOf_5F_instructions ;
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
// Down Enumerator for @listOfSyntaxInstructionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_listOfSyntaxInstructionList::DownEnumerator_listOfSyntaxInstructionList (const GGS_listOfSyntaxInstructionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList_2E_element DownEnumerator_listOfSyntaxInstructionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList DownEnumerator_listOfSyntaxInstructionList::current_mSyntaxInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSyntaxInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_listOfSyntaxInstructionList::current_mEndOf_5F_instructions (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOf_5F_instructions ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @listOfSyntaxInstructionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_listOfSyntaxInstructionList::UpEnumerator_listOfSyntaxInstructionList (const GGS_listOfSyntaxInstructionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList_2E_element UpEnumerator_listOfSyntaxInstructionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList UpEnumerator_listOfSyntaxInstructionList::current_mSyntaxInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSyntaxInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_listOfSyntaxInstructionList::current_mEndOf_5F_instructions (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOf_5F_instructions ;
}




//--------------------------------------------------------------------------------------------------
//     @listOfSyntaxInstructionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_listOfSyntaxInstructionList ("listOfSyntaxInstructionList",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_listOfSyntaxInstructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listOfSyntaxInstructionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_listOfSyntaxInstructionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_listOfSyntaxInstructionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList GGS_listOfSyntaxInstructionList::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_listOfSyntaxInstructionList result ;
  const GGS_listOfSyntaxInstructionList * p = (const GGS_listOfSyntaxInstructionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_listOfSyntaxInstructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listOfSyntaxInstructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectInstruction_2E_weak::objectCompare (const GGS_selectInstruction_2E_weak & inOperand) const {
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

GGS_selectInstruction_2E_weak::GGS_selectInstruction_2E_weak (void) :
GGS_syntaxInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstruction_2E_weak & GGS_selectInstruction_2E_weak::operator = (const GGS_selectInstruction & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstruction_2E_weak::GGS_selectInstruction_2E_weak (const GGS_selectInstruction & inSource) :
GGS_syntaxInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_selectInstruction_2E_weak GGS_selectInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selectInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstruction GGS_selectInstruction_2E_weak::unwrappedValue (void) const {
  GGS_selectInstruction result ;
  if (isValid ()) {
    const cPtr_selectInstruction * p = (cPtr_selectInstruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_selectInstruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstruction GGS_selectInstruction_2E_weak::bang_selectInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selectInstruction result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selectInstruction) ;
      result = GGS_selectInstruction ((cPtr_selectInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selectInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstruction_2E_weak ("selectInstruction.weak",
                                                                              & kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selectInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selectInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selectInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstruction_2E_weak GGS_selectInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_selectInstruction_2E_weak result ;
  const GGS_selectInstruction_2E_weak * p = (const GGS_selectInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selectInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@listOfSemanticInstructionListForGeneration' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_listOfSemanticInstructionListForGeneration : public CollectionElementPtr {
  public: GGS_listOfSemanticInstructionListForGeneration_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_listOfSemanticInstructionListForGeneration (const GGS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                           const GGS_location & in_mEndOfInstructionList
                                                                           COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_listOfSemanticInstructionListForGeneration (const GGS_listOfSemanticInstructionListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_listOfSemanticInstructionListForGeneration::CollectionElementPtr_listOfSemanticInstructionListForGeneration (const GGS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                                                                                  const GGS_location & in_mEndOfInstructionList
                                                                                                                                  COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mInstructionList, in_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_listOfSemanticInstructionListForGeneration::CollectionElementPtr_listOfSemanticInstructionListForGeneration (const GGS_listOfSemanticInstructionListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_listOfSemanticInstructionListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_listOfSemanticInstructionListForGeneration::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_listOfSemanticInstructionListForGeneration (mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @listOfSemanticInstructionListForGeneration
//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration::GGS_listOfSemanticInstructionListForGeneration (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration::GGS_listOfSemanticInstructionListForGeneration (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_listOfSemanticInstructionListForGeneration * p = (CollectionElementPtr_listOfSemanticInstructionListForGeneration *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_listOfSemanticInstructionListForGeneration) ;
    const GGS_listOfSemanticInstructionListForGeneration_2E_element element (p->mObject.mProperty_mInstructionList, p->mObject.mProperty_mEndOfInstructionList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                                const GGS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                                const GGS_location & in_mEndOfInstructionList
                                                                                COMMA_LOCATION_ARGS) {
  CollectionElementPtr_listOfSemanticInstructionListForGeneration * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_listOfSemanticInstructionListForGeneration (in_mInstructionList, in_mEndOfInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_listOfSemanticInstructionListForGeneration::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_listOfSemanticInstructionListForGeneration::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::description (String & ioString,
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
      ioString.appendString ("mInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstructionList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEndOfInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEndOfInstructionList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_listOfSemanticInstructionListForGeneration result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::plusPlusAssignOperation (const GGS_listOfSemanticInstructionListForGeneration_2E_element & inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::class_func_listWithValue (const GGS_semanticInstructionListForGeneration & inOperand0,
                                                                                                                         const GGS_location & inOperand1
                                                                                                                         COMMA_LOCATION_ARGS) {
  const GGS_listOfSemanticInstructionListForGeneration_2E_element element (inOperand0, inOperand1) ;
  GGS_listOfSemanticInstructionListForGeneration result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::addAssignOperation (const GGS_semanticInstructionListForGeneration & inOperand0,
                                                                         const GGS_location & inOperand1
                                                                         COMMA_LOCATION_ARGS) {
  const GGS_listOfSemanticInstructionListForGeneration_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::setter_append (const GGS_semanticInstructionListForGeneration inOperand0,
                                                                    const GGS_location inOperand1,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_LOCATION_ARGS) {
  const GGS_listOfSemanticInstructionListForGeneration_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::setter_insertAtIndex (const GGS_semanticInstructionListForGeneration inOperand0,
                                                                           const GGS_location inOperand1,
                                                                           const GGS_uint inInsertionIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  const GGS_listOfSemanticInstructionListForGeneration_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_listOfSemanticInstructionListForGeneration::setter_removeAtIndex (GGS_semanticInstructionListForGeneration & outOperand0,
                                                                           GGS_location & outOperand1,
                                                                           const GGS_uint inRemoveIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mInstructionList ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mEndOfInstructionList ;
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

void GGS_listOfSemanticInstructionListForGeneration::setter_popFirst (GGS_semanticInstructionListForGeneration & outOperand0,
                                                                      GGS_location & outOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mEndOfInstructionList ;
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

void GGS_listOfSemanticInstructionListForGeneration::setter_popLast (GGS_semanticInstructionListForGeneration & outOperand0,
                                                                     GGS_location & outOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mEndOfInstructionList ;
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

void GGS_listOfSemanticInstructionListForGeneration::method_first (GGS_semanticInstructionListForGeneration & outOperand0,
                                                                   GGS_location & outOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mEndOfInstructionList ;
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

void GGS_listOfSemanticInstructionListForGeneration::method_last (GGS_semanticInstructionListForGeneration & outOperand0,
                                                                  GGS_location & outOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mEndOfInstructionList ;
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

GGS_listOfSemanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::add_operation (const GGS_listOfSemanticInstructionListForGeneration & inOperand,
                                                                                                              Compiler * /* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_listOfSemanticInstructionListForGeneration result ;
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

GGS_listOfSemanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::subList (const int32_t inStart,
                                                                                                        const int32_t inLength,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_listOfSemanticInstructionListForGeneration result ;
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

GGS_listOfSemanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_listOfSemanticInstructionListForGeneration result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_listOfSemanticInstructionListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_listOfSemanticInstructionListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration::plusAssignOperation (const GGS_listOfSemanticInstructionListForGeneration inList,
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

void GGS_listOfSemanticInstructionListForGeneration::setter_setMInstructionListAtIndex (GGS_semanticInstructionListForGeneration inOperand,
                                                                                        GGS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionList = inOperand ;
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

GGS_semanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_semanticInstructionListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionList ;
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

void GGS_listOfSemanticInstructionListForGeneration::setter_setMEndOfInstructionListAtIndex (GGS_location inOperand,
                                                                                             GGS_uint inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfInstructionList = inOperand ;
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

GGS_location GGS_listOfSemanticInstructionListForGeneration::getter_mEndOfInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfInstructionList ;
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
// Down Enumerator for @listOfSemanticInstructionListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_listOfSemanticInstructionListForGeneration::DownEnumerator_listOfSemanticInstructionListForGeneration (const GGS_listOfSemanticInstructionListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration_2E_element DownEnumerator_listOfSemanticInstructionListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration DownEnumerator_listOfSemanticInstructionListForGeneration::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_listOfSemanticInstructionListForGeneration::current_mEndOfInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @listOfSemanticInstructionListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_listOfSemanticInstructionListForGeneration::UpEnumerator_listOfSemanticInstructionListForGeneration (const GGS_listOfSemanticInstructionListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration_2E_element UpEnumerator_listOfSemanticInstructionListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration UpEnumerator_listOfSemanticInstructionListForGeneration::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_listOfSemanticInstructionListForGeneration::current_mEndOfInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//     @listOfSemanticInstructionListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_listOfSemanticInstructionListForGeneration ("listOfSemanticInstructionListForGeneration",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_listOfSemanticInstructionListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listOfSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_listOfSemanticInstructionListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_listOfSemanticInstructionListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_listOfSemanticInstructionListForGeneration::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_listOfSemanticInstructionListForGeneration result ;
  const GGS_listOfSemanticInstructionListForGeneration * p = (const GGS_listOfSemanticInstructionListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_listOfSemanticInstructionListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listOfSemanticInstructionListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectInstructionForGeneration_2E_weak::objectCompare (const GGS_selectInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_selectInstructionForGeneration_2E_weak::GGS_selectInstructionForGeneration_2E_weak (void) :
GGS_syntaxInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGeneration_2E_weak & GGS_selectInstructionForGeneration_2E_weak::operator = (const GGS_selectInstructionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGeneration_2E_weak::GGS_selectInstructionForGeneration_2E_weak (const GGS_selectInstructionForGeneration & inSource) :
GGS_syntaxInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGeneration_2E_weak GGS_selectInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selectInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGeneration GGS_selectInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_selectInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_selectInstructionForGeneration * p = (cPtr_selectInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_selectInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGeneration GGS_selectInstructionForGeneration_2E_weak::bang_selectInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selectInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selectInstructionForGeneration) ;
      result = GGS_selectInstructionForGeneration ((cPtr_selectInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selectInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstructionForGeneration_2E_weak ("selectInstructionForGeneration.weak",
                                                                                           & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selectInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selectInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selectInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGeneration_2E_weak GGS_selectInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_selectInstructionForGeneration_2E_weak result ;
  const GGS_selectInstructionForGeneration_2E_weak * p = (const GGS_selectInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selectInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@syntaxInstructionList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_syntaxInstructionList : public CollectionElementPtr {
  public: GGS_syntaxInstructionList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_syntaxInstructionList (const GGS_syntaxInstructionAST & in_mInstruction
                                                      COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_syntaxInstructionList (const GGS_syntaxInstructionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_syntaxInstructionList::CollectionElementPtr_syntaxInstructionList (const GGS_syntaxInstructionAST & in_mInstruction
                                                                                        COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_syntaxInstructionList::CollectionElementPtr_syntaxInstructionList (const GGS_syntaxInstructionList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_syntaxInstructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_syntaxInstructionList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_syntaxInstructionList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @syntaxInstructionList
//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList::GGS_syntaxInstructionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList::GGS_syntaxInstructionList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_syntaxInstructionList * p = (CollectionElementPtr_syntaxInstructionList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_syntaxInstructionList) ;
    const GGS_syntaxInstructionList_2E_element element (p->mObject.mProperty_mInstruction) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                           const GGS_syntaxInstructionAST & in_mInstruction
                                                           COMMA_LOCATION_ARGS) {
  CollectionElementPtr_syntaxInstructionList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_syntaxInstructionList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_syntaxInstructionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_syntaxInstructionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionList::description (String & ioString,
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

GGS_syntaxInstructionList GGS_syntaxInstructionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syntaxInstructionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionList::plusPlusAssignOperation (const GGS_syntaxInstructionList_2E_element & inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList GGS_syntaxInstructionList::class_func_listWithValue (const GGS_syntaxInstructionAST & inOperand0
                                                                               COMMA_LOCATION_ARGS) {
  const GGS_syntaxInstructionList_2E_element element (inOperand0) ;
  GGS_syntaxInstructionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionList::addAssignOperation (const GGS_syntaxInstructionAST & inOperand0
                                                    COMMA_LOCATION_ARGS) {
  const GGS_syntaxInstructionList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionList::setter_append (const GGS_syntaxInstructionAST inOperand0,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  const GGS_syntaxInstructionList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionList::setter_insertAtIndex (const GGS_syntaxInstructionAST inOperand0,
                                                      const GGS_uint inInsertionIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  const GGS_syntaxInstructionList_2E_element newElement (inOperand0) ;
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

void GGS_syntaxInstructionList::setter_removeAtIndex (GGS_syntaxInstructionAST & outOperand0,
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

void GGS_syntaxInstructionList::setter_popFirst (GGS_syntaxInstructionAST & outOperand0,
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

void GGS_syntaxInstructionList::setter_popLast (GGS_syntaxInstructionAST & outOperand0,
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

void GGS_syntaxInstructionList::method_first (GGS_syntaxInstructionAST & outOperand0,
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

void GGS_syntaxInstructionList::method_last (GGS_syntaxInstructionAST & outOperand0,
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

GGS_syntaxInstructionList GGS_syntaxInstructionList::add_operation (const GGS_syntaxInstructionList & inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_syntaxInstructionList result ;
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

GGS_syntaxInstructionList GGS_syntaxInstructionList::subList (const int32_t inStart,
                                                              const int32_t inLength,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_syntaxInstructionList result ;
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

GGS_syntaxInstructionList GGS_syntaxInstructionList::getter_subListWithRange (const GGS_range & inRange,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_syntaxInstructionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList GGS_syntaxInstructionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_syntaxInstructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList GGS_syntaxInstructionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_syntaxInstructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionList::plusAssignOperation (const GGS_syntaxInstructionList inList,
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

void GGS_syntaxInstructionList::setter_setMInstructionAtIndex (GGS_syntaxInstructionAST inOperand,
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

GGS_syntaxInstructionAST GGS_syntaxInstructionList::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_syntaxInstructionAST result ;
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
// Down Enumerator for @syntaxInstructionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_syntaxInstructionList::DownEnumerator_syntaxInstructionList (const GGS_syntaxInstructionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList_2E_element DownEnumerator_syntaxInstructionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionAST DownEnumerator_syntaxInstructionList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @syntaxInstructionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_syntaxInstructionList::UpEnumerator_syntaxInstructionList (const GGS_syntaxInstructionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList_2E_element UpEnumerator_syntaxInstructionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionAST UpEnumerator_syntaxInstructionList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//     @syntaxInstructionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxInstructionList ("syntaxInstructionList",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxInstructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxInstructionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxInstructionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList GGS_syntaxInstructionList::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_syntaxInstructionList result ;
  const GGS_syntaxInstructionList * p = (const GGS_syntaxInstructionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxInstructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_repeatInstruction_2E_weak::objectCompare (const GGS_repeatInstruction_2E_weak & inOperand) const {
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

GGS_repeatInstruction_2E_weak::GGS_repeatInstruction_2E_weak (void) :
GGS_syntaxInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstruction_2E_weak & GGS_repeatInstruction_2E_weak::operator = (const GGS_repeatInstruction & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstruction_2E_weak::GGS_repeatInstruction_2E_weak (const GGS_repeatInstruction & inSource) :
GGS_syntaxInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_repeatInstruction_2E_weak GGS_repeatInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_repeatInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstruction GGS_repeatInstruction_2E_weak::unwrappedValue (void) const {
  GGS_repeatInstruction result ;
  if (isValid ()) {
    const cPtr_repeatInstruction * p = (cPtr_repeatInstruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_repeatInstruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstruction GGS_repeatInstruction_2E_weak::bang_repeatInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_repeatInstruction result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_repeatInstruction) ;
      result = GGS_repeatInstruction ((cPtr_repeatInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @repeatInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_repeatInstruction_2E_weak ("repeatInstruction.weak",
                                                                              & kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_repeatInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_repeatInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_repeatInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstruction_2E_weak GGS_repeatInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_repeatInstruction_2E_weak result ;
  const GGS_repeatInstruction_2E_weak * p = (const GGS_repeatInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_repeatInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("repeatInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @repeatInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_repeatInstructionForGeneration::objectCompare (const GGS_repeatInstructionForGeneration & inOperand) const {
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

GGS_repeatInstructionForGeneration::GGS_repeatInstructionForGeneration (void) :
GGS_syntaxInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_repeatInstructionForGeneration GGS_repeatInstructionForGeneration::
init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                              const GGS_string & in_mSyntaxComponentName,
                              const GGS_uint & in_mChoiceIndex,
                              const GGS_semanticInstructionListForGeneration & in_m_5F_repeated_5F_instructionList,
                              const GGS_location & in_mEndOfRepeatedInstructions,
                              const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_repeatInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_repeatInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->repeatInstructionForGeneration_init_21__21__21__21__21__21_ (in_mInstructionLocation, in_mSyntaxComponentName, in_mChoiceIndex, in_m_5F_repeated_5F_instructionList, in_mEndOfRepeatedInstructions, in_mListOfSemanticInstructionListForGeneration, inCompiler) ;
  const GGS_repeatInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGeneration::
repeatInstructionForGeneration_init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                             const GGS_string & in_mSyntaxComponentName,
                                                             const GGS_uint & in_mChoiceIndex,
                                                             const GGS_semanticInstructionListForGeneration & in_m_5F_repeated_5F_instructionList,
                                                             const GGS_location & in_mEndOfRepeatedInstructions,
                                                             const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration,
                                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  mProperty_mChoiceIndex = in_mChoiceIndex ;
  mProperty_m_5F_repeated_5F_instructionList = in_m_5F_repeated_5F_instructionList ;
  mProperty_mEndOfRepeatedInstructions = in_mEndOfRepeatedInstructions ;
  mProperty_mListOfSemanticInstructionListForGeneration = in_mListOfSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGeneration::GGS_repeatInstructionForGeneration (const cPtr_repeatInstructionForGeneration * inSourcePtr) :
GGS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_repeatInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_repeatInstructionForGeneration::readProperty_mSyntaxComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_repeatInstructionForGeneration * p = (cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    return p->mProperty_mSyntaxComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_repeatInstructionForGeneration::readProperty_mChoiceIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_repeatInstructionForGeneration * p = (cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    return p->mProperty_mChoiceIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_repeatInstructionForGeneration::readProperty_m_5F_repeated_5F_instructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_repeatInstructionForGeneration * p = (cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    return p->mProperty_m_5F_repeated_5F_instructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_repeatInstructionForGeneration::readProperty_mEndOfRepeatedInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_repeatInstructionForGeneration * p = (cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    return p->mProperty_mEndOfRepeatedInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_repeatInstructionForGeneration::readProperty_mListOfSemanticInstructionListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_listOfSemanticInstructionListForGeneration () ;
  }else{
    cPtr_repeatInstructionForGeneration * p = (cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    return p->mProperty_mListOfSemanticInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @repeatInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_repeatInstructionForGeneration::cPtr_repeatInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mSyntaxComponentName (),
mProperty_mChoiceIndex (),
mProperty_m_5F_repeated_5F_instructionList (),
mProperty_mEndOfRepeatedInstructions (),
mProperty_mListOfSemanticInstructionListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

cPtr_repeatInstructionForGeneration::cPtr_repeatInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                          const GGS_string & in_mSyntaxComponentName,
                                                                          const GGS_uint & in_mChoiceIndex,
                                                                          const GGS_semanticInstructionListForGeneration & in_m_5F_repeated_5F_instructionList,
                                                                          const GGS_location & in_mEndOfRepeatedInstructions,
                                                                          const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mSyntaxComponentName (),
mProperty_mChoiceIndex (),
mProperty_m_5F_repeated_5F_instructionList (),
mProperty_mEndOfRepeatedInstructions (),
mProperty_mListOfSemanticInstructionListForGeneration () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  mProperty_mChoiceIndex = in_mChoiceIndex ;
  mProperty_m_5F_repeated_5F_instructionList = in_m_5F_repeated_5F_instructionList ;
  mProperty_mEndOfRepeatedInstructions = in_mEndOfRepeatedInstructions ;
  mProperty_mListOfSemanticInstructionListForGeneration = in_mListOfSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_repeatInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGeneration ;
}

void cPtr_repeatInstructionForGeneration::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@repeatInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mChoiceIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_repeated_5F_instructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfRepeatedInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mListOfSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_repeatInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_repeatInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mSyntaxComponentName, mProperty_mChoiceIndex, mProperty_m_5F_repeated_5F_instructionList, mProperty_mEndOfRepeatedInstructions, mProperty_mListOfSemanticInstructionListForGeneration, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_repeatInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mSyntaxComponentName.printNonNullClassInstanceProperties ("mSyntaxComponentName") ;
    mProperty_mChoiceIndex.printNonNullClassInstanceProperties ("mChoiceIndex") ;
    mProperty_m_5F_repeated_5F_instructionList.printNonNullClassInstanceProperties ("m_repeated_instructionList") ;
    mProperty_mEndOfRepeatedInstructions.printNonNullClassInstanceProperties ("mEndOfRepeatedInstructions") ;
    mProperty_mListOfSemanticInstructionListForGeneration.printNonNullClassInstanceProperties ("mListOfSemanticInstructionListForGeneration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @repeatInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_repeatInstructionForGeneration ("repeatInstructionForGeneration",
                                                                                   & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_repeatInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_repeatInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_repeatInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGeneration GGS_repeatInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_repeatInstructionForGeneration result ;
  const GGS_repeatInstructionForGeneration * p = (const GGS_repeatInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_repeatInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("repeatInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_repeatInstructionForGeneration_2E_weak::objectCompare (const GGS_repeatInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_repeatInstructionForGeneration_2E_weak::GGS_repeatInstructionForGeneration_2E_weak (void) :
GGS_syntaxInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGeneration_2E_weak & GGS_repeatInstructionForGeneration_2E_weak::operator = (const GGS_repeatInstructionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGeneration_2E_weak::GGS_repeatInstructionForGeneration_2E_weak (const GGS_repeatInstructionForGeneration & inSource) :
GGS_syntaxInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGeneration_2E_weak GGS_repeatInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_repeatInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGeneration GGS_repeatInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_repeatInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_repeatInstructionForGeneration * p = (cPtr_repeatInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_repeatInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGeneration GGS_repeatInstructionForGeneration_2E_weak::bang_repeatInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_repeatInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_repeatInstructionForGeneration) ;
      result = GGS_repeatInstructionForGeneration ((cPtr_repeatInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @repeatInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_repeatInstructionForGeneration_2E_weak ("repeatInstructionForGeneration.weak",
                                                                                           & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_repeatInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_repeatInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_repeatInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGeneration_2E_weak GGS_repeatInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_repeatInstructionForGeneration_2E_weak result ;
  const GGS_repeatInstructionForGeneration_2E_weak * p = (const GGS_repeatInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_repeatInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("repeatInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@semanticDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterDeclarationInGraph (cPtr_semanticDeclarationAST * inObject,
                                                  GGS_semanticTypePrecedenceGraph & io_ioSemanticTypePrecedenceGraph,
                                                  GGS_equatableExtensionMap & io_ioEquatableExtensionMap,
                                                  GGS_extensionInitializerForBuildingContext & io_ioExtensionInitializerForBuildingContext,
                                                  GGS_extensionMethodMapForBuildingContext & io_ioExtensionMethodMapForBuildingContext,
                                                  GGS_extensionGetterMapForBuildingContext & io_ioExtensionGetterMapForBuildingContext,
                                                  GGS_extensionSetterMapForBuildingContext & io_ioExtensionSetterMapForBuildingContext,
                                                  GGS__5B_semanticDeclarationAST_5D_ & io_ioExtensionOverrideDefinitionList,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    inObject->method_enterDeclarationInGraph (io_ioSemanticTypePrecedenceGraph, io_ioEquatableExtensionMap, io_ioExtensionInitializerForBuildingContext, io_ioExtensionMethodMapForBuildingContext, io_ioExtensionGetterMapForBuildingContext, io_ioExtensionSetterMapForBuildingContext, io_ioExtensionOverrideDefinitionList, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@semanticDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterDeclarationInSemanticContext (cPtr_semanticDeclarationAST * inObject,
                                                            GGS_equatableExtensionMap & io__5F_ioEquatableExtensionMap,
                                                            const GGS_extensionInitializerForBuildingContext constin__5F_inExtensionInitializerMapForBuildingContext,
                                                            const GGS_extensionMethodMapForBuildingContext constin__5F_inExtensionMethodMapForBuildingContext,
                                                            const GGS_extensionGetterMapForBuildingContext constin__5F_inExtensionGetterMapForBuildingContext,
                                                            const GGS_extensionSetterMapForBuildingContext constin__5F_inExtensionSetterMapForBuildingContext,
                                                            GGS_unifiedTypeMap & io_ioTypeMap,
                                                            GGS_semanticContext & io__5F_ioSemanticContext,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    inObject->method_enterDeclarationInSemanticContext (io__5F_ioEquatableExtensionMap, constin__5F_inExtensionInitializerMapForBuildingContext, constin__5F_inExtensionMethodMapForBuildingContext, constin__5F_inExtensionGetterMapForBuildingContext, constin__5F_inExtensionSetterMapForBuildingContext, io_ioTypeMap, io__5F_ioSemanticContext, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@semanticDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_semanticAnalysis (cPtr_semanticDeclarationAST * inObject,
                                           GGS__5B_lstring_5D_ & io_ioUsefulnessRootEntities,
                                           GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                           const GGS_string constin_inProductDirectory,
                                           const GGS_semanticContext constin__5F_inSemanticContext,
                                           GGS_unifiedTypeMap & io__5F_ioTypeMap,
                                           const GGS_predefinedTypes constin__5F_inPredefinedTypes,
                                           GGS__5B_semanticDeclarationForGeneration_5D_ & io__5F_ioSemanticDeclarationListForGeneration,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    inObject->method_semanticAnalysis (io_ioUsefulnessRootEntities, io_ioUsefulEntitiesGraph, constin_inProductDirectory, constin__5F_inSemanticContext, io__5F_ioTypeMap, constin__5F_inPredefinedTypes, io__5F_ioSemanticDeclarationListForGeneration, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//Class for element of '@programListForGeneration' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_programListForGeneration : public CollectionElementPtr {
  public: GGS_programListForGeneration_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_programListForGeneration (const GGS_semanticDeclarationForGeneration & in_mDeclaration
                                                         COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_programListForGeneration (const GGS_programListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_programListForGeneration::CollectionElementPtr_programListForGeneration (const GGS_semanticDeclarationForGeneration & in_mDeclaration
                                                                                              COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_programListForGeneration::CollectionElementPtr_programListForGeneration (const GGS_programListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_programListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_programListForGeneration::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_programListForGeneration (mObject.mProperty_mDeclaration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @programListForGeneration
//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration::GGS_programListForGeneration (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration::GGS_programListForGeneration (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_programListForGeneration * p = (CollectionElementPtr_programListForGeneration *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_programListForGeneration) ;
    const GGS_programListForGeneration_2E_element element (p->mObject.mProperty_mDeclaration) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                              const GGS_semanticDeclarationForGeneration & in_mDeclaration
                                                              COMMA_LOCATION_ARGS) {
  CollectionElementPtr_programListForGeneration * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_programListForGeneration (in_mDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_programListForGeneration::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_programListForGeneration::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration::description (String & ioString,
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
      ioString.appendString ("mDeclaration:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mDeclaration.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration GGS_programListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_programListForGeneration result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration::plusPlusAssignOperation (const GGS_programListForGeneration_2E_element & inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration GGS_programListForGeneration::class_func_listWithValue (const GGS_semanticDeclarationForGeneration & inOperand0
                                                                                     COMMA_LOCATION_ARGS) {
  const GGS_programListForGeneration_2E_element element (inOperand0) ;
  GGS_programListForGeneration result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration::addAssignOperation (const GGS_semanticDeclarationForGeneration & inOperand0
                                                       COMMA_LOCATION_ARGS) {
  const GGS_programListForGeneration_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration::setter_append (const GGS_semanticDeclarationForGeneration inOperand0,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  const GGS_programListForGeneration_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration::setter_insertAtIndex (const GGS_semanticDeclarationForGeneration inOperand0,
                                                         const GGS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  const GGS_programListForGeneration_2E_element newElement (inOperand0) ;
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

void GGS_programListForGeneration::setter_removeAtIndex (GGS_semanticDeclarationForGeneration & outOperand0,
                                                         const GGS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mDeclaration ;
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

void GGS_programListForGeneration::setter_popFirst (GGS_semanticDeclarationForGeneration & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mDeclaration ;
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

void GGS_programListForGeneration::setter_popLast (GGS_semanticDeclarationForGeneration & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mDeclaration ;
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

void GGS_programListForGeneration::method_first (GGS_semanticDeclarationForGeneration & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mDeclaration ;
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

void GGS_programListForGeneration::method_last (GGS_semanticDeclarationForGeneration & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mDeclaration ;
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

GGS_programListForGeneration GGS_programListForGeneration::add_operation (const GGS_programListForGeneration & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_programListForGeneration result ;
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

GGS_programListForGeneration GGS_programListForGeneration::subList (const int32_t inStart,
                                                                    const int32_t inLength,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_programListForGeneration result ;
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

GGS_programListForGeneration GGS_programListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_programListForGeneration result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration GGS_programListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_programListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration GGS_programListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_programListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration::plusAssignOperation (const GGS_programListForGeneration inList,
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

void GGS_programListForGeneration::setter_setMDeclarationAtIndex (GGS_semanticDeclarationForGeneration inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mDeclaration = inOperand ;
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

GGS_semanticDeclarationForGeneration GGS_programListForGeneration::getter_mDeclarationAtIndex (const GGS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_semanticDeclarationForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mDeclaration ;
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
// Down Enumerator for @programListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_programListForGeneration::DownEnumerator_programListForGeneration (const GGS_programListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration_2E_element DownEnumerator_programListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration DownEnumerator_programListForGeneration::current_mDeclaration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDeclaration ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @programListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_programListForGeneration::UpEnumerator_programListForGeneration (const GGS_programListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration_2E_element UpEnumerator_programListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration UpEnumerator_programListForGeneration::current_mDeclaration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDeclaration ;
}




//--------------------------------------------------------------------------------------------------
//     @programListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_programListForGeneration ("programListForGeneration",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_programListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_programListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_programListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration GGS_programListForGeneration::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_programListForGeneration result ;
  const GGS_programListForGeneration * p = (const GGS_programListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_programListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@lexicalExpressionAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                      const GGS_lexiqueAnalysisContext in__5F_inLexiqueAnalysisContext,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateConditionCode (in__5F_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@lexicalRoutineOrFunctionFormalInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateRoutineOrFunctionArgument (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@lexicalSendDefaultActionAST generateDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                        const GGS_string in_inScannerClassName,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateDefaultSendCode (in_inScannerClassName, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@lexicalInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateLexicalInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                               const GGS_string in_inScannerClassName,
                                                               const GGS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateLexicalInstructionCode (in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@lexicalInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_lexicalInstructionUsesLoopLocalVariable (const cPtr_lexicalInstructionAST * inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_lexicalInstructionUsesLoopLocalVariable (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@abstractLexicalRuleAST generateLexicalRuleCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateLexicalRuleCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                        const GGS_string in_inScannerClassName,
                                                        const GGS_lexiqueAnalysisContext in__5F_inLexiqueAnalysisContext,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateLexicalRuleCode (in_inScannerClassName, in__5F_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@abstractLexicalRuleAST lexicalRuleUsesLoopLocalVar'
//
//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_lexicalRuleUsesLoopLocalVar (const cPtr_abstractLexicalRuleAST * inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_lexicalRuleUsesLoopLocalVar (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum selfMutability
//--------------------------------------------------------------------------------------------------

GGS_selfMutability::GGS_selfMutability (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_selfMutability GGS_selfMutability::class_func_none (UNUSED_LOCATION_ARGS) {
  GGS_selfMutability result ;
  result.mEnum = Enumeration::enum_none ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMutability GGS_selfMutability::class_func_propertiesAreMutableSelfIsNot (UNUSED_LOCATION_ARGS) {
  GGS_selfMutability result ;
  result.mEnum = Enumeration::enum_propertiesAreMutableSelfIsNot ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMutability GGS_selfMutability::class_func_selfAndPropertiesAreMutable (UNUSED_LOCATION_ARGS) {
  GGS_selfMutability result ;
  result.mEnum = Enumeration::enum_selfAndPropertiesAreMutable ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMutability GGS_selfMutability::class_func_initializer (UNUSED_LOCATION_ARGS) {
  GGS_selfMutability result ;
  result.mEnum = Enumeration::enum_initializer ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_selfMutability [5] = {
  "(not built)",
  "none",
  "propertiesAreMutableSelfIsNot",
  "selfAndPropertiesAreMutable",
  "initializer"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_selfMutability::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_none == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_selfMutability::getter_isPropertiesAreMutableSelfIsNot (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_propertiesAreMutableSelfIsNot == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_selfMutability::getter_isSelfAndPropertiesAreMutable (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfAndPropertiesAreMutable == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_selfMutability::getter_isInitializer (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_initializer == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selfMutability::description (String & ioString,
                                      const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @selfMutability: ") ;
  ioString.appendCString (gEnumNameArrayFor_selfMutability [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfMutability::objectCompare (const GGS_selfMutability & inOperand) const {
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
//     @selfMutability generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfMutability ("selfMutability",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfMutability::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfMutability ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfMutability::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfMutability (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMutability GGS_selfMutability::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_selfMutability result ;
  const GGS_selfMutability * p = (const GGS_selfMutability *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfMutability *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfMutability", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@selfMutability selfIsMutable'
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_selfIsMutable (const GGS_selfMutability & inObject,
                                        Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_result ; // Returned variable
  const GGS_selfMutability temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_selfMutability::Enumeration::invalid:
    break ;
  case GGS_selfMutability::Enumeration::enum_none:
  case GGS_selfMutability::Enumeration::enum_propertiesAreMutableSelfIsNot:
    {
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_selfMutability::Enumeration::enum_selfAndPropertiesAreMutable:
  case GGS_selfMutability::Enumeration::enum_initializer:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Enum selfAvailability
//--------------------------------------------------------------------------------------------------

GGS_selfAvailability::GGS_selfAvailability (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_selfAvailability GGS_selfAvailability::class_func_none (UNUSED_LOCATION_ARGS) {
  GGS_selfAvailability result ;
  result.mEnum = Enumeration::enum_none ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability GGS_selfAvailability::class_func_available (const GGS_unifiedTypeMapEntry & inAssociatedValue0,
                                                                 const GGS_selfMutability & inAssociatedValue1
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_selfAvailability result ;
  result.mEnum = Enumeration::enum_available ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_selfAvailability_2E_available (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selfAvailability::method_extractAvailable (GGS_unifiedTypeMapEntry & outAssociatedValue_type,
                                                    GGS_selfMutability & outAssociatedValue_selfMutability,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_available) {
    outAssociatedValue_type.drop () ;
    outAssociatedValue_selfMutability.drop () ;
    String s ;
    s.appendCString ("proc @selfAvailability.available invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_selfAvailability_2E_available *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
    outAssociatedValue_selfMutability = ptr->mProperty_selfMutability ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available_3F_ GGS_selfAvailability::getter_getAvailable (UNUSED_LOCATION_ARGS) const {
  GGS_selfAvailability_2E_available_3F_ result ;
  if (mEnum == Enumeration::enum_available) {
    const auto ptr = (const GGS_selfAvailability_2E_available *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_selfAvailability_2E_available (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selfAvailability::getAssociatedValuesFor_available (GGS_unifiedTypeMapEntry & out_type,
                                                             GGS_selfMutability & out_selfMutability) const {
  const auto ptr = (const GGS_selfAvailability_2E_available *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
  out_selfMutability = ptr->mProperty_selfMutability ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_selfAvailability [3] = {
  "(not built)",
  "none",
  "available"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_selfAvailability::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_none == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_selfAvailability::getter_isAvailable (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_available == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selfAvailability::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("<enum @selfAvailability: ") ;
  ioString.appendCString (gEnumNameArrayFor_selfAvailability [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfAvailability::objectCompare (const GGS_selfAvailability & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_available: {
        const auto left = (GGS_selfAvailability_2E_available *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_selfAvailability_2E_available *) inOperand.mAssociatedValues.associatedValuesPointer () ;
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
//     @selfAvailability generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfAvailability ("selfAvailability",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfAvailability::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfAvailability ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfAvailability::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfAvailability (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability GGS_selfAvailability::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_selfAvailability result ;
  const GGS_selfAvailability * p = (const GGS_selfAvailability *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfAvailability *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfAvailability", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_predefinedTypes ("predefinedTypes",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_predefinedTypes::staticTypeDescriptor (void) const {
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
//Abstract extension proc '@semanticExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSemanticExpression (cPtr_semanticExpressionAST * inObject,
                                                    const GGS_lstring constin_inUsefulnessCallerEntityName,
                                                    GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                    const GGS_unifiedTypeMapEntry constin_inType,
                                                    const GGS_analysisContext constin_inAnalysisContext,
                                                    GGS_unifiedTypeMap & io_ioTypeMap,
                                                    GGS_localVarManager & io_ioVariableMap,
                                                    GGS_semanticExpressionForGeneration & out_outExpression,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outExpression.drop () ;
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticExpressionAST) ;
    inObject->method_analyzeSemanticExpression (constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inType, constin_inAnalysisContext, io_ioTypeMap, io_ioVariableMap, out_outExpression, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//  Extension Getter '@functionSignature initializerSignature'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_initializerSignature (const GGS_functionSignature & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("init") ;
  const GGS_functionSignature temp_0 = inObject ;
  UpEnumerator_functionSignature enumerator_1839 (temp_0) ;
  while (enumerator_1839.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("!").add_operation (enumerator_1839.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas4", 40)), inCompiler  COMMA_SOURCE_FILE ("semanticsTypes.galgas4", 40)) ;
    enumerator_1839.gotoNextObject () ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@functionSignature subcriptSignature'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_subcriptSignature (const GGS_functionSignature & inObject,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
  const GGS_functionSignature temp_0 = inObject ;
  UpEnumerator_functionSignature enumerator_1986 (temp_0) ;
  while (enumerator_1986.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("\?").add_operation (enumerator_1986.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas4", 47)), inCompiler  COMMA_SOURCE_FILE ("semanticsTypes.galgas4", 47)) ;
    enumerator_1986.gotoNextObject () ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Enum methodQualifier
//--------------------------------------------------------------------------------------------------

GGS_methodQualifier::GGS_methodQualifier (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_methodQualifier GGS_methodQualifier::class_func_isVirtual (UNUSED_LOCATION_ARGS) {
  GGS_methodQualifier result ;
  result.mEnum = Enumeration::enum_isVirtual ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier GGS_methodQualifier::class_func_isVirtualAbstract (UNUSED_LOCATION_ARGS) {
  GGS_methodQualifier result ;
  result.mEnum = Enumeration::enum_isVirtualAbstract ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier GGS_methodQualifier::class_func_isBasic (UNUSED_LOCATION_ARGS) {
  GGS_methodQualifier result ;
  result.mEnum = Enumeration::enum_isBasic ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier GGS_methodQualifier::class_func_isBasicFinal (UNUSED_LOCATION_ARGS) {
  GGS_methodQualifier result ;
  result.mEnum = Enumeration::enum_isBasicFinal ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier GGS_methodQualifier::class_func_isInherited (UNUSED_LOCATION_ARGS) {
  GGS_methodQualifier result ;
  result.mEnum = Enumeration::enum_isInherited ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier GGS_methodQualifier::class_func_isVirtualOverriding (UNUSED_LOCATION_ARGS) {
  GGS_methodQualifier result ;
  result.mEnum = Enumeration::enum_isVirtualOverriding ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier GGS_methodQualifier::class_func_isVirtualOverridingAbstract (UNUSED_LOCATION_ARGS) {
  GGS_methodQualifier result ;
  result.mEnum = Enumeration::enum_isVirtualOverridingAbstract ;
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

static const char * gEnumNameArrayFor_methodQualifier [8] = {
  "(not built)",
  "isVirtual",
  "isVirtualAbstract",
  "isBasic",
  "isBasicFinal",
  "isInherited",
  "isVirtualOverriding",
  "isVirtualOverridingAbstract"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_methodQualifier::getter_isIsVirtual (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_isVirtual == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_methodQualifier::getter_isIsVirtualAbstract (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_isVirtualAbstract == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_methodQualifier::getter_isIsBasic (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_isBasic == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_methodQualifier::getter_isIsBasicFinal (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_isBasicFinal == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_methodQualifier::getter_isIsInherited (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_isInherited == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_methodQualifier::getter_isIsVirtualOverriding (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_isVirtualOverriding == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_methodQualifier::getter_isIsVirtualOverridingAbstract (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_isVirtualOverridingAbstract == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_methodQualifier::description (String & ioString,
                                       const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @methodQualifier: ") ;
  ioString.appendCString (gEnumNameArrayFor_methodQualifier [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_methodQualifier::objectCompare (const GGS_methodQualifier & inOperand) const {
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
//     @methodQualifier generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_methodQualifier ("methodQualifier",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_methodQualifier::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodQualifier ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_methodQualifier::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_methodQualifier (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier GGS_methodQualifier::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_methodQualifier result ;
  const GGS_methodQualifier * p = (const GGS_methodQualifier *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_methodQualifier *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("methodQualifier", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@optionalMethodSignature' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_optionalMethodSignature : public CollectionElementPtr {
  public: GGS_optionalMethodSignature_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_optionalMethodSignature (const GGS_bool & in_mInputArgument,
                                                        const GGS_lstring & in_mFormalSelector,
                                                        const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                        const GGS_string & in_mFormalArgumentName
                                                        COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_optionalMethodSignature (const GGS_optionalMethodSignature_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_optionalMethodSignature::CollectionElementPtr_optionalMethodSignature (const GGS_bool & in_mInputArgument,
                                                                                            const GGS_lstring & in_mFormalSelector,
                                                                                            const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                            const GGS_string & in_mFormalArgumentName
                                                                                            COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mInputArgument, in_mFormalSelector, in_mFormalArgumentType, in_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_optionalMethodSignature::CollectionElementPtr_optionalMethodSignature (const GGS_optionalMethodSignature_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mInputArgument, inElement.mProperty_mFormalSelector, inElement.mProperty_mFormalArgumentType, inElement.mProperty_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_optionalMethodSignature::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_optionalMethodSignature::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_optionalMethodSignature (mObject.mProperty_mInputArgument, mObject.mProperty_mFormalSelector, mObject.mProperty_mFormalArgumentType, mObject.mProperty_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @optionalMethodSignature
//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignature::GGS_optionalMethodSignature (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignature::GGS_optionalMethodSignature (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_optionalMethodSignature * p = (CollectionElementPtr_optionalMethodSignature *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_optionalMethodSignature) ;
    const GGS_optionalMethodSignature_2E_element element (p->mObject.mProperty_mInputArgument, p->mObject.mProperty_mFormalSelector, p->mObject.mProperty_mFormalArgumentType, p->mObject.mProperty_mFormalArgumentName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalMethodSignature::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                             const GGS_bool & in_mInputArgument,
                                                             const GGS_lstring & in_mFormalSelector,
                                                             const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                             const GGS_string & in_mFormalArgumentName
                                                             COMMA_LOCATION_ARGS) {
  CollectionElementPtr_optionalMethodSignature * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_optionalMethodSignature (in_mInputArgument, in_mFormalSelector, in_mFormalArgumentType, in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_optionalMethodSignature::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_optionalMethodSignature::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalMethodSignature::description (String & ioString,
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
      ioString.appendString ("mInputArgument:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInputArgument.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFormalSelector:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalSelector.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFormalArgumentType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalArgumentType.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFormalArgumentName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalArgumentName.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignature GGS_optionalMethodSignature::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_optionalMethodSignature result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalMethodSignature::plusPlusAssignOperation (const GGS_optionalMethodSignature_2E_element & inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignature GGS_optionalMethodSignature::class_func_listWithValue (const GGS_bool & inOperand0,
                                                                                   const GGS_lstring & inOperand1,
                                                                                   const GGS_unifiedTypeMapEntry & inOperand2,
                                                                                   const GGS_string & inOperand3
                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_optionalMethodSignature_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  GGS_optionalMethodSignature result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalMethodSignature::addAssignOperation (const GGS_bool & inOperand0,
                                                      const GGS_lstring & inOperand1,
                                                      const GGS_unifiedTypeMapEntry & inOperand2,
                                                      const GGS_string & inOperand3
                                                      COMMA_LOCATION_ARGS) {
  const GGS_optionalMethodSignature_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalMethodSignature::setter_append (const GGS_bool inOperand0,
                                                 const GGS_lstring inOperand1,
                                                 const GGS_unifiedTypeMapEntry inOperand2,
                                                 const GGS_string inOperand3,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  const GGS_optionalMethodSignature_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalMethodSignature::setter_insertAtIndex (const GGS_bool inOperand0,
                                                        const GGS_lstring inOperand1,
                                                        const GGS_unifiedTypeMapEntry inOperand2,
                                                        const GGS_string inOperand3,
                                                        const GGS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  const GGS_optionalMethodSignature_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
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

void GGS_optionalMethodSignature::setter_removeAtIndex (GGS_bool & outOperand0,
                                                        GGS_lstring & outOperand1,
                                                        GGS_unifiedTypeMapEntry & outOperand2,
                                                        GGS_string & outOperand3,
                                                        const GGS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mInputArgument ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mFormalSelector ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mFormalArgumentType ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mFormalArgumentName ;
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

void GGS_optionalMethodSignature::setter_popFirst (GGS_bool & outOperand0,
                                                   GGS_lstring & outOperand1,
                                                   GGS_unifiedTypeMapEntry & outOperand2,
                                                   GGS_string & outOperand3,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInputArgument ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFormalSelector ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentType ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentName ;
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

void GGS_optionalMethodSignature::setter_popLast (GGS_bool & outOperand0,
                                                  GGS_lstring & outOperand1,
                                                  GGS_unifiedTypeMapEntry & outOperand2,
                                                  GGS_string & outOperand3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInputArgument ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFormalSelector ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFormalArgumentType ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mFormalArgumentName ;
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

void GGS_optionalMethodSignature::method_first (GGS_bool & outOperand0,
                                                GGS_lstring & outOperand1,
                                                GGS_unifiedTypeMapEntry & outOperand2,
                                                GGS_string & outOperand3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInputArgument ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFormalSelector ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentType ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentName ;
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

void GGS_optionalMethodSignature::method_last (GGS_bool & outOperand0,
                                               GGS_lstring & outOperand1,
                                               GGS_unifiedTypeMapEntry & outOperand2,
                                               GGS_string & outOperand3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInputArgument ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFormalSelector ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFormalArgumentType ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mFormalArgumentName ;
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

GGS_optionalMethodSignature GGS_optionalMethodSignature::add_operation (const GGS_optionalMethodSignature & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_optionalMethodSignature result ;
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

GGS_optionalMethodSignature GGS_optionalMethodSignature::subList (const int32_t inStart,
                                                                  const int32_t inLength,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_optionalMethodSignature result ;
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

GGS_optionalMethodSignature GGS_optionalMethodSignature::getter_subListWithRange (const GGS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_optionalMethodSignature result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignature GGS_optionalMethodSignature::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_optionalMethodSignature result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignature GGS_optionalMethodSignature::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_optionalMethodSignature result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalMethodSignature::plusAssignOperation (const GGS_optionalMethodSignature inList,
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

void GGS_optionalMethodSignature::setter_setMInputArgumentAtIndex (GGS_bool inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInputArgument = inOperand ;
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

GGS_bool GGS_optionalMethodSignature::getter_mInputArgumentAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInputArgument ;
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

void GGS_optionalMethodSignature::setter_setMFormalSelectorAtIndex (GGS_lstring inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalSelector = inOperand ;
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

GGS_lstring GGS_optionalMethodSignature::getter_mFormalSelectorAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalSelector ;
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

void GGS_optionalMethodSignature::setter_setMFormalArgumentTypeAtIndex (GGS_unifiedTypeMapEntry inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentType = inOperand ;
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

GGS_unifiedTypeMapEntry GGS_optionalMethodSignature::getter_mFormalArgumentTypeAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapEntry result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentType ;
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

void GGS_optionalMethodSignature::setter_setMFormalArgumentNameAtIndex (GGS_string inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentName = inOperand ;
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

GGS_string GGS_optionalMethodSignature::getter_mFormalArgumentNameAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentName ;
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
// Down Enumerator for @optionalMethodSignature
//--------------------------------------------------------------------------------------------------

DownEnumerator_optionalMethodSignature::DownEnumerator_optionalMethodSignature (const GGS_optionalMethodSignature & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignature_2E_element DownEnumerator_optionalMethodSignature::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_optionalMethodSignature::current_mInputArgument (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInputArgument ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_optionalMethodSignature::current_mFormalSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_optionalMethodSignature::current_mFormalArgumentType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_optionalMethodSignature::current_mFormalArgumentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @optionalMethodSignature
//--------------------------------------------------------------------------------------------------

UpEnumerator_optionalMethodSignature::UpEnumerator_optionalMethodSignature (const GGS_optionalMethodSignature & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignature_2E_element UpEnumerator_optionalMethodSignature::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_optionalMethodSignature::current_mInputArgument (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInputArgument ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_optionalMethodSignature::current_mFormalSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_optionalMethodSignature::current_mFormalArgumentType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_optionalMethodSignature::current_mFormalArgumentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentName ;
}




//--------------------------------------------------------------------------------------------------
//     @optionalMethodSignature generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionalMethodSignature ("optionalMethodSignature",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionalMethodSignature::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalMethodSignature ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionalMethodSignature::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionalMethodSignature (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignature GGS_optionalMethodSignature::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_optionalMethodSignature result ;
  const GGS_optionalMethodSignature * p = (const GGS_optionalMethodSignature *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionalMethodSignature *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionalMethodSignature", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@formalParameterSignature' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_formalParameterSignature : public CollectionElementPtr {
  public: GGS_formalParameterSignature_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_formalParameterSignature (const GGS_lstring & in_mFormalSelector,
                                                         const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                         const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                         const GGS_string & in_mFormalArgumentName
                                                         COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_formalParameterSignature (const GGS_formalParameterSignature_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_formalParameterSignature::CollectionElementPtr_formalParameterSignature (const GGS_lstring & in_mFormalSelector,
                                                                                              const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                              const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                                                              const GGS_string & in_mFormalArgumentName
                                                                                              COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mFormalSelector, in_mFormalArgumentType, in_mFormalArgumentPassingMode, in_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_formalParameterSignature::CollectionElementPtr_formalParameterSignature (const GGS_formalParameterSignature_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mFormalSelector, inElement.mProperty_mFormalArgumentType, inElement.mProperty_mFormalArgumentPassingMode, inElement.mProperty_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_formalParameterSignature::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_formalParameterSignature::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_formalParameterSignature (mObject.mProperty_mFormalSelector, mObject.mProperty_mFormalArgumentType, mObject.mProperty_mFormalArgumentPassingMode, mObject.mProperty_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @formalParameterSignature
//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature::GGS_formalParameterSignature (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature::GGS_formalParameterSignature (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_formalParameterSignature * p = (CollectionElementPtr_formalParameterSignature *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_formalParameterSignature) ;
    const GGS_formalParameterSignature_2E_element element (p->mObject.mProperty_mFormalSelector, p->mObject.mProperty_mFormalArgumentType, p->mObject.mProperty_mFormalArgumentPassingMode, p->mObject.mProperty_mFormalArgumentName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterSignature::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                              const GGS_lstring & in_mFormalSelector,
                                                              const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                              const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                              const GGS_string & in_mFormalArgumentName
                                                              COMMA_LOCATION_ARGS) {
  CollectionElementPtr_formalParameterSignature * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_formalParameterSignature (in_mFormalSelector, in_mFormalArgumentType, in_mFormalArgumentPassingMode, in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_formalParameterSignature::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_formalParameterSignature::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterSignature::description (String & ioString,
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
      ioString.appendString ("mFormalSelector:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalSelector.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFormalArgumentType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalArgumentType.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFormalArgumentPassingMode:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFormalArgumentName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalArgumentName.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_formalParameterSignature::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalParameterSignature result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterSignature::plusPlusAssignOperation (const GGS_formalParameterSignature_2E_element & inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_formalParameterSignature::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                     const GGS_unifiedTypeMapEntry & inOperand1,
                                                                                     const GGS_formalArgumentPassingModeAST & inOperand2,
                                                                                     const GGS_string & inOperand3
                                                                                     COMMA_LOCATION_ARGS) {
  const GGS_formalParameterSignature_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  GGS_formalParameterSignature result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterSignature::addAssignOperation (const GGS_lstring & inOperand0,
                                                       const GGS_unifiedTypeMapEntry & inOperand1,
                                                       const GGS_formalArgumentPassingModeAST & inOperand2,
                                                       const GGS_string & inOperand3
                                                       COMMA_LOCATION_ARGS) {
  const GGS_formalParameterSignature_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterSignature::setter_append (const GGS_lstring inOperand0,
                                                  const GGS_unifiedTypeMapEntry inOperand1,
                                                  const GGS_formalArgumentPassingModeAST inOperand2,
                                                  const GGS_string inOperand3,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  const GGS_formalParameterSignature_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterSignature::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                         const GGS_unifiedTypeMapEntry inOperand1,
                                                         const GGS_formalArgumentPassingModeAST inOperand2,
                                                         const GGS_string inOperand3,
                                                         const GGS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  const GGS_formalParameterSignature_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
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

void GGS_formalParameterSignature::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                         GGS_unifiedTypeMapEntry & outOperand1,
                                                         GGS_formalArgumentPassingModeAST & outOperand2,
                                                         GGS_string & outOperand3,
                                                         const GGS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mFormalSelector ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mFormalArgumentType ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mFormalArgumentPassingMode ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mFormalArgumentName ;
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

void GGS_formalParameterSignature::setter_popFirst (GGS_lstring & outOperand0,
                                                    GGS_unifiedTypeMapEntry & outOperand1,
                                                    GGS_formalArgumentPassingModeAST & outOperand2,
                                                    GGS_string & outOperand3,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFormalSelector ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentType ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentPassingMode ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentName ;
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

void GGS_formalParameterSignature::setter_popLast (GGS_lstring & outOperand0,
                                                   GGS_unifiedTypeMapEntry & outOperand1,
                                                   GGS_formalArgumentPassingModeAST & outOperand2,
                                                   GGS_string & outOperand3,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFormalSelector ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFormalArgumentType ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFormalArgumentPassingMode ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mFormalArgumentName ;
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

void GGS_formalParameterSignature::method_first (GGS_lstring & outOperand0,
                                                 GGS_unifiedTypeMapEntry & outOperand1,
                                                 GGS_formalArgumentPassingModeAST & outOperand2,
                                                 GGS_string & outOperand3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFormalSelector ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentType ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentPassingMode ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentName ;
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

void GGS_formalParameterSignature::method_last (GGS_lstring & outOperand0,
                                                GGS_unifiedTypeMapEntry & outOperand1,
                                                GGS_formalArgumentPassingModeAST & outOperand2,
                                                GGS_string & outOperand3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFormalSelector ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFormalArgumentType ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFormalArgumentPassingMode ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mFormalArgumentName ;
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

GGS_formalParameterSignature GGS_formalParameterSignature::add_operation (const GGS_formalParameterSignature & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_formalParameterSignature result ;
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

GGS_formalParameterSignature GGS_formalParameterSignature::subList (const int32_t inStart,
                                                                    const int32_t inLength,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_formalParameterSignature result ;
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

GGS_formalParameterSignature GGS_formalParameterSignature::getter_subListWithRange (const GGS_range & inRange,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_formalParameterSignature result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_formalParameterSignature::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_formalParameterSignature result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_formalParameterSignature::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_formalParameterSignature result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterSignature::plusAssignOperation (const GGS_formalParameterSignature inList,
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

void GGS_formalParameterSignature::setter_setMFormalSelectorAtIndex (GGS_lstring inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalSelector = inOperand ;
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

GGS_lstring GGS_formalParameterSignature::getter_mFormalSelectorAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalSelector ;
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

void GGS_formalParameterSignature::setter_setMFormalArgumentTypeAtIndex (GGS_unifiedTypeMapEntry inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentType = inOperand ;
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

GGS_unifiedTypeMapEntry GGS_formalParameterSignature::getter_mFormalArgumentTypeAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapEntry result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentType ;
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

void GGS_formalParameterSignature::setter_setMFormalArgumentPassingModeAtIndex (GGS_formalArgumentPassingModeAST inOperand,
                                                                                GGS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentPassingMode = inOperand ;
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

GGS_formalArgumentPassingModeAST GGS_formalParameterSignature::getter_mFormalArgumentPassingModeAtIndex (const GGS_uint & inIndex,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_formalArgumentPassingModeAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentPassingMode ;
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

void GGS_formalParameterSignature::setter_setMFormalArgumentNameAtIndex (GGS_string inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentName = inOperand ;
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

GGS_string GGS_formalParameterSignature::getter_mFormalArgumentNameAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentName ;
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
// Down Enumerator for @formalParameterSignature
//--------------------------------------------------------------------------------------------------

DownEnumerator_formalParameterSignature::DownEnumerator_formalParameterSignature (const GGS_formalParameterSignature & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature_2E_element DownEnumerator_formalParameterSignature::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_formalParameterSignature::current_mFormalSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_formalParameterSignature::current_mFormalArgumentType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalArgumentPassingModeAST DownEnumerator_formalParameterSignature::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentPassingMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_formalParameterSignature::current_mFormalArgumentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @formalParameterSignature
//--------------------------------------------------------------------------------------------------

UpEnumerator_formalParameterSignature::UpEnumerator_formalParameterSignature (const GGS_formalParameterSignature & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature_2E_element UpEnumerator_formalParameterSignature::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_formalParameterSignature::current_mFormalSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_formalParameterSignature::current_mFormalArgumentType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalArgumentPassingModeAST UpEnumerator_formalParameterSignature::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentPassingMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_formalParameterSignature::current_mFormalArgumentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentName ;
}




//--------------------------------------------------------------------------------------------------
//     @formalParameterSignature generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formalParameterSignature ("formalParameterSignature",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_formalParameterSignature::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalParameterSignature ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_formalParameterSignature::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_formalParameterSignature (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_formalParameterSignature::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_formalParameterSignature result ;
  const GGS_formalParameterSignature * p = (const GGS_formalParameterSignature *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_formalParameterSignature *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalParameterSignature", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@typedPropertyList initializerSignature'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_initializerSignature (const GGS_typedPropertyList & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("init") ;
  const GGS_typedPropertyList temp_0 = inObject ;
  UpEnumerator_typedPropertyList enumerator_8390 (temp_0) ;
  while (enumerator_8390.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::equal, enumerator_8390.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("semanticsTypes.galgas4", 213)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        result_result.plusAssignOperation(GGS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("semanticsTypes.galgas4", 214)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = enumerator_8390.current (HERE).readProperty_hasSelector ().boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            result_result.plusAssignOperation(enumerator_8390.current (HERE).readProperty_name ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("semanticsTypes.galgas4", 216)) ;
          }
        }
      }
    }
    enumerator_8390.gotoNextObject () ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Enum propertyInCollectionInitializationAST
//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST::GGS_propertyInCollectionInitializationAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST GGS_propertyInCollectionInitializationAST::class_func_none (UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionInitializationAST result ;
  result.mEnum = Enumeration::enum_none ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST GGS_propertyInCollectionInitializationAST::class_func_some (const GGS_semanticExpressionAST & inAssociatedValue0
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionInitializationAST result ;
  result.mEnum = Enumeration::enum_some ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertyInCollectionInitializationAST_2E_some (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionInitializationAST::method_extractSome (GGS_semanticExpressionAST & outAssociatedValue_expression,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_some) {
    outAssociatedValue_expression.drop () ;
    String s ;
    s.appendCString ("proc @propertyInCollectionInitializationAST.some invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertyInCollectionInitializationAST_2E_some *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_expression = ptr->mProperty_expression ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some_3F_ GGS_propertyInCollectionInitializationAST::getter_getSome (UNUSED_LOCATION_ARGS) const {
  GGS_propertyInCollectionInitializationAST_2E_some_3F_ result ;
  if (mEnum == Enumeration::enum_some) {
    const auto ptr = (const GGS_propertyInCollectionInitializationAST_2E_some *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertyInCollectionInitializationAST_2E_some (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionInitializationAST::getAssociatedValuesFor_some (GGS_semanticExpressionAST & out_expression) const {
  const auto ptr = (const GGS_propertyInCollectionInitializationAST_2E_some *) mAssociatedValues.associatedValuesPointer () ;
  out_expression = ptr->mProperty_expression ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_propertyInCollectionInitializationAST [3] = {
  "(not built)",
  "none",
  "some"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyInCollectionInitializationAST::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_none == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyInCollectionInitializationAST::getter_isSome (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_some == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionInitializationAST::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<enum @propertyInCollectionInitializationAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_propertyInCollectionInitializationAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_propertyInCollectionInitializationAST::objectCompare (const GGS_propertyInCollectionInitializationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_some: {
        const auto left = (GGS_propertyInCollectionInitializationAST_2E_some *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_propertyInCollectionInitializationAST_2E_some *) inOperand.mAssociatedValues.associatedValuesPointer () ;
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
//     @propertyInCollectionInitializationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyInCollectionInitializationAST ("propertyInCollectionInitializationAST",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyInCollectionInitializationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyInCollectionInitializationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyInCollectionInitializationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyInCollectionInitializationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST GGS_propertyInCollectionInitializationAST::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_propertyInCollectionInitializationAST result ;
  const GGS_propertyInCollectionInitializationAST * p = (const GGS_propertyInCollectionInitializationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyInCollectionInitializationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyInCollectionInitializationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum AccessControl
//--------------------------------------------------------------------------------------------------

GGS_AccessControl::GGS_AccessControl (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControl GGS_AccessControl::class_func_publicAccess (UNUSED_LOCATION_ARGS) {
  GGS_AccessControl result ;
  result.mEnum = Enumeration::enum_publicAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl GGS_AccessControl::class_func_protectedAccess (const GGS_unifiedTypeMapEntry & inAssociatedValue0
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl result ;
  result.mEnum = Enumeration::enum_protectedAccess ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_AccessControl_2E_protectedAccess (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl GGS_AccessControl::class_func_protectedSetAccess (const GGS_unifiedTypeMapEntry & inAssociatedValue0
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl result ;
  result.mEnum = Enumeration::enum_protectedSetAccess ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_AccessControl_2E_protectedSetAccess (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl GGS_AccessControl::class_func_privateAccess (const GGS_unifiedTypeMapEntry & inAssociatedValue0
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl result ;
  result.mEnum = Enumeration::enum_privateAccess ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_AccessControl_2E_privateAccess (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl GGS_AccessControl::class_func_privateSetAccess (const GGS_unifiedTypeMapEntry & inAssociatedValue0
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl result ;
  result.mEnum = Enumeration::enum_privateSetAccess ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_AccessControl_2E_privateSetAccess (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl GGS_AccessControl::class_func_fileprivateAccess (const GGS_location & inAssociatedValue0
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl result ;
  result.mEnum = Enumeration::enum_fileprivateAccess ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_AccessControl_2E_fileprivateAccess (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl GGS_AccessControl::class_func_fileprivateSetAccess (const GGS_location & inAssociatedValue0
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl result ;
  result.mEnum = Enumeration::enum_fileprivateSetAccess ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_AccessControl_2E_fileprivateSetAccess (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl::method_extractProtectedAccess (GGS_unifiedTypeMapEntry & outAssociatedValue_declaringType,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_protectedAccess) {
    outAssociatedValue_declaringType.drop () ;
    String s ;
    s.appendCString ("proc @AccessControl.protectedAccess invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_AccessControl_2E_protectedAccess *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_declaringType = ptr->mProperty_declaringType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl::method_extractProtectedSetAccess (GGS_unifiedTypeMapEntry & outAssociatedValue_declaringType,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_protectedSetAccess) {
    outAssociatedValue_declaringType.drop () ;
    String s ;
    s.appendCString ("proc @AccessControl.protectedSetAccess invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_AccessControl_2E_protectedSetAccess *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_declaringType = ptr->mProperty_declaringType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl::method_extractPrivateAccess (GGS_unifiedTypeMapEntry & outAssociatedValue_declaringType,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_privateAccess) {
    outAssociatedValue_declaringType.drop () ;
    String s ;
    s.appendCString ("proc @AccessControl.privateAccess invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_AccessControl_2E_privateAccess *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_declaringType = ptr->mProperty_declaringType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl::method_extractPrivateSetAccess (GGS_unifiedTypeMapEntry & outAssociatedValue_declaringType,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_privateSetAccess) {
    outAssociatedValue_declaringType.drop () ;
    String s ;
    s.appendCString ("proc @AccessControl.privateSetAccess invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_AccessControl_2E_privateSetAccess *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_declaringType = ptr->mProperty_declaringType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl::method_extractFileprivateAccess (GGS_location & outAssociatedValue_declarationLocation,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_fileprivateAccess) {
    outAssociatedValue_declarationLocation.drop () ;
    String s ;
    s.appendCString ("proc @AccessControl.fileprivateAccess invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_AccessControl_2E_fileprivateAccess *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_declarationLocation = ptr->mProperty_declarationLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl::method_extractFileprivateSetAccess (GGS_location & outAssociatedValue_declarationLocation,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_fileprivateSetAccess) {
    outAssociatedValue_declarationLocation.drop () ;
    String s ;
    s.appendCString ("proc @AccessControl.fileprivateSetAccess invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_AccessControl_2E_fileprivateSetAccess *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_declarationLocation = ptr->mProperty_declarationLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess_3F_ GGS_AccessControl::getter_getProtectedAccess (UNUSED_LOCATION_ARGS) const {
  GGS_AccessControl_2E_protectedAccess_3F_ result ;
  if (mEnum == Enumeration::enum_protectedAccess) {
    const auto ptr = (const GGS_AccessControl_2E_protectedAccess *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_AccessControl_2E_protectedAccess (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl::getAssociatedValuesFor_protectedAccess (GGS_unifiedTypeMapEntry & out_declaringType) const {
  const auto ptr = (const GGS_AccessControl_2E_protectedAccess *) mAssociatedValues.associatedValuesPointer () ;
  out_declaringType = ptr->mProperty_declaringType ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess_3F_ GGS_AccessControl::getter_getProtectedSetAccess (UNUSED_LOCATION_ARGS) const {
  GGS_AccessControl_2E_protectedSetAccess_3F_ result ;
  if (mEnum == Enumeration::enum_protectedSetAccess) {
    const auto ptr = (const GGS_AccessControl_2E_protectedSetAccess *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_AccessControl_2E_protectedSetAccess (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl::getAssociatedValuesFor_protectedSetAccess (GGS_unifiedTypeMapEntry & out_declaringType) const {
  const auto ptr = (const GGS_AccessControl_2E_protectedSetAccess *) mAssociatedValues.associatedValuesPointer () ;
  out_declaringType = ptr->mProperty_declaringType ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess_3F_ GGS_AccessControl::getter_getPrivateAccess (UNUSED_LOCATION_ARGS) const {
  GGS_AccessControl_2E_privateAccess_3F_ result ;
  if (mEnum == Enumeration::enum_privateAccess) {
    const auto ptr = (const GGS_AccessControl_2E_privateAccess *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_AccessControl_2E_privateAccess (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl::getAssociatedValuesFor_privateAccess (GGS_unifiedTypeMapEntry & out_declaringType) const {
  const auto ptr = (const GGS_AccessControl_2E_privateAccess *) mAssociatedValues.associatedValuesPointer () ;
  out_declaringType = ptr->mProperty_declaringType ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess_3F_ GGS_AccessControl::getter_getPrivateSetAccess (UNUSED_LOCATION_ARGS) const {
  GGS_AccessControl_2E_privateSetAccess_3F_ result ;
  if (mEnum == Enumeration::enum_privateSetAccess) {
    const auto ptr = (const GGS_AccessControl_2E_privateSetAccess *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_AccessControl_2E_privateSetAccess (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl::getAssociatedValuesFor_privateSetAccess (GGS_unifiedTypeMapEntry & out_declaringType) const {
  const auto ptr = (const GGS_AccessControl_2E_privateSetAccess *) mAssociatedValues.associatedValuesPointer () ;
  out_declaringType = ptr->mProperty_declaringType ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess_3F_ GGS_AccessControl::getter_getFileprivateAccess (UNUSED_LOCATION_ARGS) const {
  GGS_AccessControl_2E_fileprivateAccess_3F_ result ;
  if (mEnum == Enumeration::enum_fileprivateAccess) {
    const auto ptr = (const GGS_AccessControl_2E_fileprivateAccess *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_AccessControl_2E_fileprivateAccess (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl::getAssociatedValuesFor_fileprivateAccess (GGS_location & out_declarationLocation) const {
  const auto ptr = (const GGS_AccessControl_2E_fileprivateAccess *) mAssociatedValues.associatedValuesPointer () ;
  out_declarationLocation = ptr->mProperty_declarationLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateSetAccess_3F_ GGS_AccessControl::getter_getFileprivateSetAccess (UNUSED_LOCATION_ARGS) const {
  GGS_AccessControl_2E_fileprivateSetAccess_3F_ result ;
  if (mEnum == Enumeration::enum_fileprivateSetAccess) {
    const auto ptr = (const GGS_AccessControl_2E_fileprivateSetAccess *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_AccessControl_2E_fileprivateSetAccess (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl::getAssociatedValuesFor_fileprivateSetAccess (GGS_location & out_declarationLocation) const {
  const auto ptr = (const GGS_AccessControl_2E_fileprivateSetAccess *) mAssociatedValues.associatedValuesPointer () ;
  out_declarationLocation = ptr->mProperty_declarationLocation ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_AccessControl [8] = {
  "(not built)",
  "publicAccess",
  "protectedAccess",
  "protectedSetAccess",
  "privateAccess",
  "privateSetAccess",
  "fileprivateAccess",
  "fileprivateSetAccess"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControl::getter_isPublicAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_publicAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControl::getter_isProtectedAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_protectedAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControl::getter_isProtectedSetAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_protectedSetAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControl::getter_isPrivateAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_privateAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControl::getter_isPrivateSetAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_privateSetAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControl::getter_isFileprivateAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fileprivateAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControl::getter_isFileprivateSetAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fileprivateSetAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl::description (String & ioString,
                                     const int32_t inIndentation) const {
  ioString.appendCString ("<enum @AccessControl: ") ;
  ioString.appendCString (gEnumNameArrayFor_AccessControl [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @AccessControl generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl ("AccessControl",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl GGS_AccessControl::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_AccessControl result ;
  const GGS_AccessControl * p = (const GGS_AccessControl *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@associatedValueDescriptorList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_associatedValueDescriptorList : public CollectionElementPtr {
  public: GGS_associatedValueDescriptorList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_associatedValueDescriptorList (const GGS_unifiedTypeMapEntry & in_type,
                                                              const GGS_string & in_name
                                                              COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_associatedValueDescriptorList (const GGS_associatedValueDescriptorList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_associatedValueDescriptorList::CollectionElementPtr_associatedValueDescriptorList (const GGS_unifiedTypeMapEntry & in_type,
                                                                                                        const GGS_string & in_name
                                                                                                        COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_type, in_name) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_associatedValueDescriptorList::CollectionElementPtr_associatedValueDescriptorList (const GGS_associatedValueDescriptorList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_type, inElement.mProperty_name) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_associatedValueDescriptorList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_associatedValueDescriptorList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_associatedValueDescriptorList (mObject.mProperty_type, mObject.mProperty_name COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @associatedValueDescriptorList
//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptorList::GGS_associatedValueDescriptorList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptorList::GGS_associatedValueDescriptorList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_associatedValueDescriptorList * p = (CollectionElementPtr_associatedValueDescriptorList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_associatedValueDescriptorList) ;
    const GGS_associatedValueDescriptorList_2E_element element (p->mObject.mProperty_type, p->mObject.mProperty_name) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValueDescriptorList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                   const GGS_unifiedTypeMapEntry & in_type,
                                                                   const GGS_string & in_name
                                                                   COMMA_LOCATION_ARGS) {
  CollectionElementPtr_associatedValueDescriptorList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_associatedValueDescriptorList (in_type, in_name COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_associatedValueDescriptorList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_associatedValueDescriptorList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValueDescriptorList::description (String & ioString,
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
      ioString.appendString ("type:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_type.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("name:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_name.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptorList GGS_associatedValueDescriptorList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_associatedValueDescriptorList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValueDescriptorList::plusPlusAssignOperation (const GGS_associatedValueDescriptorList_2E_element & inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptorList GGS_associatedValueDescriptorList::class_func_listWithValue (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                                               const GGS_string & inOperand1
                                                                                               COMMA_LOCATION_ARGS) {
  const GGS_associatedValueDescriptorList_2E_element element (inOperand0, inOperand1) ;
  GGS_associatedValueDescriptorList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValueDescriptorList::addAssignOperation (const GGS_unifiedTypeMapEntry & inOperand0,
                                                            const GGS_string & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  const GGS_associatedValueDescriptorList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValueDescriptorList::setter_append (const GGS_unifiedTypeMapEntry inOperand0,
                                                       const GGS_string inOperand1,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  const GGS_associatedValueDescriptorList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValueDescriptorList::setter_insertAtIndex (const GGS_unifiedTypeMapEntry inOperand0,
                                                              const GGS_string inOperand1,
                                                              const GGS_uint inInsertionIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  const GGS_associatedValueDescriptorList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_associatedValueDescriptorList::setter_removeAtIndex (GGS_unifiedTypeMapEntry & outOperand0,
                                                              GGS_string & outOperand1,
                                                              const GGS_uint inRemoveIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_type ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_name ;
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

void GGS_associatedValueDescriptorList::setter_popFirst (GGS_unifiedTypeMapEntry & outOperand0,
                                                         GGS_string & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_type ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_name ;
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

void GGS_associatedValueDescriptorList::setter_popLast (GGS_unifiedTypeMapEntry & outOperand0,
                                                        GGS_string & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_type ;
      outOperand1 = mArray.lastObject (HERE).mProperty_name ;
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

void GGS_associatedValueDescriptorList::method_first (GGS_unifiedTypeMapEntry & outOperand0,
                                                      GGS_string & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_type ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_name ;
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

void GGS_associatedValueDescriptorList::method_last (GGS_unifiedTypeMapEntry & outOperand0,
                                                     GGS_string & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_type ;
      outOperand1 = mArray.lastObject (HERE).mProperty_name ;
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

GGS_associatedValueDescriptorList GGS_associatedValueDescriptorList::add_operation (const GGS_associatedValueDescriptorList & inOperand,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_associatedValueDescriptorList result ;
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

GGS_associatedValueDescriptorList GGS_associatedValueDescriptorList::subList (const int32_t inStart,
                                                                              const int32_t inLength,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_associatedValueDescriptorList result ;
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

GGS_associatedValueDescriptorList GGS_associatedValueDescriptorList::getter_subListWithRange (const GGS_range & inRange,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_associatedValueDescriptorList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptorList GGS_associatedValueDescriptorList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_associatedValueDescriptorList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptorList GGS_associatedValueDescriptorList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_associatedValueDescriptorList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValueDescriptorList::plusAssignOperation (const GGS_associatedValueDescriptorList inList,
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

void GGS_associatedValueDescriptorList::setter_setTypeAtIndex (GGS_unifiedTypeMapEntry inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_type = inOperand ;
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

GGS_unifiedTypeMapEntry GGS_associatedValueDescriptorList::getter_typeAtIndex (const GGS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapEntry result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_type ;
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

void GGS_associatedValueDescriptorList::setter_setNameAtIndex (GGS_string inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_name = inOperand ;
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

GGS_string GGS_associatedValueDescriptorList::getter_nameAtIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_name ;
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

ComparisonResult GGS_associatedValueDescriptorList::objectCompare (const GGS_associatedValueDescriptorList & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (count () < inOperand.count ()) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (count () > inOperand.count ()) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
      for (uint32_t i = 0 ; (i < count ()) && (result == ComparisonResult::operandEqual) ; i++) {
        const GGS_associatedValueDescriptorList_2E_element left = mArray (int32_t (i) COMMA_HERE) ;
        const GGS_associatedValueDescriptorList_2E_element right = inOperand.mArray (int32_t (i) COMMA_HERE) ;
        result = left.objectCompare (right) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @associatedValueDescriptorList
//--------------------------------------------------------------------------------------------------

DownEnumerator_associatedValueDescriptorList::DownEnumerator_associatedValueDescriptorList (const GGS_associatedValueDescriptorList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptorList_2E_element DownEnumerator_associatedValueDescriptorList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_associatedValueDescriptorList::current_type (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_type ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_associatedValueDescriptorList::current_name (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_name ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @associatedValueDescriptorList
//--------------------------------------------------------------------------------------------------

UpEnumerator_associatedValueDescriptorList::UpEnumerator_associatedValueDescriptorList (const GGS_associatedValueDescriptorList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptorList_2E_element UpEnumerator_associatedValueDescriptorList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_associatedValueDescriptorList::current_type (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_type ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_associatedValueDescriptorList::current_name (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_name ;
}




//--------------------------------------------------------------------------------------------------
//     @associatedValueDescriptorList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_associatedValueDescriptorList ("associatedValueDescriptorList",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_associatedValueDescriptorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_associatedValueDescriptorList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_associatedValueDescriptorList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_associatedValueDescriptorList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptorList GGS_associatedValueDescriptorList::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_associatedValueDescriptorList result ;
  const GGS_associatedValueDescriptorList * p = (const GGS_associatedValueDescriptorList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_associatedValueDescriptorList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("associatedValueDescriptorList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

