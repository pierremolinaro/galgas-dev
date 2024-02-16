#include "Compiler.h"
#include "C_galgas_io.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@terminalLabelListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_terminalLabelListAST : public cCollectionElement {
  public: GALGAS_terminalLabelListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_terminalLabelListAST (const GALGAS_lstring & in_mTerminal,
                                                   const GALGAS_uint & in_mDisplayFlags
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_terminalLabelListAST (const GALGAS_terminalLabelListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_terminalLabelListAST::cCollectionElement_terminalLabelListAST (const GALGAS_lstring & in_mTerminal,
                                                                                  const GALGAS_uint & in_mDisplayFlags
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTerminal, in_mDisplayFlags) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_terminalLabelListAST::cCollectionElement_terminalLabelListAST (const GALGAS_terminalLabelListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTerminal, inElement.mProperty_mDisplayFlags) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_terminalLabelListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_terminalLabelListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_terminalLabelListAST (mObject.mProperty_mTerminal, mObject.mProperty_mDisplayFlags COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_terminalLabelListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTerminal" ":") ;
  mObject.mProperty_mTerminal.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDisplayFlags" ":") ;
  mObject.mProperty_mDisplayFlags.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_terminalLabelListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_terminalLabelListAST * operand = (cCollectionElement_terminalLabelListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_terminalLabelListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalLabelListAST::GALGAS_terminalLabelListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalLabelListAST::GALGAS_terminalLabelListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_terminalLabelListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                   const GALGAS_uint & inOperand1
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_terminalLabelListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_terminalLabelListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_terminalLabelListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalLabelListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_lstring & in_mTerminal,
                                                             const GALGAS_uint & in_mDisplayFlags
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalLabelListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_terminalLabelListAST (in_mTerminal,
                                                          in_mDisplayFlags COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalLabelListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                       const GALGAS_uint & inOperand1
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_terminalLabelListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalLabelListAST::setter_append (const GALGAS_lstring inOperand0,
                                                 const GALGAS_uint inOperand1,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_terminalLabelListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalLabelListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                        const GALGAS_uint inOperand1,
                                                        const GALGAS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_terminalLabelListAST (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_terminalLabelListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                        GALGAS_uint & outOperand1,
                                                        const GALGAS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
        outOperand0 = p->mObject.mProperty_mTerminal ;
        outOperand1 = p->mObject.mProperty_mDisplayFlags ;
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

void GALGAS_terminalLabelListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                   GALGAS_uint & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
    outOperand0 = p->mObject.mProperty_mTerminal ;
    outOperand1 = p->mObject.mProperty_mDisplayFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalLabelListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                  GALGAS_uint & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
    outOperand0 = p->mObject.mProperty_mTerminal ;
    outOperand1 = p->mObject.mProperty_mDisplayFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalLabelListAST::method_first (GALGAS_lstring & outOperand0,
                                                GALGAS_uint & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
    outOperand0 = p->mObject.mProperty_mTerminal ;
    outOperand1 = p->mObject.mProperty_mDisplayFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalLabelListAST::method_last (GALGAS_lstring & outOperand0,
                                               GALGAS_uint & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
    outOperand0 = p->mObject.mProperty_mTerminal ;
    outOperand1 = p->mObject.mProperty_mDisplayFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::add_operation (const GALGAS_terminalLabelListAST & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_terminalLabelListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_terminalLabelListAST result = GALGAS_terminalLabelListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_terminalLabelListAST result = GALGAS_terminalLabelListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_terminalLabelListAST result = GALGAS_terminalLabelListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalLabelListAST::plusAssign_operation (const GALGAS_terminalLabelListAST inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalLabelListAST::setter_setMTerminalAtIndex (GALGAS_lstring inOperand,
                                                              GALGAS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTerminal = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_terminalLabelListAST::getter_mTerminalAtIndex (const GALGAS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
    result = p->mObject.mProperty_mTerminal ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalLabelListAST::setter_setMDisplayFlagsAtIndex (GALGAS_uint inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDisplayFlags = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_terminalLabelListAST::getter_mDisplayFlagsAtIndex (const GALGAS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalLabelListAST * p = (cCollectionElement_terminalLabelListAST *) attributes.ptr () ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
    result = p->mObject.mProperty_mDisplayFlags ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_terminalLabelListAST::cEnumerator_terminalLabelListAST (const GALGAS_terminalLabelListAST & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalLabelListAST_2D_element cEnumerator_terminalLabelListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_terminalLabelListAST * p = (const cCollectionElement_terminalLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_terminalLabelListAST::current_mTerminal (LOCATION_ARGS) const {
  const cCollectionElement_terminalLabelListAST * p = (const cCollectionElement_terminalLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
  return p->mObject.mProperty_mTerminal ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_terminalLabelListAST::current_mDisplayFlags (LOCATION_ARGS) const {
  const cCollectionElement_terminalLabelListAST * p = (const cCollectionElement_terminalLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalLabelListAST) ;
  return p->mObject.mProperty_mDisplayFlags ;
}




//--------------------------------------------------------------------------------------------------
//
//     @terminalLabelListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalLabelListAST ("terminalLabelListAST",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_terminalLabelListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalLabelListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_terminalLabelListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalLabelListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalLabelListAST GALGAS_terminalLabelListAST::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_terminalLabelListAST result ;
  const GALGAS_terminalLabelListAST * p = (const GALGAS_terminalLabelListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_terminalLabelListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalLabelListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@guiLabelListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_guiLabelListAST : public cCollectionElement {
  public: GALGAS_guiLabelListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_guiLabelListAST (const GALGAS_uint & in_mLeadingCharacterStrippedCount,
                                              const GALGAS_terminalLabelListAST & in_mTerminalList,
                                              const GALGAS_location & in_mLocation
                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_guiLabelListAST (const GALGAS_guiLabelListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_guiLabelListAST::cCollectionElement_guiLabelListAST (const GALGAS_uint & in_mLeadingCharacterStrippedCount,
                                                                        const GALGAS_terminalLabelListAST & in_mTerminalList,
                                                                        const GALGAS_location & in_mLocation
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLeadingCharacterStrippedCount, in_mTerminalList, in_mLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_guiLabelListAST::cCollectionElement_guiLabelListAST (const GALGAS_guiLabelListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLeadingCharacterStrippedCount, inElement.mProperty_mTerminalList, inElement.mProperty_mLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_guiLabelListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_guiLabelListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_guiLabelListAST (mObject.mProperty_mLeadingCharacterStrippedCount, mObject.mProperty_mTerminalList, mObject.mProperty_mLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_guiLabelListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLeadingCharacterStrippedCount" ":") ;
  mObject.mProperty_mLeadingCharacterStrippedCount.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTerminalList" ":") ;
  mObject.mProperty_mTerminalList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLocation" ":") ;
  mObject.mProperty_mLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_guiLabelListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_guiLabelListAST * operand = (cCollectionElement_guiLabelListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_guiLabelListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST::GALGAS_guiLabelListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST::GALGAS_guiLabelListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_guiLabelListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::class_func_listWithValue (const GALGAS_uint & inOperand0,
                                                                         const GALGAS_terminalLabelListAST & inOperand1,
                                                                         const GALGAS_location & inOperand2
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_guiLabelListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_guiLabelListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_guiLabelListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiLabelListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GALGAS_uint & in_mLeadingCharacterStrippedCount,
                                                        const GALGAS_terminalLabelListAST & in_mTerminalList,
                                                        const GALGAS_location & in_mLocation
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_guiLabelListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_guiLabelListAST (in_mLeadingCharacterStrippedCount,
                                                     in_mTerminalList,
                                                     in_mLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiLabelListAST::addAssign_operation (const GALGAS_uint & inOperand0,
                                                  const GALGAS_terminalLabelListAST & inOperand1,
                                                  const GALGAS_location & inOperand2
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_guiLabelListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiLabelListAST::setter_append (const GALGAS_uint inOperand0,
                                            const GALGAS_terminalLabelListAST inOperand1,
                                            const GALGAS_location inOperand2,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_guiLabelListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiLabelListAST::setter_insertAtIndex (const GALGAS_uint inOperand0,
                                                   const GALGAS_terminalLabelListAST inOperand1,
                                                   const GALGAS_location inOperand2,
                                                   const GALGAS_uint inInsertionIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_guiLabelListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_guiLabelListAST::setter_removeAtIndex (GALGAS_uint & outOperand0,
                                                   GALGAS_terminalLabelListAST & outOperand1,
                                                   GALGAS_location & outOperand2,
                                                   const GALGAS_uint inRemoveIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
        outOperand0 = p->mObject.mProperty_mLeadingCharacterStrippedCount ;
        outOperand1 = p->mObject.mProperty_mTerminalList ;
        outOperand2 = p->mObject.mProperty_mLocation ;
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

void GALGAS_guiLabelListAST::setter_popFirst (GALGAS_uint & outOperand0,
                                              GALGAS_terminalLabelListAST & outOperand1,
                                              GALGAS_location & outOperand2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    outOperand0 = p->mObject.mProperty_mLeadingCharacterStrippedCount ;
    outOperand1 = p->mObject.mProperty_mTerminalList ;
    outOperand2 = p->mObject.mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiLabelListAST::setter_popLast (GALGAS_uint & outOperand0,
                                             GALGAS_terminalLabelListAST & outOperand1,
                                             GALGAS_location & outOperand2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    outOperand0 = p->mObject.mProperty_mLeadingCharacterStrippedCount ;
    outOperand1 = p->mObject.mProperty_mTerminalList ;
    outOperand2 = p->mObject.mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiLabelListAST::method_first (GALGAS_uint & outOperand0,
                                           GALGAS_terminalLabelListAST & outOperand1,
                                           GALGAS_location & outOperand2,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    outOperand0 = p->mObject.mProperty_mLeadingCharacterStrippedCount ;
    outOperand1 = p->mObject.mProperty_mTerminalList ;
    outOperand2 = p->mObject.mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiLabelListAST::method_last (GALGAS_uint & outOperand0,
                                          GALGAS_terminalLabelListAST & outOperand1,
                                          GALGAS_location & outOperand2,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    outOperand0 = p->mObject.mProperty_mLeadingCharacterStrippedCount ;
    outOperand1 = p->mObject.mProperty_mTerminalList ;
    outOperand2 = p->mObject.mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::add_operation (const GALGAS_guiLabelListAST & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_guiLabelListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_guiLabelListAST result = GALGAS_guiLabelListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_guiLabelListAST result = GALGAS_guiLabelListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_guiLabelListAST result = GALGAS_guiLabelListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiLabelListAST::plusAssign_operation (const GALGAS_guiLabelListAST inOperand,
                                                   Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiLabelListAST::setter_setMLeadingCharacterStrippedCountAtIndex (GALGAS_uint inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLeadingCharacterStrippedCount = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_guiLabelListAST::getter_mLeadingCharacterStrippedCountAtIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    result = p->mObject.mProperty_mLeadingCharacterStrippedCount ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiLabelListAST::setter_setMTerminalListAtIndex (GALGAS_terminalLabelListAST inOperand,
                                                             GALGAS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTerminalList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalLabelListAST GALGAS_guiLabelListAST::getter_mTerminalListAtIndex (const GALGAS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
  GALGAS_terminalLabelListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    result = p->mObject.mProperty_mTerminalList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiLabelListAST::setter_setMLocationAtIndex (GALGAS_location inOperand,
                                                         GALGAS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_guiLabelListAST::getter_mLocationAtIndex (const GALGAS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiLabelListAST * p = (cCollectionElement_guiLabelListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
    result = p->mObject.mProperty_mLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_guiLabelListAST::cEnumerator_guiLabelListAST (const GALGAS_guiLabelListAST & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST_2D_element cEnumerator_guiLabelListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_guiLabelListAST * p = (const cCollectionElement_guiLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_guiLabelListAST::current_mLeadingCharacterStrippedCount (LOCATION_ARGS) const {
  const cCollectionElement_guiLabelListAST * p = (const cCollectionElement_guiLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
  return p->mObject.mProperty_mLeadingCharacterStrippedCount ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalLabelListAST cEnumerator_guiLabelListAST::current_mTerminalList (LOCATION_ARGS) const {
  const cCollectionElement_guiLabelListAST * p = (const cCollectionElement_guiLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
  return p->mObject.mProperty_mTerminalList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_guiLabelListAST::current_mLocation (LOCATION_ARGS) const {
  const cCollectionElement_guiLabelListAST * p = (const cCollectionElement_guiLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiLabelListAST) ;
  return p->mObject.mProperty_mLocation ;
}




//--------------------------------------------------------------------------------------------------
//
//     @guiLabelListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiLabelListAST ("guiLabelListAST",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guiLabelListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiLabelListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guiLabelListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiLabelListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_guiLabelListAST result ;
  const GALGAS_guiLabelListAST * p = (const GALGAS_guiLabelListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_guiLabelListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiLabelListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@withLexiqueListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_withLexiqueListAST : public cCollectionElement {
  public: GALGAS_withLexiqueListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_withLexiqueListAST (const GALGAS_lstring & in_mLexiqueFileName,
                                                 const GALGAS_guiLabelListAST & in_mLabels,
                                                 const GALGAS_guiSimpleAttributeListAST & in_mSimpleAttributes,
                                                 const GALGAS_guiCompoundAttributeListAST & in_mCompoundAttributes
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_withLexiqueListAST (const GALGAS_withLexiqueListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_withLexiqueListAST::cCollectionElement_withLexiqueListAST (const GALGAS_lstring & in_mLexiqueFileName,
                                                                              const GALGAS_guiLabelListAST & in_mLabels,
                                                                              const GALGAS_guiSimpleAttributeListAST & in_mSimpleAttributes,
                                                                              const GALGAS_guiCompoundAttributeListAST & in_mCompoundAttributes
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexiqueFileName, in_mLabels, in_mSimpleAttributes, in_mCompoundAttributes) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_withLexiqueListAST::cCollectionElement_withLexiqueListAST (const GALGAS_withLexiqueListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLexiqueFileName, inElement.mProperty_mLabels, inElement.mProperty_mSimpleAttributes, inElement.mProperty_mCompoundAttributes) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_withLexiqueListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_withLexiqueListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_withLexiqueListAST (mObject.mProperty_mLexiqueFileName, mObject.mProperty_mLabels, mObject.mProperty_mSimpleAttributes, mObject.mProperty_mCompoundAttributes COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_withLexiqueListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexiqueFileName" ":") ;
  mObject.mProperty_mLexiqueFileName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLabels" ":") ;
  mObject.mProperty_mLabels.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSimpleAttributes" ":") ;
  mObject.mProperty_mSimpleAttributes.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mCompoundAttributes" ":") ;
  mObject.mProperty_mCompoundAttributes.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_withLexiqueListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_withLexiqueListAST * operand = (cCollectionElement_withLexiqueListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_withLexiqueListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_withLexiqueListAST::GALGAS_withLexiqueListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_withLexiqueListAST::GALGAS_withLexiqueListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_withLexiqueListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                               const GALGAS_guiLabelListAST & inOperand1,
                                                                               const GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                                               const GALGAS_guiCompoundAttributeListAST & inOperand3
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_withLexiqueListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_withLexiqueListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_withLexiqueListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_withLexiqueListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_lstring & in_mLexiqueFileName,
                                                           const GALGAS_guiLabelListAST & in_mLabels,
                                                           const GALGAS_guiSimpleAttributeListAST & in_mSimpleAttributes,
                                                           const GALGAS_guiCompoundAttributeListAST & in_mCompoundAttributes
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_withLexiqueListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_withLexiqueListAST (in_mLexiqueFileName,
                                                        in_mLabels,
                                                        in_mSimpleAttributes,
                                                        in_mCompoundAttributes COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_withLexiqueListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                     const GALGAS_guiLabelListAST & inOperand1,
                                                     const GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                     const GALGAS_guiCompoundAttributeListAST & inOperand3
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_withLexiqueListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_withLexiqueListAST::setter_append (const GALGAS_lstring inOperand0,
                                               const GALGAS_guiLabelListAST inOperand1,
                                               const GALGAS_guiSimpleAttributeListAST inOperand2,
                                               const GALGAS_guiCompoundAttributeListAST inOperand3,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_withLexiqueListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_withLexiqueListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                      const GALGAS_guiLabelListAST inOperand1,
                                                      const GALGAS_guiSimpleAttributeListAST inOperand2,
                                                      const GALGAS_guiCompoundAttributeListAST inOperand3,
                                                      const GALGAS_uint inInsertionIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_withLexiqueListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
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

void GALGAS_withLexiqueListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                      GALGAS_guiLabelListAST & outOperand1,
                                                      GALGAS_guiSimpleAttributeListAST & outOperand2,
                                                      GALGAS_guiCompoundAttributeListAST & outOperand3,
                                                      const GALGAS_uint inRemoveIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
        outOperand0 = p->mObject.mProperty_mLexiqueFileName ;
        outOperand1 = p->mObject.mProperty_mLabels ;
        outOperand2 = p->mObject.mProperty_mSimpleAttributes ;
        outOperand3 = p->mObject.mProperty_mCompoundAttributes ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_withLexiqueListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                 GALGAS_guiLabelListAST & outOperand1,
                                                 GALGAS_guiSimpleAttributeListAST & outOperand2,
                                                 GALGAS_guiCompoundAttributeListAST & outOperand3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    outOperand0 = p->mObject.mProperty_mLexiqueFileName ;
    outOperand1 = p->mObject.mProperty_mLabels ;
    outOperand2 = p->mObject.mProperty_mSimpleAttributes ;
    outOperand3 = p->mObject.mProperty_mCompoundAttributes ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_withLexiqueListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                GALGAS_guiLabelListAST & outOperand1,
                                                GALGAS_guiSimpleAttributeListAST & outOperand2,
                                                GALGAS_guiCompoundAttributeListAST & outOperand3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    outOperand0 = p->mObject.mProperty_mLexiqueFileName ;
    outOperand1 = p->mObject.mProperty_mLabels ;
    outOperand2 = p->mObject.mProperty_mSimpleAttributes ;
    outOperand3 = p->mObject.mProperty_mCompoundAttributes ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_withLexiqueListAST::method_first (GALGAS_lstring & outOperand0,
                                              GALGAS_guiLabelListAST & outOperand1,
                                              GALGAS_guiSimpleAttributeListAST & outOperand2,
                                              GALGAS_guiCompoundAttributeListAST & outOperand3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    outOperand0 = p->mObject.mProperty_mLexiqueFileName ;
    outOperand1 = p->mObject.mProperty_mLabels ;
    outOperand2 = p->mObject.mProperty_mSimpleAttributes ;
    outOperand3 = p->mObject.mProperty_mCompoundAttributes ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_withLexiqueListAST::method_last (GALGAS_lstring & outOperand0,
                                             GALGAS_guiLabelListAST & outOperand1,
                                             GALGAS_guiSimpleAttributeListAST & outOperand2,
                                             GALGAS_guiCompoundAttributeListAST & outOperand3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    outOperand0 = p->mObject.mProperty_mLexiqueFileName ;
    outOperand1 = p->mObject.mProperty_mLabels ;
    outOperand2 = p->mObject.mProperty_mSimpleAttributes ;
    outOperand3 = p->mObject.mProperty_mCompoundAttributes ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::add_operation (const GALGAS_withLexiqueListAST & inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_withLexiqueListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_withLexiqueListAST result = GALGAS_withLexiqueListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_withLexiqueListAST result = GALGAS_withLexiqueListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_withLexiqueListAST result = GALGAS_withLexiqueListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_withLexiqueListAST::plusAssign_operation (const GALGAS_withLexiqueListAST inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_withLexiqueListAST::setter_setMLexiqueFileNameAtIndex (GALGAS_lstring inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLexiqueFileName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_withLexiqueListAST::getter_mLexiqueFileNameAtIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    result = p->mObject.mProperty_mLexiqueFileName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_withLexiqueListAST::setter_setMLabelsAtIndex (GALGAS_guiLabelListAST inOperand,
                                                          GALGAS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLabels = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST GALGAS_withLexiqueListAST::getter_mLabelsAtIndex (const GALGAS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  GALGAS_guiLabelListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    result = p->mObject.mProperty_mLabels ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_withLexiqueListAST::setter_setMSimpleAttributesAtIndex (GALGAS_guiSimpleAttributeListAST inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSimpleAttributes = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiSimpleAttributeListAST GALGAS_withLexiqueListAST::getter_mSimpleAttributesAtIndex (const GALGAS_uint & inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  GALGAS_guiSimpleAttributeListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    result = p->mObject.mProperty_mSimpleAttributes ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_withLexiqueListAST::setter_setMCompoundAttributesAtIndex (GALGAS_guiCompoundAttributeListAST inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCompoundAttributes = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiCompoundAttributeListAST GALGAS_withLexiqueListAST::getter_mCompoundAttributesAtIndex (const GALGAS_uint & inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_withLexiqueListAST * p = (cCollectionElement_withLexiqueListAST *) attributes.ptr () ;
  GALGAS_guiCompoundAttributeListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
    result = p->mObject.mProperty_mCompoundAttributes ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_withLexiqueListAST::cEnumerator_withLexiqueListAST (const GALGAS_withLexiqueListAST & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_withLexiqueListAST_2D_element cEnumerator_withLexiqueListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_withLexiqueListAST * p = (const cCollectionElement_withLexiqueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_withLexiqueListAST::current_mLexiqueFileName (LOCATION_ARGS) const {
  const cCollectionElement_withLexiqueListAST * p = (const cCollectionElement_withLexiqueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
  return p->mObject.mProperty_mLexiqueFileName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST cEnumerator_withLexiqueListAST::current_mLabels (LOCATION_ARGS) const {
  const cCollectionElement_withLexiqueListAST * p = (const cCollectionElement_withLexiqueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
  return p->mObject.mProperty_mLabels ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiSimpleAttributeListAST cEnumerator_withLexiqueListAST::current_mSimpleAttributes (LOCATION_ARGS) const {
  const cCollectionElement_withLexiqueListAST * p = (const cCollectionElement_withLexiqueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
  return p->mObject.mProperty_mSimpleAttributes ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiCompoundAttributeListAST cEnumerator_withLexiqueListAST::current_mCompoundAttributes (LOCATION_ARGS) const {
  const cCollectionElement_withLexiqueListAST * p = (const cCollectionElement_withLexiqueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_withLexiqueListAST) ;
  return p->mObject.mProperty_mCompoundAttributes ;
}




//--------------------------------------------------------------------------------------------------
//
//     @withLexiqueListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_withLexiqueListAST ("withLexiqueListAST",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_withLexiqueListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_withLexiqueListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_withLexiqueListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_withLexiqueListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_withLexiqueListAST result ;
  const GALGAS_withLexiqueListAST * p = (const GALGAS_withLexiqueListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_withLexiqueListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("withLexiqueListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@guiCommandLineOptionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_guiCommandLineOptionList : public cCollectionElement {
  public: GALGAS_guiCommandLineOptionList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_guiCommandLineOptionList (const GALGAS_string & in_mOptionComponent,
                                                       const GALGAS_string & in_mOptionIdentifier,
                                                       const GALGAS_char & in_mOptionChar,
                                                       const GALGAS_string & in_mOptionString,
                                                       const GALGAS_string & in_mComment
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_guiCommandLineOptionList (const GALGAS_guiCommandLineOptionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_guiCommandLineOptionList::cCollectionElement_guiCommandLineOptionList (const GALGAS_string & in_mOptionComponent,
                                                                                          const GALGAS_string & in_mOptionIdentifier,
                                                                                          const GALGAS_char & in_mOptionChar,
                                                                                          const GALGAS_string & in_mOptionString,
                                                                                          const GALGAS_string & in_mComment
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOptionComponent, in_mOptionIdentifier, in_mOptionChar, in_mOptionString, in_mComment) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_guiCommandLineOptionList::cCollectionElement_guiCommandLineOptionList (const GALGAS_guiCommandLineOptionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOptionComponent, inElement.mProperty_mOptionIdentifier, inElement.mProperty_mOptionChar, inElement.mProperty_mOptionString, inElement.mProperty_mComment) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_guiCommandLineOptionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_guiCommandLineOptionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_guiCommandLineOptionList (mObject.mProperty_mOptionComponent, mObject.mProperty_mOptionIdentifier, mObject.mProperty_mOptionChar, mObject.mProperty_mOptionString, mObject.mProperty_mComment COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_guiCommandLineOptionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionComponent" ":") ;
  mObject.mProperty_mOptionComponent.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionIdentifier" ":") ;
  mObject.mProperty_mOptionIdentifier.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionChar" ":") ;
  mObject.mProperty_mOptionChar.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionString" ":") ;
  mObject.mProperty_mOptionString.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mComment" ":") ;
  mObject.mProperty_mComment.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_guiCommandLineOptionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_guiCommandLineOptionList * operand = (cCollectionElement_guiCommandLineOptionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_guiCommandLineOptionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList::GALGAS_guiCommandLineOptionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList::GALGAS_guiCommandLineOptionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_guiCommandLineOptionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                                                           const GALGAS_string & inOperand1,
                                                                                           const GALGAS_char & inOperand2,
                                                                                           const GALGAS_string & inOperand3,
                                                                                           const GALGAS_string & inOperand4
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_guiCommandLineOptionList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_guiCommandLineOptionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_guiCommandLineOptionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_string & in_mOptionComponent,
                                                                 const GALGAS_string & in_mOptionIdentifier,
                                                                 const GALGAS_char & in_mOptionChar,
                                                                 const GALGAS_string & in_mOptionString,
                                                                 const GALGAS_string & in_mComment
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_guiCommandLineOptionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_guiCommandLineOptionList (in_mOptionComponent,
                                                              in_mOptionIdentifier,
                                                              in_mOptionChar,
                                                              in_mOptionString,
                                                              in_mComment COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList::addAssign_operation (const GALGAS_string & inOperand0,
                                                           const GALGAS_string & inOperand1,
                                                           const GALGAS_char & inOperand2,
                                                           const GALGAS_string & inOperand3,
                                                           const GALGAS_string & inOperand4
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_guiCommandLineOptionList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList::setter_append (const GALGAS_string inOperand0,
                                                     const GALGAS_string inOperand1,
                                                     const GALGAS_char inOperand2,
                                                     const GALGAS_string inOperand3,
                                                     const GALGAS_string inOperand4,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_guiCommandLineOptionList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                            const GALGAS_string inOperand1,
                                                            const GALGAS_char inOperand2,
                                                            const GALGAS_string inOperand3,
                                                            const GALGAS_string inOperand4,
                                                            const GALGAS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_guiCommandLineOptionList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
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

void GALGAS_guiCommandLineOptionList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            GALGAS_char & outOperand2,
                                                            GALGAS_string & outOperand3,
                                                            GALGAS_string & outOperand4,
                                                            const GALGAS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
        outOperand0 = p->mObject.mProperty_mOptionComponent ;
        outOperand1 = p->mObject.mProperty_mOptionIdentifier ;
        outOperand2 = p->mObject.mProperty_mOptionChar ;
        outOperand3 = p->mObject.mProperty_mOptionString ;
        outOperand4 = p->mObject.mProperty_mComment ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList::setter_popFirst (GALGAS_string & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       GALGAS_char & outOperand2,
                                                       GALGAS_string & outOperand3,
                                                       GALGAS_string & outOperand4,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    outOperand0 = p->mObject.mProperty_mOptionComponent ;
    outOperand1 = p->mObject.mProperty_mOptionIdentifier ;
    outOperand2 = p->mObject.mProperty_mOptionChar ;
    outOperand3 = p->mObject.mProperty_mOptionString ;
    outOperand4 = p->mObject.mProperty_mComment ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList::setter_popLast (GALGAS_string & outOperand0,
                                                      GALGAS_string & outOperand1,
                                                      GALGAS_char & outOperand2,
                                                      GALGAS_string & outOperand3,
                                                      GALGAS_string & outOperand4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    outOperand0 = p->mObject.mProperty_mOptionComponent ;
    outOperand1 = p->mObject.mProperty_mOptionIdentifier ;
    outOperand2 = p->mObject.mProperty_mOptionChar ;
    outOperand3 = p->mObject.mProperty_mOptionString ;
    outOperand4 = p->mObject.mProperty_mComment ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList::method_first (GALGAS_string & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    GALGAS_char & outOperand2,
                                                    GALGAS_string & outOperand3,
                                                    GALGAS_string & outOperand4,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    outOperand0 = p->mObject.mProperty_mOptionComponent ;
    outOperand1 = p->mObject.mProperty_mOptionIdentifier ;
    outOperand2 = p->mObject.mProperty_mOptionChar ;
    outOperand3 = p->mObject.mProperty_mOptionString ;
    outOperand4 = p->mObject.mProperty_mComment ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList::method_last (GALGAS_string & outOperand0,
                                                   GALGAS_string & outOperand1,
                                                   GALGAS_char & outOperand2,
                                                   GALGAS_string & outOperand3,
                                                   GALGAS_string & outOperand4,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    outOperand0 = p->mObject.mProperty_mOptionComponent ;
    outOperand1 = p->mObject.mProperty_mOptionIdentifier ;
    outOperand2 = p->mObject.mProperty_mOptionChar ;
    outOperand3 = p->mObject.mProperty_mOptionString ;
    outOperand4 = p->mObject.mProperty_mComment ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::add_operation (const GALGAS_guiCommandLineOptionList & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_guiCommandLineOptionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_guiCommandLineOptionList result = GALGAS_guiCommandLineOptionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_guiCommandLineOptionList result = GALGAS_guiCommandLineOptionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_guiCommandLineOptionList result = GALGAS_guiCommandLineOptionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList::plusAssign_operation (const GALGAS_guiCommandLineOptionList inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList::setter_setMOptionComponentAtIndex (GALGAS_string inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionComponent = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_guiCommandLineOptionList::getter_mOptionComponentAtIndex (const GALGAS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    result = p->mObject.mProperty_mOptionComponent ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList::setter_setMOptionIdentifierAtIndex (GALGAS_string inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionIdentifier = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_guiCommandLineOptionList::getter_mOptionIdentifierAtIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    result = p->mObject.mProperty_mOptionIdentifier ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList::setter_setMOptionCharAtIndex (GALGAS_char inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionChar = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_char GALGAS_guiCommandLineOptionList::getter_mOptionCharAtIndex (const GALGAS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  GALGAS_char result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    result = p->mObject.mProperty_mOptionChar ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList::setter_setMOptionStringAtIndex (GALGAS_string inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionString = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_guiCommandLineOptionList::getter_mOptionStringAtIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    result = p->mObject.mProperty_mOptionString ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList::setter_setMCommentAtIndex (GALGAS_string inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mComment = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_guiCommandLineOptionList::getter_mCommentAtIndex (const GALGAS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_guiCommandLineOptionList * p = (cCollectionElement_guiCommandLineOptionList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
    result = p->mObject.mProperty_mComment ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_guiCommandLineOptionList::cEnumerator_guiCommandLineOptionList (const GALGAS_guiCommandLineOptionList & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList_2D_element cEnumerator_guiCommandLineOptionList::current (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_guiCommandLineOptionList::current_mOptionComponent (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mProperty_mOptionComponent ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_guiCommandLineOptionList::current_mOptionIdentifier (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mProperty_mOptionIdentifier ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_char cEnumerator_guiCommandLineOptionList::current_mOptionChar (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mProperty_mOptionChar ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_guiCommandLineOptionList::current_mOptionString (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mProperty_mOptionString ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_guiCommandLineOptionList::current_mComment (LOCATION_ARGS) const {
  const cCollectionElement_guiCommandLineOptionList * p = (const cCollectionElement_guiCommandLineOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_guiCommandLineOptionList) ;
  return p->mObject.mProperty_mComment ;
}




//--------------------------------------------------------------------------------------------------
//
//     @guiCommandLineOptionList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiCommandLineOptionList ("guiCommandLineOptionList",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guiCommandLineOptionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiCommandLineOptionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guiCommandLineOptionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiCommandLineOptionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_guiCommandLineOptionList result ;
  const GALGAS_guiCommandLineOptionList * p = (const GALGAS_guiCommandLineOptionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_guiCommandLineOptionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiCommandLineOptionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionMap::cMapElement_extensionMap (const GALGAS_lstring & inKey,
                                                    const GALGAS_string & in_mLexiqueName,
                                                    const GALGAS_uint & in_mIndex
                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mLexiqueName (in_mLexiqueName),
mProperty_mIndex (in_mIndex) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_extensionMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_extensionMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_extensionMap (mProperty_lkey, mProperty_mLexiqueName, mProperty_mIndex COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_extensionMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexiqueName" ":") ;
  mProperty_mLexiqueName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIndex" ":") ;
  mProperty_mIndex.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_extensionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_extensionMap * operand = (cMapElement_extensionMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mLexiqueName.objectCompare (operand->mProperty_mLexiqueName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIndex.objectCompare (operand->mProperty_mIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMap::GALGAS_extensionMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMap::GALGAS_extensionMap (const GALGAS_extensionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMap & GALGAS_extensionMap::operator = (const GALGAS_extensionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMap GALGAS_extensionMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_extensionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMap GALGAS_extensionMap::class_func_mapWithMapToOverride (const GALGAS_extensionMap & inMapToOverride
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_extensionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMap GALGAS_extensionMap::getter_overriddenMap (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_extensionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                               const GALGAS_string & inArgument0,
                                               const GALGAS_uint & inArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_extensionMap * p = nullptr ;
  macroMyNew (p, cMapElement_extensionMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMap GALGAS_extensionMap::add_operation (const GALGAS_extensionMap & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_extensionMap result = *this ;
  cEnumerator_extensionMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mLexiqueName (HERE), enumerator.current_mIndex (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionMap::setter_insertKey (GALGAS_lstring inKey,
                                            GALGAS_string inArgument0,
                                            GALGAS_uint inArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_extensionMap * p = nullptr ;
  macroMyNew (p, cMapElement_extensionMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' extension is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_extensionMap::getter_mLexiqueNameForKey (const GALGAS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionMap * p = (const cMapElement_extensionMap *) attributes ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionMap) ;
    result = p->mProperty_mLexiqueName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_extensionMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionMap * p = (const cMapElement_extensionMap *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionMap::setter_setMLexiqueNameForKey (GALGAS_string inAttributeValue,
                                                        GALGAS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_extensionMap * p = (cMapElement_extensionMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionMap) ;
    p->mProperty_mLexiqueName = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionMap::setter_setMIndexForKey (GALGAS_uint inAttributeValue,
                                                  GALGAS_string inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_extensionMap * p = (cMapElement_extensionMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionMap) ;
    p->mProperty_mIndex = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionMap * GALGAS_extensionMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                   const GALGAS_string & inKey
                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_extensionMap * result = (cMapElement_extensionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_extensionMap::cEnumerator_extensionMap (const GALGAS_extensionMap & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMap_2D_element cEnumerator_extensionMap::current (LOCATION_ARGS) const {
  const cMapElement_extensionMap * p = (const cMapElement_extensionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMap) ;
  return GALGAS_extensionMap_2D_element (p->mProperty_lkey, p->mProperty_mLexiqueName, p->mProperty_mIndex) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_extensionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_extensionMap::current_mLexiqueName (LOCATION_ARGS) const {
  const cMapElement_extensionMap * p = (const cMapElement_extensionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMap) ;
  return p->mProperty_mLexiqueName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_extensionMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_extensionMap * p = (const cMapElement_extensionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMap) ;
  return p->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_extensionMap::optional_searchKey (const GALGAS_string & inKey,
                                              GALGAS_string & outArgument0,
                                              GALGAS_uint & outArgument1) const {
  const cMapElement_extensionMap * p = (const cMapElement_extensionMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_extensionMap) ;
    outArgument0 = p->mProperty_mLexiqueName ;
    outArgument1 = p->mProperty_mIndex ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extensionMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMap ("extensionMap",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMap GALGAS_extensionMap::extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionMap result ;
  const GALGAS_extensionMap * p = (const GALGAS_extensionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extensionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@textMacroList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_textMacroList : public cCollectionElement {
  public: GALGAS_textMacroList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_textMacroList (const GALGAS_string & in_mKey,
                                            const GALGAS_string & in_mContents
                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_textMacroList (const GALGAS_textMacroList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_textMacroList::cCollectionElement_textMacroList (const GALGAS_string & in_mKey,
                                                                    const GALGAS_string & in_mContents
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mKey, in_mContents) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_textMacroList::cCollectionElement_textMacroList (const GALGAS_textMacroList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mKey, inElement.mProperty_mContents) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_textMacroList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_textMacroList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_textMacroList (mObject.mProperty_mKey, mObject.mProperty_mContents COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_textMacroList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mKey" ":") ;
  mObject.mProperty_mKey.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mContents" ":") ;
  mObject.mProperty_mContents.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_textMacroList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_textMacroList * operand = (cCollectionElement_textMacroList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_textMacroList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_textMacroList::GALGAS_textMacroList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_textMacroList::GALGAS_textMacroList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_textMacroList GALGAS_textMacroList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_textMacroList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_textMacroList GALGAS_textMacroList::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                                     const GALGAS_string & inOperand1
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_textMacroList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_textMacroList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_textMacroList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_textMacroList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                      const GALGAS_string & in_mKey,
                                                      const GALGAS_string & in_mContents
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_textMacroList * p = nullptr ;
  macroMyNew (p, cCollectionElement_textMacroList (in_mKey,
                                                   in_mContents COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_textMacroList::addAssign_operation (const GALGAS_string & inOperand0,
                                                const GALGAS_string & inOperand1
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_textMacroList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_textMacroList::setter_append (const GALGAS_string inOperand0,
                                          const GALGAS_string inOperand1,
                                          Compiler * /* inCompiler */
                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_textMacroList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_textMacroList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                 const GALGAS_string inOperand1,
                                                 const GALGAS_uint inInsertionIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_textMacroList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_textMacroList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 const GALGAS_uint inRemoveIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_textMacroList * p = (cCollectionElement_textMacroList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_textMacroList) ;
        outOperand0 = p->mObject.mProperty_mKey ;
        outOperand1 = p->mObject.mProperty_mContents ;
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

void GALGAS_textMacroList::setter_popFirst (GALGAS_string & outOperand0,
                                            GALGAS_string & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_textMacroList * p = (cCollectionElement_textMacroList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_textMacroList) ;
    outOperand0 = p->mObject.mProperty_mKey ;
    outOperand1 = p->mObject.mProperty_mContents ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_textMacroList::setter_popLast (GALGAS_string & outOperand0,
                                           GALGAS_string & outOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_textMacroList * p = (cCollectionElement_textMacroList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_textMacroList) ;
    outOperand0 = p->mObject.mProperty_mKey ;
    outOperand1 = p->mObject.mProperty_mContents ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_textMacroList::method_first (GALGAS_string & outOperand0,
                                         GALGAS_string & outOperand1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_textMacroList * p = (cCollectionElement_textMacroList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_textMacroList) ;
    outOperand0 = p->mObject.mProperty_mKey ;
    outOperand1 = p->mObject.mProperty_mContents ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_textMacroList::method_last (GALGAS_string & outOperand0,
                                        GALGAS_string & outOperand1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_textMacroList * p = (cCollectionElement_textMacroList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_textMacroList) ;
    outOperand0 = p->mObject.mProperty_mKey ;
    outOperand1 = p->mObject.mProperty_mContents ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_textMacroList GALGAS_textMacroList::add_operation (const GALGAS_textMacroList & inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_textMacroList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_textMacroList GALGAS_textMacroList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_textMacroList result = GALGAS_textMacroList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_textMacroList GALGAS_textMacroList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_textMacroList result = GALGAS_textMacroList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_textMacroList GALGAS_textMacroList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_textMacroList result = GALGAS_textMacroList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_textMacroList::plusAssign_operation (const GALGAS_textMacroList inOperand,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_textMacroList::setter_setMKeyAtIndex (GALGAS_string inOperand,
                                                  GALGAS_uint inIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_textMacroList * p = (cCollectionElement_textMacroList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_textMacroList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mKey = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_textMacroList::getter_mKeyAtIndex (const GALGAS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_textMacroList * p = (cCollectionElement_textMacroList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_textMacroList) ;
    result = p->mObject.mProperty_mKey ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_textMacroList::setter_setMContentsAtIndex (GALGAS_string inOperand,
                                                       GALGAS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_textMacroList * p = (cCollectionElement_textMacroList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_textMacroList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mContents = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_textMacroList::getter_mContentsAtIndex (const GALGAS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_textMacroList * p = (cCollectionElement_textMacroList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_textMacroList) ;
    result = p->mObject.mProperty_mContents ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_textMacroList::cEnumerator_textMacroList (const GALGAS_textMacroList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_textMacroList_2D_element cEnumerator_textMacroList::current (LOCATION_ARGS) const {
  const cCollectionElement_textMacroList * p = (const cCollectionElement_textMacroList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_textMacroList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_textMacroList::current_mKey (LOCATION_ARGS) const {
  const cCollectionElement_textMacroList * p = (const cCollectionElement_textMacroList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_textMacroList) ;
  return p->mObject.mProperty_mKey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_textMacroList::current_mContents (LOCATION_ARGS) const {
  const cCollectionElement_textMacroList * p = (const cCollectionElement_textMacroList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_textMacroList) ;
  return p->mObject.mProperty_mContents ;
}




//--------------------------------------------------------------------------------------------------
//
//     @textMacroList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_textMacroList ("textMacroList",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_textMacroList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_textMacroList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_textMacroList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_textMacroList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_textMacroList GALGAS_textMacroList::extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_textMacroList result ;
  const GALGAS_textMacroList * p = (const GALGAS_textMacroList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_textMacroList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("textMacroList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@importedLexiqueList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_importedLexiqueList : public cCollectionElement {
  public: GALGAS_importedLexiqueList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_importedLexiqueList (const GALGAS_string & in_mLexiqueClassName,
                                                  const GALGAS_uint & in_mIndex,
                                                  const GALGAS_string & in_mBlockComment,
                                                  const GALGAS_string & in_mTitle,
                                                  const GALGAS_textMacroList & in_mTextMacroList,
                                                  const GALGAS_guiLabelListAST & in_mLabels,
                                                  const GALGAS_lexicalStyleListAST & in_mLexicalStyleList
                                                  COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_importedLexiqueList (const GALGAS_importedLexiqueList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_importedLexiqueList::cCollectionElement_importedLexiqueList (const GALGAS_string & in_mLexiqueClassName,
                                                                                const GALGAS_uint & in_mIndex,
                                                                                const GALGAS_string & in_mBlockComment,
                                                                                const GALGAS_string & in_mTitle,
                                                                                const GALGAS_textMacroList & in_mTextMacroList,
                                                                                const GALGAS_guiLabelListAST & in_mLabels,
                                                                                const GALGAS_lexicalStyleListAST & in_mLexicalStyleList
                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexiqueClassName, in_mIndex, in_mBlockComment, in_mTitle, in_mTextMacroList, in_mLabels, in_mLexicalStyleList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_importedLexiqueList::cCollectionElement_importedLexiqueList (const GALGAS_importedLexiqueList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLexiqueClassName, inElement.mProperty_mIndex, inElement.mProperty_mBlockComment, inElement.mProperty_mTitle, inElement.mProperty_mTextMacroList, inElement.mProperty_mLabels, inElement.mProperty_mLexicalStyleList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_importedLexiqueList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_importedLexiqueList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_importedLexiqueList (mObject.mProperty_mLexiqueClassName, mObject.mProperty_mIndex, mObject.mProperty_mBlockComment, mObject.mProperty_mTitle, mObject.mProperty_mTextMacroList, mObject.mProperty_mLabels, mObject.mProperty_mLexicalStyleList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_importedLexiqueList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexiqueClassName" ":") ;
  mObject.mProperty_mLexiqueClassName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIndex" ":") ;
  mObject.mProperty_mIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBlockComment" ":") ;
  mObject.mProperty_mBlockComment.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTitle" ":") ;
  mObject.mProperty_mTitle.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTextMacroList" ":") ;
  mObject.mProperty_mTextMacroList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLabels" ":") ;
  mObject.mProperty_mLabels.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexicalStyleList" ":") ;
  mObject.mProperty_mLexicalStyleList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_importedLexiqueList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_importedLexiqueList * operand = (cCollectionElement_importedLexiqueList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_importedLexiqueList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_importedLexiqueList::GALGAS_importedLexiqueList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_importedLexiqueList::GALGAS_importedLexiqueList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_importedLexiqueList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                                                 const GALGAS_uint & inOperand1,
                                                                                 const GALGAS_string & inOperand2,
                                                                                 const GALGAS_string & inOperand3,
                                                                                 const GALGAS_textMacroList & inOperand4,
                                                                                 const GALGAS_guiLabelListAST & inOperand5,
                                                                                 const GALGAS_lexicalStyleListAST & inOperand6
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_importedLexiqueList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_importedLexiqueList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_importedLexiqueList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_importedLexiqueList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GALGAS_string & in_mLexiqueClassName,
                                                            const GALGAS_uint & in_mIndex,
                                                            const GALGAS_string & in_mBlockComment,
                                                            const GALGAS_string & in_mTitle,
                                                            const GALGAS_textMacroList & in_mTextMacroList,
                                                            const GALGAS_guiLabelListAST & in_mLabels,
                                                            const GALGAS_lexicalStyleListAST & in_mLexicalStyleList
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_importedLexiqueList * p = nullptr ;
  macroMyNew (p, cCollectionElement_importedLexiqueList (in_mLexiqueClassName,
                                                         in_mIndex,
                                                         in_mBlockComment,
                                                         in_mTitle,
                                                         in_mTextMacroList,
                                                         in_mLabels,
                                                         in_mLexicalStyleList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_importedLexiqueList::addAssign_operation (const GALGAS_string & inOperand0,
                                                      const GALGAS_uint & inOperand1,
                                                      const GALGAS_string & inOperand2,
                                                      const GALGAS_string & inOperand3,
                                                      const GALGAS_textMacroList & inOperand4,
                                                      const GALGAS_guiLabelListAST & inOperand5,
                                                      const GALGAS_lexicalStyleListAST & inOperand6
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_importedLexiqueList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_importedLexiqueList::setter_append (const GALGAS_string inOperand0,
                                                const GALGAS_uint inOperand1,
                                                const GALGAS_string inOperand2,
                                                const GALGAS_string inOperand3,
                                                const GALGAS_textMacroList inOperand4,
                                                const GALGAS_guiLabelListAST inOperand5,
                                                const GALGAS_lexicalStyleListAST inOperand6,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_importedLexiqueList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_importedLexiqueList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                       const GALGAS_uint inOperand1,
                                                       const GALGAS_string inOperand2,
                                                       const GALGAS_string inOperand3,
                                                       const GALGAS_textMacroList inOperand4,
                                                       const GALGAS_guiLabelListAST inOperand5,
                                                       const GALGAS_lexicalStyleListAST inOperand6,
                                                       const GALGAS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_importedLexiqueList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
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

void GALGAS_importedLexiqueList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                       GALGAS_uint & outOperand1,
                                                       GALGAS_string & outOperand2,
                                                       GALGAS_string & outOperand3,
                                                       GALGAS_textMacroList & outOperand4,
                                                       GALGAS_guiLabelListAST & outOperand5,
                                                       GALGAS_lexicalStyleListAST & outOperand6,
                                                       const GALGAS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) attributes.ptr () ;
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
        macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
        outOperand0 = p->mObject.mProperty_mLexiqueClassName ;
        outOperand1 = p->mObject.mProperty_mIndex ;
        outOperand2 = p->mObject.mProperty_mBlockComment ;
        outOperand3 = p->mObject.mProperty_mTitle ;
        outOperand4 = p->mObject.mProperty_mTextMacroList ;
        outOperand5 = p->mObject.mProperty_mLabels ;
        outOperand6 = p->mObject.mProperty_mLexicalStyleList ;
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

void GALGAS_importedLexiqueList::setter_popFirst (GALGAS_string & outOperand0,
                                                  GALGAS_uint & outOperand1,
                                                  GALGAS_string & outOperand2,
                                                  GALGAS_string & outOperand3,
                                                  GALGAS_textMacroList & outOperand4,
                                                  GALGAS_guiLabelListAST & outOperand5,
                                                  GALGAS_lexicalStyleListAST & outOperand6,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    outOperand0 = p->mObject.mProperty_mLexiqueClassName ;
    outOperand1 = p->mObject.mProperty_mIndex ;
    outOperand2 = p->mObject.mProperty_mBlockComment ;
    outOperand3 = p->mObject.mProperty_mTitle ;
    outOperand4 = p->mObject.mProperty_mTextMacroList ;
    outOperand5 = p->mObject.mProperty_mLabels ;
    outOperand6 = p->mObject.mProperty_mLexicalStyleList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_importedLexiqueList::setter_popLast (GALGAS_string & outOperand0,
                                                 GALGAS_uint & outOperand1,
                                                 GALGAS_string & outOperand2,
                                                 GALGAS_string & outOperand3,
                                                 GALGAS_textMacroList & outOperand4,
                                                 GALGAS_guiLabelListAST & outOperand5,
                                                 GALGAS_lexicalStyleListAST & outOperand6,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    outOperand0 = p->mObject.mProperty_mLexiqueClassName ;
    outOperand1 = p->mObject.mProperty_mIndex ;
    outOperand2 = p->mObject.mProperty_mBlockComment ;
    outOperand3 = p->mObject.mProperty_mTitle ;
    outOperand4 = p->mObject.mProperty_mTextMacroList ;
    outOperand5 = p->mObject.mProperty_mLabels ;
    outOperand6 = p->mObject.mProperty_mLexicalStyleList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_importedLexiqueList::method_first (GALGAS_string & outOperand0,
                                               GALGAS_uint & outOperand1,
                                               GALGAS_string & outOperand2,
                                               GALGAS_string & outOperand3,
                                               GALGAS_textMacroList & outOperand4,
                                               GALGAS_guiLabelListAST & outOperand5,
                                               GALGAS_lexicalStyleListAST & outOperand6,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    outOperand0 = p->mObject.mProperty_mLexiqueClassName ;
    outOperand1 = p->mObject.mProperty_mIndex ;
    outOperand2 = p->mObject.mProperty_mBlockComment ;
    outOperand3 = p->mObject.mProperty_mTitle ;
    outOperand4 = p->mObject.mProperty_mTextMacroList ;
    outOperand5 = p->mObject.mProperty_mLabels ;
    outOperand6 = p->mObject.mProperty_mLexicalStyleList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_importedLexiqueList::method_last (GALGAS_string & outOperand0,
                                              GALGAS_uint & outOperand1,
                                              GALGAS_string & outOperand2,
                                              GALGAS_string & outOperand3,
                                              GALGAS_textMacroList & outOperand4,
                                              GALGAS_guiLabelListAST & outOperand5,
                                              GALGAS_lexicalStyleListAST & outOperand6,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    outOperand0 = p->mObject.mProperty_mLexiqueClassName ;
    outOperand1 = p->mObject.mProperty_mIndex ;
    outOperand2 = p->mObject.mProperty_mBlockComment ;
    outOperand3 = p->mObject.mProperty_mTitle ;
    outOperand4 = p->mObject.mProperty_mTextMacroList ;
    outOperand5 = p->mObject.mProperty_mLabels ;
    outOperand6 = p->mObject.mProperty_mLexicalStyleList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::add_operation (const GALGAS_importedLexiqueList & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_importedLexiqueList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_importedLexiqueList result = GALGAS_importedLexiqueList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_importedLexiqueList result = GALGAS_importedLexiqueList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_importedLexiqueList result = GALGAS_importedLexiqueList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_importedLexiqueList::plusAssign_operation (const GALGAS_importedLexiqueList inOperand,
                                                       Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_importedLexiqueList::setter_setMLexiqueClassNameAtIndex (GALGAS_string inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLexiqueClassName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_importedLexiqueList::getter_mLexiqueClassNameAtIndex (const GALGAS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    result = p->mObject.mProperty_mLexiqueClassName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_importedLexiqueList::setter_setMIndexAtIndex (GALGAS_uint inOperand,
                                                          GALGAS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIndex = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_importedLexiqueList::getter_mIndexAtIndex (const GALGAS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) attributes.ptr () ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    result = p->mObject.mProperty_mIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_importedLexiqueList::setter_setMBlockCommentAtIndex (GALGAS_string inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBlockComment = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_importedLexiqueList::getter_mBlockCommentAtIndex (const GALGAS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    result = p->mObject.mProperty_mBlockComment ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_importedLexiqueList::setter_setMTitleAtIndex (GALGAS_string inOperand,
                                                          GALGAS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTitle = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_importedLexiqueList::getter_mTitleAtIndex (const GALGAS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    result = p->mObject.mProperty_mTitle ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_importedLexiqueList::setter_setMTextMacroListAtIndex (GALGAS_textMacroList inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTextMacroList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_textMacroList GALGAS_importedLexiqueList::getter_mTextMacroListAtIndex (const GALGAS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) attributes.ptr () ;
  GALGAS_textMacroList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    result = p->mObject.mProperty_mTextMacroList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_importedLexiqueList::setter_setMLabelsAtIndex (GALGAS_guiLabelListAST inOperand,
                                                           GALGAS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLabels = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST GALGAS_importedLexiqueList::getter_mLabelsAtIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) attributes.ptr () ;
  GALGAS_guiLabelListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    result = p->mObject.mProperty_mLabels ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_importedLexiqueList::setter_setMLexicalStyleListAtIndex (GALGAS_lexicalStyleListAST inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLexicalStyleList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalStyleListAST GALGAS_importedLexiqueList::getter_mLexicalStyleListAtIndex (const GALGAS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_importedLexiqueList * p = (cCollectionElement_importedLexiqueList *) attributes.ptr () ;
  GALGAS_lexicalStyleListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
    result = p->mObject.mProperty_mLexicalStyleList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_importedLexiqueList::cEnumerator_importedLexiqueList (const GALGAS_importedLexiqueList & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_importedLexiqueList_2D_element cEnumerator_importedLexiqueList::current (LOCATION_ARGS) const {
  const cCollectionElement_importedLexiqueList * p = (const cCollectionElement_importedLexiqueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_importedLexiqueList::current_mLexiqueClassName (LOCATION_ARGS) const {
  const cCollectionElement_importedLexiqueList * p = (const cCollectionElement_importedLexiqueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
  return p->mObject.mProperty_mLexiqueClassName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_importedLexiqueList::current_mIndex (LOCATION_ARGS) const {
  const cCollectionElement_importedLexiqueList * p = (const cCollectionElement_importedLexiqueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
  return p->mObject.mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_importedLexiqueList::current_mBlockComment (LOCATION_ARGS) const {
  const cCollectionElement_importedLexiqueList * p = (const cCollectionElement_importedLexiqueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
  return p->mObject.mProperty_mBlockComment ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_importedLexiqueList::current_mTitle (LOCATION_ARGS) const {
  const cCollectionElement_importedLexiqueList * p = (const cCollectionElement_importedLexiqueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
  return p->mObject.mProperty_mTitle ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_textMacroList cEnumerator_importedLexiqueList::current_mTextMacroList (LOCATION_ARGS) const {
  const cCollectionElement_importedLexiqueList * p = (const cCollectionElement_importedLexiqueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
  return p->mObject.mProperty_mTextMacroList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST cEnumerator_importedLexiqueList::current_mLabels (LOCATION_ARGS) const {
  const cCollectionElement_importedLexiqueList * p = (const cCollectionElement_importedLexiqueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
  return p->mObject.mProperty_mLabels ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalStyleListAST cEnumerator_importedLexiqueList::current_mLexicalStyleList (LOCATION_ARGS) const {
  const cCollectionElement_importedLexiqueList * p = (const cCollectionElement_importedLexiqueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_importedLexiqueList) ;
  return p->mObject.mProperty_mLexicalStyleList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @importedLexiqueList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_importedLexiqueList ("importedLexiqueList",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_importedLexiqueList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_importedLexiqueList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_importedLexiqueList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_importedLexiqueList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_importedLexiqueList result ;
  const GALGAS_importedLexiqueList * p = (const GALGAS_importedLexiqueList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_importedLexiqueList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("importedLexiqueList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@projectIndexingDescriptorList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_projectIndexingDescriptorList : public cCollectionElement {
  public: GALGAS_projectIndexingDescriptorList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_projectIndexingDescriptorList (const GALGAS_lstring & in_mProjectFileExtension,
                                                            const GALGAS_lstring & in_indexingPathSuffix
                                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_projectIndexingDescriptorList (const GALGAS_projectIndexingDescriptorList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_projectIndexingDescriptorList::cCollectionElement_projectIndexingDescriptorList (const GALGAS_lstring & in_mProjectFileExtension,
                                                                                                    const GALGAS_lstring & in_indexingPathSuffix
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProjectFileExtension, in_indexingPathSuffix) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_projectIndexingDescriptorList::cCollectionElement_projectIndexingDescriptorList (const GALGAS_projectIndexingDescriptorList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProjectFileExtension, inElement.mProperty_indexingPathSuffix) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_projectIndexingDescriptorList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_projectIndexingDescriptorList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_projectIndexingDescriptorList (mObject.mProperty_mProjectFileExtension, mObject.mProperty_indexingPathSuffix COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_projectIndexingDescriptorList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mProjectFileExtension" ":") ;
  mObject.mProperty_mProjectFileExtension.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("indexingPathSuffix" ":") ;
  mObject.mProperty_indexingPathSuffix.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_projectIndexingDescriptorList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_projectIndexingDescriptorList * operand = (cCollectionElement_projectIndexingDescriptorList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_projectIndexingDescriptorList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_projectIndexingDescriptorList::GALGAS_projectIndexingDescriptorList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_projectIndexingDescriptorList::GALGAS_projectIndexingDescriptorList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_projectIndexingDescriptorList GALGAS_projectIndexingDescriptorList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_projectIndexingDescriptorList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_projectIndexingDescriptorList GALGAS_projectIndexingDescriptorList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                     const GALGAS_lstring & inOperand1
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_projectIndexingDescriptorList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_projectIndexingDescriptorList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_projectIndexingDescriptorList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_projectIndexingDescriptorList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_lstring & in_mProjectFileExtension,
                                                                      const GALGAS_lstring & in_indexingPathSuffix
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_projectIndexingDescriptorList * p = nullptr ;
  macroMyNew (p, cCollectionElement_projectIndexingDescriptorList (in_mProjectFileExtension,
                                                                   in_indexingPathSuffix COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_projectIndexingDescriptorList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_lstring & inOperand1
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_projectIndexingDescriptorList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_projectIndexingDescriptorList::setter_append (const GALGAS_lstring inOperand0,
                                                          const GALGAS_lstring inOperand1,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_projectIndexingDescriptorList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_projectIndexingDescriptorList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                 const GALGAS_lstring inOperand1,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_projectIndexingDescriptorList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_projectIndexingDescriptorList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                 GALGAS_lstring & outOperand1,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_projectIndexingDescriptorList * p = (cCollectionElement_projectIndexingDescriptorList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_projectIndexingDescriptorList) ;
        outOperand0 = p->mObject.mProperty_mProjectFileExtension ;
        outOperand1 = p->mObject.mProperty_indexingPathSuffix ;
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

void GALGAS_projectIndexingDescriptorList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_projectIndexingDescriptorList * p = (cCollectionElement_projectIndexingDescriptorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_projectIndexingDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mProjectFileExtension ;
    outOperand1 = p->mObject.mProperty_indexingPathSuffix ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_projectIndexingDescriptorList::setter_popLast (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_projectIndexingDescriptorList * p = (cCollectionElement_projectIndexingDescriptorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_projectIndexingDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mProjectFileExtension ;
    outOperand1 = p->mObject.mProperty_indexingPathSuffix ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_projectIndexingDescriptorList::method_first (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_projectIndexingDescriptorList * p = (cCollectionElement_projectIndexingDescriptorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_projectIndexingDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mProjectFileExtension ;
    outOperand1 = p->mObject.mProperty_indexingPathSuffix ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_projectIndexingDescriptorList::method_last (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_projectIndexingDescriptorList * p = (cCollectionElement_projectIndexingDescriptorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_projectIndexingDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mProjectFileExtension ;
    outOperand1 = p->mObject.mProperty_indexingPathSuffix ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_projectIndexingDescriptorList GALGAS_projectIndexingDescriptorList::add_operation (const GALGAS_projectIndexingDescriptorList & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_projectIndexingDescriptorList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_projectIndexingDescriptorList GALGAS_projectIndexingDescriptorList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_projectIndexingDescriptorList result = GALGAS_projectIndexingDescriptorList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_projectIndexingDescriptorList GALGAS_projectIndexingDescriptorList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_projectIndexingDescriptorList result = GALGAS_projectIndexingDescriptorList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_projectIndexingDescriptorList GALGAS_projectIndexingDescriptorList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_projectIndexingDescriptorList result = GALGAS_projectIndexingDescriptorList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_projectIndexingDescriptorList::plusAssign_operation (const GALGAS_projectIndexingDescriptorList inOperand,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_projectIndexingDescriptorList::setter_setMProjectFileExtensionAtIndex (GALGAS_lstring inOperand,
                                                                                   GALGAS_uint inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_projectIndexingDescriptorList * p = (cCollectionElement_projectIndexingDescriptorList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_projectIndexingDescriptorList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProjectFileExtension = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_projectIndexingDescriptorList::getter_mProjectFileExtensionAtIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_projectIndexingDescriptorList * p = (cCollectionElement_projectIndexingDescriptorList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_projectIndexingDescriptorList) ;
    result = p->mObject.mProperty_mProjectFileExtension ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_projectIndexingDescriptorList::setter_setIndexingPathSuffixAtIndex (GALGAS_lstring inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_projectIndexingDescriptorList * p = (cCollectionElement_projectIndexingDescriptorList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_projectIndexingDescriptorList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_indexingPathSuffix = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_projectIndexingDescriptorList::getter_indexingPathSuffixAtIndex (const GALGAS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_projectIndexingDescriptorList * p = (cCollectionElement_projectIndexingDescriptorList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_projectIndexingDescriptorList) ;
    result = p->mObject.mProperty_indexingPathSuffix ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_projectIndexingDescriptorList::cEnumerator_projectIndexingDescriptorList (const GALGAS_projectIndexingDescriptorList & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_projectIndexingDescriptorList_2D_element cEnumerator_projectIndexingDescriptorList::current (LOCATION_ARGS) const {
  const cCollectionElement_projectIndexingDescriptorList * p = (const cCollectionElement_projectIndexingDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_projectIndexingDescriptorList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_projectIndexingDescriptorList::current_mProjectFileExtension (LOCATION_ARGS) const {
  const cCollectionElement_projectIndexingDescriptorList * p = (const cCollectionElement_projectIndexingDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_projectIndexingDescriptorList) ;
  return p->mObject.mProperty_mProjectFileExtension ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_projectIndexingDescriptorList::current_indexingPathSuffix (LOCATION_ARGS) const {
  const cCollectionElement_projectIndexingDescriptorList * p = (const cCollectionElement_projectIndexingDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_projectIndexingDescriptorList) ;
  return p->mObject.mProperty_indexingPathSuffix ;
}




//--------------------------------------------------------------------------------------------------
//
//     @projectIndexingDescriptorList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_projectIndexingDescriptorList ("projectIndexingDescriptorList",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_projectIndexingDescriptorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_projectIndexingDescriptorList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_projectIndexingDescriptorList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_projectIndexingDescriptorList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_projectIndexingDescriptorList GALGAS_projectIndexingDescriptorList::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_projectIndexingDescriptorList result ;
  const GALGAS_projectIndexingDescriptorList * p = (const GALGAS_projectIndexingDescriptorList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_projectIndexingDescriptorList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("projectIndexingDescriptorList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@galgasGUIComponentListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_galgasGUIComponentListAST : public cCollectionElement {
  public: GALGAS_galgasGUIComponentListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_galgasGUIComponentListAST (const GALGAS_lstring & in_mGUIComponentName,
                                                        const GALGAS_lstringlist & in_mImportedOptionList,
                                                        const GALGAS_guiSimpleAttributeListAST & in_mGlobalSimpleAttributeList,
                                                        const GALGAS_withLexiqueListAST & in_mWithLexiqueList,
                                                        const GALGAS_projectIndexingDescriptorList & in_mProjectIndexingDescriptorList
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_galgasGUIComponentListAST (const GALGAS_galgasGUIComponentListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_galgasGUIComponentListAST::cCollectionElement_galgasGUIComponentListAST (const GALGAS_lstring & in_mGUIComponentName,
                                                                                            const GALGAS_lstringlist & in_mImportedOptionList,
                                                                                            const GALGAS_guiSimpleAttributeListAST & in_mGlobalSimpleAttributeList,
                                                                                            const GALGAS_withLexiqueListAST & in_mWithLexiqueList,
                                                                                            const GALGAS_projectIndexingDescriptorList & in_mProjectIndexingDescriptorList
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGUIComponentName, in_mImportedOptionList, in_mGlobalSimpleAttributeList, in_mWithLexiqueList, in_mProjectIndexingDescriptorList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_galgasGUIComponentListAST::cCollectionElement_galgasGUIComponentListAST (const GALGAS_galgasGUIComponentListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mGUIComponentName, inElement.mProperty_mImportedOptionList, inElement.mProperty_mGlobalSimpleAttributeList, inElement.mProperty_mWithLexiqueList, inElement.mProperty_mProjectIndexingDescriptorList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_galgasGUIComponentListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_galgasGUIComponentListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_galgasGUIComponentListAST (mObject.mProperty_mGUIComponentName, mObject.mProperty_mImportedOptionList, mObject.mProperty_mGlobalSimpleAttributeList, mObject.mProperty_mWithLexiqueList, mObject.mProperty_mProjectIndexingDescriptorList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_galgasGUIComponentListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGUIComponentName" ":") ;
  mObject.mProperty_mGUIComponentName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mImportedOptionList" ":") ;
  mObject.mProperty_mImportedOptionList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGlobalSimpleAttributeList" ":") ;
  mObject.mProperty_mGlobalSimpleAttributeList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mWithLexiqueList" ":") ;
  mObject.mProperty_mWithLexiqueList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mProjectIndexingDescriptorList" ":") ;
  mObject.mProperty_mProjectIndexingDescriptorList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_galgasGUIComponentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_galgasGUIComponentListAST * operand = (cCollectionElement_galgasGUIComponentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_galgasGUIComponentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgasGUIComponentListAST::GALGAS_galgasGUIComponentListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgasGUIComponentListAST::GALGAS_galgasGUIComponentListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgasGUIComponentListAST GALGAS_galgasGUIComponentListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_galgasGUIComponentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgasGUIComponentListAST GALGAS_galgasGUIComponentListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                             const GALGAS_lstringlist & inOperand1,
                                                                                             const GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                                                             const GALGAS_withLexiqueListAST & inOperand3,
                                                                                             const GALGAS_projectIndexingDescriptorList & inOperand4
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_galgasGUIComponentListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_galgasGUIComponentListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_galgasGUIComponentListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgasGUIComponentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_lstring & in_mGUIComponentName,
                                                                  const GALGAS_lstringlist & in_mImportedOptionList,
                                                                  const GALGAS_guiSimpleAttributeListAST & in_mGlobalSimpleAttributeList,
                                                                  const GALGAS_withLexiqueListAST & in_mWithLexiqueList,
                                                                  const GALGAS_projectIndexingDescriptorList & in_mProjectIndexingDescriptorList
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_galgasGUIComponentListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_galgasGUIComponentListAST (in_mGUIComponentName,
                                                               in_mImportedOptionList,
                                                               in_mGlobalSimpleAttributeList,
                                                               in_mWithLexiqueList,
                                                               in_mProjectIndexingDescriptorList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgasGUIComponentListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_lstringlist & inOperand1,
                                                            const GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                            const GALGAS_withLexiqueListAST & inOperand3,
                                                            const GALGAS_projectIndexingDescriptorList & inOperand4
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_galgasGUIComponentListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgasGUIComponentListAST::setter_append (const GALGAS_lstring inOperand0,
                                                      const GALGAS_lstringlist inOperand1,
                                                      const GALGAS_guiSimpleAttributeListAST inOperand2,
                                                      const GALGAS_withLexiqueListAST inOperand3,
                                                      const GALGAS_projectIndexingDescriptorList inOperand4,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_galgasGUIComponentListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgasGUIComponentListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                             const GALGAS_lstringlist inOperand1,
                                                             const GALGAS_guiSimpleAttributeListAST inOperand2,
                                                             const GALGAS_withLexiqueListAST inOperand3,
                                                             const GALGAS_projectIndexingDescriptorList inOperand4,
                                                             const GALGAS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_galgasGUIComponentListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
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

void GALGAS_galgasGUIComponentListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                             GALGAS_lstringlist & outOperand1,
                                                             GALGAS_guiSimpleAttributeListAST & outOperand2,
                                                             GALGAS_withLexiqueListAST & outOperand3,
                                                             GALGAS_projectIndexingDescriptorList & outOperand4,
                                                             const GALGAS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_galgasGUIComponentListAST * p = (cCollectionElement_galgasGUIComponentListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_galgasGUIComponentListAST) ;
        outOperand0 = p->mObject.mProperty_mGUIComponentName ;
        outOperand1 = p->mObject.mProperty_mImportedOptionList ;
        outOperand2 = p->mObject.mProperty_mGlobalSimpleAttributeList ;
        outOperand3 = p->mObject.mProperty_mWithLexiqueList ;
        outOperand4 = p->mObject.mProperty_mProjectIndexingDescriptorList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgasGUIComponentListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstringlist & outOperand1,
                                                        GALGAS_guiSimpleAttributeListAST & outOperand2,
                                                        GALGAS_withLexiqueListAST & outOperand3,
                                                        GALGAS_projectIndexingDescriptorList & outOperand4,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgasGUIComponentListAST * p = (cCollectionElement_galgasGUIComponentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgasGUIComponentListAST) ;
    outOperand0 = p->mObject.mProperty_mGUIComponentName ;
    outOperand1 = p->mObject.mProperty_mImportedOptionList ;
    outOperand2 = p->mObject.mProperty_mGlobalSimpleAttributeList ;
    outOperand3 = p->mObject.mProperty_mWithLexiqueList ;
    outOperand4 = p->mObject.mProperty_mProjectIndexingDescriptorList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgasGUIComponentListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstringlist & outOperand1,
                                                       GALGAS_guiSimpleAttributeListAST & outOperand2,
                                                       GALGAS_withLexiqueListAST & outOperand3,
                                                       GALGAS_projectIndexingDescriptorList & outOperand4,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgasGUIComponentListAST * p = (cCollectionElement_galgasGUIComponentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgasGUIComponentListAST) ;
    outOperand0 = p->mObject.mProperty_mGUIComponentName ;
    outOperand1 = p->mObject.mProperty_mImportedOptionList ;
    outOperand2 = p->mObject.mProperty_mGlobalSimpleAttributeList ;
    outOperand3 = p->mObject.mProperty_mWithLexiqueList ;
    outOperand4 = p->mObject.mProperty_mProjectIndexingDescriptorList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgasGUIComponentListAST::method_first (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstringlist & outOperand1,
                                                     GALGAS_guiSimpleAttributeListAST & outOperand2,
                                                     GALGAS_withLexiqueListAST & outOperand3,
                                                     GALGAS_projectIndexingDescriptorList & outOperand4,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgasGUIComponentListAST * p = (cCollectionElement_galgasGUIComponentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgasGUIComponentListAST) ;
    outOperand0 = p->mObject.mProperty_mGUIComponentName ;
    outOperand1 = p->mObject.mProperty_mImportedOptionList ;
    outOperand2 = p->mObject.mProperty_mGlobalSimpleAttributeList ;
    outOperand3 = p->mObject.mProperty_mWithLexiqueList ;
    outOperand4 = p->mObject.mProperty_mProjectIndexingDescriptorList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgasGUIComponentListAST::method_last (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstringlist & outOperand1,
                                                    GALGAS_guiSimpleAttributeListAST & outOperand2,
                                                    GALGAS_withLexiqueListAST & outOperand3,
                                                    GALGAS_projectIndexingDescriptorList & outOperand4,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgasGUIComponentListAST * p = (cCollectionElement_galgasGUIComponentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgasGUIComponentListAST) ;
    outOperand0 = p->mObject.mProperty_mGUIComponentName ;
    outOperand1 = p->mObject.mProperty_mImportedOptionList ;
    outOperand2 = p->mObject.mProperty_mGlobalSimpleAttributeList ;
    outOperand3 = p->mObject.mProperty_mWithLexiqueList ;
    outOperand4 = p->mObject.mProperty_mProjectIndexingDescriptorList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgasGUIComponentListAST GALGAS_galgasGUIComponentListAST::add_operation (const GALGAS_galgasGUIComponentListAST & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_galgasGUIComponentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgasGUIComponentListAST GALGAS_galgasGUIComponentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_galgasGUIComponentListAST result = GALGAS_galgasGUIComponentListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgasGUIComponentListAST GALGAS_galgasGUIComponentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_galgasGUIComponentListAST result = GALGAS_galgasGUIComponentListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgasGUIComponentListAST GALGAS_galgasGUIComponentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_galgasGUIComponentListAST result = GALGAS_galgasGUIComponentListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgasGUIComponentListAST::plusAssign_operation (const GALGAS_galgasGUIComponentListAST inOperand,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgasGUIComponentListAST::setter_setMGUIComponentNameAtIndex (GALGAS_lstring inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_galgasGUIComponentListAST * p = (cCollectionElement_galgasGUIComponentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgasGUIComponentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGUIComponentName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgasGUIComponentListAST::getter_mGUIComponentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgasGUIComponentListAST * p = (cCollectionElement_galgasGUIComponentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgasGUIComponentListAST) ;
    result = p->mObject.mProperty_mGUIComponentName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgasGUIComponentListAST::setter_setMImportedOptionListAtIndex (GALGAS_lstringlist inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_galgasGUIComponentListAST * p = (cCollectionElement_galgasGUIComponentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgasGUIComponentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mImportedOptionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_galgasGUIComponentListAST::getter_mImportedOptionListAtIndex (const GALGAS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgasGUIComponentListAST * p = (cCollectionElement_galgasGUIComponentListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgasGUIComponentListAST) ;
    result = p->mObject.mProperty_mImportedOptionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgasGUIComponentListAST::setter_setMGlobalSimpleAttributeListAtIndex (GALGAS_guiSimpleAttributeListAST inOperand,
                                                                                    GALGAS_uint inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_galgasGUIComponentListAST * p = (cCollectionElement_galgasGUIComponentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgasGUIComponentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGlobalSimpleAttributeList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiSimpleAttributeListAST GALGAS_galgasGUIComponentListAST::getter_mGlobalSimpleAttributeListAtIndex (const GALGAS_uint & inIndex,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgasGUIComponentListAST * p = (cCollectionElement_galgasGUIComponentListAST *) attributes.ptr () ;
  GALGAS_guiSimpleAttributeListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgasGUIComponentListAST) ;
    result = p->mObject.mProperty_mGlobalSimpleAttributeList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgasGUIComponentListAST::setter_setMWithLexiqueListAtIndex (GALGAS_withLexiqueListAST inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_galgasGUIComponentListAST * p = (cCollectionElement_galgasGUIComponentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgasGUIComponentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mWithLexiqueList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_withLexiqueListAST GALGAS_galgasGUIComponentListAST::getter_mWithLexiqueListAtIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgasGUIComponentListAST * p = (cCollectionElement_galgasGUIComponentListAST *) attributes.ptr () ;
  GALGAS_withLexiqueListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgasGUIComponentListAST) ;
    result = p->mObject.mProperty_mWithLexiqueList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgasGUIComponentListAST::setter_setMProjectIndexingDescriptorListAtIndex (GALGAS_projectIndexingDescriptorList inOperand,
                                                                                        GALGAS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_galgasGUIComponentListAST * p = (cCollectionElement_galgasGUIComponentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgasGUIComponentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProjectIndexingDescriptorList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_projectIndexingDescriptorList GALGAS_galgasGUIComponentListAST::getter_mProjectIndexingDescriptorListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgasGUIComponentListAST * p = (cCollectionElement_galgasGUIComponentListAST *) attributes.ptr () ;
  GALGAS_projectIndexingDescriptorList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgasGUIComponentListAST) ;
    result = p->mObject.mProperty_mProjectIndexingDescriptorList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_galgasGUIComponentListAST::cEnumerator_galgasGUIComponentListAST (const GALGAS_galgasGUIComponentListAST & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgasGUIComponentListAST_2D_element cEnumerator_galgasGUIComponentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_galgasGUIComponentListAST * p = (const cCollectionElement_galgasGUIComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgasGUIComponentListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_galgasGUIComponentListAST::current_mGUIComponentName (LOCATION_ARGS) const {
  const cCollectionElement_galgasGUIComponentListAST * p = (const cCollectionElement_galgasGUIComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgasGUIComponentListAST) ;
  return p->mObject.mProperty_mGUIComponentName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_galgasGUIComponentListAST::current_mImportedOptionList (LOCATION_ARGS) const {
  const cCollectionElement_galgasGUIComponentListAST * p = (const cCollectionElement_galgasGUIComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgasGUIComponentListAST) ;
  return p->mObject.mProperty_mImportedOptionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiSimpleAttributeListAST cEnumerator_galgasGUIComponentListAST::current_mGlobalSimpleAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_galgasGUIComponentListAST * p = (const cCollectionElement_galgasGUIComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgasGUIComponentListAST) ;
  return p->mObject.mProperty_mGlobalSimpleAttributeList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_withLexiqueListAST cEnumerator_galgasGUIComponentListAST::current_mWithLexiqueList (LOCATION_ARGS) const {
  const cCollectionElement_galgasGUIComponentListAST * p = (const cCollectionElement_galgasGUIComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgasGUIComponentListAST) ;
  return p->mObject.mProperty_mWithLexiqueList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_projectIndexingDescriptorList cEnumerator_galgasGUIComponentListAST::current_mProjectIndexingDescriptorList (LOCATION_ARGS) const {
  const cCollectionElement_galgasGUIComponentListAST * p = (const cCollectionElement_galgasGUIComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgasGUIComponentListAST) ;
  return p->mObject.mProperty_mProjectIndexingDescriptorList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @galgasGUIComponentListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgasGUIComponentListAST ("galgasGUIComponentListAST",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_galgasGUIComponentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgasGUIComponentListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_galgasGUIComponentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgasGUIComponentListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgasGUIComponentListAST GALGAS_galgasGUIComponentListAST::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_galgasGUIComponentListAST result ;
  const GALGAS_galgasGUIComponentListAST * p = (const GALGAS_galgasGUIComponentListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_galgasGUIComponentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgasGUIComponentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiAnalysisContext::GALGAS_guiAnalysisContext (void) :
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

GALGAS_guiAnalysisContext::~ GALGAS_guiAnalysisContext (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiAnalysisContext::GALGAS_guiAnalysisContext (const GALGAS_stringlist & inOperand0,
                                                      const GALGAS_guiCommandLineOptionList & inOperand1,
                                                      const GALGAS_guiCommandLineOptionList & inOperand2,
                                                      const GALGAS_guiCommandLineOptionList & inOperand3,
                                                      const GALGAS_stringlist & inOperand4,
                                                      const GALGAS_extensionMap & inOperand5,
                                                      const GALGAS_importedLexiqueList & inOperand6,
                                                      const GALGAS_string & inOperand7,
                                                      const GALGAS_projectIndexingDescriptorList & inOperand8) :
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

GALGAS_guiAnalysisContext GALGAS_guiAnalysisContext::class_func_new (Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_stringlist in_mImportedOptionComponentList = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("guiCompilation.galgas", 389)) ;
  const GALGAS_guiCommandLineOptionList in_mBoolOptionList = GALGAS_guiCommandLineOptionList::class_func_emptyList (SOURCE_FILE ("guiCompilation.galgas", 390)) ;
  const GALGAS_guiCommandLineOptionList in_mUIntOptionList = GALGAS_guiCommandLineOptionList::class_func_emptyList (SOURCE_FILE ("guiCompilation.galgas", 391)) ;
  const GALGAS_guiCommandLineOptionList in_mStringOptionList = GALGAS_guiCommandLineOptionList::class_func_emptyList (SOURCE_FILE ("guiCompilation.galgas", 392)) ;
  const GALGAS_stringlist in_mNibAndClassList = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("guiCompilation.galgas", 393)) ;
  const GALGAS_extensionMap in_mExtensionMap = GALGAS_extensionMap::class_func_emptyMap (SOURCE_FILE ("guiCompilation.galgas", 394)) ;
  const GALGAS_importedLexiqueList in_mWithLexiqueList = GALGAS_importedLexiqueList::class_func_emptyList (SOURCE_FILE ("guiCompilation.galgas", 395)) ;
  const GALGAS_string in_mBuildRunOption = GALGAS_string::makeEmptyString () ;
  const GALGAS_projectIndexingDescriptorList in_mProjectIndexingDescriptorList = GALGAS_projectIndexingDescriptorList::class_func_emptyList (SOURCE_FILE ("guiCompilation.galgas", 397)) ;
  GALGAS_guiAnalysisContext result ;
  if (in_mImportedOptionComponentList.isValid () && in_mBoolOptionList.isValid () && in_mUIntOptionList.isValid () && in_mStringOptionList.isValid () && in_mNibAndClassList.isValid () && in_mExtensionMap.isValid () && in_mWithLexiqueList.isValid () && in_mBuildRunOption.isValid () && in_mProjectIndexingDescriptorList.isValid ()) {
    result = GALGAS_guiAnalysisContext (in_mImportedOptionComponentList, in_mBoolOptionList, in_mUIntOptionList, in_mStringOptionList, in_mNibAndClassList, in_mExtensionMap, in_mWithLexiqueList, in_mBuildRunOption, in_mProjectIndexingDescriptorList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_guiAnalysisContext::objectCompare (const GALGAS_guiAnalysisContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mImportedOptionComponentList.objectCompare (inOperand.mProperty_mImportedOptionComponentList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBoolOptionList.objectCompare (inOperand.mProperty_mBoolOptionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUIntOptionList.objectCompare (inOperand.mProperty_mUIntOptionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStringOptionList.objectCompare (inOperand.mProperty_mStringOptionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNibAndClassList.objectCompare (inOperand.mProperty_mNibAndClassList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExtensionMap.objectCompare (inOperand.mProperty_mExtensionMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mWithLexiqueList.objectCompare (inOperand.mProperty_mWithLexiqueList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildRunOption.objectCompare (inOperand.mProperty_mBuildRunOption) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mProjectIndexingDescriptorList.objectCompare (inOperand.mProperty_mProjectIndexingDescriptorList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_guiAnalysisContext::isValid (void) const {
  return mProperty_mImportedOptionComponentList.isValid () && mProperty_mBoolOptionList.isValid () && mProperty_mUIntOptionList.isValid () && mProperty_mStringOptionList.isValid () && mProperty_mNibAndClassList.isValid () && mProperty_mExtensionMap.isValid () && mProperty_mWithLexiqueList.isValid () && mProperty_mBuildRunOption.isValid () && mProperty_mProjectIndexingDescriptorList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiAnalysisContext::drop (void) {
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

void GALGAS_guiAnalysisContext::description (String & ioString,
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
//
//     @guiAnalysisContext generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiAnalysisContext ("guiAnalysisContext",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guiAnalysisContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiAnalysisContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guiAnalysisContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiAnalysisContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiAnalysisContext GALGAS_guiAnalysisContext::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_guiAnalysisContext result ;
  const GALGAS_guiAnalysisContext * p = (const GALGAS_guiAnalysisContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_guiAnalysisContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiAnalysisContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_optionComponentMapForGeneration::cMapElement_optionComponentMapForGeneration (const GALGAS_lstring & inKey,
                                                                                          const GALGAS_guiAnalysisContext & in_mGuiComponentContext
                                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mGuiComponentContext (in_mGuiComponentContext) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_optionComponentMapForGeneration::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_optionComponentMapForGeneration::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_optionComponentMapForGeneration (mProperty_lkey, mProperty_mGuiComponentContext COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_optionComponentMapForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGuiComponentContext" ":") ;
  mProperty_mGuiComponentContext.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_optionComponentMapForGeneration::compare (const cCollectionElement * inOperand) const {
  cMapElement_optionComponentMapForGeneration * operand = (cMapElement_optionComponentMapForGeneration *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mGuiComponentContext.objectCompare (operand->mProperty_mGuiComponentContext) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForGeneration::GALGAS_optionComponentMapForGeneration (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForGeneration::GALGAS_optionComponentMapForGeneration (const GALGAS_optionComponentMapForGeneration & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForGeneration & GALGAS_optionComponentMapForGeneration::operator = (const GALGAS_optionComponentMapForGeneration & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForGeneration GALGAS_optionComponentMapForGeneration::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_optionComponentMapForGeneration result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForGeneration GALGAS_optionComponentMapForGeneration::class_func_mapWithMapToOverride (const GALGAS_optionComponentMapForGeneration & inMapToOverride
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentMapForGeneration result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForGeneration GALGAS_optionComponentMapForGeneration::getter_overriddenMap (Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_optionComponentMapForGeneration result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_optionComponentMapForGeneration::addAssign_operation (const GALGAS_lstring & inKey,
                                                                  const GALGAS_guiAnalysisContext & inArgument0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_optionComponentMapForGeneration * p = nullptr ;
  macroMyNew (p, cMapElement_optionComponentMapForGeneration (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@optionComponentMapForGeneration insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForGeneration GALGAS_optionComponentMapForGeneration::add_operation (const GALGAS_optionComponentMapForGeneration & inOperand,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_optionComponentMapForGeneration result = *this ;
  cEnumerator_optionComponentMapForGeneration enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mGuiComponentContext (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_optionComponentMapForGeneration::setter_insertKey (GALGAS_lstring inKey,
                                                               GALGAS_guiAnalysisContext inArgument0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cMapElement_optionComponentMapForGeneration * p = nullptr ;
  macroMyNew (p, cMapElement_optionComponentMapForGeneration (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of the '%K' option component: it has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiAnalysisContext GALGAS_optionComponentMapForGeneration::getter_mGuiComponentContextForKey (const GALGAS_string & inKey,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionComponentMapForGeneration * p = (const cMapElement_optionComponentMapForGeneration *) attributes ;
  GALGAS_guiAnalysisContext result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForGeneration) ;
    result = p->mProperty_mGuiComponentContext ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_optionComponentMapForGeneration::setter_setMGuiComponentContextForKey (GALGAS_guiAnalysisContext inAttributeValue,
                                                                                   GALGAS_string inKey,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_optionComponentMapForGeneration * p = (cMapElement_optionComponentMapForGeneration *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForGeneration) ;
    p->mProperty_mGuiComponentContext = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_optionComponentMapForGeneration * GALGAS_optionComponentMapForGeneration::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                         const GALGAS_string & inKey
                                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_optionComponentMapForGeneration * result = (cMapElement_optionComponentMapForGeneration *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_optionComponentMapForGeneration) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_optionComponentMapForGeneration::cEnumerator_optionComponentMapForGeneration (const GALGAS_optionComponentMapForGeneration & inEnumeratedObject,
                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForGeneration_2D_element cEnumerator_optionComponentMapForGeneration::current (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForGeneration * p = (const cMapElement_optionComponentMapForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForGeneration) ;
  return GALGAS_optionComponentMapForGeneration_2D_element (p->mProperty_lkey, p->mProperty_mGuiComponentContext) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_optionComponentMapForGeneration::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiAnalysisContext cEnumerator_optionComponentMapForGeneration::current_mGuiComponentContext (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForGeneration * p = (const cMapElement_optionComponentMapForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForGeneration) ;
  return p->mProperty_mGuiComponentContext ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_optionComponentMapForGeneration::optional_searchKey (const GALGAS_string & inKey,
                                                                 GALGAS_guiAnalysisContext & outArgument0) const {
  const cMapElement_optionComponentMapForGeneration * p = (const cMapElement_optionComponentMapForGeneration *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForGeneration) ;
    outArgument0 = p->mProperty_mGuiComponentContext ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @optionComponentMapForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentMapForGeneration ("optionComponentMapForGeneration",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionComponentMapForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentMapForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionComponentMapForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionComponentMapForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForGeneration GALGAS_optionComponentMapForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentMapForGeneration result ;
  const GALGAS_optionComponentMapForGeneration * p = (const GALGAS_optionComponentMapForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_optionComponentMapForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentMapForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     L E X I Q U E                                                                             
//
//--------------------------------------------------------------------------------------------------

#include "unicode_character_cpp.h"
#include "scanner_actions.h"
#include "cLexiqueIntrospection.h"

//--------------------------------------------------------------------------------------------------

cTokenFor_galgasScanner_34_::cTokenFor_galgasScanner_34_ (void) :
mLexicalAttribute_bigintValue (),
mLexicalAttribute_charValue (),
mLexicalAttribute_floatValue (),
mLexicalAttribute_identifierString (),
mLexicalAttribute_sint_33__32_value (),
mLexicalAttribute_sint_36__34_value (),
mLexicalAttribute_tokenString (),
mLexicalAttribute_uint_33__32_value (),
mLexicalAttribute_uint_36__34_value () {
}

//--------------------------------------------------------------------------------------------------

Lexique_galgasScanner_34_::Lexique_galgasScanner_34_ (Compiler * inCallerCompiler,
                                                      const String & inSourceFileName
                                                      COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

Lexique_galgasScanner_34_::Lexique_galgasScanner_34_ (Compiler * inCallerCompiler,
                                                      const String & inSourceString,
                                                      const String & inStringForError
                                                      COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------
//                        Lexical error message list                                             
//--------------------------------------------------------------------------------------------------

static const char * gLexicalMessage_galgasScanner_34__attributeError = "in an attribute name, a letter or a digit should follow the '%' character" ;

static const char * gLexicalMessage_galgasScanner_34__floatNumberConversionError = "invalid float number" ;

static const char * gLexicalMessage_galgasScanner_34__hexDigitError = "0x should be followed by a hexadecimal digit" ;

static const char * gLexicalMessage_galgasScanner_34__incorrectCharConstant = "incorrect literal character" ;

static const char * gLexicalMessage_galgasScanner_34__incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_galgasScanner_34__incorrectTypeNameError = "in a type name, a letter, a digit or the underscore character should follow the '@' character" ;

static const char * gLexicalMessage_galgasScanner_34__incorrect_terminal_end = "terminal does not end with '$'" ;

static const char * gLexicalMessage_galgasScanner_34__incorrect_terminal_start = "incorrect terminal start" ;

static const char * gLexicalMessage_galgasScanner_34__internalError = "internal error" ;

static const char * gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 = "\\u should be followed by exactly four hexadecimal digits" ;

static const char * gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 = "\\U should be followed by exactly eight hexadecimal digits" ;

static const char * gLexicalMessage_galgasScanner_34__unassignedUnicodeValue = "this value does not correspond to an assigned Unicode point" ;

static const char * gLexicalMessage_galgasScanner_34__undefinedAttribute = "undefined attribute" ;

//--------------------------------------------------------------------------------------------------
//                getMessageForTerminal                                                          
//--------------------------------------------------------------------------------------------------

String Lexique_galgasScanner_34_::getMessageForTerminal (const int32_t inTerminalIndex) const {
  String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 185)) {
    static const char * syntaxErrorMessageArray [185] = {kEndOfSourceLexicalErrorMessage,
        "an identifier",
        "a float number",
        "a big integer number",
        "the '.' delimitor",
        "the '...' delimitor",
        "the '..<' delimitor",
        "a type name (@...)",
        "a character constant",
        "a terminal symbol ($...$)",
        "a comment",
        "a comment",
        "the '\?selector:' delimitor",
        "the '\?!selector:' delimitor",
        "the '\?!' delimitor",
        "the '!selector:' delimitor",
        "the '!\?selector:' delimitor",
        "the '<' delimitor",
        "the '<=' delimitor",
        "the '<<' delimitor",
        "a non terminal symbol <...>",
        "a character string constant \"...\"",
        "the 'abstract' keyword",
        "the 'after' keyword",
        "the 'as' keyword",
        "the 'bang' keyword",
        "the 'before' keyword",
        "the 'between' keyword",
        "the 'block' keyword",
        "the 'boolset' keyword",
        "the 'case' keyword",
        "the 'class' keyword",
        "the 'default' keyword",
        "the 'dict' keyword",
        "the 'do' keyword",
        "the 'drop' keyword",
        "the 'else' keyword",
        "the 'elsif' keyword",
        "the 'end' keyword",
        "the 'enum' keyword",
        "the 'error' keyword",
        "the 'extension' keyword",
        "the 'extern' keyword",
        "the 'false' keyword",
        "the 'fileprivate' keyword",
        "the 'filewrapper' keyword",
        "the 'final' keyword",
        "the 'for' keyword",
        "the 'fixit' keyword",
        "the 'func' keyword",
        "the 'grammar' keyword",
        "the 'graph' keyword",
        "the 'gui' keyword",
        "the 'if' keyword",
        "the 'in' keyword",
        "the 'indexing' keyword",
        "the 'init' keyword",
        "the 'is' keyword",
        "the 'label' keyword",
        "the 'let' keyword",
        "the 'lexique' keyword",
        "the 'list' keyword",
        "the 'listmap' keyword",
        "the 'log' keyword",
        "the 'loop' keyword",
        "the 'map' keyword",
        "the 'mod' keyword",
        "the 'mutating' keyword",
        "the 'not' keyword",
        "the 'on' keyword",
        "the 'operator' keyword",
        "the 'option' keyword",
        "the 'or' keyword",
        "the 'override' keyword",
        "the 'package' keyword",
        "the 'parse' keyword",
        "the 'public' keyword",
        "the 'protected' keyword",
        "the 'private' keyword",
        "the 'proc' keyword",
        "the 'project' keyword",
        "the 'repeat' keyword",
        "the 'rewind' keyword",
        "the 'rule' keyword",
        "the 'select' keyword",
        "the 'self' keyword",
        "the 'send' keyword",
        "the 'sortedlist' keyword",
        "the 'spoil' keyword",
        "the 'super' keyword",
        "the 'struct' keyword",
        "the 'style' keyword",
        "the 'switch' keyword",
        "the 'syntax' keyword",
        "the 'tag' keyword",
        "the 'template' keyword",
        "the 'then' keyword",
        "the 'true' keyword",
        "the 'typealias' keyword",
        "the 'unused' keyword",
        "the 'var' keyword",
        "the 'warning' keyword",
        "the 'while' keyword",
        "the 'with' keyword",
        "the '%app-link' keyword",
        "the '%app-source' keyword",
        "the '%makefile-macosx' keyword",
        "the '%makefile-unix' keyword",
        "the '%makefile-x86linux32-on-macosx' keyword",
        "the '%makefile-x86linux64-on-macosx' keyword",
        "the '%makefile-win32-on-macosx' keyword",
        "the '%codeblocks-windows' keyword",
        "the '%codeblocks-linux32' keyword",
        "the '%codeblocks-linux64' keyword",
        "the '%applicationBundleBase' keyword",
        "the '%MacOS' keyword",
        "the '%MacOSDeployment' keyword",
        "the '%quietOutputByDefault' keyword",
        "the '%macCodeSign' keyword",
        "the '%libpmAtPath' keyword",
        "the '%tool-source' keyword",
        "the '%translate' keyword",
        "the '%once' keyword",
        "the '%usefull' keyword",
        "the '%generatedInSeparateFile' keyword",
        "the '%nonAtomicSelection' keyword",
        "the '%templateEndMark' keyword",
        "the '%preserved' keyword",
        "the '%selector' keyword",
        "the '%insertSetter' keyword",
        "the '%searchMethod' keyword",
        "the '%removeSetter' keyword",
        "the '%errorMessage' keyword",
        "the '%insertOrReplaceSetter' keyword",
        "the '%remove' keyword",
        "the '%replaceBy' keyword",
        "the '%insertAfter' keyword",
        "the '%insertBefore' keyword",
        "the '%useGrammar' keyword",
        "the '%searchString' keyword",
        "the '%templateReplacement' keyword",
        "the '*' delimitor",
        "the ',' delimitor",
        "the '+' delimitor",
        "the '&+' delimitor",
        "the '&-' delimitor",
        "the '&*' delimitor",
        "the '&/' delimitor",
        "the '>' delimitor",
        "the ';' delimitor",
        "the ':' delimitor",
        "the ':>' delimitor",
        "the '-' delimitor",
        "the '(' delimitor",
        "the ')' delimitor",
        "the '->' delimitor",
        "the '==' delimitor",
        "the '=' delimitor",
        "the '&&' delimitor",
        "the '[' delimitor",
        "the ']' delimitor",
        "the '+=' delimitor",
        "the '-=' delimitor",
        "the '*=' delimitor",
        "the '/=' delimitor",
        "the '/' delimitor",
        "the '!=' delimitor",
        "the '>=' delimitor",
        "the '&' delimitor",
        "the '{' delimitor",
        "the '}' delimitor",
        "the '`' delimitor",
        "the '||' delimitor",
        "the '|' delimitor",
        "the '^' delimitor",
        "the '>>' delimitor",
        "the '~' delimitor",
        "the '--' delimitor",
        "the '++' delimitor",
        "the '&--' delimitor",
        "the '&++' delimitor",
        "the '===' delimitor",
        "the '!==' delimitor",
        "the '\?^' delimitor",
        "the '!^' delimitor"
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S                                           
//--------------------------------------------------------------------------------------------------

//--- Unicode string for '$!=$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___21__3D_ = {
  TO_UNICODE ('!'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$!==$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___21__3D__3D_ = {
  TO_UNICODE ('!'),
  TO_UNICODE ('='),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$!^$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___21__5E_ = {
  TO_UNICODE ('!'),
  TO_UNICODE ('^'),
} ;

//--- Unicode string for '$&$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___26_ = {
  TO_UNICODE ('&'),
} ;

//--- Unicode string for '$&&$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___26__26_ = {
  TO_UNICODE ('&'),
  TO_UNICODE ('&'),
} ;

//--- Unicode string for '$&*$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___26__2A_ = {
  TO_UNICODE ('&'),
  TO_UNICODE ('*'),
} ;

//--- Unicode string for '$&+$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___26__2B_ = {
  TO_UNICODE ('&'),
  TO_UNICODE ('+'),
} ;

//--- Unicode string for '$&++$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___26__2B__2B_ = {
  TO_UNICODE ('&'),
  TO_UNICODE ('+'),
  TO_UNICODE ('+'),
} ;

//--- Unicode string for '$&-$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___26__2D_ = {
  TO_UNICODE ('&'),
  TO_UNICODE ('-'),
} ;

//--- Unicode string for '$&--$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___26__2D__2D_ = {
  TO_UNICODE ('&'),
  TO_UNICODE ('-'),
  TO_UNICODE ('-'),
} ;

//--- Unicode string for '$&/$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___26__2F_ = {
  TO_UNICODE ('&'),
  TO_UNICODE ('/'),
} ;

//--- Unicode string for '$($'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___28_ = {
  TO_UNICODE ('('),
} ;

//--- Unicode string for '$)$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___29_ = {
  TO_UNICODE (')'),
} ;

//--- Unicode string for '$*$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2A_ = {
  TO_UNICODE ('*'),
} ;

//--- Unicode string for '$*=$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2A__3D_ = {
  TO_UNICODE ('*'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$+$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2B_ = {
  TO_UNICODE ('+'),
} ;

//--- Unicode string for '$++$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2B__2B_ = {
  TO_UNICODE ('+'),
  TO_UNICODE ('+'),
} ;

//--- Unicode string for '$+=$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2B__3D_ = {
  TO_UNICODE ('+'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$,$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2C_ = {
  TO_UNICODE (','),
} ;

//--- Unicode string for '$-$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2D_ = {
  TO_UNICODE ('-'),
} ;

//--- Unicode string for '$--$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2D__2D_ = {
  TO_UNICODE ('-'),
  TO_UNICODE ('-'),
} ;

//--- Unicode string for '$-=$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2D__3D_ = {
  TO_UNICODE ('-'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$->$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2D__3E_ = {
  TO_UNICODE ('-'),
  TO_UNICODE ('>'),
} ;

//--- Unicode string for '$..$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2E__2E_ = {
  TO_UNICODE ('.'),
  TO_UNICODE ('.'),
} ;

//--- Unicode string for '$.<$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2E__3C_ = {
  TO_UNICODE ('.'),
  TO_UNICODE ('<'),
} ;

//--- Unicode string for '$/$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2F_ = {
  TO_UNICODE ('/'),
} ;

//--- Unicode string for '$//$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2F__2F_ = {
  TO_UNICODE ('/'),
  TO_UNICODE ('/'),
} ;

//--- Unicode string for '$/=$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2F__3D_ = {
  TO_UNICODE ('/'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$0x$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___30_x = {
  TO_UNICODE ('0'),
  TO_UNICODE ('x'),
} ;

//--- Unicode string for '$:$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3A_ = {
  TO_UNICODE (':'),
} ;

//--- Unicode string for '$:>$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3A__3E_ = {
  TO_UNICODE (':'),
  TO_UNICODE ('>'),
} ;

//--- Unicode string for '$;$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3B_ = {
  TO_UNICODE (';'),
} ;

//--- Unicode string for '$=$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3D_ = {
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$==$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3D__3D_ = {
  TO_UNICODE ('='),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$===$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3D__3D__3D_ = {
  TO_UNICODE ('='),
  TO_UNICODE ('='),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$>$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3E_ = {
  TO_UNICODE ('>'),
} ;

//--- Unicode string for '$>=$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3E__3D_ = {
  TO_UNICODE ('>'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$>>$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3E__3E_ = {
  TO_UNICODE ('>'),
  TO_UNICODE ('>'),
} ;

//--- Unicode string for '$?!$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3F__21_ = {
  TO_UNICODE ('\?'),
  TO_UNICODE ('!'),
} ;

//--- Unicode string for '$?^$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3F__5E_ = {
  TO_UNICODE ('\?'),
  TO_UNICODE ('^'),
} ;

//--- Unicode string for '$MacOS$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__MacOS = {
  TO_UNICODE ('M'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('O'),
  TO_UNICODE ('S'),
} ;

//--- Unicode string for '$MacOSDeployment$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__MacOSDeployment = {
  TO_UNICODE ('M'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('O'),
  TO_UNICODE ('S'),
  TO_UNICODE ('D'),
  TO_UNICODE ('e'),
  TO_UNICODE ('p'),
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('y'),
  TO_UNICODE ('m'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$[$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___5B_ = {
  TO_UNICODE ('['),
} ;

//--- Unicode string for '$\\$$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___5C__24_ = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('$'),
} ;

//--- Unicode string for '$\\\\$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___5C__5C_ = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('\\'),
} ;

//--- Unicode string for '$]$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___5D_ = {
  TO_UNICODE (']'),
} ;

//--- Unicode string for '$^$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___5E_ = {
  TO_UNICODE ('^'),
} ;

//--- Unicode string for '$`$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___60_ = {
  TO_UNICODE ('`'),
} ;

//--- Unicode string for '$abstract$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__abstract = {
  TO_UNICODE ('a'),
  TO_UNICODE ('b'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$after$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__after = {
  TO_UNICODE ('a'),
  TO_UNICODE ('f'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$app-link$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__app_2D_link = {
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('p'),
  TO_UNICODE ('-'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('k'),
} ;

//--- Unicode string for '$app-source$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__app_2D_source = {
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('p'),
  TO_UNICODE ('-'),
  TO_UNICODE ('s'),
  TO_UNICODE ('o'),
  TO_UNICODE ('u'),
  TO_UNICODE ('r'),
  TO_UNICODE ('c'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$applicationBundleBase$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__applicationBundleBase = {
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('p'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('B'),
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('B'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$as$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__as = {
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
} ;

//--- Unicode string for '$bang$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__bang = {
  TO_UNICODE ('b'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
} ;

//--- Unicode string for '$before$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__before = {
  TO_UNICODE ('b'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$between$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__between = {
  TO_UNICODE ('b'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('w'),
  TO_UNICODE ('e'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
} ;

//--- Unicode string for '$block$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__block = {
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
} ;

//--- Unicode string for '$boolset$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__boolset = {
  TO_UNICODE ('b'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$case$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__case = {
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$class$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__class = {
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
} ;

//--- Unicode string for '$codeblocks-linux32$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__codeblocks_2D_linux_33__32_ = {
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
  TO_UNICODE ('s'),
  TO_UNICODE ('-'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('x'),
  TO_UNICODE ('3'),
  TO_UNICODE ('2'),
} ;

//--- Unicode string for '$codeblocks-linux64$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__codeblocks_2D_linux_36__34_ = {
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
  TO_UNICODE ('s'),
  TO_UNICODE ('-'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('x'),
  TO_UNICODE ('6'),
  TO_UNICODE ('4'),
} ;

//--- Unicode string for '$codeblocks-windows$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__codeblocks_2D_windows = {
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
  TO_UNICODE ('s'),
  TO_UNICODE ('-'),
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE ('o'),
  TO_UNICODE ('w'),
  TO_UNICODE ('s'),
} ;

//--- Unicode string for '$default$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__default = {
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('a'),
  TO_UNICODE ('u'),
  TO_UNICODE ('l'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$dict$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__dict = {
  TO_UNICODE ('d'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$do$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__do = {
  TO_UNICODE ('d'),
  TO_UNICODE ('o'),
} ;

//--- Unicode string for '$drop$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__drop = {
  TO_UNICODE ('d'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
} ;

//--- Unicode string for '$else$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__else = {
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$elsif$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__elsif = {
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$end$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__end = {
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
} ;

//--- Unicode string for '$enum$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__enum = {
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('m'),
} ;

//--- Unicode string for '$error$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__error = {
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$errorMessage$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__errorMessage = {
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('M'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
  TO_UNICODE ('a'),
  TO_UNICODE ('g'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$extension$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__extension = {
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
} ;

//--- Unicode string for '$extern$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__extern = {
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('n'),
} ;

//--- Unicode string for '$false$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__false = {
  TO_UNICODE ('f'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$fileprivate$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__fileprivate = {
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('v'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$filewrapper$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__filewrapper = {
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('w'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('p'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$final$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__final = {
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
} ;

//--- Unicode string for '$fixit$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__fixit = {
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('x'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$for$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__for = {
  TO_UNICODE ('f'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$func$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__func = {
  TO_UNICODE ('f'),
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
} ;

//--- Unicode string for '$generatedInSeparateFile$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__generatedInSeparateFile = {
  TO_UNICODE ('g'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
  TO_UNICODE ('I'),
  TO_UNICODE ('n'),
  TO_UNICODE ('S'),
  TO_UNICODE ('e'),
  TO_UNICODE ('p'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('F'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$grammar$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__grammar = {
  TO_UNICODE ('g'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('m'),
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$graph$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__graph = {
  TO_UNICODE ('g'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('h'),
} ;

//--- Unicode string for '$gui$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__gui = {
  TO_UNICODE ('g'),
  TO_UNICODE ('u'),
  TO_UNICODE ('i'),
} ;

//--- Unicode string for '$if$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__if = {
  TO_UNICODE ('i'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$in$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__in = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
} ;

//--- Unicode string for '$indexing$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__indexing = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
} ;

//--- Unicode string for '$init$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__init = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$insertAfter$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__insertAfter = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE ('A'),
  TO_UNICODE ('f'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$insertBefore$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__insertBefore = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE ('B'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$insertOrReplaceSetter$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__insertOrReplaceSetter = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE ('O'),
  TO_UNICODE ('r'),
  TO_UNICODE ('R'),
  TO_UNICODE ('e'),
  TO_UNICODE ('p'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('e'),
  TO_UNICODE ('S'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$insertSetter$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__insertSetter = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE ('S'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$is$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__is = {
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
} ;

//--- Unicode string for '$label$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__label = {
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('b'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
} ;

//--- Unicode string for '$let$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__let = {
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$lexique$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__lexique = {
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('i'),
  TO_UNICODE ('q'),
  TO_UNICODE ('u'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$libpmAtPath$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__libpmAtPath = {
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('b'),
  TO_UNICODE ('p'),
  TO_UNICODE ('m'),
  TO_UNICODE ('A'),
  TO_UNICODE ('t'),
  TO_UNICODE ('P'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
} ;

//--- Unicode string for '$list$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__list = {
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$listmap$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__listmap = {
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
} ;

//--- Unicode string for '$log$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__log = {
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('g'),
} ;

//--- Unicode string for '$loop$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__loop = {
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
} ;

//--- Unicode string for '$macCodeSign$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__macCodeSign = {
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('C'),
  TO_UNICODE ('o'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('S'),
  TO_UNICODE ('i'),
  TO_UNICODE ('g'),
  TO_UNICODE ('n'),
} ;

//--- Unicode string for '$makefile-macosx$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__makefile_2D_macosx = {
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('-'),
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('s'),
  TO_UNICODE ('x'),
} ;

//--- Unicode string for '$makefile-unix$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__makefile_2D_unix = {
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('-'),
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('i'),
  TO_UNICODE ('x'),
} ;

//--- Unicode string for '$makefile-win32-on-macosx$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__makefile_2D_win_33__32__2D_on_2D_macosx = {
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('-'),
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('3'),
  TO_UNICODE ('2'),
  TO_UNICODE ('-'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('-'),
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('s'),
  TO_UNICODE ('x'),
} ;

//--- Unicode string for '$makefile-x86linux32-on-macosx$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx = {
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('-'),
  TO_UNICODE ('x'),
  TO_UNICODE ('8'),
  TO_UNICODE ('6'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('x'),
  TO_UNICODE ('3'),
  TO_UNICODE ('2'),
  TO_UNICODE ('-'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('-'),
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('s'),
  TO_UNICODE ('x'),
} ;

//--- Unicode string for '$makefile-x86linux64-on-macosx$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx = {
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('-'),
  TO_UNICODE ('x'),
  TO_UNICODE ('8'),
  TO_UNICODE ('6'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('x'),
  TO_UNICODE ('6'),
  TO_UNICODE ('4'),
  TO_UNICODE ('-'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('-'),
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('s'),
  TO_UNICODE ('x'),
} ;

//--- Unicode string for '$map$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__map = {
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
} ;

//--- Unicode string for '$mod$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__mod = {
  TO_UNICODE ('m'),
  TO_UNICODE ('o'),
  TO_UNICODE ('d'),
} ;

//--- Unicode string for '$mutating$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__mutating = {
  TO_UNICODE ('m'),
  TO_UNICODE ('u'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
} ;

//--- Unicode string for '$nonAtomicSelection$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__nonAtomicSelection = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('A'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('m'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
  TO_UNICODE ('S'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
} ;

//--- Unicode string for '$not$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__not = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$on$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__on = {
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
} ;

//--- Unicode string for '$once$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__once = {
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$operator$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__operator = {
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$option$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__option = {
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
} ;

//--- Unicode string for '$or$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__or = {
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$override$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__override = {
  TO_UNICODE ('o'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$package$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__package = {
  TO_UNICODE ('p'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
  TO_UNICODE ('a'),
  TO_UNICODE ('g'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$parse$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__parse = {
  TO_UNICODE ('p'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$preserved$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__preserved = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
} ;

//--- Unicode string for '$private$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__private = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('v'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$proc$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__proc = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('c'),
} ;

//--- Unicode string for '$project$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__project = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('j'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$protected$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__protected = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
} ;

//--- Unicode string for '$public$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__public = {
  TO_UNICODE ('p'),
  TO_UNICODE ('u'),
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
} ;

//--- Unicode string for '$quietOutputByDefault$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__quietOutputByDefault = {
  TO_UNICODE ('q'),
  TO_UNICODE ('u'),
  TO_UNICODE ('i'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('O'),
  TO_UNICODE ('u'),
  TO_UNICODE ('t'),
  TO_UNICODE ('p'),
  TO_UNICODE ('u'),
  TO_UNICODE ('t'),
  TO_UNICODE ('B'),
  TO_UNICODE ('y'),
  TO_UNICODE ('D'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('a'),
  TO_UNICODE ('u'),
  TO_UNICODE ('l'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$remove$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__remove = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('m'),
  TO_UNICODE ('o'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$removeSetter$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__removeSetter = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('m'),
  TO_UNICODE ('o'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE ('S'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$repeat$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__repeat = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('p'),
  TO_UNICODE ('e'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$replaceBy$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__replaceBy = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('p'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('e'),
  TO_UNICODE ('B'),
  TO_UNICODE ('y'),
} ;

//--- Unicode string for '$rewind$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__rewind = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
} ;

//--- Unicode string for '$rule$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__rule = {
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$searchMethod$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__searchMethod = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE ('M'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('o'),
  TO_UNICODE ('d'),
} ;

//--- Unicode string for '$searchString$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__searchString = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE ('S'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
} ;

//--- Unicode string for '$select$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__select = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$selector$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__selector = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$self$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__self = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('f'),
} ;

//--- Unicode string for '$send$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__send = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
} ;

//--- Unicode string for '$sortedlist$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__sortedlist = {
  TO_UNICODE ('s'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$spoil$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__spoil = {
  TO_UNICODE ('s'),
  TO_UNICODE ('p'),
  TO_UNICODE ('o'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
} ;

//--- Unicode string for '$struct$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__struct = {
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$style$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__style = {
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('y'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$super$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__super = {
  TO_UNICODE ('s'),
  TO_UNICODE ('u'),
  TO_UNICODE ('p'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$switch$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__switch = {
  TO_UNICODE ('s'),
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
} ;

//--- Unicode string for '$syntax$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__syntax = {
  TO_UNICODE ('s'),
  TO_UNICODE ('y'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('x'),
} ;

//--- Unicode string for '$tag$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__tag = {
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('g'),
} ;

//--- Unicode string for '$template$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__template = {
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('m'),
  TO_UNICODE ('p'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$templateEndMark$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__templateEndMark = {
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('m'),
  TO_UNICODE ('p'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('E'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE ('M'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('k'),
} ;

//--- Unicode string for '$templateReplacement$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__templateReplacement = {
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('m'),
  TO_UNICODE ('p'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('R'),
  TO_UNICODE ('e'),
  TO_UNICODE ('p'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('e'),
  TO_UNICODE ('m'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
} ;

//--- Unicode string for '$then$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__then = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
} ;

//--- Unicode string for '$tool-source$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__tool_2D_source = {
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
  TO_UNICODE ('-'),
  TO_UNICODE ('s'),
  TO_UNICODE ('o'),
  TO_UNICODE ('u'),
  TO_UNICODE ('r'),
  TO_UNICODE ('c'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$translate$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__translate = {
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$true$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__true = {
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$typealias$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__typealias = {
  TO_UNICODE ('t'),
  TO_UNICODE ('y'),
  TO_UNICODE ('p'),
  TO_UNICODE ('e'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
} ;

//--- Unicode string for '$unused$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__unused = {
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
} ;

//--- Unicode string for '$useGrammar$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__useGrammar = {
  TO_UNICODE ('u'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('G'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('m'),
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$usefull$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__usefull = {
  TO_UNICODE ('u'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('u'),
  TO_UNICODE ('l'),
  TO_UNICODE ('l'),
} ;

//--- Unicode string for '$var$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__var = {
  TO_UNICODE ('v'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
} ;

//--- Unicode string for '$warning$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__warning = {
  TO_UNICODE ('w'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('n'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
} ;

//--- Unicode string for '$while$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__while = {
  TO_UNICODE ('w'),
  TO_UNICODE ('h'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$with$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__with = {
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
} ;

//--- Unicode string for '${$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___7B_ = {
  TO_UNICODE ('{'),
} ;

//--- Unicode string for '$|$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___7C_ = {
  TO_UNICODE ('|'),
} ;

//--- Unicode string for '$||$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___7C__7C_ = {
  TO_UNICODE ('|'),
  TO_UNICODE ('|'),
} ;

//--- Unicode string for '$}$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___7D_ = {
  TO_UNICODE ('}'),
} ;

//--- Unicode string for '$~$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___7E_ = {
  TO_UNICODE ('~'),
} ;

//--------------------------------------------------------------------------------------------------
//             Key words table 'attributeKeyWordList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_galgasScanner_34__attributeKeyWordList = 37 ;

static const C_unicode_lexique_table_entry ktable_for_galgasScanner_34__attributeKeyWordList [ktable_size_galgasScanner_34__attributeKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__once, Lexique_galgasScanner_34_::kToken__25_once),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__MacOS, Lexique_galgasScanner_34_::kToken__25_MacOS),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__remove, Lexique_galgasScanner_34_::kToken__25_remove),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__usefull, Lexique_galgasScanner_34_::kToken__25_usefull),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__app_2D_link, Lexique_galgasScanner_34_::kToken__25_app_2D_link),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__selector, Lexique_galgasScanner_34_::kToken__25_selector),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__preserved, Lexique_galgasScanner_34_::kToken__25_preserved),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__replaceBy, Lexique_galgasScanner_34_::kToken__25_replaceBy),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__translate, Lexique_galgasScanner_34_::kToken__25_translate),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__app_2D_source, Lexique_galgasScanner_34_::kToken__25_app_2D_source),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__useGrammar, Lexique_galgasScanner_34_::kToken__25_useGrammar),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__insertAfter, Lexique_galgasScanner_34_::kToken__25_insertAfter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__libpmAtPath, Lexique_galgasScanner_34_::kToken__25_libpmAtPath),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__macCodeSign, Lexique_galgasScanner_34_::kToken__25_macCodeSign),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__tool_2D_source, Lexique_galgasScanner_34_::kToken__25_tool_2D_source),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__errorMessage, Lexique_galgasScanner_34_::kToken__25_errorMessage),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__insertBefore, Lexique_galgasScanner_34_::kToken__25_insertBefore),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__insertSetter, Lexique_galgasScanner_34_::kToken__25_insertSetter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__removeSetter, Lexique_galgasScanner_34_::kToken__25_removeSetter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__searchMethod, Lexique_galgasScanner_34_::kToken__25_searchMethod),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__searchString, Lexique_galgasScanner_34_::kToken__25_searchString),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__makefile_2D_unix, Lexique_galgasScanner_34_::kToken__25_makefile_2D_unix),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__MacOSDeployment, Lexique_galgasScanner_34_::kToken__25_MacOSDeployment),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__makefile_2D_macosx, Lexique_galgasScanner_34_::kToken__25_makefile_2D_macosx),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__templateEndMark, Lexique_galgasScanner_34_::kToken__25_templateEndMark),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__codeblocks_2D_linux_33__32_, Lexique_galgasScanner_34_::kToken__25_codeblocks_2D_linux_33__32_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__codeblocks_2D_linux_36__34_, Lexique_galgasScanner_34_::kToken__25_codeblocks_2D_linux_36__34_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__codeblocks_2D_windows, Lexique_galgasScanner_34_::kToken__25_codeblocks_2D_windows),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__nonAtomicSelection, Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__templateReplacement, Lexique_galgasScanner_34_::kToken__25_templateReplacement),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__quietOutputByDefault, Lexique_galgasScanner_34_::kToken__25_quietOutputByDefault),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__applicationBundleBase, Lexique_galgasScanner_34_::kToken__25_applicationBundleBase),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__insertOrReplaceSetter, Lexique_galgasScanner_34_::kToken__25_insertOrReplaceSetter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__generatedInSeparateFile, Lexique_galgasScanner_34_::kToken__25_generatedInSeparateFile),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__makefile_2D_win_33__32__2D_on_2D_macosx, Lexique_galgasScanner_34_::kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx, Lexique_galgasScanner_34_::kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx, Lexique_galgasScanner_34_::kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx)
} ;

int32_t Lexique_galgasScanner_34_::search_into_attributeKeyWordList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_galgasScanner_34__attributeKeyWordList, ktable_size_galgasScanner_34__attributeKeyWordList) ;
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'galgasDelimitorsList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_galgasScanner_34__galgasDelimitorsList = 44 ;

static const C_unicode_lexique_table_entry ktable_for_galgasScanner_34__galgasDelimitorsList [ktable_size_galgasScanner_34__galgasDelimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___26_, Lexique_galgasScanner_34_::kToken__26_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___28_, Lexique_galgasScanner_34_::kToken__28_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___29_, Lexique_galgasScanner_34_::kToken__29_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2A_, Lexique_galgasScanner_34_::kToken__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2B_, Lexique_galgasScanner_34_::kToken__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2C_, Lexique_galgasScanner_34_::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2D_, Lexique_galgasScanner_34_::kToken__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2F_, Lexique_galgasScanner_34_::kToken__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3A_, Lexique_galgasScanner_34_::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3B_, Lexique_galgasScanner_34_::kToken__3B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3D_, Lexique_galgasScanner_34_::kToken__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3E_, Lexique_galgasScanner_34_::kToken__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___5B_, Lexique_galgasScanner_34_::kToken__5B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___5D_, Lexique_galgasScanner_34_::kToken__5D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___5E_, Lexique_galgasScanner_34_::kToken__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___60_, Lexique_galgasScanner_34_::kToken__60_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___7B_, Lexique_galgasScanner_34_::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___7C_, Lexique_galgasScanner_34_::kToken__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___7D_, Lexique_galgasScanner_34_::kToken__7D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___7E_, Lexique_galgasScanner_34_::kToken__7E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___21__3D_, Lexique_galgasScanner_34_::kToken__21__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___21__5E_, Lexique_galgasScanner_34_::kToken__21__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___26__26_, Lexique_galgasScanner_34_::kToken__26__26_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___26__2A_, Lexique_galgasScanner_34_::kToken__26__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___26__2B_, Lexique_galgasScanner_34_::kToken__26__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___26__2D_, Lexique_galgasScanner_34_::kToken__26__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___26__2F_, Lexique_galgasScanner_34_::kToken__26__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2A__3D_, Lexique_galgasScanner_34_::kToken__2A__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2B__2B_, Lexique_galgasScanner_34_::kToken__2B__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2B__3D_, Lexique_galgasScanner_34_::kToken__2B__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2D__2D_, Lexique_galgasScanner_34_::kToken__2D__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2D__3D_, Lexique_galgasScanner_34_::kToken__2D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2D__3E_, Lexique_galgasScanner_34_::kToken__2D__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2F__3D_, Lexique_galgasScanner_34_::kToken__2F__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3A__3E_, Lexique_galgasScanner_34_::kToken__3A__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3D__3D_, Lexique_galgasScanner_34_::kToken__3D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3E__3D_, Lexique_galgasScanner_34_::kToken__3E__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3E__3E_, Lexique_galgasScanner_34_::kToken__3E__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3F__5E_, Lexique_galgasScanner_34_::kToken__3F__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___7C__7C_, Lexique_galgasScanner_34_::kToken__7C__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___21__3D__3D_, Lexique_galgasScanner_34_::kToken__21__3D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___26__2B__2B_, Lexique_galgasScanner_34_::kToken__26__2B__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___26__2D__2D_, Lexique_galgasScanner_34_::kToken__26__2D__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3D__3D__3D_, Lexique_galgasScanner_34_::kToken__3D__3D__3D_)
} ;

int32_t Lexique_galgasScanner_34_::search_into_galgasDelimitorsList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_galgasScanner_34__galgasDelimitorsList, ktable_size_galgasScanner_34__galgasDelimitorsList) ;
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'galgasKeyWordList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_galgasScanner_34__galgasKeyWordList = 82 ;

static const C_unicode_lexique_table_entry ktable_for_galgasScanner_34__galgasKeyWordList [ktable_size_galgasScanner_34__galgasKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__as, Lexique_galgasScanner_34_::kToken_as),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__do, Lexique_galgasScanner_34_::kToken_do),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__if, Lexique_galgasScanner_34_::kToken_if),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__in, Lexique_galgasScanner_34_::kToken_in),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__is, Lexique_galgasScanner_34_::kToken_is),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__on, Lexique_galgasScanner_34_::kToken_on),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__or, Lexique_galgasScanner_34_::kToken_or),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__end, Lexique_galgasScanner_34_::kToken_end),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__for, Lexique_galgasScanner_34_::kToken_for),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__gui, Lexique_galgasScanner_34_::kToken_gui),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__let, Lexique_galgasScanner_34_::kToken_let),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__log, Lexique_galgasScanner_34_::kToken_log),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__map, Lexique_galgasScanner_34_::kToken_map),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__mod, Lexique_galgasScanner_34_::kToken_mod),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__not, Lexique_galgasScanner_34_::kToken_not),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__tag, Lexique_galgasScanner_34_::kToken_tag),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__var, Lexique_galgasScanner_34_::kToken_var),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__bang, Lexique_galgasScanner_34_::kToken_bang),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__case, Lexique_galgasScanner_34_::kToken_case),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__dict, Lexique_galgasScanner_34_::kToken_dict),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__drop, Lexique_galgasScanner_34_::kToken_drop),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__else, Lexique_galgasScanner_34_::kToken_else),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__enum, Lexique_galgasScanner_34_::kToken_enum),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__func, Lexique_galgasScanner_34_::kToken_func),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__init, Lexique_galgasScanner_34_::kToken_init),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__list, Lexique_galgasScanner_34_::kToken_list),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__loop, Lexique_galgasScanner_34_::kToken_loop),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__proc, Lexique_galgasScanner_34_::kToken_proc),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__rule, Lexique_galgasScanner_34_::kToken_rule),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__self, Lexique_galgasScanner_34_::kToken_self),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__send, Lexique_galgasScanner_34_::kToken_send),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__then, Lexique_galgasScanner_34_::kToken_then),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__true, Lexique_galgasScanner_34_::kToken_true),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__with, Lexique_galgasScanner_34_::kToken_with),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__after, Lexique_galgasScanner_34_::kToken_after),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__block, Lexique_galgasScanner_34_::kToken_block),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__class, Lexique_galgasScanner_34_::kToken_class),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__elsif, Lexique_galgasScanner_34_::kToken_elsif),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__error, Lexique_galgasScanner_34_::kToken_error),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__false, Lexique_galgasScanner_34_::kToken_false),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__final, Lexique_galgasScanner_34_::kToken_final),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__fixit, Lexique_galgasScanner_34_::kToken_fixit),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__graph, Lexique_galgasScanner_34_::kToken_graph),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__label, Lexique_galgasScanner_34_::kToken_label),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__parse, Lexique_galgasScanner_34_::kToken_parse),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__spoil, Lexique_galgasScanner_34_::kToken_spoil),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__style, Lexique_galgasScanner_34_::kToken_style),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__super, Lexique_galgasScanner_34_::kToken_super),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__while, Lexique_galgasScanner_34_::kToken_while),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__before, Lexique_galgasScanner_34_::kToken_before),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__extern, Lexique_galgasScanner_34_::kToken_extern),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__option, Lexique_galgasScanner_34_::kToken_option),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__public, Lexique_galgasScanner_34_::kToken_public),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__repeat, Lexique_galgasScanner_34_::kToken_repeat),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__rewind, Lexique_galgasScanner_34_::kToken_rewind),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__select, Lexique_galgasScanner_34_::kToken_select),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__struct, Lexique_galgasScanner_34_::kToken_struct),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__switch, Lexique_galgasScanner_34_::kToken_switch),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__syntax, Lexique_galgasScanner_34_::kToken_syntax),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__unused, Lexique_galgasScanner_34_::kToken_unused),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__between, Lexique_galgasScanner_34_::kToken_between),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__boolset, Lexique_galgasScanner_34_::kToken_boolset),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__default, Lexique_galgasScanner_34_::kToken_default),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__grammar, Lexique_galgasScanner_34_::kToken_grammar),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__lexique, Lexique_galgasScanner_34_::kToken_lexique),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__listmap, Lexique_galgasScanner_34_::kToken_listmap),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__package, Lexique_galgasScanner_34_::kToken_package),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__private, Lexique_galgasScanner_34_::kToken_private),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__project, Lexique_galgasScanner_34_::kToken_project),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__warning, Lexique_galgasScanner_34_::kToken_warning),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__abstract, Lexique_galgasScanner_34_::kToken_abstract),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__indexing, Lexique_galgasScanner_34_::kToken_indexing),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__mutating, Lexique_galgasScanner_34_::kToken_mutating),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__operator, Lexique_galgasScanner_34_::kToken_operator),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__override, Lexique_galgasScanner_34_::kToken_override),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__template, Lexique_galgasScanner_34_::kToken_template),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__extension, Lexique_galgasScanner_34_::kToken_extension),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__protected, Lexique_galgasScanner_34_::kToken_protected),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__typealias, Lexique_galgasScanner_34_::kToken_typealias),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__sortedlist, Lexique_galgasScanner_34_::kToken_sortedlist),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__fileprivate, Lexique_galgasScanner_34_::kToken_fileprivate),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__filewrapper, Lexique_galgasScanner_34_::kToken_filewrapper)
} ;

int32_t Lexique_galgasScanner_34_::search_into_galgasKeyWordList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_galgasScanner_34__galgasKeyWordList, ktable_size_galgasScanner_34__galgasKeyWordList) ;
}


//--------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                
//--------------------------------------------------------------------------------------------------

String Lexique_galgasScanner_34_::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_galgasScanner_34_ * ptr = (const cTokenFor_galgasScanner_34_ *) inTokenPtr ;
  String s ;
  if (ptr == nullptr) {
    s.appendCString ("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.appendCString ("$$") ;
      break ;
    case kToken_identifier:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("identifier") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_double_2E_xxx:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("double.xxx") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendDouble (ptr->mLexicalAttribute_floatValue) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_literalInt:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("literalInt") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_bigintValue.decimalString ()) ;
      break ;
    case kToken__2E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (".") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2E__2E__2E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("...") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2E__2E__3C_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("..<") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__40_type:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("@type") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__27_char_27_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("'char'") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendChar (ptr->mLexicalAttribute_charValue) ;
      break ;
    case kToken__24_terminal_24_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("$terminal$") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_comment:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("comment") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_commentMark:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("commentMark") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3F_selector_3A_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("\?selector:") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__3F__21_selector_3A_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("\?!selector:") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__3F__21_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("\?!") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__21_selector_3A_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("!selector:") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__21__3F_selector_3A_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("!\?selector:") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__3C_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("<") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3C__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("<=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3C__3C_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("<<") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3C_non_5F_terminal_3E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("<non_terminal>") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__22_string_22_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("\"string\"") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_abstract:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("abstract") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_after:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("after") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_as:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("as") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_bang:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("bang") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_before:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("before") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_between:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("between") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_block:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("block") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_boolset:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("boolset") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_case:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("case") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_class:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("class") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_default:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("default") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_dict:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("dict") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_do:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("do") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_drop:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("drop") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_else:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("else") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_elsif:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("elsif") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_end:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("end") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_enum:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("enum") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_error:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("error") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_extension:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("extension") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_extern:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("extern") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_false:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("false") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_fileprivate:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("fileprivate") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_filewrapper:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("filewrapper") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_final:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("final") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_for:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("for") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_fixit:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("fixit") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_func:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("func") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_grammar:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("grammar") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_graph:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("graph") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_gui:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("gui") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_if:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("if") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_in:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("in") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_indexing:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("indexing") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_init:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("init") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_is:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("is") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_label:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("label") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_let:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("let") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_lexique:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("lexique") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_list:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("list") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_listmap:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("listmap") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_log:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("log") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_loop:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("loop") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_map:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("map") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_mod:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("mod") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_mutating:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("mutating") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_not:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("not") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_on:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("on") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_operator:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("operator") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_option:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("option") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_or:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("or") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_override:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("override") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_package:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("package") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_parse:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("parse") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_public:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("public") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_protected:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("protected") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_private:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("private") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_proc:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("proc") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_project:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("project") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_repeat:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("repeat") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_rewind:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("rewind") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_rule:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("rule") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_select:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("select") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_self:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("self") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_send:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("send") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_sortedlist:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("sortedlist") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_spoil:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("spoil") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_super:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("super") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_struct:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("struct") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_style:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("style") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_switch:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("switch") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_syntax:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("syntax") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_tag:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("tag") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_template:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("template") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_then:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("then") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_true:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("true") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_typealias:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("typealias") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_unused:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("unused") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_var:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("var") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_warning:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("warning") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_while:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("while") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_with:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("with") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_app_2D_link:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%app-link") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_app_2D_source:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%app-source") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_makefile_2D_macosx:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%makefile-macosx") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_makefile_2D_unix:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%makefile-unix") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%makefile-x86linux32-on-macosx") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%makefile-x86linux64-on-macosx") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%makefile-win32-on-macosx") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_codeblocks_2D_windows:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%codeblocks-windows") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_codeblocks_2D_linux_33__32_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%codeblocks-linux32") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_codeblocks_2D_linux_36__34_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%codeblocks-linux64") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_applicationBundleBase:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%applicationBundleBase") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_MacOS:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%MacOS") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_MacOSDeployment:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%MacOSDeployment") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_quietOutputByDefault:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%quietOutputByDefault") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_macCodeSign:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%macCodeSign") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_libpmAtPath:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%libpmAtPath") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_tool_2D_source:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%tool-source") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_translate:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%translate") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_once:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%once") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_usefull:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%usefull") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_generatedInSeparateFile:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%generatedInSeparateFile") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_nonAtomicSelection:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%nonAtomicSelection") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_templateEndMark:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%templateEndMark") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_preserved:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%preserved") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_selector:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%selector") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_insertSetter:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%insertSetter") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_searchMethod:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%searchMethod") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_removeSetter:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%removeSetter") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_errorMessage:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%errorMessage") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_insertOrReplaceSetter:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%insertOrReplaceSetter") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_remove:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%remove") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_replaceBy:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%replaceBy") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_insertAfter:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%insertAfter") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_insertBefore:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%insertBefore") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_useGrammar:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%useGrammar") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_searchString:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%searchString") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__25_templateReplacement:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("%templateReplacement") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2A_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("*") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2C_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (",") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2B_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("+") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__26__2B_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("&+") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__26__2D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("&-") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__26__2A_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("&*") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__26__2F_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("&/") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (">") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3B_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (";") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3A_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (":") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3A__3E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (":>") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("-") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__28_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("(") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__29_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (")") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2D__3E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("->") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3D__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("==") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__26__26_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("&&") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__5B_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("[") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__5D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("]") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2B__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("+=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2D__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("-=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2A__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("*=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2F__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("/=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2F_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("/") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__21__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("!=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3E__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (">=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__26_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("&") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__7B_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("{") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__7D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("}") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__60_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("`") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__7C__7C_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("||") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__7C_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("|") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__5E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("^") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3E__3E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (">>") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__7E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("~") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2D__2D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("--") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2B__2B_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("++") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__26__2D__2D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("&--") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__26__2B__2B_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("&++") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3D__3D__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("===") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__21__3D__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("!==") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3F__5E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("\?^") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__21__5E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("!^") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    default:
      break ;
    }
  }
  return s ;
}

//--------------------------------------------------------------------------------------------------
//                           Template Delimiters                                                 
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//                           Template Replacements                                               
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark                                 
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//               INTERNAL PARSE LEXICAL TOKEN                                         
//--------------------------------------------------------------------------------------------------

void Lexique_galgasScanner_34_::internalParseLexicalToken (cTokenFor_galgasScanner_34_ & token) {
  bool loop = true ;
  token.mLexicalAttribute_bigintValue = BigSigned () ;
  token.mLexicalAttribute_charValue = TO_UNICODE (0) ;
  token.mLexicalAttribute_floatValue = 0.0 ;
  token.mLexicalAttribute_identifierString.removeAllKeepingCapacity () ;
  token.mLexicalAttribute_sint_33__32_value = 0 ;
  token.mLexicalAttribute_sint_36__34_value = 0 ;
  token.mLexicalAttribute_tokenString.removeAllKeepingCapacity () ;
  token.mLexicalAttribute_uint_33__32_value = 0 ;
  token.mLexicalAttribute_uint_36__34_value = 0 ;
  mTokenStartLocation = mCurrentLocation ;
  try{
    if (testForCharWithFunction (isUnicodeLetter)) {
      do {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, ::scanner_function_toLower (*this, previousChar ())) ;
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (token.mTokenCode == -1) {
        token.mTokenCode = search_into_galgasKeyWordList (token.mLexicalAttribute_identifierString) ;
      }
      if (token.mTokenCode == -1) {
        token.mTokenCode = kToken_identifier ;
      }
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___30_x, true)) {
      do {
        if (testForInputUTF32Char (TO_UNICODE ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        do {
          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        ::scanner_routine_convertHexStringIntoBigInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_bigintValue, gLexicalMessage_galgasScanner_34__internalError) ;
        token.mTokenCode = kToken_literalInt ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_galgasScanner_34__hexDigitError COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
      ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
      do {
        if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32Char (TO_UNICODE ('.'))) {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('.')) ;
        do {
          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        ::scanner_routine_convertStringToDouble (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_floatValue, gLexicalMessage_galgasScanner_34__floatNumberConversionError) ;
        token.mTokenCode = kToken_double_2E_xxx ;
        enterToken (token) ;
      }else{
        ::scanner_routine_convertDecimalStringIntoBigInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_bigintValue, gLexicalMessage_galgasScanner_34__internalError) ;
        token.mTokenCode = kToken_literalInt ;
        enterToken (token) ;
      }
    }else if (testForInputUTF32Char (TO_UNICODE ('.'))) {
      if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('0')) ;
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('.')) ;
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        do {
          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        ::scanner_routine_convertStringToDouble (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_floatValue, gLexicalMessage_galgasScanner_34__floatNumberConversionError) ;
        token.mTokenCode = kToken_double_2E_xxx ;
        enterToken (token) ;
      }else{
        if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2E__2E_, true)) {
          token.mTokenCode = kToken__2E__2E__2E_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2E__3C_, true)) {
          token.mTokenCode = kToken__2E__2E__3C_ ;
          enterToken (token) ;
        }else{
          token.mTokenCode = kToken__2E_ ;
          enterToken (token) ;
        }
      }
    }else if (testForInputUTF32Char (TO_UNICODE ('@'))) {
      if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        if (testForInputUTF32Char (TO_UNICODE ('-'))) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            }else{
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
        }
      }else{
        lexicalError (gLexicalMessage_galgasScanner_34__incorrectTypeNameError COMMA_LINE_AND_SOURCE_FILE) ;
      }
      token.mTokenCode = kToken__40_type ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (TO_UNICODE ('%'))) {
      if (testForCharWithFunction (isUnicodeLetter)) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32Char (TO_UNICODE ('-')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
      }else{
        lexicalError (gLexicalMessage_galgasScanner_34__attributeError COMMA_LINE_AND_SOURCE_FILE) ;
      }
      if (token.mTokenCode == -1) {
        token.mTokenCode = search_into_attributeKeyWordList (token.mLexicalAttribute_tokenString) ;
      }
      if (token.mTokenCode == -1) {
        lexicalError (gLexicalMessage_galgasScanner_34__undefinedAttribute COMMA_LINE_AND_SOURCE_FILE) ;
      }
      enterToken (token) ;
    }else if (testForInputUTF32Char (TO_UNICODE ('\''))) {
      if (testForInputUTF32Char (TO_UNICODE ('\\'))) {
        if (testForInputUTF32Char (TO_UNICODE ('f'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\f')) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('n'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\n')) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('r'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\r')) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('t'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\t')) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('v'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\v')) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('\\'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\\')) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('0'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\0')) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('\''))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\'')) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('u'))) {
          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
            ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
            if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                  ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_galgasScanner_34__unassignedUnicodeValue) ;
                }else{
                  lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else{
              lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else{
            lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else if (testForInputUTF32Char (TO_UNICODE ('U'))) {
          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
            ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
            if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                  if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                    ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                    if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                      ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                      if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                        ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                        if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                          ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_galgasScanner_34__unassignedUnicodeValue) ;
                        }else{
                          lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                        }
                      }else{
                        lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                      }
                    }else{
                      lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                    }
                  }else{
                    lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                  }
                }else{
                  lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else{
              lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else{
            lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else{
          lexicalError (gLexicalMessage_galgasScanner_34__incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
        }
      }else if (testForInputUTF32CharRange (TO_UNICODE (' '), TO_UNICODE (65533))) {
        ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, previousChar ()) ;
      }else{
        lexicalError (gLexicalMessage_galgasScanner_34__incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
      }
      if (testForInputUTF32Char (TO_UNICODE ('\''))) {
        token.mTokenCode = kToken__27_char_27_ ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_galgasScanner_34__incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32Char (TO_UNICODE ('$'))) {
      if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5C__5C_, true)) {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\\')) ;
        do {
          if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5C__5C_, true)) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\\')) ;
          }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5C__24_, true)) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('$')) ;
          }else if (testForInputUTF32CharRange (TO_UNICODE ('!'), TO_UNICODE ('#')) || testForInputUTF32CharRange (TO_UNICODE ('%'), TO_UNICODE (65533))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
      }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5C__24_, true)) {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('$')) ;
        do {
          if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5C__5C_, true)) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\\')) ;
          }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5C__24_, true)) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('$')) ;
          }else if (testForInputUTF32CharRange (TO_UNICODE ('!'), TO_UNICODE ('#')) || testForInputUTF32CharRange (TO_UNICODE ('%'), TO_UNICODE (65533))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
      }else if (testForInputUTF32CharRange (TO_UNICODE ('!'), TO_UNICODE ('#')) || testForInputUTF32CharRange (TO_UNICODE ('%'), TO_UNICODE (65533))) {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        do {
          if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5C__5C_, true)) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\\')) ;
          }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5C__24_, true)) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('$')) ;
          }else if (testForInputUTF32CharRange (TO_UNICODE ('!'), TO_UNICODE ('#')) || testForInputUTF32CharRange (TO_UNICODE ('%'), TO_UNICODE (65533))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
      }else{
        lexicalError (gLexicalMessage_galgasScanner_34__incorrect_terminal_start COMMA_LINE_AND_SOURCE_FILE) ;
      }
      if (testForInputUTF32Char (TO_UNICODE ('$'))) {
      }else{
        lexicalError (gLexicalMessage_galgasScanner_34__incorrect_terminal_end COMMA_LINE_AND_SOURCE_FILE) ;
      }
      token.mTokenCode = kToken__24_terminal_24_ ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (TO_UNICODE ('#'))) {
      if (testForInputUTF32Char (TO_UNICODE ('!'))) {
        do {
          if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (65533))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        enterDroppedTerminal (kToken_commentMark) ;
      }else{
        do {
          if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (1114111))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        enterDroppedTerminal (kToken_comment) ;
      }
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2F__2F_, true)) {
      if (testForInputUTF32Char (TO_UNICODE ('!'))) {
        do {
          if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (65533))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        enterDroppedTerminal (kToken_commentMark) ;
      }else{
        do {
          if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (1114111))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        enterDroppedTerminal (kToken_comment) ;
      }
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3D__3D__3D_, true)) {
      token.mTokenCode = kToken__3D__3D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___26__2D__2D_, true)) {
      token.mTokenCode = kToken__26__2D__2D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___26__2B__2B_, true)) {
      token.mTokenCode = kToken__26__2B__2B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___21__3D__3D_, true)) {
      token.mTokenCode = kToken__21__3D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___7C__7C_, true)) {
      token.mTokenCode = kToken__7C__7C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3F__5E_, true)) {
      token.mTokenCode = kToken__3F__5E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3E__3E_, true)) {
      token.mTokenCode = kToken__3E__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3E__3D_, true)) {
      token.mTokenCode = kToken__3E__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3D__3D_, true)) {
      token.mTokenCode = kToken__3D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3A__3E_, true)) {
      token.mTokenCode = kToken__3A__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2F__3D_, true)) {
      token.mTokenCode = kToken__2F__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2D__3E_, true)) {
      token.mTokenCode = kToken__2D__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2D__3D_, true)) {
      token.mTokenCode = kToken__2D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2D__2D_, true)) {
      token.mTokenCode = kToken__2D__2D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2B__3D_, true)) {
      token.mTokenCode = kToken__2B__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2B__2B_, true)) {
      token.mTokenCode = kToken__2B__2B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2A__3D_, true)) {
      token.mTokenCode = kToken__2A__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___26__2F_, true)) {
      token.mTokenCode = kToken__26__2F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___26__2D_, true)) {
      token.mTokenCode = kToken__26__2D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___26__2B_, true)) {
      token.mTokenCode = kToken__26__2B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___26__2A_, true)) {
      token.mTokenCode = kToken__26__2A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___26__26_, true)) {
      token.mTokenCode = kToken__26__26_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___21__5E_, true)) {
      token.mTokenCode = kToken__21__5E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___21__3D_, true)) {
      token.mTokenCode = kToken__21__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___7E_, true)) {
      token.mTokenCode = kToken__7E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___7D_, true)) {
      token.mTokenCode = kToken__7D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___7C_, true)) {
      token.mTokenCode = kToken__7C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___7B_, true)) {
      token.mTokenCode = kToken__7B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___60_, true)) {
      token.mTokenCode = kToken__60_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5E_, true)) {
      token.mTokenCode = kToken__5E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5D_, true)) {
      token.mTokenCode = kToken__5D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5B_, true)) {
      token.mTokenCode = kToken__5B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3E_, true)) {
      token.mTokenCode = kToken__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3D_, true)) {
      token.mTokenCode = kToken__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3B_, true)) {
      token.mTokenCode = kToken__3B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3A_, true)) {
      token.mTokenCode = kToken__3A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2F_, true)) {
      token.mTokenCode = kToken__2F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2D_, true)) {
      token.mTokenCode = kToken__2D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2C_, true)) {
      token.mTokenCode = kToken__2C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2B_, true)) {
      token.mTokenCode = kToken__2B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2A_, true)) {
      token.mTokenCode = kToken__2A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___29_, true)) {
      token.mTokenCode = kToken__29_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___28_, true)) {
      token.mTokenCode = kToken__28_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___26_, true)) {
      token.mTokenCode = kToken__26_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3F__21_, true)) {
      const LocationInSource currentLocationForTag_onlyInterrogationExclamationMark = mCurrentLocation ;
      const LocationInSource endLocationForTag_onlyInterrogationExclamationMark = mTokenEndLocation ;
      const utf32 currentCharForTag_onlyInterrogationExclamationMark = mCurrentChar ;
      if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        if (testForInputUTF32Char (TO_UNICODE (':'))) {
          token.mTokenCode = kToken__3F__21_selector_3A_ ;
          enterToken (token) ;
        }else{
          ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
          mCurrentLocation = currentLocationForTag_onlyInterrogationExclamationMark ;
          mTokenEndLocation = endLocationForTag_onlyInterrogationExclamationMark ;
          mCurrentChar = currentCharForTag_onlyInterrogationExclamationMark ;
          token.mTokenCode = kToken__3F__21_ ;
          enterToken (token) ;
        }
      }else{
        token.mTokenCode = kToken__3F__21_ ;
        enterToken (token) ;
      }
    }else if (testForInputUTF32Char (TO_UNICODE ('\?'))) {
      const LocationInSource currentLocationForTag_onlyInterrogationMark = mCurrentLocation ;
      const LocationInSource endLocationForTag_onlyInterrogationMark = mTokenEndLocation ;
      const utf32 currentCharForTag_onlyInterrogationMark = mCurrentChar ;
      if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        if (testForInputUTF32Char (TO_UNICODE (':'))) {
          token.mTokenCode = kToken__3F_selector_3A_ ;
          enterToken (token) ;
        }else{
          ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
          mCurrentLocation = currentLocationForTag_onlyInterrogationMark ;
          mTokenEndLocation = endLocationForTag_onlyInterrogationMark ;
          mCurrentChar = currentCharForTag_onlyInterrogationMark ;
          token.mTokenCode = kToken__3F_selector_3A_ ;
          enterToken (token) ;
        }
      }else{
        token.mTokenCode = kToken__3F_selector_3A_ ;
        enterToken (token) ;
      }
    }else if (testForInputUTF32Char (TO_UNICODE ('!'))) {
      const LocationInSource currentLocationForTag_onlyExclamationMark = mCurrentLocation ;
      const LocationInSource endLocationForTag_onlyExclamationMark = mTokenEndLocation ;
      const utf32 currentCharForTag_onlyExclamationMark = mCurrentChar ;
      if (testForInputUTF32Char (TO_UNICODE ('\?'))) {
        const LocationInSource currentLocationForTag_onlyExclamationInterrogationMark = mCurrentLocation ;
        const LocationInSource endLocationForTag_onlyExclamationInterrogationMark = mTokenEndLocation ;
        const utf32 currentCharForTag_onlyExclamationInterrogationMark = mCurrentChar ;
        if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('_'))) {
            }else{
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
          if (testForInputUTF32Char (TO_UNICODE (':'))) {
            token.mTokenCode = kToken__21__3F_selector_3A_ ;
            enterToken (token) ;
          }else{
            ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
            mCurrentLocation = currentLocationForTag_onlyExclamationInterrogationMark ;
            mTokenEndLocation = endLocationForTag_onlyExclamationInterrogationMark ;
            mCurrentChar = currentCharForTag_onlyExclamationInterrogationMark ;
            token.mTokenCode = kToken__21__3F_selector_3A_ ;
            enterToken (token) ;
          }
        }else{
          token.mTokenCode = kToken__21__3F_selector_3A_ ;
          enterToken (token) ;
        }
      }else if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        if (testForInputUTF32Char (TO_UNICODE (':'))) {
          token.mTokenCode = kToken__21_selector_3A_ ;
          enterToken (token) ;
        }else{
          ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
          mCurrentLocation = currentLocationForTag_onlyExclamationMark ;
          mTokenEndLocation = endLocationForTag_onlyExclamationMark ;
          mCurrentChar = currentCharForTag_onlyExclamationMark ;
          token.mTokenCode = kToken__21_selector_3A_ ;
          enterToken (token) ;
        }
      }else{
        token.mTokenCode = kToken__21_selector_3A_ ;
        enterToken (token) ;
      }
    }else if (testForInputUTF32Char (TO_UNICODE ('<'))) {
      const LocationInSource currentLocationForTag_onlyInfDelimiter = mCurrentLocation ;
      const LocationInSource endLocationForTag_onlyInfDelimiter = mTokenEndLocation ;
      const utf32 currentCharForTag_onlyInfDelimiter = mCurrentChar ;
      if (testForInputUTF32Char (TO_UNICODE ('='))) {
        token.mTokenCode = kToken__3C__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32Char (TO_UNICODE ('<'))) {
        token.mTokenCode = kToken__3C__3C_ ;
        enterToken (token) ;
      }else if (testForCharWithFunction (isUnicodeLetter)) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        if (testForInputUTF32Char (TO_UNICODE ('>'))) {
          token.mTokenCode = kToken__3C_non_5F_terminal_3E_ ;
          enterToken (token) ;
        }else{
          mCurrentLocation = currentLocationForTag_onlyInfDelimiter ;
          mTokenEndLocation = endLocationForTag_onlyInfDelimiter ;
          mCurrentChar = currentCharForTag_onlyInfDelimiter ;
          token.mTokenCode = kToken__3C_ ;
          enterToken (token) ;
        }
      }else{
        token.mTokenCode = kToken__3C_ ;
        enterToken (token) ;
      }
    }else if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
      do {
        if (testForInputUTF32Char (TO_UNICODE ('\\'))) {
          if (testForInputUTF32Char (TO_UNICODE ('f'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\f')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('n'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\n')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('r'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\r')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('t'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\t')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('v'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\v')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('\\'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\\')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\"')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('\''))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\'')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('\?'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\?')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('u'))) {
            if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                  if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                    ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                    ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_galgasScanner_34__unassignedUnicodeValue) ;
                    ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
                  }else{
                    lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                  }
                }else{
                  lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else{
              lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else if (testForInputUTF32Char (TO_UNICODE ('U'))) {
            if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                  if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                    ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                    if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                      ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                      if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                        ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                        if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                            ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                            ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_galgasScanner_34__unassignedUnicodeValue) ;
                            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
                          }else{
                            lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                          }
                        }else{
                          lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                        }
                      }else{
                        lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                      }
                    }else{
                      lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                    }
                  }else{
                    lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                  }
                }else{
                  lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else{
              lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else{
            lexicalError (gLexicalMessage_galgasScanner_34__incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else if (testForInputUTF32Char (TO_UNICODE (' ')) || testForInputUTF32Char (TO_UNICODE ('!')) || testForInputUTF32CharRange (TO_UNICODE ('#'), TO_UNICODE (65533))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
        token.mTokenCode = kToken__22_string_22_ ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_galgasScanner_34__incorrectStringEnd COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE (' '))) {
    }else if (testForInputUTF32Char (TO_UNICODE ('\0'))) { // End of source text ? 
      token.mTokenCode = kToken_ ; // Empty string code
    }else{ // Unknown input character
      unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;
      token.mTokenCode = -1 ; // No token
      advance () ; // ... go throught unknown character
    }
  }catch (const C_lexicalErrorException &) {
    token.mTokenCode = -1 ; // No token
    advance () ; // ... go throught unknown character
  }
}

//--------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N                                         
//--------------------------------------------------------------------------------------------------

bool Lexique_galgasScanner_34_::parseLexicalToken (void) {
  cTokenFor_galgasScanner_34_ token ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
    internalParseLexicalToken (token) ;
  }
  if (UNICODE_VALUE (mCurrentChar) == '\0') {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//--------------------------------------------------------------------------------------------------
//                         E N T E R    T O K E N                                                
//--------------------------------------------------------------------------------------------------

void Lexique_galgasScanner_34_::enterToken (cTokenFor_galgasScanner_34_ & ioToken) {
  cTokenFor_galgasScanner_34_ * ptr = nullptr ;
  macroMyNew (ptr, cTokenFor_galgasScanner_34_ ()) ;
  ptr->mTokenCode = ioToken.mTokenCode ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;
  ioToken.mTemplateStringBeforeToken = "" ;
  ptr->mLexicalAttribute_bigintValue = ioToken.mLexicalAttribute_bigintValue ;
  ptr->mLexicalAttribute_charValue = ioToken.mLexicalAttribute_charValue ;
  ptr->mLexicalAttribute_floatValue = ioToken.mLexicalAttribute_floatValue ;
  ptr->mLexicalAttribute_identifierString = ioToken.mLexicalAttribute_identifierString ;
  ptr->mLexicalAttribute_sint_33__32_value = ioToken.mLexicalAttribute_sint_33__32_value ;
  ptr->mLexicalAttribute_sint_36__34_value = ioToken.mLexicalAttribute_sint_36__34_value ;
  ptr->mLexicalAttribute_tokenString = ioToken.mLexicalAttribute_tokenString ;
  ptr->mLexicalAttribute_uint_33__32_value = ioToken.mLexicalAttribute_uint_33__32_value ;
  ptr->mLexicalAttribute_uint_36__34_value = ioToken.mLexicalAttribute_uint_36__34_value ;
  enterTokenFromPointer (ptr) ;
}

//--------------------------------------------------------------------------------------------------
//               A T T R I B U T E   A C C E S S                                                 
//--------------------------------------------------------------------------------------------------

BigSigned Lexique_galgasScanner_34_::attributeValue_bigintValue (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_bigintValue ;
}

//--------------------------------------------------------------------------------------------------

utf32 Lexique_galgasScanner_34_::attributeValue_charValue (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_charValue ;
}

//--------------------------------------------------------------------------------------------------

double Lexique_galgasScanner_34_::attributeValue_floatValue (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_floatValue ;
}

//--------------------------------------------------------------------------------------------------

String Lexique_galgasScanner_34_::attributeValue_identifierString (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_identifierString ;
}

//--------------------------------------------------------------------------------------------------

int32_t Lexique_galgasScanner_34_::attributeValue_sint_33__32_value (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_sint_33__32_value ;
}

//--------------------------------------------------------------------------------------------------

int64_t Lexique_galgasScanner_34_::attributeValue_sint_36__34_value (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_sint_36__34_value ;
}

//--------------------------------------------------------------------------------------------------

String Lexique_galgasScanner_34_::attributeValue_tokenString (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_tokenString ;
}

//--------------------------------------------------------------------------------------------------

uint32_t Lexique_galgasScanner_34_::attributeValue_uint_33__32_value (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_uint_33__32_value ;
}

//--------------------------------------------------------------------------------------------------

uint64_t Lexique_galgasScanner_34_::attributeValue_uint_36__34_value (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_uint_36__34_value ;
}

//--------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                           
//--------------------------------------------------------------------------------------------------

GALGAS_lbigint Lexique_galgasScanner_34_::synthetizedAttribute_bigintValue (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner_34_) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_bigint value (ptr->mLexicalAttribute_bigintValue) ;
  GALGAS_lbigint result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lchar Lexique_galgasScanner_34_::synthetizedAttribute_charValue (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner_34_) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_char value (ptr->mLexicalAttribute_charValue) ;
  GALGAS_lchar result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ldouble Lexique_galgasScanner_34_::synthetizedAttribute_floatValue (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner_34_) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_double value (ptr->mLexicalAttribute_floatValue) ;
  GALGAS_ldouble result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring Lexique_galgasScanner_34_::synthetizedAttribute_identifierString (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner_34_) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_identifierString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lsint Lexique_galgasScanner_34_::synthetizedAttribute_sint_33__32_value (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner_34_) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_sint value (ptr->mLexicalAttribute_sint_33__32_value) ;
  GALGAS_lsint result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lsint_36__34_ Lexique_galgasScanner_34_::synthetizedAttribute_sint_36__34_value (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner_34_) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_sint_36__34_ value (ptr->mLexicalAttribute_sint_36__34_value) ;
  GALGAS_lsint_36__34_ result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring Lexique_galgasScanner_34_::synthetizedAttribute_tokenString (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner_34_) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_tokenString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint Lexique_galgasScanner_34_::synthetizedAttribute_uint_33__32_value (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner_34_) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_uint value (ptr->mLexicalAttribute_uint_33__32_value) ;
  GALGAS_luint result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint_36__34_ Lexique_galgasScanner_34_::synthetizedAttribute_uint_36__34_value (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner_34_) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_uint_36__34_ value (ptr->mLexicalAttribute_uint_36__34_value) ;
  GALGAS_luint_36__34_ result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist Lexique_galgasScanner_34_::symbols (LOCATION_ARGS) {
  GALGAS_stringlist result = GALGAS_stringlist::class_func_emptyList (THERE) ;
  result.addAssign_operation (GALGAS_string ("identifier") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("double.xxx") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("literalInt") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (".") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("...") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("..<") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("@type") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("'char'") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("$terminal$") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("comment") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("commentMark") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("\?selector:") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("\?!selector:") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("\?!") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("!selector:") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("!\?selector:") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("<") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("<=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("<<") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("<non_terminal>") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("\"string\"") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("abstract") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("after") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("as") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("bang") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("before") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("between") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("block") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("boolset") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("case") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("class") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("default") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("dict") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("do") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("drop") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("else") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("elsif") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("end") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("enum") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("error") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("extension") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("extern") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("false") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("fileprivate") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("filewrapper") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("final") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("for") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("fixit") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("func") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("grammar") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("graph") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("gui") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("if") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("in") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("indexing") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("init") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("is") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("label") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("let") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("lexique") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("list") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("listmap") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("log") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("loop") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("map") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("mod") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("mutating") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("not") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("on") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("operator") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("option") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("or") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("override") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("package") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("parse") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("public") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("protected") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("private") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("proc") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("project") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("repeat") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("rewind") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("rule") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("select") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("self") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("send") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("sortedlist") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("spoil") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("super") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("struct") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("style") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("switch") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("syntax") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("tag") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("template") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("then") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("true") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("typealias") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("unused") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("var") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("warning") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("while") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("with") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%app-link") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%app-source") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%makefile-macosx") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%makefile-unix") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%makefile-x86linux32-on-macosx") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%makefile-x86linux64-on-macosx") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%makefile-win32-on-macosx") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%codeblocks-windows") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%codeblocks-linux32") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%codeblocks-linux64") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%applicationBundleBase") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%MacOS") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%MacOSDeployment") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%quietOutputByDefault") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%macCodeSign") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%libpmAtPath") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%tool-source") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%translate") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%once") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%usefull") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%generatedInSeparateFile") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%nonAtomicSelection") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%templateEndMark") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%preserved") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%selector") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%insertSetter") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%searchMethod") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%removeSetter") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%errorMessage") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%insertOrReplaceSetter") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%remove") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%replaceBy") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%insertAfter") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%insertBefore") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%useGrammar") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%searchString") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%templateReplacement") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("*") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (",") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("+") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("&+") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("&-") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("&*") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("&/") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (">") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (";") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (":") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (":>") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("-") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("(") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (")") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("->") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("==") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("&&") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("[") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("]") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("+=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("-=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("*=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("/=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("/") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("!=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (">=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("&") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("{") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("}") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("`") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("||") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("|") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("^") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (">>") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("~") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("--") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("++") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("&--") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("&++") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("===") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("!==") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("\?^") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("!^") COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordLists_galgasScanner_34_ (TC_UniqueArray <String> & ioList) {
  ioList.appendObject ("galgasScanner4:attributeKeyWordList") ;
  ioList.appendObject ("galgasScanner4:galgasDelimitorsList") ;
  ioList.appendObject ("galgasScanner4:galgasKeyWordList") ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_galgasScanner_34_ (const String & inIdentifier,
                                                        bool & ioFound,
                                                        TC_UniqueArray <String> & ioList) {
  if (inIdentifier == "galgasScanner4:attributeKeyWordList") {
    ioFound = true ;
    ioList.appendObject ("once") ;
    ioList.appendObject ("MacOS") ;
    ioList.appendObject ("remove") ;
    ioList.appendObject ("usefull") ;
    ioList.appendObject ("app-link") ;
    ioList.appendObject ("selector") ;
    ioList.appendObject ("preserved") ;
    ioList.appendObject ("replaceBy") ;
    ioList.appendObject ("translate") ;
    ioList.appendObject ("app-source") ;
    ioList.appendObject ("useGrammar") ;
    ioList.appendObject ("insertAfter") ;
    ioList.appendObject ("libpmAtPath") ;
    ioList.appendObject ("macCodeSign") ;
    ioList.appendObject ("tool-source") ;
    ioList.appendObject ("errorMessage") ;
    ioList.appendObject ("insertBefore") ;
    ioList.appendObject ("insertSetter") ;
    ioList.appendObject ("removeSetter") ;
    ioList.appendObject ("searchMethod") ;
    ioList.appendObject ("searchString") ;
    ioList.appendObject ("makefile-unix") ;
    ioList.appendObject ("MacOSDeployment") ;
    ioList.appendObject ("makefile-macosx") ;
    ioList.appendObject ("templateEndMark") ;
    ioList.appendObject ("codeblocks-linux32") ;
    ioList.appendObject ("codeblocks-linux64") ;
    ioList.appendObject ("codeblocks-windows") ;
    ioList.appendObject ("nonAtomicSelection") ;
    ioList.appendObject ("templateReplacement") ;
    ioList.appendObject ("quietOutputByDefault") ;
    ioList.appendObject ("applicationBundleBase") ;
    ioList.appendObject ("insertOrReplaceSetter") ;
    ioList.appendObject ("generatedInSeparateFile") ;
    ioList.appendObject ("makefile-win32-on-macosx") ;
    ioList.appendObject ("makefile-x86linux32-on-macosx") ;
    ioList.appendObject ("makefile-x86linux64-on-macosx") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "galgasScanner4:galgasDelimitorsList") {
    ioFound = true ;
    ioList.appendObject ("&") ;
    ioList.appendObject ("(") ;
    ioList.appendObject (")") ;
    ioList.appendObject ("*") ;
    ioList.appendObject ("+") ;
    ioList.appendObject (",") ;
    ioList.appendObject ("-") ;
    ioList.appendObject ("/") ;
    ioList.appendObject (":") ;
    ioList.appendObject (";") ;
    ioList.appendObject ("=") ;
    ioList.appendObject (">") ;
    ioList.appendObject ("[") ;
    ioList.appendObject ("]") ;
    ioList.appendObject ("^") ;
    ioList.appendObject ("`") ;
    ioList.appendObject ("{") ;
    ioList.appendObject ("|") ;
    ioList.appendObject ("}") ;
    ioList.appendObject ("~") ;
    ioList.appendObject ("!=") ;
    ioList.appendObject ("!^") ;
    ioList.appendObject ("&&") ;
    ioList.appendObject ("&*") ;
    ioList.appendObject ("&+") ;
    ioList.appendObject ("&-") ;
    ioList.appendObject ("&/") ;
    ioList.appendObject ("*=") ;
    ioList.appendObject ("++") ;
    ioList.appendObject ("+=") ;
    ioList.appendObject ("--") ;
    ioList.appendObject ("-=") ;
    ioList.appendObject ("->") ;
    ioList.appendObject ("/=") ;
    ioList.appendObject (":>") ;
    ioList.appendObject ("==") ;
    ioList.appendObject (">=") ;
    ioList.appendObject (">>") ;
    ioList.appendObject ("\?^") ;
    ioList.appendObject ("||") ;
    ioList.appendObject ("!==") ;
    ioList.appendObject ("&++") ;
    ioList.appendObject ("&--") ;
    ioList.appendObject ("===") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "galgasScanner4:galgasKeyWordList") {
    ioFound = true ;
    ioList.appendObject ("as") ;
    ioList.appendObject ("do") ;
    ioList.appendObject ("if") ;
    ioList.appendObject ("in") ;
    ioList.appendObject ("is") ;
    ioList.appendObject ("on") ;
    ioList.appendObject ("or") ;
    ioList.appendObject ("end") ;
    ioList.appendObject ("for") ;
    ioList.appendObject ("gui") ;
    ioList.appendObject ("let") ;
    ioList.appendObject ("log") ;
    ioList.appendObject ("map") ;
    ioList.appendObject ("mod") ;
    ioList.appendObject ("not") ;
    ioList.appendObject ("tag") ;
    ioList.appendObject ("var") ;
    ioList.appendObject ("bang") ;
    ioList.appendObject ("case") ;
    ioList.appendObject ("dict") ;
    ioList.appendObject ("drop") ;
    ioList.appendObject ("else") ;
    ioList.appendObject ("enum") ;
    ioList.appendObject ("func") ;
    ioList.appendObject ("init") ;
    ioList.appendObject ("list") ;
    ioList.appendObject ("loop") ;
    ioList.appendObject ("proc") ;
    ioList.appendObject ("rule") ;
    ioList.appendObject ("self") ;
    ioList.appendObject ("send") ;
    ioList.appendObject ("then") ;
    ioList.appendObject ("true") ;
    ioList.appendObject ("with") ;
    ioList.appendObject ("after") ;
    ioList.appendObject ("block") ;
    ioList.appendObject ("class") ;
    ioList.appendObject ("elsif") ;
    ioList.appendObject ("error") ;
    ioList.appendObject ("false") ;
    ioList.appendObject ("final") ;
    ioList.appendObject ("fixit") ;
    ioList.appendObject ("graph") ;
    ioList.appendObject ("label") ;
    ioList.appendObject ("parse") ;
    ioList.appendObject ("spoil") ;
    ioList.appendObject ("style") ;
    ioList.appendObject ("super") ;
    ioList.appendObject ("while") ;
    ioList.appendObject ("before") ;
    ioList.appendObject ("extern") ;
    ioList.appendObject ("option") ;
    ioList.appendObject ("public") ;
    ioList.appendObject ("repeat") ;
    ioList.appendObject ("rewind") ;
    ioList.appendObject ("select") ;
    ioList.appendObject ("struct") ;
    ioList.appendObject ("switch") ;
    ioList.appendObject ("syntax") ;
    ioList.appendObject ("unused") ;
    ioList.appendObject ("between") ;
    ioList.appendObject ("boolset") ;
    ioList.appendObject ("default") ;
    ioList.appendObject ("grammar") ;
    ioList.appendObject ("lexique") ;
    ioList.appendObject ("listmap") ;
    ioList.appendObject ("package") ;
    ioList.appendObject ("private") ;
    ioList.appendObject ("project") ;
    ioList.appendObject ("warning") ;
    ioList.appendObject ("abstract") ;
    ioList.appendObject ("indexing") ;
    ioList.appendObject ("mutating") ;
    ioList.appendObject ("operator") ;
    ioList.appendObject ("override") ;
    ioList.appendObject ("template") ;
    ioList.appendObject ("extension") ;
    ioList.appendObject ("protected") ;
    ioList.appendObject ("typealias") ;
    ioList.appendObject ("sortedlist") ;
    ioList.appendObject ("fileprivate") ;
    ioList.appendObject ("filewrapper") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
}

//--------------------------------------------------------------------------------------------------

static cLexiqueIntrospection lexiqueIntrospection_galgasScanner_34_
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_galgasScanner_34_, getKeywordsForIdentifier_galgasScanner_34_) ;

//--------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           
//--------------------------------------------------------------------------------------------------

uint32_t Lexique_galgasScanner_34_::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [185] = {0,
    0 /* galgasScanner4_1_identifier */,
    8 /* galgasScanner4_1_double_2E_xxx */,
    7 /* galgasScanner4_1_literalInt */,
    2 /* galgasScanner4_1__2E_ */,
    2 /* galgasScanner4_1__2E__2E__2E_ */,
    2 /* galgasScanner4_1__2E__2E__3C_ */,
    11 /* galgasScanner4_1__40_type */,
    9 /* galgasScanner4_1__27_char_27_ */,
    4 /* galgasScanner4_1__24_terminal_24_ */,
    13 /* galgasScanner4_1_comment */,
    13 /* galgasScanner4_1_commentMark */,
    3 /* galgasScanner4_1__3F_selector_3A_ */,
    3 /* galgasScanner4_1__3F__21_selector_3A_ */,
    2 /* galgasScanner4_1__3F__21_ */,
    3 /* galgasScanner4_1__21_selector_3A_ */,
    3 /* galgasScanner4_1__21__3F_selector_3A_ */,
    2 /* galgasScanner4_1__3C_ */,
    2 /* galgasScanner4_1__3C__3D_ */,
    2 /* galgasScanner4_1__3C__3C_ */,
    5 /* galgasScanner4_1__3C_non_5F_terminal_3E_ */,
    10 /* galgasScanner4_1__22_string_22_ */,
    1 /* galgasScanner4_1_abstract */,
    1 /* galgasScanner4_1_after */,
    1 /* galgasScanner4_1_as */,
    1 /* galgasScanner4_1_bang */,
    1 /* galgasScanner4_1_before */,
    1 /* galgasScanner4_1_between */,
    1 /* galgasScanner4_1_block */,
    1 /* galgasScanner4_1_boolset */,
    1 /* galgasScanner4_1_case */,
    1 /* galgasScanner4_1_class */,
    1 /* galgasScanner4_1_default */,
    1 /* galgasScanner4_1_dict */,
    1 /* galgasScanner4_1_do */,
    1 /* galgasScanner4_1_drop */,
    1 /* galgasScanner4_1_else */,
    1 /* galgasScanner4_1_elsif */,
    1 /* galgasScanner4_1_end */,
    1 /* galgasScanner4_1_enum */,
    1 /* galgasScanner4_1_error */,
    1 /* galgasScanner4_1_extension */,
    1 /* galgasScanner4_1_extern */,
    1 /* galgasScanner4_1_false */,
    1 /* galgasScanner4_1_fileprivate */,
    1 /* galgasScanner4_1_filewrapper */,
    1 /* galgasScanner4_1_final */,
    1 /* galgasScanner4_1_for */,
    1 /* galgasScanner4_1_fixit */,
    1 /* galgasScanner4_1_func */,
    1 /* galgasScanner4_1_grammar */,
    1 /* galgasScanner4_1_graph */,
    1 /* galgasScanner4_1_gui */,
    1 /* galgasScanner4_1_if */,
    1 /* galgasScanner4_1_in */,
    1 /* galgasScanner4_1_indexing */,
    1 /* galgasScanner4_1_init */,
    1 /* galgasScanner4_1_is */,
    1 /* galgasScanner4_1_label */,
    1 /* galgasScanner4_1_let */,
    1 /* galgasScanner4_1_lexique */,
    1 /* galgasScanner4_1_list */,
    1 /* galgasScanner4_1_listmap */,
    1 /* galgasScanner4_1_log */,
    1 /* galgasScanner4_1_loop */,
    1 /* galgasScanner4_1_map */,
    1 /* galgasScanner4_1_mod */,
    1 /* galgasScanner4_1_mutating */,
    1 /* galgasScanner4_1_not */,
    1 /* galgasScanner4_1_on */,
    1 /* galgasScanner4_1_operator */,
    1 /* galgasScanner4_1_option */,
    1 /* galgasScanner4_1_or */,
    1 /* galgasScanner4_1_override */,
    1 /* galgasScanner4_1_package */,
    1 /* galgasScanner4_1_parse */,
    1 /* galgasScanner4_1_public */,
    1 /* galgasScanner4_1_protected */,
    1 /* galgasScanner4_1_private */,
    1 /* galgasScanner4_1_proc */,
    1 /* galgasScanner4_1_project */,
    1 /* galgasScanner4_1_repeat */,
    1 /* galgasScanner4_1_rewind */,
    1 /* galgasScanner4_1_rule */,
    1 /* galgasScanner4_1_select */,
    1 /* galgasScanner4_1_self */,
    1 /* galgasScanner4_1_send */,
    1 /* galgasScanner4_1_sortedlist */,
    1 /* galgasScanner4_1_spoil */,
    1 /* galgasScanner4_1_super */,
    1 /* galgasScanner4_1_struct */,
    1 /* galgasScanner4_1_style */,
    1 /* galgasScanner4_1_switch */,
    1 /* galgasScanner4_1_syntax */,
    1 /* galgasScanner4_1_tag */,
    1 /* galgasScanner4_1_template */,
    1 /* galgasScanner4_1_then */,
    1 /* galgasScanner4_1_true */,
    1 /* galgasScanner4_1_typealias */,
    1 /* galgasScanner4_1_unused */,
    1 /* galgasScanner4_1_var */,
    1 /* galgasScanner4_1_warning */,
    1 /* galgasScanner4_1_while */,
    1 /* galgasScanner4_1_with */,
    12 /* galgasScanner4_1__25_app_2D_link */,
    12 /* galgasScanner4_1__25_app_2D_source */,
    12 /* galgasScanner4_1__25_makefile_2D_macosx */,
    12 /* galgasScanner4_1__25_makefile_2D_unix */,
    12 /* galgasScanner4_1__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx */,
    12 /* galgasScanner4_1__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx */,
    12 /* galgasScanner4_1__25_makefile_2D_win_33__32__2D_on_2D_macosx */,
    12 /* galgasScanner4_1__25_codeblocks_2D_windows */,
    12 /* galgasScanner4_1__25_codeblocks_2D_linux_33__32_ */,
    12 /* galgasScanner4_1__25_codeblocks_2D_linux_36__34_ */,
    12 /* galgasScanner4_1__25_applicationBundleBase */,
    12 /* galgasScanner4_1__25_MacOS */,
    12 /* galgasScanner4_1__25_MacOSDeployment */,
    12 /* galgasScanner4_1__25_quietOutputByDefault */,
    12 /* galgasScanner4_1__25_macCodeSign */,
    12 /* galgasScanner4_1__25_libpmAtPath */,
    12 /* galgasScanner4_1__25_tool_2D_source */,
    12 /* galgasScanner4_1__25_translate */,
    12 /* galgasScanner4_1__25_once */,
    12 /* galgasScanner4_1__25_usefull */,
    12 /* galgasScanner4_1__25_generatedInSeparateFile */,
    12 /* galgasScanner4_1__25_nonAtomicSelection */,
    12 /* galgasScanner4_1__25_templateEndMark */,
    12 /* galgasScanner4_1__25_preserved */,
    12 /* galgasScanner4_1__25_selector */,
    12 /* galgasScanner4_1__25_insertSetter */,
    12 /* galgasScanner4_1__25_searchMethod */,
    12 /* galgasScanner4_1__25_removeSetter */,
    12 /* galgasScanner4_1__25_errorMessage */,
    12 /* galgasScanner4_1__25_insertOrReplaceSetter */,
    12 /* galgasScanner4_1__25_remove */,
    12 /* galgasScanner4_1__25_replaceBy */,
    12 /* galgasScanner4_1__25_insertAfter */,
    12 /* galgasScanner4_1__25_insertBefore */,
    12 /* galgasScanner4_1__25_useGrammar */,
    12 /* galgasScanner4_1__25_searchString */,
    12 /* galgasScanner4_1__25_templateReplacement */,
    2 /* galgasScanner4_1__2A_ */,
    2 /* galgasScanner4_1__2C_ */,
    2 /* galgasScanner4_1__2B_ */,
    2 /* galgasScanner4_1__26__2B_ */,
    2 /* galgasScanner4_1__26__2D_ */,
    2 /* galgasScanner4_1__26__2A_ */,
    2 /* galgasScanner4_1__26__2F_ */,
    2 /* galgasScanner4_1__3E_ */,
    2 /* galgasScanner4_1__3B_ */,
    2 /* galgasScanner4_1__3A_ */,
    2 /* galgasScanner4_1__3A__3E_ */,
    2 /* galgasScanner4_1__2D_ */,
    2 /* galgasScanner4_1__28_ */,
    2 /* galgasScanner4_1__29_ */,
    2 /* galgasScanner4_1__2D__3E_ */,
    2 /* galgasScanner4_1__3D__3D_ */,
    2 /* galgasScanner4_1__3D_ */,
    2 /* galgasScanner4_1__26__26_ */,
    2 /* galgasScanner4_1__5B_ */,
    2 /* galgasScanner4_1__5D_ */,
    2 /* galgasScanner4_1__2B__3D_ */,
    2 /* galgasScanner4_1__2D__3D_ */,
    2 /* galgasScanner4_1__2A__3D_ */,
    2 /* galgasScanner4_1__2F__3D_ */,
    2 /* galgasScanner4_1__2F_ */,
    2 /* galgasScanner4_1__21__3D_ */,
    2 /* galgasScanner4_1__3E__3D_ */,
    2 /* galgasScanner4_1__26_ */,
    2 /* galgasScanner4_1__7B_ */,
    2 /* galgasScanner4_1__7D_ */,
    2 /* galgasScanner4_1__60_ */,
    2 /* galgasScanner4_1__7C__7C_ */,
    2 /* galgasScanner4_1__7C_ */,
    2 /* galgasScanner4_1__5E_ */,
    2 /* galgasScanner4_1__3E__3E_ */,
    2 /* galgasScanner4_1__7E_ */,
    2 /* galgasScanner4_1__2D__2D_ */,
    2 /* galgasScanner4_1__2B__2B_ */,
    2 /* galgasScanner4_1__26__2D__2D_ */,
    2 /* galgasScanner4_1__26__2B__2B_ */,
    2 /* galgasScanner4_1__3D__3D__3D_ */,
    2 /* galgasScanner4_1__21__3D__3D_ */,
    2 /* galgasScanner4_1__3F__5E_ */,
    2 /* galgasScanner4_1__21__5E_ */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//--------------------------------------------------------------------------------------------------
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      
//--------------------------------------------------------------------------------------------------

String Lexique_galgasScanner_34_::styleNameForIndex (const uint32_t inStyleIndex) const {
  String result ;
  if (inStyleIndex < 14) {
    static const char * kStyleArray [14] = {
      "",
      "keywordsStyle",
      "delimitersStyle",
      "selectorStyle",
      "terminalStyle",
      "nonTerminalStyle",
      "integerStyle",
      "bigintStyle",
      "floatStyle",
      "characterStyle",
      "stringStyle",
      "typeNameStyle",
      "attributeStyle",
      "commentStyle"
    } ;
    result = kStyleArray [inStyleIndex] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_boolsetDeclarationAST_2D_weak::objectCompare (const GALGAS_boolsetDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST_2D_weak::GALGAS_boolsetDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST_2D_weak & GALGAS_boolsetDeclarationAST_2D_weak::operator = (const GALGAS_boolsetDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST_2D_weak::GALGAS_boolsetDeclarationAST_2D_weak (const GALGAS_boolsetDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST_2D_weak GALGAS_boolsetDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_boolsetDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST GALGAS_boolsetDeclarationAST_2D_weak::bang_boolsetDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_boolsetDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolsetDeclarationAST) ;
      result = GALGAS_boolsetDeclarationAST ((cPtr_boolsetDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @boolsetDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolsetDeclarationAST_2D_weak ("boolsetDeclarationAST-weak",
                                                                                     & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolsetDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolsetDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolsetDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST_2D_weak GALGAS_boolsetDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_boolsetDeclarationAST_2D_weak result ;
  const GALGAS_boolsetDeclarationAST_2D_weak * p = (const GALGAS_boolsetDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_boolsetDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolsetDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@propertyInCollectionListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_propertyInCollectionListAST : public cCollectionElement {
  public: GALGAS_propertyInCollectionListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_propertyInCollectionListAST (const GALGAS_bool & in_isConstant,
                                                          const GALGAS_lstring & in_mPropertyTypeName,
                                                          const GALGAS_lstring & in_mPropertyName,
                                                          const GALGAS_AccessControlAST & in_mAccessControl,
                                                          const GALGAS_bool & in_selector,
                                                          const GALGAS_propertyInCollectionInitializationAST & in_mInitialization
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_propertyInCollectionListAST (const GALGAS_propertyInCollectionListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_propertyInCollectionListAST::cCollectionElement_propertyInCollectionListAST (const GALGAS_bool & in_isConstant,
                                                                                                const GALGAS_lstring & in_mPropertyTypeName,
                                                                                                const GALGAS_lstring & in_mPropertyName,
                                                                                                const GALGAS_AccessControlAST & in_mAccessControl,
                                                                                                const GALGAS_bool & in_selector,
                                                                                                const GALGAS_propertyInCollectionInitializationAST & in_mInitialization
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_isConstant, in_mPropertyTypeName, in_mPropertyName, in_mAccessControl, in_selector, in_mInitialization) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_propertyInCollectionListAST::cCollectionElement_propertyInCollectionListAST (const GALGAS_propertyInCollectionListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_isConstant, inElement.mProperty_mPropertyTypeName, inElement.mProperty_mPropertyName, inElement.mProperty_mAccessControl, inElement.mProperty_selector, inElement.mProperty_mInitialization) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_propertyInCollectionListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_propertyInCollectionListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_propertyInCollectionListAST (mObject.mProperty_isConstant, mObject.mProperty_mPropertyTypeName, mObject.mProperty_mPropertyName, mObject.mProperty_mAccessControl, mObject.mProperty_selector, mObject.mProperty_mInitialization COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_propertyInCollectionListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("isConstant" ":") ;
  mObject.mProperty_isConstant.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPropertyTypeName" ":") ;
  mObject.mProperty_mPropertyTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPropertyName" ":") ;
  mObject.mProperty_mPropertyName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAccessControl" ":") ;
  mObject.mProperty_mAccessControl.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("selector" ":") ;
  mObject.mProperty_selector.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInitialization" ":") ;
  mObject.mProperty_mInitialization.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_propertyInCollectionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_propertyInCollectionListAST * operand = (cCollectionElement_propertyInCollectionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_propertyInCollectionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST::GALGAS_propertyInCollectionListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST::GALGAS_propertyInCollectionListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_propertyInCollectionListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::class_func_listWithValue (const GALGAS_bool & inOperand0,
                                                                                                 const GALGAS_lstring & inOperand1,
                                                                                                 const GALGAS_lstring & inOperand2,
                                                                                                 const GALGAS_AccessControlAST & inOperand3,
                                                                                                 const GALGAS_bool & inOperand4,
                                                                                                 const GALGAS_propertyInCollectionInitializationAST & inOperand5
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_propertyInCollectionListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_propertyInCollectionListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyInCollectionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_bool & in_isConstant,
                                                                    const GALGAS_lstring & in_mPropertyTypeName,
                                                                    const GALGAS_lstring & in_mPropertyName,
                                                                    const GALGAS_AccessControlAST & in_mAccessControl,
                                                                    const GALGAS_bool & in_selector,
                                                                    const GALGAS_propertyInCollectionInitializationAST & in_mInitialization
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_propertyInCollectionListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_propertyInCollectionListAST (in_isConstant,
                                                                 in_mPropertyTypeName,
                                                                 in_mPropertyName,
                                                                 in_mAccessControl,
                                                                 in_selector,
                                                                 in_mInitialization COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyInCollectionListAST::addAssign_operation (const GALGAS_bool & inOperand0,
                                                              const GALGAS_lstring & inOperand1,
                                                              const GALGAS_lstring & inOperand2,
                                                              const GALGAS_AccessControlAST & inOperand3,
                                                              const GALGAS_bool & inOperand4,
                                                              const GALGAS_propertyInCollectionInitializationAST & inOperand5
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_propertyInCollectionListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyInCollectionListAST::setter_append (const GALGAS_bool inOperand0,
                                                        const GALGAS_lstring inOperand1,
                                                        const GALGAS_lstring inOperand2,
                                                        const GALGAS_AccessControlAST inOperand3,
                                                        const GALGAS_bool inOperand4,
                                                        const GALGAS_propertyInCollectionInitializationAST inOperand5,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_propertyInCollectionListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyInCollectionListAST::setter_insertAtIndex (const GALGAS_bool inOperand0,
                                                               const GALGAS_lstring inOperand1,
                                                               const GALGAS_lstring inOperand2,
                                                               const GALGAS_AccessControlAST inOperand3,
                                                               const GALGAS_bool inOperand4,
                                                               const GALGAS_propertyInCollectionInitializationAST inOperand5,
                                                               const GALGAS_uint inInsertionIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_propertyInCollectionListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
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

void GALGAS_propertyInCollectionListAST::setter_removeAtIndex (GALGAS_bool & outOperand0,
                                                               GALGAS_lstring & outOperand1,
                                                               GALGAS_lstring & outOperand2,
                                                               GALGAS_AccessControlAST & outOperand3,
                                                               GALGAS_bool & outOperand4,
                                                               GALGAS_propertyInCollectionInitializationAST & outOperand5,
                                                               const GALGAS_uint inRemoveIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        outOperand5.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
        outOperand0 = p->mObject.mProperty_isConstant ;
        outOperand1 = p->mObject.mProperty_mPropertyTypeName ;
        outOperand2 = p->mObject.mProperty_mPropertyName ;
        outOperand3 = p->mObject.mProperty_mAccessControl ;
        outOperand4 = p->mObject.mProperty_selector ;
        outOperand5 = p->mObject.mProperty_mInitialization ;
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

void GALGAS_propertyInCollectionListAST::setter_popFirst (GALGAS_bool & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_lstring & outOperand2,
                                                          GALGAS_AccessControlAST & outOperand3,
                                                          GALGAS_bool & outOperand4,
                                                          GALGAS_propertyInCollectionInitializationAST & outOperand5,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
    outOperand0 = p->mObject.mProperty_isConstant ;
    outOperand1 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand2 = p->mObject.mProperty_mPropertyName ;
    outOperand3 = p->mObject.mProperty_mAccessControl ;
    outOperand4 = p->mObject.mProperty_selector ;
    outOperand5 = p->mObject.mProperty_mInitialization ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyInCollectionListAST::setter_popLast (GALGAS_bool & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_lstring & outOperand2,
                                                         GALGAS_AccessControlAST & outOperand3,
                                                         GALGAS_bool & outOperand4,
                                                         GALGAS_propertyInCollectionInitializationAST & outOperand5,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
    outOperand0 = p->mObject.mProperty_isConstant ;
    outOperand1 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand2 = p->mObject.mProperty_mPropertyName ;
    outOperand3 = p->mObject.mProperty_mAccessControl ;
    outOperand4 = p->mObject.mProperty_selector ;
    outOperand5 = p->mObject.mProperty_mInitialization ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyInCollectionListAST::method_first (GALGAS_bool & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_lstring & outOperand2,
                                                       GALGAS_AccessControlAST & outOperand3,
                                                       GALGAS_bool & outOperand4,
                                                       GALGAS_propertyInCollectionInitializationAST & outOperand5,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
    outOperand0 = p->mObject.mProperty_isConstant ;
    outOperand1 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand2 = p->mObject.mProperty_mPropertyName ;
    outOperand3 = p->mObject.mProperty_mAccessControl ;
    outOperand4 = p->mObject.mProperty_selector ;
    outOperand5 = p->mObject.mProperty_mInitialization ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyInCollectionListAST::method_last (GALGAS_bool & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_lstring & outOperand2,
                                                      GALGAS_AccessControlAST & outOperand3,
                                                      GALGAS_bool & outOperand4,
                                                      GALGAS_propertyInCollectionInitializationAST & outOperand5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
    outOperand0 = p->mObject.mProperty_isConstant ;
    outOperand1 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand2 = p->mObject.mProperty_mPropertyName ;
    outOperand3 = p->mObject.mProperty_mAccessControl ;
    outOperand4 = p->mObject.mProperty_selector ;
    outOperand5 = p->mObject.mProperty_mInitialization ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::add_operation (const GALGAS_propertyInCollectionListAST & inOperand,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result = GALGAS_propertyInCollectionListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result = GALGAS_propertyInCollectionListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result = GALGAS_propertyInCollectionListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyInCollectionListAST::plusAssign_operation (const GALGAS_propertyInCollectionListAST inOperand,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyInCollectionListAST::setter_setIsConstantAtIndex (GALGAS_bool inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_isConstant = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyInCollectionListAST::getter_isConstantAtIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
    result = p->mObject.mProperty_isConstant ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyInCollectionListAST::setter_setMPropertyTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_propertyInCollectionListAST::getter_mPropertyTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
    result = p->mObject.mProperty_mPropertyTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyInCollectionListAST::setter_setMPropertyNameAtIndex (GALGAS_lstring inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_propertyInCollectionListAST::getter_mPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
    result = p->mObject.mProperty_mPropertyName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyInCollectionListAST::setter_setMAccessControlAtIndex (GALGAS_AccessControlAST inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAccessControl = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControlAST GALGAS_propertyInCollectionListAST::getter_mAccessControlAtIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) attributes.ptr () ;
  GALGAS_AccessControlAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
    result = p->mObject.mProperty_mAccessControl ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyInCollectionListAST::setter_setSelectorAtIndex (GALGAS_bool inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_selector = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyInCollectionListAST::getter_selectorAtIndex (const GALGAS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
    result = p->mObject.mProperty_selector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyInCollectionListAST::setter_setMInitializationAtIndex (GALGAS_propertyInCollectionInitializationAST inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInitialization = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionInitializationAST GALGAS_propertyInCollectionListAST::getter_mInitializationAtIndex (const GALGAS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) attributes.ptr () ;
  GALGAS_propertyInCollectionInitializationAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
    result = p->mObject.mProperty_mInitialization ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_propertyInCollectionListAST::cEnumerator_propertyInCollectionListAST (const GALGAS_propertyInCollectionListAST & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST_2D_element cEnumerator_propertyInCollectionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_propertyInCollectionListAST * p = (const cCollectionElement_propertyInCollectionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_propertyInCollectionListAST::current_isConstant (LOCATION_ARGS) const {
  const cCollectionElement_propertyInCollectionListAST * p = (const cCollectionElement_propertyInCollectionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
  return p->mObject.mProperty_isConstant ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_propertyInCollectionListAST::current_mPropertyTypeName (LOCATION_ARGS) const {
  const cCollectionElement_propertyInCollectionListAST * p = (const cCollectionElement_propertyInCollectionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
  return p->mObject.mProperty_mPropertyTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_propertyInCollectionListAST::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_propertyInCollectionListAST * p = (const cCollectionElement_propertyInCollectionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
  return p->mObject.mProperty_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControlAST cEnumerator_propertyInCollectionListAST::current_mAccessControl (LOCATION_ARGS) const {
  const cCollectionElement_propertyInCollectionListAST * p = (const cCollectionElement_propertyInCollectionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
  return p->mObject.mProperty_mAccessControl ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_propertyInCollectionListAST::current_selector (LOCATION_ARGS) const {
  const cCollectionElement_propertyInCollectionListAST * p = (const cCollectionElement_propertyInCollectionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
  return p->mObject.mProperty_selector ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionInitializationAST cEnumerator_propertyInCollectionListAST::current_mInitialization (LOCATION_ARGS) const {
  const cCollectionElement_propertyInCollectionListAST * p = (const cCollectionElement_propertyInCollectionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
  return p->mObject.mProperty_mInitialization ;
}




//--------------------------------------------------------------------------------------------------
//
//     @propertyInCollectionListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyInCollectionListAST ("propertyInCollectionListAST",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyInCollectionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyInCollectionListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyInCollectionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyInCollectionListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST result ;
  const GALGAS_propertyInCollectionListAST * p = (const GALGAS_propertyInCollectionListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_propertyInCollectionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyInCollectionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_classDeclarationAST_2D_weak::objectCompare (const GALGAS_classDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST_2D_weak::GALGAS_classDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST_2D_weak & GALGAS_classDeclarationAST_2D_weak::operator = (const GALGAS_classDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST_2D_weak::GALGAS_classDeclarationAST_2D_weak (const GALGAS_classDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST_2D_weak GALGAS_classDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_classDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST GALGAS_classDeclarationAST_2D_weak::bang_classDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_classDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_classDeclarationAST) ;
      result = GALGAS_classDeclarationAST ((cPtr_classDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @classDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classDeclarationAST_2D_weak ("classDeclarationAST-weak",
                                                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_classDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_classDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST_2D_weak GALGAS_classDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_classDeclarationAST_2D_weak result ;
  const GALGAS_classDeclarationAST_2D_weak * p = (const GALGAS_classDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_classDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@typedPropertyList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_typedPropertyList : public cCollectionElement {
  public: GALGAS_typedPropertyList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_typedPropertyList (const GALGAS_unifiedTypeMapEntry & in_mPropertyTypeEntry,
                                                const GALGAS_lstring & in_mPropertyName,
                                                const GALGAS_bool & in_hasSetter,
                                                const GALGAS_bool & in_hasSelector
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_typedPropertyList (const GALGAS_typedPropertyList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_typedPropertyList::cCollectionElement_typedPropertyList (const GALGAS_unifiedTypeMapEntry & in_mPropertyTypeEntry,
                                                                            const GALGAS_lstring & in_mPropertyName,
                                                                            const GALGAS_bool & in_hasSetter,
                                                                            const GALGAS_bool & in_hasSelector
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyTypeEntry, in_mPropertyName, in_hasSetter, in_hasSelector) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_typedPropertyList::cCollectionElement_typedPropertyList (const GALGAS_typedPropertyList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mPropertyTypeEntry, inElement.mProperty_mPropertyName, inElement.mProperty_hasSetter, inElement.mProperty_hasSelector) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_typedPropertyList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_typedPropertyList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_typedPropertyList (mObject.mProperty_mPropertyTypeEntry, mObject.mProperty_mPropertyName, mObject.mProperty_hasSetter, mObject.mProperty_hasSelector COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_typedPropertyList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPropertyTypeEntry" ":") ;
  mObject.mProperty_mPropertyTypeEntry.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPropertyName" ":") ;
  mObject.mProperty_mPropertyName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("hasSetter" ":") ;
  mObject.mProperty_hasSetter.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("hasSelector" ":") ;
  mObject.mProperty_hasSelector.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_typedPropertyList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_typedPropertyList * operand = (cCollectionElement_typedPropertyList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_typedPropertyList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList::GALGAS_typedPropertyList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList::GALGAS_typedPropertyList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_typedPropertyList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_typedPropertyList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_typedPropertyList::class_func_listWithValue (const GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                             const GALGAS_lstring & inOperand1,
                                                                             const GALGAS_bool & inOperand2,
                                                                             const GALGAS_bool & inOperand3
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_typedPropertyList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_typedPropertyList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_typedPropertyList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typedPropertyList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_unifiedTypeMapEntry & in_mPropertyTypeEntry,
                                                          const GALGAS_lstring & in_mPropertyName,
                                                          const GALGAS_bool & in_hasSetter,
                                                          const GALGAS_bool & in_hasSelector
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_typedPropertyList * p = nullptr ;
  macroMyNew (p, cCollectionElement_typedPropertyList (in_mPropertyTypeEntry,
                                                       in_mPropertyName,
                                                       in_hasSetter,
                                                       in_hasSelector COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typedPropertyList::addAssign_operation (const GALGAS_unifiedTypeMapEntry & inOperand0,
                                                    const GALGAS_lstring & inOperand1,
                                                    const GALGAS_bool & inOperand2,
                                                    const GALGAS_bool & inOperand3
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_typedPropertyList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typedPropertyList::setter_append (const GALGAS_unifiedTypeMapEntry inOperand0,
                                              const GALGAS_lstring inOperand1,
                                              const GALGAS_bool inOperand2,
                                              const GALGAS_bool inOperand3,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_typedPropertyList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typedPropertyList::setter_insertAtIndex (const GALGAS_unifiedTypeMapEntry inOperand0,
                                                     const GALGAS_lstring inOperand1,
                                                     const GALGAS_bool inOperand2,
                                                     const GALGAS_bool inOperand3,
                                                     const GALGAS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_typedPropertyList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
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

void GALGAS_typedPropertyList::setter_removeAtIndex (GALGAS_unifiedTypeMapEntry & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_bool & outOperand2,
                                                     GALGAS_bool & outOperand3,
                                                     const GALGAS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
        outOperand0 = p->mObject.mProperty_mPropertyTypeEntry ;
        outOperand1 = p->mObject.mProperty_mPropertyName ;
        outOperand2 = p->mObject.mProperty_hasSetter ;
        outOperand3 = p->mObject.mProperty_hasSelector ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typedPropertyList::setter_popFirst (GALGAS_unifiedTypeMapEntry & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                GALGAS_bool & outOperand2,
                                                GALGAS_bool & outOperand3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    outOperand0 = p->mObject.mProperty_mPropertyTypeEntry ;
    outOperand1 = p->mObject.mProperty_mPropertyName ;
    outOperand2 = p->mObject.mProperty_hasSetter ;
    outOperand3 = p->mObject.mProperty_hasSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typedPropertyList::setter_popLast (GALGAS_unifiedTypeMapEntry & outOperand0,
                                               GALGAS_lstring & outOperand1,
                                               GALGAS_bool & outOperand2,
                                               GALGAS_bool & outOperand3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    outOperand0 = p->mObject.mProperty_mPropertyTypeEntry ;
    outOperand1 = p->mObject.mProperty_mPropertyName ;
    outOperand2 = p->mObject.mProperty_hasSetter ;
    outOperand3 = p->mObject.mProperty_hasSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typedPropertyList::method_first (GALGAS_unifiedTypeMapEntry & outOperand0,
                                             GALGAS_lstring & outOperand1,
                                             GALGAS_bool & outOperand2,
                                             GALGAS_bool & outOperand3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    outOperand0 = p->mObject.mProperty_mPropertyTypeEntry ;
    outOperand1 = p->mObject.mProperty_mPropertyName ;
    outOperand2 = p->mObject.mProperty_hasSetter ;
    outOperand3 = p->mObject.mProperty_hasSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typedPropertyList::method_last (GALGAS_unifiedTypeMapEntry & outOperand0,
                                            GALGAS_lstring & outOperand1,
                                            GALGAS_bool & outOperand2,
                                            GALGAS_bool & outOperand3,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    outOperand0 = p->mObject.mProperty_mPropertyTypeEntry ;
    outOperand1 = p->mObject.mProperty_mPropertyName ;
    outOperand2 = p->mObject.mProperty_hasSetter ;
    outOperand3 = p->mObject.mProperty_hasSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_typedPropertyList::add_operation (const GALGAS_typedPropertyList & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_typedPropertyList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result = GALGAS_typedPropertyList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_typedPropertyList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result = GALGAS_typedPropertyList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_typedPropertyList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result = GALGAS_typedPropertyList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typedPropertyList::plusAssign_operation (const GALGAS_typedPropertyList inOperand,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typedPropertyList::setter_setMPropertyTypeEntryAtIndex (GALGAS_unifiedTypeMapEntry inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyTypeEntry = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_typedPropertyList::getter_mPropertyTypeEntryAtIndex (const GALGAS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
  GALGAS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    result = p->mObject.mProperty_mPropertyTypeEntry ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typedPropertyList::setter_setMPropertyNameAtIndex (GALGAS_lstring inOperand,
                                                               GALGAS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_typedPropertyList::getter_mPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    result = p->mObject.mProperty_mPropertyName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typedPropertyList::setter_setHasSetterAtIndex (GALGAS_bool inOperand,
                                                           GALGAS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_hasSetter = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typedPropertyList::getter_hasSetterAtIndex (const GALGAS_uint & inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    result = p->mObject.mProperty_hasSetter ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typedPropertyList::setter_setHasSelectorAtIndex (GALGAS_bool inOperand,
                                                             GALGAS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_hasSelector = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typedPropertyList::getter_hasSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    result = p->mObject.mProperty_hasSelector ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_typedPropertyList::cEnumerator_typedPropertyList (const GALGAS_typedPropertyList & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList_2D_element cEnumerator_typedPropertyList::current (LOCATION_ARGS) const {
  const cCollectionElement_typedPropertyList * p = (const cCollectionElement_typedPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry cEnumerator_typedPropertyList::current_mPropertyTypeEntry (LOCATION_ARGS) const {
  const cCollectionElement_typedPropertyList * p = (const cCollectionElement_typedPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
  return p->mObject.mProperty_mPropertyTypeEntry ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_typedPropertyList::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_typedPropertyList * p = (const cCollectionElement_typedPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
  return p->mObject.mProperty_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_typedPropertyList::current_hasSetter (LOCATION_ARGS) const {
  const cCollectionElement_typedPropertyList * p = (const cCollectionElement_typedPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
  return p->mObject.mProperty_hasSetter ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_typedPropertyList::current_hasSelector (LOCATION_ARGS) const {
  const cCollectionElement_typedPropertyList * p = (const cCollectionElement_typedPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
  return p->mObject.mProperty_hasSelector ;
}




//--------------------------------------------------------------------------------------------------
//
//     @typedPropertyList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typedPropertyList ("typedPropertyList",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typedPropertyList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typedPropertyList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typedPropertyList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typedPropertyList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_typedPropertyList::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_typedPropertyList result ;
  const GALGAS_typedPropertyList * p = (const GALGAS_typedPropertyList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typedPropertyList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typedPropertyList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_weakReferenceDeclarationAST_2D_weak::objectCompare (const GALGAS_weakReferenceDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST_2D_weak::GALGAS_weakReferenceDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST_2D_weak & GALGAS_weakReferenceDeclarationAST_2D_weak::operator = (const GALGAS_weakReferenceDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST_2D_weak::GALGAS_weakReferenceDeclarationAST_2D_weak (const GALGAS_weakReferenceDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST_2D_weak GALGAS_weakReferenceDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_weakReferenceDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST GALGAS_weakReferenceDeclarationAST_2D_weak::bang_weakReferenceDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_weakReferenceDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_weakReferenceDeclarationAST) ;
      result = GALGAS_weakReferenceDeclarationAST ((cPtr_weakReferenceDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @weakReferenceDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_weakReferenceDeclarationAST_2D_weak ("weakReferenceDeclarationAST-weak",
                                                                                           & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_weakReferenceDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_weakReferenceDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_weakReferenceDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_weakReferenceDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST_2D_weak GALGAS_weakReferenceDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_weakReferenceDeclarationAST_2D_weak result ;
  const GALGAS_weakReferenceDeclarationAST_2D_weak * p = (const GALGAS_weakReferenceDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_weakReferenceDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("weakReferenceDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@enumConstantList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_enumConstantList : public cCollectionElement {
  public: GALGAS_enumConstantList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_enumConstantList (const GALGAS_lstring & in_mConstantName,
                                               const GALGAS__32_lstringlist & in_mAssociatedValueDefinitionList
                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_enumConstantList (const GALGAS_enumConstantList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_enumConstantList::cCollectionElement_enumConstantList (const GALGAS_lstring & in_mConstantName,
                                                                          const GALGAS__32_lstringlist & in_mAssociatedValueDefinitionList
                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mConstantName, in_mAssociatedValueDefinitionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_enumConstantList::cCollectionElement_enumConstantList (const GALGAS_enumConstantList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mConstantName, inElement.mProperty_mAssociatedValueDefinitionList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_enumConstantList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_enumConstantList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_enumConstantList (mObject.mProperty_mConstantName, mObject.mProperty_mAssociatedValueDefinitionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_enumConstantList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mConstantName" ":") ;
  mObject.mProperty_mConstantName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAssociatedValueDefinitionList" ":") ;
  mObject.mProperty_mAssociatedValueDefinitionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_enumConstantList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_enumConstantList * operand = (cCollectionElement_enumConstantList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_enumConstantList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantList::GALGAS_enumConstantList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantList::GALGAS_enumConstantList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantList GALGAS_enumConstantList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumConstantList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantList GALGAS_enumConstantList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                           const GALGAS__32_lstringlist & inOperand1
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumConstantList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_enumConstantList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumConstantList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GALGAS_lstring & in_mConstantName,
                                                         const GALGAS__32_lstringlist & in_mAssociatedValueDefinitionList
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_enumConstantList * p = nullptr ;
  macroMyNew (p, cCollectionElement_enumConstantList (in_mConstantName,
                                                      in_mAssociatedValueDefinitionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumConstantList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                   const GALGAS__32_lstringlist & inOperand1
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_enumConstantList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumConstantList::setter_append (const GALGAS_lstring inOperand0,
                                             const GALGAS__32_lstringlist inOperand1,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_enumConstantList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumConstantList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                    const GALGAS__32_lstringlist inOperand1,
                                                    const GALGAS_uint inInsertionIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_enumConstantList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_enumConstantList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                    GALGAS__32_lstringlist & outOperand1,
                                                    const GALGAS_uint inRemoveIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_enumConstantList * p = (cCollectionElement_enumConstantList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
        outOperand0 = p->mObject.mProperty_mConstantName ;
        outOperand1 = p->mObject.mProperty_mAssociatedValueDefinitionList ;
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

void GALGAS_enumConstantList::setter_popFirst (GALGAS_lstring & outOperand0,
                                               GALGAS__32_lstringlist & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumConstantList * p = (cCollectionElement_enumConstantList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
    outOperand0 = p->mObject.mProperty_mConstantName ;
    outOperand1 = p->mObject.mProperty_mAssociatedValueDefinitionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumConstantList::setter_popLast (GALGAS_lstring & outOperand0,
                                              GALGAS__32_lstringlist & outOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumConstantList * p = (cCollectionElement_enumConstantList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
    outOperand0 = p->mObject.mProperty_mConstantName ;
    outOperand1 = p->mObject.mProperty_mAssociatedValueDefinitionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumConstantList::method_first (GALGAS_lstring & outOperand0,
                                            GALGAS__32_lstringlist & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumConstantList * p = (cCollectionElement_enumConstantList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
    outOperand0 = p->mObject.mProperty_mConstantName ;
    outOperand1 = p->mObject.mProperty_mAssociatedValueDefinitionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumConstantList::method_last (GALGAS_lstring & outOperand0,
                                           GALGAS__32_lstringlist & outOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumConstantList * p = (cCollectionElement_enumConstantList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
    outOperand0 = p->mObject.mProperty_mConstantName ;
    outOperand1 = p->mObject.mProperty_mAssociatedValueDefinitionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantList GALGAS_enumConstantList::add_operation (const GALGAS_enumConstantList & inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_enumConstantList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantList GALGAS_enumConstantList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantList result = GALGAS_enumConstantList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantList GALGAS_enumConstantList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantList result = GALGAS_enumConstantList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantList GALGAS_enumConstantList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantList result = GALGAS_enumConstantList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumConstantList::plusAssign_operation (const GALGAS_enumConstantList inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumConstantList::setter_setMConstantNameAtIndex (GALGAS_lstring inOperand,
                                                              GALGAS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_enumConstantList * p = (cCollectionElement_enumConstantList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mConstantName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_enumConstantList::getter_mConstantNameAtIndex (const GALGAS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumConstantList * p = (cCollectionElement_enumConstantList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
    result = p->mObject.mProperty_mConstantName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumConstantList::setter_setMAssociatedValueDefinitionListAtIndex (GALGAS__32_lstringlist inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_enumConstantList * p = (cCollectionElement_enumConstantList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAssociatedValueDefinitionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist GALGAS_enumConstantList::getter_mAssociatedValueDefinitionListAtIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumConstantList * p = (cCollectionElement_enumConstantList *) attributes.ptr () ;
  GALGAS__32_lstringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
    result = p->mObject.mProperty_mAssociatedValueDefinitionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_enumConstantList::cEnumerator_enumConstantList (const GALGAS_enumConstantList & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantList_2D_element cEnumerator_enumConstantList::current (LOCATION_ARGS) const {
  const cCollectionElement_enumConstantList * p = (const cCollectionElement_enumConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_enumConstantList::current_mConstantName (LOCATION_ARGS) const {
  const cCollectionElement_enumConstantList * p = (const cCollectionElement_enumConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
  return p->mObject.mProperty_mConstantName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist cEnumerator_enumConstantList::current_mAssociatedValueDefinitionList (LOCATION_ARGS) const {
  const cCollectionElement_enumConstantList * p = (const cCollectionElement_enumConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
  return p->mObject.mProperty_mAssociatedValueDefinitionList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @enumConstantList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantList ("enumConstantList",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumConstantList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumConstantList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumConstantList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantList GALGAS_enumConstantList::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantList result ;
  const GALGAS_enumConstantList * p = (const GALGAS_enumConstantList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enumConstantList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_enumDeclarationAST_2D_weak::objectCompare (const GALGAS_enumDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST_2D_weak::GALGAS_enumDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST_2D_weak & GALGAS_enumDeclarationAST_2D_weak::operator = (const GALGAS_enumDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST_2D_weak::GALGAS_enumDeclarationAST_2D_weak (const GALGAS_enumDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST_2D_weak GALGAS_enumDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_enumDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST GALGAS_enumDeclarationAST_2D_weak::bang_enumDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_enumDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumDeclarationAST) ;
      result = GALGAS_enumDeclarationAST ((cPtr_enumDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @enumDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumDeclarationAST_2D_weak ("enumDeclarationAST-weak",
                                                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST_2D_weak GALGAS_enumDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumDeclarationAST_2D_weak result ;
  const GALGAS_enumDeclarationAST_2D_weak * p = (const GALGAS_enumDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enumDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@enumConstantListForGeneration' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_enumConstantListForGeneration : public cCollectionElement {
  public: GALGAS_enumConstantListForGeneration_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_enumConstantListForGeneration (const GALGAS_string & in_mConstantName,
                                                            const GALGAS_unifiedTypeMapEntryList & in_mAssociatedValueTypeList
                                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_enumConstantListForGeneration (const GALGAS_enumConstantListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_enumConstantListForGeneration::cCollectionElement_enumConstantListForGeneration (const GALGAS_string & in_mConstantName,
                                                                                                    const GALGAS_unifiedTypeMapEntryList & in_mAssociatedValueTypeList
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mConstantName, in_mAssociatedValueTypeList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_enumConstantListForGeneration::cCollectionElement_enumConstantListForGeneration (const GALGAS_enumConstantListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mConstantName, inElement.mProperty_mAssociatedValueTypeList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_enumConstantListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_enumConstantListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_enumConstantListForGeneration (mObject.mProperty_mConstantName, mObject.mProperty_mAssociatedValueTypeList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_enumConstantListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mConstantName" ":") ;
  mObject.mProperty_mConstantName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAssociatedValueTypeList" ":") ;
  mObject.mProperty_mAssociatedValueTypeList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_enumConstantListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_enumConstantListForGeneration * operand = (cCollectionElement_enumConstantListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_enumConstantListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration::GALGAS_enumConstantListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration::GALGAS_enumConstantListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration GALGAS_enumConstantListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumConstantListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration GALGAS_enumConstantListForGeneration::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                                                                     const GALGAS_unifiedTypeMapEntryList & inOperand1
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumConstantListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_enumConstantListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumConstantListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_string & in_mConstantName,
                                                                      const GALGAS_unifiedTypeMapEntryList & in_mAssociatedValueTypeList
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_enumConstantListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_enumConstantListForGeneration (in_mConstantName,
                                                                   in_mAssociatedValueTypeList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumConstantListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                const GALGAS_unifiedTypeMapEntryList & inOperand1
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_enumConstantListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumConstantListForGeneration::setter_append (const GALGAS_string inOperand0,
                                                          const GALGAS_unifiedTypeMapEntryList inOperand1,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_enumConstantListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumConstantListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                 const GALGAS_unifiedTypeMapEntryList inOperand1,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_enumConstantListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_enumConstantListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                 GALGAS_unifiedTypeMapEntryList & outOperand1,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_enumConstantListForGeneration * p = (cCollectionElement_enumConstantListForGeneration *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_enumConstantListForGeneration) ;
        outOperand0 = p->mObject.mProperty_mConstantName ;
        outOperand1 = p->mObject.mProperty_mAssociatedValueTypeList ;
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

void GALGAS_enumConstantListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                            GALGAS_unifiedTypeMapEntryList & outOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumConstantListForGeneration * p = (cCollectionElement_enumConstantListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumConstantListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mConstantName ;
    outOperand1 = p->mObject.mProperty_mAssociatedValueTypeList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumConstantListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                           GALGAS_unifiedTypeMapEntryList & outOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumConstantListForGeneration * p = (cCollectionElement_enumConstantListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumConstantListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mConstantName ;
    outOperand1 = p->mObject.mProperty_mAssociatedValueTypeList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumConstantListForGeneration::method_first (GALGAS_string & outOperand0,
                                                         GALGAS_unifiedTypeMapEntryList & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumConstantListForGeneration * p = (cCollectionElement_enumConstantListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumConstantListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mConstantName ;
    outOperand1 = p->mObject.mProperty_mAssociatedValueTypeList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumConstantListForGeneration::method_last (GALGAS_string & outOperand0,
                                                        GALGAS_unifiedTypeMapEntryList & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumConstantListForGeneration * p = (cCollectionElement_enumConstantListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumConstantListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mConstantName ;
    outOperand1 = p->mObject.mProperty_mAssociatedValueTypeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration GALGAS_enumConstantListForGeneration::add_operation (const GALGAS_enumConstantListForGeneration & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_enumConstantListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration GALGAS_enumConstantListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantListForGeneration result = GALGAS_enumConstantListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration GALGAS_enumConstantListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantListForGeneration result = GALGAS_enumConstantListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration GALGAS_enumConstantListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantListForGeneration result = GALGAS_enumConstantListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumConstantListForGeneration::plusAssign_operation (const GALGAS_enumConstantListForGeneration inOperand,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumConstantListForGeneration::setter_setMConstantNameAtIndex (GALGAS_string inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_enumConstantListForGeneration * p = (cCollectionElement_enumConstantListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_enumConstantListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mConstantName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_enumConstantListForGeneration::getter_mConstantNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumConstantListForGeneration * p = (cCollectionElement_enumConstantListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_enumConstantListForGeneration) ;
    result = p->mObject.mProperty_mConstantName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumConstantListForGeneration::setter_setMAssociatedValueTypeListAtIndex (GALGAS_unifiedTypeMapEntryList inOperand,
                                                                                      GALGAS_uint inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_enumConstantListForGeneration * p = (cCollectionElement_enumConstantListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_enumConstantListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAssociatedValueTypeList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList GALGAS_enumConstantListForGeneration::getter_mAssociatedValueTypeListAtIndex (const GALGAS_uint & inIndex,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumConstantListForGeneration * p = (cCollectionElement_enumConstantListForGeneration *) attributes.ptr () ;
  GALGAS_unifiedTypeMapEntryList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_enumConstantListForGeneration) ;
    result = p->mObject.mProperty_mAssociatedValueTypeList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_enumConstantListForGeneration::cEnumerator_enumConstantListForGeneration (const GALGAS_enumConstantListForGeneration & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration_2D_element cEnumerator_enumConstantListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_enumConstantListForGeneration * p = (const cCollectionElement_enumConstantListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumConstantListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_enumConstantListForGeneration::current_mConstantName (LOCATION_ARGS) const {
  const cCollectionElement_enumConstantListForGeneration * p = (const cCollectionElement_enumConstantListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumConstantListForGeneration) ;
  return p->mObject.mProperty_mConstantName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList cEnumerator_enumConstantListForGeneration::current_mAssociatedValueTypeList (LOCATION_ARGS) const {
  const cCollectionElement_enumConstantListForGeneration * p = (const cCollectionElement_enumConstantListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumConstantListForGeneration) ;
  return p->mObject.mProperty_mAssociatedValueTypeList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @enumConstantListForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantListForGeneration ("enumConstantListForGeneration",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumConstantListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumConstantListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumConstantListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration GALGAS_enumConstantListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantListForGeneration result ;
  const GALGAS_enumConstantListForGeneration * p = (const GALGAS_enumConstantListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enumConstantListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@unifiedTypeMapEntryList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_unifiedTypeMapEntryList : public cCollectionElement {
  public: GALGAS_unifiedTypeMapEntryList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_unifiedTypeMapEntryList (const GALGAS_unifiedTypeMapEntry & in_mEntry
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_unifiedTypeMapEntryList (const GALGAS_unifiedTypeMapEntryList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_unifiedTypeMapEntryList::cCollectionElement_unifiedTypeMapEntryList (const GALGAS_unifiedTypeMapEntry & in_mEntry
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEntry) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_unifiedTypeMapEntryList::cCollectionElement_unifiedTypeMapEntryList (const GALGAS_unifiedTypeMapEntryList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEntry) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_unifiedTypeMapEntryList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_unifiedTypeMapEntryList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_unifiedTypeMapEntryList (mObject.mProperty_mEntry COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_unifiedTypeMapEntryList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEntry" ":") ;
  mObject.mProperty_mEntry.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_unifiedTypeMapEntryList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_unifiedTypeMapEntryList * operand = (cCollectionElement_unifiedTypeMapEntryList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_unifiedTypeMapEntryList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList::GALGAS_unifiedTypeMapEntryList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList::GALGAS_unifiedTypeMapEntryList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList GALGAS_unifiedTypeMapEntryList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_unifiedTypeMapEntryList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList GALGAS_unifiedTypeMapEntryList::class_func_listWithValue (const GALGAS_unifiedTypeMapEntry & inOperand0
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntryList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_unifiedTypeMapEntryList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_unifiedTypeMapEntryList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapEntryList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_unifiedTypeMapEntry & in_mEntry
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_unifiedTypeMapEntryList * p = nullptr ;
  macroMyNew (p, cCollectionElement_unifiedTypeMapEntryList (in_mEntry COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapEntryList::addAssign_operation (const GALGAS_unifiedTypeMapEntry & inOperand0
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_unifiedTypeMapEntryList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapEntryList::setter_append (const GALGAS_unifiedTypeMapEntry inOperand0,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_unifiedTypeMapEntryList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapEntryList::setter_insertAtIndex (const GALGAS_unifiedTypeMapEntry inOperand0,
                                                           const GALGAS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_unifiedTypeMapEntryList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_unifiedTypeMapEntryList::setter_removeAtIndex (GALGAS_unifiedTypeMapEntry & outOperand0,
                                                           const GALGAS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_unifiedTypeMapEntryList * p = (cCollectionElement_unifiedTypeMapEntryList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_unifiedTypeMapEntryList) ;
        outOperand0 = p->mObject.mProperty_mEntry ;
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

void GALGAS_unifiedTypeMapEntryList::setter_popFirst (GALGAS_unifiedTypeMapEntry & outOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapEntryList * p = (cCollectionElement_unifiedTypeMapEntryList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapEntryList) ;
    outOperand0 = p->mObject.mProperty_mEntry ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapEntryList::setter_popLast (GALGAS_unifiedTypeMapEntry & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapEntryList * p = (cCollectionElement_unifiedTypeMapEntryList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapEntryList) ;
    outOperand0 = p->mObject.mProperty_mEntry ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapEntryList::method_first (GALGAS_unifiedTypeMapEntry & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapEntryList * p = (cCollectionElement_unifiedTypeMapEntryList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapEntryList) ;
    outOperand0 = p->mObject.mProperty_mEntry ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapEntryList::method_last (GALGAS_unifiedTypeMapEntry & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapEntryList * p = (cCollectionElement_unifiedTypeMapEntryList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapEntryList) ;
    outOperand0 = p->mObject.mProperty_mEntry ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList GALGAS_unifiedTypeMapEntryList::add_operation (const GALGAS_unifiedTypeMapEntryList & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapEntryList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList GALGAS_unifiedTypeMapEntryList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapEntryList result = GALGAS_unifiedTypeMapEntryList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList GALGAS_unifiedTypeMapEntryList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapEntryList result = GALGAS_unifiedTypeMapEntryList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList GALGAS_unifiedTypeMapEntryList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapEntryList result = GALGAS_unifiedTypeMapEntryList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapEntryList::plusAssign_operation (const GALGAS_unifiedTypeMapEntryList inOperand,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapEntryList::setter_setMEntryAtIndex (GALGAS_unifiedTypeMapEntry inOperand,
                                                              GALGAS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_unifiedTypeMapEntryList * p = (cCollectionElement_unifiedTypeMapEntryList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapEntryList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEntry = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_unifiedTypeMapEntryList::getter_mEntryAtIndex (const GALGAS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapEntryList * p = (cCollectionElement_unifiedTypeMapEntryList *) attributes.ptr () ;
  GALGAS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapEntryList) ;
    result = p->mObject.mProperty_mEntry ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_unifiedTypeMapEntryList::cEnumerator_unifiedTypeMapEntryList (const GALGAS_unifiedTypeMapEntryList & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList_2D_element cEnumerator_unifiedTypeMapEntryList::current (LOCATION_ARGS) const {
  const cCollectionElement_unifiedTypeMapEntryList * p = (const cCollectionElement_unifiedTypeMapEntryList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_unifiedTypeMapEntryList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry cEnumerator_unifiedTypeMapEntryList::current_mEntry (LOCATION_ARGS) const {
  const cCollectionElement_unifiedTypeMapEntryList * p = (const cCollectionElement_unifiedTypeMapEntryList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_unifiedTypeMapEntryList) ;
  return p->mObject.mProperty_mEntry ;
}




//--------------------------------------------------------------------------------------------------
//
//     @unifiedTypeMapEntryList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntryList ("unifiedTypeMapEntryList",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unifiedTypeMapEntryList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapEntryList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unifiedTypeMapEntryList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMapEntryList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList GALGAS_unifiedTypeMapEntryList::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntryList result ;
  const GALGAS_unifiedTypeMapEntryList * p = (const GALGAS_unifiedTypeMapEntryList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_unifiedTypeMapEntryList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapEntryList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@externTypeConstructorList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_externTypeConstructorList : public cCollectionElement {
  public: GALGAS_externTypeConstructorList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_externTypeConstructorList (const GALGAS_lstring & in_mConstructorName,
                                                        const GALGAS_lstring & in_mResultTypeName,
                                                        const GALGAS_typeNameFormalParameterNameList & in_mParameterList
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_externTypeConstructorList (const GALGAS_externTypeConstructorList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_externTypeConstructorList::cCollectionElement_externTypeConstructorList (const GALGAS_lstring & in_mConstructorName,
                                                                                            const GALGAS_lstring & in_mResultTypeName,
                                                                                            const GALGAS_typeNameFormalParameterNameList & in_mParameterList
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mConstructorName, in_mResultTypeName, in_mParameterList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_externTypeConstructorList::cCollectionElement_externTypeConstructorList (const GALGAS_externTypeConstructorList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mConstructorName, inElement.mProperty_mResultTypeName, inElement.mProperty_mParameterList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_externTypeConstructorList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_externTypeConstructorList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_externTypeConstructorList (mObject.mProperty_mConstructorName, mObject.mProperty_mResultTypeName, mObject.mProperty_mParameterList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_externTypeConstructorList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mConstructorName" ":") ;
  mObject.mProperty_mConstructorName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mResultTypeName" ":") ;
  mObject.mProperty_mResultTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mParameterList" ":") ;
  mObject.mProperty_mParameterList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_externTypeConstructorList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externTypeConstructorList * operand = (cCollectionElement_externTypeConstructorList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externTypeConstructorList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList::GALGAS_externTypeConstructorList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList::GALGAS_externTypeConstructorList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_externTypeConstructorList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                             const GALGAS_lstring & inOperand1,
                                                                                             const GALGAS_typeNameFormalParameterNameList & inOperand2
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_externTypeConstructorList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_externTypeConstructorList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_externTypeConstructorList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_lstring & in_mConstructorName,
                                                                  const GALGAS_lstring & in_mResultTypeName,
                                                                  const GALGAS_typeNameFormalParameterNameList & in_mParameterList
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeConstructorList * p = nullptr ;
  macroMyNew (p, cCollectionElement_externTypeConstructorList (in_mConstructorName,
                                                               in_mResultTypeName,
                                                               in_mParameterList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_lstring & inOperand1,
                                                            const GALGAS_typeNameFormalParameterNameList & inOperand2
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_externTypeConstructorList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList::setter_append (const GALGAS_lstring inOperand0,
                                                      const GALGAS_lstring inOperand1,
                                                      const GALGAS_typeNameFormalParameterNameList inOperand2,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_externTypeConstructorList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                             const GALGAS_lstring inOperand1,
                                                             const GALGAS_typeNameFormalParameterNameList inOperand2,
                                                             const GALGAS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_externTypeConstructorList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_externTypeConstructorList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                             GALGAS_lstring & outOperand1,
                                                             GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                             const GALGAS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_externTypeConstructorList * p = (cCollectionElement_externTypeConstructorList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
        outOperand0 = p->mObject.mProperty_mConstructorName ;
        outOperand1 = p->mObject.mProperty_mResultTypeName ;
        outOperand2 = p->mObject.mProperty_mParameterList ;
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

void GALGAS_externTypeConstructorList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeConstructorList * p = (cCollectionElement_externTypeConstructorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
    outOperand0 = p->mObject.mProperty_mConstructorName ;
    outOperand1 = p->mObject.mProperty_mResultTypeName ;
    outOperand2 = p->mObject.mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList::setter_popLast (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeConstructorList * p = (cCollectionElement_externTypeConstructorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
    outOperand0 = p->mObject.mProperty_mConstructorName ;
    outOperand1 = p->mObject.mProperty_mResultTypeName ;
    outOperand2 = p->mObject.mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList::method_first (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeConstructorList * p = (cCollectionElement_externTypeConstructorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
    outOperand0 = p->mObject.mProperty_mConstructorName ;
    outOperand1 = p->mObject.mProperty_mResultTypeName ;
    outOperand2 = p->mObject.mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList::method_last (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeConstructorList * p = (cCollectionElement_externTypeConstructorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
    outOperand0 = p->mObject.mProperty_mConstructorName ;
    outOperand1 = p->mObject.mProperty_mResultTypeName ;
    outOperand2 = p->mObject.mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::add_operation (const GALGAS_externTypeConstructorList & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_externTypeConstructorList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeConstructorList result = GALGAS_externTypeConstructorList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeConstructorList result = GALGAS_externTypeConstructorList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeConstructorList result = GALGAS_externTypeConstructorList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList::plusAssign_operation (const GALGAS_externTypeConstructorList inOperand,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList::setter_setMConstructorNameAtIndex (GALGAS_lstring inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeConstructorList * p = (cCollectionElement_externTypeConstructorList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mConstructorName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externTypeConstructorList::getter_mConstructorNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeConstructorList * p = (cCollectionElement_externTypeConstructorList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
    result = p->mObject.mProperty_mConstructorName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList::setter_setMResultTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeConstructorList * p = (cCollectionElement_externTypeConstructorList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mResultTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externTypeConstructorList::getter_mResultTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeConstructorList * p = (cCollectionElement_externTypeConstructorList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
    result = p->mObject.mProperty_mResultTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList::setter_setMParameterListAtIndex (GALGAS_typeNameFormalParameterNameList inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeConstructorList * p = (cCollectionElement_externTypeConstructorList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mParameterList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList GALGAS_externTypeConstructorList::getter_mParameterListAtIndex (const GALGAS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeConstructorList * p = (cCollectionElement_externTypeConstructorList *) attributes.ptr () ;
  GALGAS_typeNameFormalParameterNameList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
    result = p->mObject.mProperty_mParameterList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_externTypeConstructorList::cEnumerator_externTypeConstructorList (const GALGAS_externTypeConstructorList & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList_2D_element cEnumerator_externTypeConstructorList::current (LOCATION_ARGS) const {
  const cCollectionElement_externTypeConstructorList * p = (const cCollectionElement_externTypeConstructorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_externTypeConstructorList::current_mConstructorName (LOCATION_ARGS) const {
  const cCollectionElement_externTypeConstructorList * p = (const cCollectionElement_externTypeConstructorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
  return p->mObject.mProperty_mConstructorName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_externTypeConstructorList::current_mResultTypeName (LOCATION_ARGS) const {
  const cCollectionElement_externTypeConstructorList * p = (const cCollectionElement_externTypeConstructorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
  return p->mObject.mProperty_mResultTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList cEnumerator_externTypeConstructorList::current_mParameterList (LOCATION_ARGS) const {
  const cCollectionElement_externTypeConstructorList * p = (const cCollectionElement_externTypeConstructorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
  return p->mObject.mProperty_mParameterList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @externTypeConstructorList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeConstructorList ("externTypeConstructorList",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externTypeConstructorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeConstructorList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externTypeConstructorList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeConstructorList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_externTypeConstructorList result ;
  const GALGAS_externTypeConstructorList * p = (const GALGAS_externTypeConstructorList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_externTypeConstructorList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeConstructorList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@externTypeGetterList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_externTypeGetterList : public cCollectionElement {
  public: GALGAS_externTypeGetterList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_externTypeGetterList (const GALGAS_lstring & in_mGetterName,
                                                   const GALGAS_lstring & in_mResultTypeName,
                                                   const GALGAS_typeNameFormalParameterNameList & in_mParameterList
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_externTypeGetterList (const GALGAS_externTypeGetterList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_externTypeGetterList::cCollectionElement_externTypeGetterList (const GALGAS_lstring & in_mGetterName,
                                                                                  const GALGAS_lstring & in_mResultTypeName,
                                                                                  const GALGAS_typeNameFormalParameterNameList & in_mParameterList
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGetterName, in_mResultTypeName, in_mParameterList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_externTypeGetterList::cCollectionElement_externTypeGetterList (const GALGAS_externTypeGetterList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mGetterName, inElement.mProperty_mResultTypeName, inElement.mProperty_mParameterList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_externTypeGetterList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_externTypeGetterList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_externTypeGetterList (mObject.mProperty_mGetterName, mObject.mProperty_mResultTypeName, mObject.mProperty_mParameterList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_externTypeGetterList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGetterName" ":") ;
  mObject.mProperty_mGetterName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mResultTypeName" ":") ;
  mObject.mProperty_mResultTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mParameterList" ":") ;
  mObject.mProperty_mParameterList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_externTypeGetterList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externTypeGetterList * operand = (cCollectionElement_externTypeGetterList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externTypeGetterList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList::GALGAS_externTypeGetterList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList::GALGAS_externTypeGetterList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_externTypeGetterList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                   const GALGAS_lstring & inOperand1,
                                                                                   const GALGAS_typeNameFormalParameterNameList & inOperand2
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_externTypeGetterList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_externTypeGetterList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_externTypeGetterList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_lstring & in_mGetterName,
                                                             const GALGAS_lstring & in_mResultTypeName,
                                                             const GALGAS_typeNameFormalParameterNameList & in_mParameterList
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeGetterList * p = nullptr ;
  macroMyNew (p, cCollectionElement_externTypeGetterList (in_mGetterName,
                                                          in_mResultTypeName,
                                                          in_mParameterList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                       const GALGAS_lstring & inOperand1,
                                                       const GALGAS_typeNameFormalParameterNameList & inOperand2
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_externTypeGetterList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList::setter_append (const GALGAS_lstring inOperand0,
                                                 const GALGAS_lstring inOperand1,
                                                 const GALGAS_typeNameFormalParameterNameList inOperand2,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_externTypeGetterList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                        const GALGAS_lstring inOperand1,
                                                        const GALGAS_typeNameFormalParameterNameList inOperand2,
                                                        const GALGAS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_externTypeGetterList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_externTypeGetterList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                        const GALGAS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_externTypeGetterList * p = (cCollectionElement_externTypeGetterList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
        outOperand0 = p->mObject.mProperty_mGetterName ;
        outOperand1 = p->mObject.mProperty_mResultTypeName ;
        outOperand2 = p->mObject.mProperty_mParameterList ;
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

void GALGAS_externTypeGetterList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeGetterList * p = (cCollectionElement_externTypeGetterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
    outOperand0 = p->mObject.mProperty_mGetterName ;
    outOperand1 = p->mObject.mProperty_mResultTypeName ;
    outOperand2 = p->mObject.mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList::setter_popLast (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeGetterList * p = (cCollectionElement_externTypeGetterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
    outOperand0 = p->mObject.mProperty_mGetterName ;
    outOperand1 = p->mObject.mProperty_mResultTypeName ;
    outOperand2 = p->mObject.mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList::method_first (GALGAS_lstring & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                GALGAS_typeNameFormalParameterNameList & outOperand2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeGetterList * p = (cCollectionElement_externTypeGetterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
    outOperand0 = p->mObject.mProperty_mGetterName ;
    outOperand1 = p->mObject.mProperty_mResultTypeName ;
    outOperand2 = p->mObject.mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList::method_last (GALGAS_lstring & outOperand0,
                                               GALGAS_lstring & outOperand1,
                                               GALGAS_typeNameFormalParameterNameList & outOperand2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeGetterList * p = (cCollectionElement_externTypeGetterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
    outOperand0 = p->mObject.mProperty_mGetterName ;
    outOperand1 = p->mObject.mProperty_mResultTypeName ;
    outOperand2 = p->mObject.mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::add_operation (const GALGAS_externTypeGetterList & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_externTypeGetterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeGetterList result = GALGAS_externTypeGetterList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeGetterList result = GALGAS_externTypeGetterList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeGetterList result = GALGAS_externTypeGetterList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList::plusAssign_operation (const GALGAS_externTypeGetterList inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList::setter_setMGetterNameAtIndex (GALGAS_lstring inOperand,
                                                                GALGAS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeGetterList * p = (cCollectionElement_externTypeGetterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGetterName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externTypeGetterList::getter_mGetterNameAtIndex (const GALGAS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeGetterList * p = (cCollectionElement_externTypeGetterList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
    result = p->mObject.mProperty_mGetterName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList::setter_setMResultTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeGetterList * p = (cCollectionElement_externTypeGetterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mResultTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externTypeGetterList::getter_mResultTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeGetterList * p = (cCollectionElement_externTypeGetterList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
    result = p->mObject.mProperty_mResultTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList::setter_setMParameterListAtIndex (GALGAS_typeNameFormalParameterNameList inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeGetterList * p = (cCollectionElement_externTypeGetterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mParameterList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList GALGAS_externTypeGetterList::getter_mParameterListAtIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeGetterList * p = (cCollectionElement_externTypeGetterList *) attributes.ptr () ;
  GALGAS_typeNameFormalParameterNameList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
    result = p->mObject.mProperty_mParameterList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_externTypeGetterList::cEnumerator_externTypeGetterList (const GALGAS_externTypeGetterList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList_2D_element cEnumerator_externTypeGetterList::current (LOCATION_ARGS) const {
  const cCollectionElement_externTypeGetterList * p = (const cCollectionElement_externTypeGetterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_externTypeGetterList::current_mGetterName (LOCATION_ARGS) const {
  const cCollectionElement_externTypeGetterList * p = (const cCollectionElement_externTypeGetterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
  return p->mObject.mProperty_mGetterName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_externTypeGetterList::current_mResultTypeName (LOCATION_ARGS) const {
  const cCollectionElement_externTypeGetterList * p = (const cCollectionElement_externTypeGetterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
  return p->mObject.mProperty_mResultTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList cEnumerator_externTypeGetterList::current_mParameterList (LOCATION_ARGS) const {
  const cCollectionElement_externTypeGetterList * p = (const cCollectionElement_externTypeGetterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
  return p->mObject.mProperty_mParameterList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @externTypeGetterList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeGetterList ("externTypeGetterList",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externTypeGetterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeGetterList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externTypeGetterList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeGetterList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externTypeGetterList result ;
  const GALGAS_externTypeGetterList * p = (const GALGAS_externTypeGetterList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_externTypeGetterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeGetterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@externTypeSetterList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_externTypeSetterList : public cCollectionElement {
  public: GALGAS_externTypeSetterList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_externTypeSetterList (const GALGAS_lstring & in_mSetterName,
                                                   const GALGAS_formalParameterListAST & in_mFormalParameterList
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_externTypeSetterList (const GALGAS_externTypeSetterList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_externTypeSetterList::cCollectionElement_externTypeSetterList (const GALGAS_lstring & in_mSetterName,
                                                                                  const GALGAS_formalParameterListAST & in_mFormalParameterList
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSetterName, in_mFormalParameterList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_externTypeSetterList::cCollectionElement_externTypeSetterList (const GALGAS_externTypeSetterList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSetterName, inElement.mProperty_mFormalParameterList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_externTypeSetterList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_externTypeSetterList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_externTypeSetterList (mObject.mProperty_mSetterName, mObject.mProperty_mFormalParameterList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_externTypeSetterList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSetterName" ":") ;
  mObject.mProperty_mSetterName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalParameterList" ":") ;
  mObject.mProperty_mFormalParameterList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_externTypeSetterList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externTypeSetterList * operand = (cCollectionElement_externTypeSetterList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externTypeSetterList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList::GALGAS_externTypeSetterList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList::GALGAS_externTypeSetterList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList GALGAS_externTypeSetterList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_externTypeSetterList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList GALGAS_externTypeSetterList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                   const GALGAS_formalParameterListAST & inOperand1
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_externTypeSetterList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_externTypeSetterList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_externTypeSetterList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeSetterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_lstring & in_mSetterName,
                                                             const GALGAS_formalParameterListAST & in_mFormalParameterList
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeSetterList * p = nullptr ;
  macroMyNew (p, cCollectionElement_externTypeSetterList (in_mSetterName,
                                                          in_mFormalParameterList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeSetterList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                       const GALGAS_formalParameterListAST & inOperand1
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_externTypeSetterList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeSetterList::setter_append (const GALGAS_lstring inOperand0,
                                                 const GALGAS_formalParameterListAST inOperand1,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_externTypeSetterList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeSetterList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                        const GALGAS_formalParameterListAST inOperand1,
                                                        const GALGAS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_externTypeSetterList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_externTypeSetterList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                        GALGAS_formalParameterListAST & outOperand1,
                                                        const GALGAS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_externTypeSetterList * p = (cCollectionElement_externTypeSetterList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_externTypeSetterList) ;
        outOperand0 = p->mObject.mProperty_mSetterName ;
        outOperand1 = p->mObject.mProperty_mFormalParameterList ;
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

void GALGAS_externTypeSetterList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                   GALGAS_formalParameterListAST & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeSetterList * p = (cCollectionElement_externTypeSetterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeSetterList) ;
    outOperand0 = p->mObject.mProperty_mSetterName ;
    outOperand1 = p->mObject.mProperty_mFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeSetterList::setter_popLast (GALGAS_lstring & outOperand0,
                                                  GALGAS_formalParameterListAST & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeSetterList * p = (cCollectionElement_externTypeSetterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeSetterList) ;
    outOperand0 = p->mObject.mProperty_mSetterName ;
    outOperand1 = p->mObject.mProperty_mFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeSetterList::method_first (GALGAS_lstring & outOperand0,
                                                GALGAS_formalParameterListAST & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeSetterList * p = (cCollectionElement_externTypeSetterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeSetterList) ;
    outOperand0 = p->mObject.mProperty_mSetterName ;
    outOperand1 = p->mObject.mProperty_mFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeSetterList::method_last (GALGAS_lstring & outOperand0,
                                               GALGAS_formalParameterListAST & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeSetterList * p = (cCollectionElement_externTypeSetterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeSetterList) ;
    outOperand0 = p->mObject.mProperty_mSetterName ;
    outOperand1 = p->mObject.mProperty_mFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList GALGAS_externTypeSetterList::add_operation (const GALGAS_externTypeSetterList & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_externTypeSetterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList GALGAS_externTypeSetterList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeSetterList result = GALGAS_externTypeSetterList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList GALGAS_externTypeSetterList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeSetterList result = GALGAS_externTypeSetterList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList GALGAS_externTypeSetterList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeSetterList result = GALGAS_externTypeSetterList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeSetterList::plusAssign_operation (const GALGAS_externTypeSetterList inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeSetterList::setter_setMSetterNameAtIndex (GALGAS_lstring inOperand,
                                                                GALGAS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeSetterList * p = (cCollectionElement_externTypeSetterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeSetterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSetterName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externTypeSetterList::getter_mSetterNameAtIndex (const GALGAS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeSetterList * p = (cCollectionElement_externTypeSetterList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeSetterList) ;
    result = p->mObject.mProperty_mSetterName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeSetterList::setter_setMFormalParameterListAtIndex (GALGAS_formalParameterListAST inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeSetterList * p = (cCollectionElement_externTypeSetterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeSetterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalParameterList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_externTypeSetterList::getter_mFormalParameterListAtIndex (const GALGAS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeSetterList * p = (cCollectionElement_externTypeSetterList *) attributes.ptr () ;
  GALGAS_formalParameterListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeSetterList) ;
    result = p->mObject.mProperty_mFormalParameterList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_externTypeSetterList::cEnumerator_externTypeSetterList (const GALGAS_externTypeSetterList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList_2D_element cEnumerator_externTypeSetterList::current (LOCATION_ARGS) const {
  const cCollectionElement_externTypeSetterList * p = (const cCollectionElement_externTypeSetterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeSetterList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_externTypeSetterList::current_mSetterName (LOCATION_ARGS) const {
  const cCollectionElement_externTypeSetterList * p = (const cCollectionElement_externTypeSetterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeSetterList) ;
  return p->mObject.mProperty_mSetterName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST cEnumerator_externTypeSetterList::current_mFormalParameterList (LOCATION_ARGS) const {
  const cCollectionElement_externTypeSetterList * p = (const cCollectionElement_externTypeSetterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeSetterList) ;
  return p->mObject.mProperty_mFormalParameterList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @externTypeSetterList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeSetterList ("externTypeSetterList",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externTypeSetterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeSetterList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externTypeSetterList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeSetterList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList GALGAS_externTypeSetterList::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externTypeSetterList result ;
  const GALGAS_externTypeSetterList * p = (const GALGAS_externTypeSetterList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_externTypeSetterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeSetterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@externTypeMethodList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_externTypeMethodList : public cCollectionElement {
  public: GALGAS_externTypeMethodList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_externTypeMethodList (const GALGAS_lstring & in_mMethodName,
                                                   const GALGAS_formalParameterListAST & in_mFormalParameterList,
                                                   const GALGAS_location & in_mDeclarationLocation
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_externTypeMethodList (const GALGAS_externTypeMethodList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_externTypeMethodList::cCollectionElement_externTypeMethodList (const GALGAS_lstring & in_mMethodName,
                                                                                  const GALGAS_formalParameterListAST & in_mFormalParameterList,
                                                                                  const GALGAS_location & in_mDeclarationLocation
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMethodName, in_mFormalParameterList, in_mDeclarationLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_externTypeMethodList::cCollectionElement_externTypeMethodList (const GALGAS_externTypeMethodList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mMethodName, inElement.mProperty_mFormalParameterList, inElement.mProperty_mDeclarationLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_externTypeMethodList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_externTypeMethodList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_externTypeMethodList (mObject.mProperty_mMethodName, mObject.mProperty_mFormalParameterList, mObject.mProperty_mDeclarationLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_externTypeMethodList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mMethodName" ":") ;
  mObject.mProperty_mMethodName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalParameterList" ":") ;
  mObject.mProperty_mFormalParameterList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDeclarationLocation" ":") ;
  mObject.mProperty_mDeclarationLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_externTypeMethodList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externTypeMethodList * operand = (cCollectionElement_externTypeMethodList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externTypeMethodList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList::GALGAS_externTypeMethodList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList::GALGAS_externTypeMethodList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_externTypeMethodList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                   const GALGAS_formalParameterListAST & inOperand1,
                                                                                   const GALGAS_location & inOperand2
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_externTypeMethodList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_externTypeMethodList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_externTypeMethodList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_lstring & in_mMethodName,
                                                             const GALGAS_formalParameterListAST & in_mFormalParameterList,
                                                             const GALGAS_location & in_mDeclarationLocation
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeMethodList * p = nullptr ;
  macroMyNew (p, cCollectionElement_externTypeMethodList (in_mMethodName,
                                                          in_mFormalParameterList,
                                                          in_mDeclarationLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                       const GALGAS_formalParameterListAST & inOperand1,
                                                       const GALGAS_location & inOperand2
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_externTypeMethodList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList::setter_append (const GALGAS_lstring inOperand0,
                                                 const GALGAS_formalParameterListAST inOperand1,
                                                 const GALGAS_location inOperand2,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_externTypeMethodList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                        const GALGAS_formalParameterListAST inOperand1,
                                                        const GALGAS_location inOperand2,
                                                        const GALGAS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_externTypeMethodList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_externTypeMethodList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                        GALGAS_formalParameterListAST & outOperand1,
                                                        GALGAS_location & outOperand2,
                                                        const GALGAS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_externTypeMethodList * p = (cCollectionElement_externTypeMethodList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
        outOperand0 = p->mObject.mProperty_mMethodName ;
        outOperand1 = p->mObject.mProperty_mFormalParameterList ;
        outOperand2 = p->mObject.mProperty_mDeclarationLocation ;
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

void GALGAS_externTypeMethodList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                   GALGAS_formalParameterListAST & outOperand1,
                                                   GALGAS_location & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeMethodList * p = (cCollectionElement_externTypeMethodList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
    outOperand0 = p->mObject.mProperty_mMethodName ;
    outOperand1 = p->mObject.mProperty_mFormalParameterList ;
    outOperand2 = p->mObject.mProperty_mDeclarationLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList::setter_popLast (GALGAS_lstring & outOperand0,
                                                  GALGAS_formalParameterListAST & outOperand1,
                                                  GALGAS_location & outOperand2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeMethodList * p = (cCollectionElement_externTypeMethodList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
    outOperand0 = p->mObject.mProperty_mMethodName ;
    outOperand1 = p->mObject.mProperty_mFormalParameterList ;
    outOperand2 = p->mObject.mProperty_mDeclarationLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList::method_first (GALGAS_lstring & outOperand0,
                                                GALGAS_formalParameterListAST & outOperand1,
                                                GALGAS_location & outOperand2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeMethodList * p = (cCollectionElement_externTypeMethodList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
    outOperand0 = p->mObject.mProperty_mMethodName ;
    outOperand1 = p->mObject.mProperty_mFormalParameterList ;
    outOperand2 = p->mObject.mProperty_mDeclarationLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList::method_last (GALGAS_lstring & outOperand0,
                                               GALGAS_formalParameterListAST & outOperand1,
                                               GALGAS_location & outOperand2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeMethodList * p = (cCollectionElement_externTypeMethodList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
    outOperand0 = p->mObject.mProperty_mMethodName ;
    outOperand1 = p->mObject.mProperty_mFormalParameterList ;
    outOperand2 = p->mObject.mProperty_mDeclarationLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::add_operation (const GALGAS_externTypeMethodList & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_externTypeMethodList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeMethodList result = GALGAS_externTypeMethodList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeMethodList result = GALGAS_externTypeMethodList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeMethodList result = GALGAS_externTypeMethodList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList::plusAssign_operation (const GALGAS_externTypeMethodList inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList::setter_setMMethodNameAtIndex (GALGAS_lstring inOperand,
                                                                GALGAS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeMethodList * p = (cCollectionElement_externTypeMethodList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mMethodName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externTypeMethodList::getter_mMethodNameAtIndex (const GALGAS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeMethodList * p = (cCollectionElement_externTypeMethodList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
    result = p->mObject.mProperty_mMethodName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList::setter_setMFormalParameterListAtIndex (GALGAS_formalParameterListAST inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeMethodList * p = (cCollectionElement_externTypeMethodList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalParameterList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_externTypeMethodList::getter_mFormalParameterListAtIndex (const GALGAS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeMethodList * p = (cCollectionElement_externTypeMethodList *) attributes.ptr () ;
  GALGAS_formalParameterListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
    result = p->mObject.mProperty_mFormalParameterList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList::setter_setMDeclarationLocationAtIndex (GALGAS_location inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeMethodList * p = (cCollectionElement_externTypeMethodList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDeclarationLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_externTypeMethodList::getter_mDeclarationLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externTypeMethodList * p = (cCollectionElement_externTypeMethodList *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
    result = p->mObject.mProperty_mDeclarationLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_externTypeMethodList::cEnumerator_externTypeMethodList (const GALGAS_externTypeMethodList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList_2D_element cEnumerator_externTypeMethodList::current (LOCATION_ARGS) const {
  const cCollectionElement_externTypeMethodList * p = (const cCollectionElement_externTypeMethodList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_externTypeMethodList::current_mMethodName (LOCATION_ARGS) const {
  const cCollectionElement_externTypeMethodList * p = (const cCollectionElement_externTypeMethodList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
  return p->mObject.mProperty_mMethodName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST cEnumerator_externTypeMethodList::current_mFormalParameterList (LOCATION_ARGS) const {
  const cCollectionElement_externTypeMethodList * p = (const cCollectionElement_externTypeMethodList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
  return p->mObject.mProperty_mFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_externTypeMethodList::current_mDeclarationLocation (LOCATION_ARGS) const {
  const cCollectionElement_externTypeMethodList * p = (const cCollectionElement_externTypeMethodList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externTypeMethodList) ;
  return p->mObject.mProperty_mDeclarationLocation ;
}




//--------------------------------------------------------------------------------------------------
//
//     @externTypeMethodList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeMethodList ("externTypeMethodList",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externTypeMethodList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeMethodList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externTypeMethodList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeMethodList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externTypeMethodList result ;
  const GALGAS_externTypeMethodList * p = (const GALGAS_externTypeMethodList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_externTypeMethodList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeMethodList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_externTypeDeclarationAST_2D_weak::objectCompare (const GALGAS_externTypeDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationAST_2D_weak::GALGAS_externTypeDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationAST_2D_weak & GALGAS_externTypeDeclarationAST_2D_weak::operator = (const GALGAS_externTypeDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationAST_2D_weak::GALGAS_externTypeDeclarationAST_2D_weak (const GALGAS_externTypeDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationAST_2D_weak GALGAS_externTypeDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_externTypeDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationAST GALGAS_externTypeDeclarationAST_2D_weak::bang_externTypeDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_externTypeDeclarationAST) ;
      result = GALGAS_externTypeDeclarationAST ((cPtr_externTypeDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @externTypeDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeDeclarationAST_2D_weak ("externTypeDeclarationAST-weak",
                                                                                        & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externTypeDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externTypeDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationAST_2D_weak GALGAS_externTypeDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_externTypeDeclarationAST_2D_weak result ;
  const GALGAS_externTypeDeclarationAST_2D_weak * p = (const GALGAS_externTypeDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_externTypeDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@typeNameFormalParameterNameList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_typeNameFormalParameterNameList : public cCollectionElement {
  public: GALGAS_typeNameFormalParameterNameList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_typeNameFormalParameterNameList (const GALGAS_lstring & in_mFormalSelector,
                                                              const GALGAS_lstring & in_mFormalParameterTypeName,
                                                              const GALGAS_lstring & in_mFormalParameterName
                                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_typeNameFormalParameterNameList (const GALGAS_typeNameFormalParameterNameList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_typeNameFormalParameterNameList::cCollectionElement_typeNameFormalParameterNameList (const GALGAS_lstring & in_mFormalSelector,
                                                                                                        const GALGAS_lstring & in_mFormalParameterTypeName,
                                                                                                        const GALGAS_lstring & in_mFormalParameterName
                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mFormalParameterTypeName, in_mFormalParameterName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_typeNameFormalParameterNameList::cCollectionElement_typeNameFormalParameterNameList (const GALGAS_typeNameFormalParameterNameList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalSelector, inElement.mProperty_mFormalParameterTypeName, inElement.mProperty_mFormalParameterName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_typeNameFormalParameterNameList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_typeNameFormalParameterNameList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_typeNameFormalParameterNameList (mObject.mProperty_mFormalSelector, mObject.mProperty_mFormalParameterTypeName, mObject.mProperty_mFormalParameterName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_typeNameFormalParameterNameList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalSelector" ":") ;
  mObject.mProperty_mFormalSelector.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalParameterTypeName" ":") ;
  mObject.mProperty_mFormalParameterTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalParameterName" ":") ;
  mObject.mProperty_mFormalParameterName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_typeNameFormalParameterNameList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_typeNameFormalParameterNameList * operand = (cCollectionElement_typeNameFormalParameterNameList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_typeNameFormalParameterNameList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList::GALGAS_typeNameFormalParameterNameList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList::GALGAS_typeNameFormalParameterNameList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_typeNameFormalParameterNameList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                         const GALGAS_lstring & inOperand1,
                                                                                                         const GALGAS_lstring & inOperand2
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_typeNameFormalParameterNameList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_typeNameFormalParameterNameList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_typeNameFormalParameterNameList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                        const GALGAS_lstring & in_mFormalSelector,
                                                                        const GALGAS_lstring & in_mFormalParameterTypeName,
                                                                        const GALGAS_lstring & in_mFormalParameterName
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_typeNameFormalParameterNameList * p = nullptr ;
  macroMyNew (p, cCollectionElement_typeNameFormalParameterNameList (in_mFormalSelector,
                                                                     in_mFormalParameterTypeName,
                                                                     in_mFormalParameterName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_lstring & inOperand1,
                                                                  const GALGAS_lstring & inOperand2
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_typeNameFormalParameterNameList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList::setter_append (const GALGAS_lstring inOperand0,
                                                            const GALGAS_lstring inOperand1,
                                                            const GALGAS_lstring inOperand2,
                                                            Compiler * /* inCompiler */
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_typeNameFormalParameterNameList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                   const GALGAS_lstring inOperand1,
                                                                   const GALGAS_lstring inOperand2,
                                                                   const GALGAS_uint inInsertionIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_typeNameFormalParameterNameList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_typeNameFormalParameterNameList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                   GALGAS_lstring & outOperand1,
                                                                   GALGAS_lstring & outOperand2,
                                                                   const GALGAS_uint inRemoveIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_typeNameFormalParameterNameList * p = (cCollectionElement_typeNameFormalParameterNameList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
        outOperand0 = p->mObject.mProperty_mFormalSelector ;
        outOperand1 = p->mObject.mProperty_mFormalParameterTypeName ;
        outOperand2 = p->mObject.mProperty_mFormalParameterName ;
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

void GALGAS_typeNameFormalParameterNameList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                              GALGAS_lstring & outOperand1,
                                                              GALGAS_lstring & outOperand2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typeNameFormalParameterNameList * p = (cCollectionElement_typeNameFormalParameterNameList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalParameterTypeName ;
    outOperand2 = p->mObject.mProperty_mFormalParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList::setter_popLast (GALGAS_lstring & outOperand0,
                                                             GALGAS_lstring & outOperand1,
                                                             GALGAS_lstring & outOperand2,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typeNameFormalParameterNameList * p = (cCollectionElement_typeNameFormalParameterNameList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalParameterTypeName ;
    outOperand2 = p->mObject.mProperty_mFormalParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList::method_first (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           GALGAS_lstring & outOperand2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typeNameFormalParameterNameList * p = (cCollectionElement_typeNameFormalParameterNameList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalParameterTypeName ;
    outOperand2 = p->mObject.mProperty_mFormalParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList::method_last (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_lstring & outOperand2,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typeNameFormalParameterNameList * p = (cCollectionElement_typeNameFormalParameterNameList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalParameterTypeName ;
    outOperand2 = p->mObject.mProperty_mFormalParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::add_operation (const GALGAS_typeNameFormalParameterNameList & inOperand,
                                                                                              Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeNameFormalParameterNameList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_typeNameFormalParameterNameList result = GALGAS_typeNameFormalParameterNameList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_typeNameFormalParameterNameList result = GALGAS_typeNameFormalParameterNameList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_typeNameFormalParameterNameList result = GALGAS_typeNameFormalParameterNameList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList::plusAssign_operation (const GALGAS_typeNameFormalParameterNameList inOperand,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList::setter_setMFormalSelectorAtIndex (GALGAS_lstring inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_typeNameFormalParameterNameList * p = (cCollectionElement_typeNameFormalParameterNameList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalSelector = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_typeNameFormalParameterNameList::getter_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_typeNameFormalParameterNameList * p = (cCollectionElement_typeNameFormalParameterNameList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
    result = p->mObject.mProperty_mFormalSelector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList::setter_setMFormalParameterTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                                        GALGAS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_typeNameFormalParameterNameList * p = (cCollectionElement_typeNameFormalParameterNameList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalParameterTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_typeNameFormalParameterNameList::getter_mFormalParameterTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_typeNameFormalParameterNameList * p = (cCollectionElement_typeNameFormalParameterNameList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
    result = p->mObject.mProperty_mFormalParameterTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList::setter_setMFormalParameterNameAtIndex (GALGAS_lstring inOperand,
                                                                                    GALGAS_uint inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_typeNameFormalParameterNameList * p = (cCollectionElement_typeNameFormalParameterNameList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalParameterName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_typeNameFormalParameterNameList::getter_mFormalParameterNameAtIndex (const GALGAS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_typeNameFormalParameterNameList * p = (cCollectionElement_typeNameFormalParameterNameList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
    result = p->mObject.mProperty_mFormalParameterName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_typeNameFormalParameterNameList::cEnumerator_typeNameFormalParameterNameList (const GALGAS_typeNameFormalParameterNameList & inEnumeratedObject,
                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList_2D_element cEnumerator_typeNameFormalParameterNameList::current (LOCATION_ARGS) const {
  const cCollectionElement_typeNameFormalParameterNameList * p = (const cCollectionElement_typeNameFormalParameterNameList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_typeNameFormalParameterNameList::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_typeNameFormalParameterNameList * p = (const cCollectionElement_typeNameFormalParameterNameList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
  return p->mObject.mProperty_mFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_typeNameFormalParameterNameList::current_mFormalParameterTypeName (LOCATION_ARGS) const {
  const cCollectionElement_typeNameFormalParameterNameList * p = (const cCollectionElement_typeNameFormalParameterNameList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
  return p->mObject.mProperty_mFormalParameterTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_typeNameFormalParameterNameList::current_mFormalParameterName (LOCATION_ARGS) const {
  const cCollectionElement_typeNameFormalParameterNameList * p = (const cCollectionElement_typeNameFormalParameterNameList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
  return p->mObject.mProperty_mFormalParameterName ;
}




//--------------------------------------------------------------------------------------------------
//
//     @typeNameFormalParameterNameList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeNameFormalParameterNameList ("typeNameFormalParameterNameList",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeNameFormalParameterNameList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeNameFormalParameterNameList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeNameFormalParameterNameList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeNameFormalParameterNameList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typeNameFormalParameterNameList result ;
  const GALGAS_typeNameFormalParameterNameList * p = (const GALGAS_typeNameFormalParameterNameList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeNameFormalParameterNameList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeNameFormalParameterNameList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

