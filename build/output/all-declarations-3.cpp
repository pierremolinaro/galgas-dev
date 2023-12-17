#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@guiLabelListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_guiLabelListAST : public cCollectionElement {
  public: GALGAS_guiLabelListAST_2D_element mObject ;

//--- Constructors
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
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_guiLabelListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mLeadingCharacterStrippedCount" ":" ;
  mObject.mProperty_mLeadingCharacterStrippedCount.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mTerminalList" ":" ;
  mObject.mProperty_mTerminalList.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mLocation" ":" ;
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

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_guiLabelListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::constructor_listWithValue (const GALGAS_uint & inOperand0,
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
                                            C_Compiler * /* inCompiler */
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
                                                   C_Compiler * inCompiler
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
                                                   C_Compiler * inCompiler
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
                                              C_Compiler * inCompiler
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
                                             C_Compiler * inCompiler
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
                                           C_Compiler * inCompiler
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
                                          C_Compiler * inCompiler
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
                                                              C_Compiler * /* inCompiler */
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
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_guiLabelListAST result = GALGAS_guiLabelListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_guiLabelListAST result = GALGAS_guiLabelListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST GALGAS_guiLabelListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_guiLabelListAST result = GALGAS_guiLabelListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiLabelListAST::plusAssign_operation (const GALGAS_guiLabelListAST inOperand,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiLabelListAST::setter_setMLeadingCharacterStrippedCountAtIndex (GALGAS_uint inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              C_Compiler * inCompiler
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
                                                                                  C_Compiler * inCompiler
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
                                                             C_Compiler * inCompiler
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
                                                                                 C_Compiler * inCompiler
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
                                                         C_Compiler * inCompiler
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
                                                                 C_Compiler * inCompiler
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guiLabelListAST ("guiLabelListAST",
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
                                                              C_Compiler * inCompiler
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

//--- Constructors
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
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_withLexiqueListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mLexiqueFileName" ":" ;
  mObject.mProperty_mLexiqueFileName.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mLabels" ":" ;
  mObject.mProperty_mLabels.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mSimpleAttributes" ":" ;
  mObject.mProperty_mSimpleAttributes.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mCompoundAttributes" ":" ;
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

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_withLexiqueListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
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
                                               C_Compiler * /* inCompiler */
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
                                                      C_Compiler * inCompiler
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
                                                      C_Compiler * inCompiler
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
                                                 C_Compiler * inCompiler
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
                                                C_Compiler * inCompiler
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
                                              C_Compiler * inCompiler
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
                                             C_Compiler * inCompiler
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
                                                                    C_Compiler * /* inCompiler */
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
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_withLexiqueListAST result = GALGAS_withLexiqueListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_withLexiqueListAST result = GALGAS_withLexiqueListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_withLexiqueListAST GALGAS_withLexiqueListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_withLexiqueListAST result = GALGAS_withLexiqueListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_withLexiqueListAST::plusAssign_operation (const GALGAS_withLexiqueListAST inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_withLexiqueListAST::setter_setMLexiqueFileNameAtIndex (GALGAS_lstring inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   C_Compiler * inCompiler
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
                                                                          C_Compiler * inCompiler
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
                                                          C_Compiler * inCompiler
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
                                                                         C_Compiler * inCompiler
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
                                                                    C_Compiler * inCompiler
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
                                                                                             C_Compiler * inCompiler
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
                                                                      C_Compiler * inCompiler
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
                                                                                                 C_Compiler * inCompiler
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_withLexiqueListAST ("withLexiqueListAST",
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
                                                                    C_Compiler * inCompiler
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

//--- Constructors
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
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_guiCommandLineOptionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mOptionComponent" ":" ;
  mObject.mProperty_mOptionComponent.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mOptionIdentifier" ":" ;
  mObject.mProperty_mOptionIdentifier.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mOptionChar" ":" ;
  mObject.mProperty_mOptionChar.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mOptionString" ":" ;
  mObject.mProperty_mOptionString.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mComment" ":" ;
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

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_guiCommandLineOptionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::constructor_listWithValue (const GALGAS_string & inOperand0,
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
                                                     C_Compiler * /* inCompiler */
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
                                                            C_Compiler * inCompiler
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
                                                            C_Compiler * inCompiler
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
                                                       C_Compiler * inCompiler
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
                                                      C_Compiler * inCompiler
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
                                                    C_Compiler * inCompiler
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
                                                   C_Compiler * inCompiler
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
                                                                                C_Compiler * /* inCompiler */
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
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_guiCommandLineOptionList result = GALGAS_guiCommandLineOptionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_guiCommandLineOptionList result = GALGAS_guiCommandLineOptionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList GALGAS_guiCommandLineOptionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_guiCommandLineOptionList result = GALGAS_guiCommandLineOptionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList::plusAssign_operation (const GALGAS_guiCommandLineOptionList inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList::setter_setMOptionComponentAtIndex (GALGAS_string inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
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
                                                                               C_Compiler * inCompiler
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
                                                                          C_Compiler * inCompiler
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
                                                                                C_Compiler * inCompiler
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
                                                                    C_Compiler * inCompiler
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
                                                                        C_Compiler * inCompiler
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
                                                                      C_Compiler * inCompiler
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
                                                                            C_Compiler * inCompiler
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
                                                                 C_Compiler * inCompiler
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
                                                                       C_Compiler * inCompiler
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guiCommandLineOptionList ("guiCommandLineOptionList",
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
                                                                                C_Compiler * inCompiler
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

void cMapElement_extensionMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mLexiqueName" ":" ;
  mProperty_mLexiqueName.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mIndex" ":" ;
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

GALGAS_extensionMap GALGAS_extensionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_extensionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMap GALGAS_extensionMap::constructor_mapWithMapToOverride (const GALGAS_extensionMap & inMapToOverride
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_extensionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMap GALGAS_extensionMap::getter_overriddenMap (C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_extensionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                               const GALGAS_string & inArgument0,
                                               const GALGAS_uint & inArgument1,
                                               C_Compiler * inCompiler
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
                                                        C_Compiler * inCompiler
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
                                            C_Compiler * inCompiler
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
                                                              C_Compiler * inCompiler
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
                                                      C_Compiler * inCompiler
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
                                                        C_Compiler * inCompiler
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
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_extensionMap * p = (cMapElement_extensionMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionMap) ;
    p->mProperty_mIndex = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionMap * GALGAS_extensionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionMap ("extensionMap",
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
                                                        C_Compiler * inCompiler
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

//--- Constructors
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
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_textMacroList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mKey" ":" ;
  mObject.mProperty_mKey.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mContents" ":" ;
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

GALGAS_textMacroList GALGAS_textMacroList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_textMacroList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_textMacroList GALGAS_textMacroList::constructor_listWithValue (const GALGAS_string & inOperand0,
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
                                          C_Compiler * /* inCompiler */
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
                                                 C_Compiler * inCompiler
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
                                                 C_Compiler * inCompiler
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
                                            C_Compiler * inCompiler
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
                                           C_Compiler * inCompiler
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
                                         C_Compiler * inCompiler
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
                                        C_Compiler * inCompiler
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
                                                          C_Compiler * /* inCompiler */
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
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_textMacroList result = GALGAS_textMacroList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_textMacroList GALGAS_textMacroList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_textMacroList result = GALGAS_textMacroList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_textMacroList GALGAS_textMacroList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_textMacroList result = GALGAS_textMacroList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_textMacroList::plusAssign_operation (const GALGAS_textMacroList inOperand,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_textMacroList::setter_setMKeyAtIndex (GALGAS_string inOperand,
                                                  GALGAS_uint inIndex,
                                                  C_Compiler * inCompiler
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
                                                        C_Compiler * inCompiler
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
                                                       C_Compiler * inCompiler
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
                                                             C_Compiler * inCompiler
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_textMacroList ("textMacroList",
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
                                                          C_Compiler * inCompiler
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

//--- Constructors
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
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_importedLexiqueList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mLexiqueClassName" ":" ;
  mObject.mProperty_mLexiqueClassName.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mIndex" ":" ;
  mObject.mProperty_mIndex.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mBlockComment" ":" ;
  mObject.mProperty_mBlockComment.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mTitle" ":" ;
  mObject.mProperty_mTitle.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mTextMacroList" ":" ;
  mObject.mProperty_mTextMacroList.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mLabels" ":" ;
  mObject.mProperty_mLabels.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mLexicalStyleList" ":" ;
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

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_importedLexiqueList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::constructor_listWithValue (const GALGAS_string & inOperand0,
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
                                                C_Compiler * /* inCompiler */
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
                                                       C_Compiler * inCompiler
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
                                                       C_Compiler * inCompiler
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
                                                  C_Compiler * inCompiler
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
                                                 C_Compiler * inCompiler
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
                                               C_Compiler * inCompiler
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
                                              C_Compiler * inCompiler
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
                                                                      C_Compiler * /* inCompiler */
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
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_importedLexiqueList result = GALGAS_importedLexiqueList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_importedLexiqueList result = GALGAS_importedLexiqueList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_importedLexiqueList GALGAS_importedLexiqueList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_importedLexiqueList result = GALGAS_importedLexiqueList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_importedLexiqueList::plusAssign_operation (const GALGAS_importedLexiqueList inOperand,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_importedLexiqueList::setter_setMLexiqueClassNameAtIndex (GALGAS_string inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     C_Compiler * inCompiler
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
                                                                           C_Compiler * inCompiler
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
                                                          C_Compiler * inCompiler
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
                                                              C_Compiler * inCompiler
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
                                                                 C_Compiler * inCompiler
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
                                                                       C_Compiler * inCompiler
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
                                                          C_Compiler * inCompiler
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
                                                                C_Compiler * inCompiler
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
                                                                  C_Compiler * inCompiler
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
                                                                               C_Compiler * inCompiler
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
                                                           C_Compiler * inCompiler
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
                                                                          C_Compiler * inCompiler
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
                                                                     C_Compiler * inCompiler
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
                                                                                        C_Compiler * inCompiler
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_importedLexiqueList ("importedLexiqueList",
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
                                                                      C_Compiler * inCompiler
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

//--- Constructors
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
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_projectIndexingDescriptorList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mProjectFileExtension" ":" ;
  mObject.mProperty_mProjectFileExtension.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "indexingPathSuffix" ":" ;
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

GALGAS_projectIndexingDescriptorList GALGAS_projectIndexingDescriptorList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_projectIndexingDescriptorList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_projectIndexingDescriptorList GALGAS_projectIndexingDescriptorList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
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
                                                          C_Compiler * /* inCompiler */
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
                                                                 C_Compiler * inCompiler
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
                                                                 C_Compiler * inCompiler
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
                                                            C_Compiler * inCompiler
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
                                                           C_Compiler * inCompiler
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
                                                         C_Compiler * inCompiler
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
                                                        C_Compiler * inCompiler
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
                                                                                          C_Compiler * /* inCompiler */
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
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_projectIndexingDescriptorList result = GALGAS_projectIndexingDescriptorList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_projectIndexingDescriptorList GALGAS_projectIndexingDescriptorList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_projectIndexingDescriptorList result = GALGAS_projectIndexingDescriptorList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_projectIndexingDescriptorList GALGAS_projectIndexingDescriptorList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_projectIndexingDescriptorList result = GALGAS_projectIndexingDescriptorList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_projectIndexingDescriptorList::plusAssign_operation (const GALGAS_projectIndexingDescriptorList inOperand,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_projectIndexingDescriptorList::setter_setMProjectFileExtensionAtIndex (GALGAS_lstring inOperand,
                                                                                   GALGAS_uint inIndex,
                                                                                   C_Compiler * inCompiler
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
                                                                                          C_Compiler * inCompiler
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
                                                                                C_Compiler * inCompiler
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
                                                                                       C_Compiler * inCompiler
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_projectIndexingDescriptorList ("projectIndexingDescriptorList",
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
                                                                                          C_Compiler * inCompiler
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

//--- Constructors
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
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_galgasGUIComponentListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mGUIComponentName" ":" ;
  mObject.mProperty_mGUIComponentName.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mImportedOptionList" ":" ;
  mObject.mProperty_mImportedOptionList.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mGlobalSimpleAttributeList" ":" ;
  mObject.mProperty_mGlobalSimpleAttributeList.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mWithLexiqueList" ":" ;
  mObject.mProperty_mWithLexiqueList.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mProjectIndexingDescriptorList" ":" ;
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

GALGAS_galgasGUIComponentListAST GALGAS_galgasGUIComponentListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_galgasGUIComponentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgasGUIComponentListAST GALGAS_galgasGUIComponentListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
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
                                                      C_Compiler * /* inCompiler */
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
                                                             C_Compiler * inCompiler
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
                                                             C_Compiler * inCompiler
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
                                                        C_Compiler * inCompiler
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
                                                       C_Compiler * inCompiler
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
                                                     C_Compiler * inCompiler
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
                                                    C_Compiler * inCompiler
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
                                                                                  C_Compiler * /* inCompiler */
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
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_galgasGUIComponentListAST result = GALGAS_galgasGUIComponentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgasGUIComponentListAST GALGAS_galgasGUIComponentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_galgasGUIComponentListAST result = GALGAS_galgasGUIComponentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgasGUIComponentListAST GALGAS_galgasGUIComponentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_galgasGUIComponentListAST result = GALGAS_galgasGUIComponentListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgasGUIComponentListAST::plusAssign_operation (const GALGAS_galgasGUIComponentListAST inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgasGUIComponentListAST::setter_setMGUIComponentNameAtIndex (GALGAS_lstring inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           C_Compiler * inCompiler
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
                                                                                  C_Compiler * inCompiler
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
                                                                             C_Compiler * inCompiler
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
                                                                                        C_Compiler * inCompiler
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
                                                                                    C_Compiler * inCompiler
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
                                                                                                             C_Compiler * inCompiler
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
                                                                          C_Compiler * inCompiler
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
                                                                                            C_Compiler * inCompiler
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
                                                                                        C_Compiler * inCompiler
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
                                                                                                                     C_Compiler * inCompiler
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgasGUIComponentListAST ("galgasGUIComponentListAST",
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
                                                                                  C_Compiler * inCompiler
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

GALGAS_guiAnalysisContext GALGAS_guiAnalysisContext::constructor_new (C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_stringlist in_mImportedOptionComponentList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 373)) ;
  const GALGAS_guiCommandLineOptionList in_mBoolOptionList = GALGAS_guiCommandLineOptionList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 374)) ;
  const GALGAS_guiCommandLineOptionList in_mUIntOptionList = GALGAS_guiCommandLineOptionList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 375)) ;
  const GALGAS_guiCommandLineOptionList in_mStringOptionList = GALGAS_guiCommandLineOptionList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 376)) ;
  const GALGAS_stringlist in_mNibAndClassList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 377)) ;
  const GALGAS_extensionMap in_mExtensionMap = GALGAS_extensionMap::constructor_emptyMap (SOURCE_FILE ("guiCompilation.galgas", 378)) ;
  const GALGAS_importedLexiqueList in_mWithLexiqueList = GALGAS_importedLexiqueList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 379)) ;
  const GALGAS_string in_mBuildRunOption = GALGAS_string::makeEmptyString () ;
  const GALGAS_projectIndexingDescriptorList in_mProjectIndexingDescriptorList = GALGAS_projectIndexingDescriptorList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 381)) ;
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

void GALGAS_guiAnalysisContext::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString += "<struct @guiAnalysisContext:" ;
  if (! isValid ()) {
    ioString += " not built" ;
  }else{
    mProperty_mImportedOptionComponentList.description (ioString, inIndentation+1) ;
    ioString += ", " ;
    mProperty_mBoolOptionList.description (ioString, inIndentation+1) ;
    ioString += ", " ;
    mProperty_mUIntOptionList.description (ioString, inIndentation+1) ;
    ioString += ", " ;
    mProperty_mStringOptionList.description (ioString, inIndentation+1) ;
    ioString += ", " ;
    mProperty_mNibAndClassList.description (ioString, inIndentation+1) ;
    ioString += ", " ;
    mProperty_mExtensionMap.description (ioString, inIndentation+1) ;
    ioString += ", " ;
    mProperty_mWithLexiqueList.description (ioString, inIndentation+1) ;
    ioString += ", " ;
    mProperty_mBuildRunOption.description (ioString, inIndentation+1) ;
    ioString += ", " ;
    mProperty_mProjectIndexingDescriptorList.description (ioString, inIndentation+1) ;
  }
  ioString += ">" ;
}

//--------------------------------------------------------------------------------------------------
//
//     @guiAnalysisContext generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guiAnalysisContext ("guiAnalysisContext",
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
                                                                    C_Compiler * inCompiler
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

void cMapElement_optionComponentMapForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mGuiComponentContext" ":" ;
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

GALGAS_optionComponentMapForGeneration GALGAS_optionComponentMapForGeneration::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_optionComponentMapForGeneration result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForGeneration GALGAS_optionComponentMapForGeneration::constructor_mapWithMapToOverride (const GALGAS_optionComponentMapForGeneration & inMapToOverride
                                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentMapForGeneration result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForGeneration GALGAS_optionComponentMapForGeneration::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_optionComponentMapForGeneration result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_optionComponentMapForGeneration::addAssign_operation (const GALGAS_lstring & inKey,
                                                                  const GALGAS_guiAnalysisContext & inArgument0,
                                                                  C_Compiler * inCompiler
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
                                                                                              C_Compiler * inCompiler
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
                                                               C_Compiler * inCompiler
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
                                                                                                     C_Compiler * inCompiler
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
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_optionComponentMapForGeneration * p = (cMapElement_optionComponentMapForGeneration *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForGeneration) ;
    p->mProperty_mGuiComponentContext = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_optionComponentMapForGeneration * GALGAS_optionComponentMapForGeneration::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionComponentMapForGeneration ("optionComponentMapForGeneration",
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
                                                                                              C_Compiler * inCompiler
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

typeComparisonResult GALGAS_arrayDeclarationAST_2D_weak::objectCompare (const GALGAS_arrayDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_arrayDeclarationAST_2D_weak::GALGAS_arrayDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayDeclarationAST_2D_weak & GALGAS_arrayDeclarationAST_2D_weak::operator = (const GALGAS_arrayDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayDeclarationAST_2D_weak::GALGAS_arrayDeclarationAST_2D_weak (const GALGAS_arrayDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayDeclarationAST_2D_weak GALGAS_arrayDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_arrayDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayDeclarationAST GALGAS_arrayDeclarationAST_2D_weak::bang_arrayDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_arrayDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_arrayDeclarationAST) ;
      result = GALGAS_arrayDeclarationAST ((cPtr_arrayDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @arrayDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayDeclarationAST_2D_weak ("arrayDeclarationAST-weak",
                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayDeclarationAST_2D_weak GALGAS_arrayDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_arrayDeclarationAST_2D_weak result ;
  const GALGAS_arrayDeclarationAST_2D_weak * p = (const GALGAS_arrayDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_arrayDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
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

GALGAS_boolsetDeclarationAST_2D_weak GALGAS_boolsetDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_boolsetDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST GALGAS_boolsetDeclarationAST_2D_weak::bang_boolsetDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolsetDeclarationAST_2D_weak ("boolsetDeclarationAST-weak",
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
                                                                                          C_Compiler * inCompiler
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

//--- Constructors
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
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_propertyInCollectionListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "isConstant" ":" ;
  mObject.mProperty_isConstant.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mPropertyTypeName" ":" ;
  mObject.mProperty_mPropertyTypeName.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mPropertyName" ":" ;
  mObject.mProperty_mPropertyName.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mAccessControl" ":" ;
  mObject.mProperty_mAccessControl.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "selector" ":" ;
  mObject.mProperty_selector.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mInitialization" ":" ;
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

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_propertyInCollectionListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::constructor_listWithValue (const GALGAS_bool & inOperand0,
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
                                                        C_Compiler * /* inCompiler */
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
                                                               C_Compiler * inCompiler
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
                                                               C_Compiler * inCompiler
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
                                                          C_Compiler * inCompiler
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
                                                         C_Compiler * inCompiler
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
                                                       C_Compiler * inCompiler
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
                                                      C_Compiler * inCompiler
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
                                                                                      C_Compiler * /* inCompiler */
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
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result = GALGAS_propertyInCollectionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result = GALGAS_propertyInCollectionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_propertyInCollectionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result = GALGAS_propertyInCollectionListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyInCollectionListAST::plusAssign_operation (const GALGAS_propertyInCollectionListAST inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyInCollectionListAST::setter_setIsConstantAtIndex (GALGAS_bool inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
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
                                                                          C_Compiler * inCompiler
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
                                                                             C_Compiler * inCompiler
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
                                                                                    C_Compiler * inCompiler
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
                                                                         C_Compiler * inCompiler
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
                                                                                C_Compiler * inCompiler
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
                                                                          C_Compiler * inCompiler
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
                                                                                          C_Compiler * inCompiler
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
                                                                    C_Compiler * inCompiler
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
                                                                        C_Compiler * inCompiler
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
                                                                           C_Compiler * inCompiler
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
                                                                                                                C_Compiler * inCompiler
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyInCollectionListAST ("propertyInCollectionListAST",
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
                                                                                      C_Compiler * inCompiler
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

GALGAS_classDeclarationAST_2D_weak GALGAS_classDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_classDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST GALGAS_classDeclarationAST_2D_weak::bang_classDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classDeclarationAST_2D_weak ("classDeclarationAST-weak",
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
                                                                                      C_Compiler * inCompiler
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

//--- Constructors
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
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_typedPropertyList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mPropertyTypeEntry" ":" ;
  mObject.mProperty_mPropertyTypeEntry.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mPropertyName" ":" ;
  mObject.mProperty_mPropertyName.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "hasSetter" ":" ;
  mObject.mProperty_hasSetter.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "hasSelector" ":" ;
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

GALGAS_typedPropertyList GALGAS_typedPropertyList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_typedPropertyList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_typedPropertyList::constructor_listWithValue (const GALGAS_unifiedTypeMapEntry & inOperand0,
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
                                              C_Compiler * /* inCompiler */
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
                                                     C_Compiler * inCompiler
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
                                                     C_Compiler * inCompiler
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
                                                C_Compiler * inCompiler
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
                                               C_Compiler * inCompiler
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
                                             C_Compiler * inCompiler
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
                                            C_Compiler * inCompiler
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
                                                                  C_Compiler * /* inCompiler */
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
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result = GALGAS_typedPropertyList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_typedPropertyList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result = GALGAS_typedPropertyList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_typedPropertyList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result = GALGAS_typedPropertyList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typedPropertyList::plusAssign_operation (const GALGAS_typedPropertyList inOperand,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typedPropertyList::setter_setMPropertyTypeEntryAtIndex (GALGAS_unifiedTypeMapEntry inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
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
                                                                                       C_Compiler * inCompiler
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
                                                               C_Compiler * inCompiler
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
                                                                      C_Compiler * inCompiler
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
                                                           C_Compiler * inCompiler
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
                                                               C_Compiler * inCompiler
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
                                                             C_Compiler * inCompiler
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
                                                                 C_Compiler * inCompiler
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typedPropertyList ("typedPropertyList",
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
                                                                  C_Compiler * inCompiler
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

GALGAS_weakReferenceDeclarationAST_2D_weak GALGAS_weakReferenceDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_weakReferenceDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST GALGAS_weakReferenceDeclarationAST_2D_weak::bang_weakReferenceDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_weakReferenceDeclarationAST_2D_weak ("weakReferenceDeclarationAST-weak",
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
                                                                                                      C_Compiler * inCompiler
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

//--- Constructors
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
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_enumConstantList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mConstantName" ":" ;
  mObject.mProperty_mConstantName.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mAssociatedValueDefinitionList" ":" ;
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

GALGAS_enumConstantList GALGAS_enumConstantList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumConstantList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantList GALGAS_enumConstantList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
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
                                             C_Compiler * /* inCompiler */
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
                                                    C_Compiler * inCompiler
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
                                                    C_Compiler * inCompiler
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
                                               C_Compiler * inCompiler
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
                                              C_Compiler * inCompiler
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
                                            C_Compiler * inCompiler
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
                                           C_Compiler * inCompiler
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
                                                                C_Compiler * /* inCompiler */
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
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantList result = GALGAS_enumConstantList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantList GALGAS_enumConstantList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantList result = GALGAS_enumConstantList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantList GALGAS_enumConstantList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantList result = GALGAS_enumConstantList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumConstantList::plusAssign_operation (const GALGAS_enumConstantList inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumConstantList::setter_setMConstantNameAtIndex (GALGAS_lstring inOperand,
                                                              GALGAS_uint inIndex,
                                                              C_Compiler * inCompiler
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
                                                                     C_Compiler * inCompiler
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
                                                                               C_Compiler * inCompiler
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
                                                                                              C_Compiler * inCompiler
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumConstantList ("enumConstantList",
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
                                                                C_Compiler * inCompiler
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

GALGAS_enumDeclarationAST_2D_weak GALGAS_enumDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_enumDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST GALGAS_enumDeclarationAST_2D_weak::bang_enumDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumDeclarationAST_2D_weak ("enumDeclarationAST-weak",
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
                                                                                    C_Compiler * inCompiler
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

//--- Constructors
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
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_enumConstantListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mConstantName" ":" ;
  mObject.mProperty_mConstantName.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mAssociatedValueTypeList" ":" ;
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

GALGAS_enumConstantListForGeneration GALGAS_enumConstantListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumConstantListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration GALGAS_enumConstantListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
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
                                                          C_Compiler * /* inCompiler */
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
                                                                 C_Compiler * inCompiler
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
                                                                 C_Compiler * inCompiler
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
                                                            C_Compiler * inCompiler
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
                                                           C_Compiler * inCompiler
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
                                                         C_Compiler * inCompiler
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
                                                        C_Compiler * inCompiler
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
                                                                                          C_Compiler * /* inCompiler */
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
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantListForGeneration result = GALGAS_enumConstantListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration GALGAS_enumConstantListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantListForGeneration result = GALGAS_enumConstantListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration GALGAS_enumConstantListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantListForGeneration result = GALGAS_enumConstantListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumConstantListForGeneration::plusAssign_operation (const GALGAS_enumConstantListForGeneration inOperand,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumConstantListForGeneration::setter_setMConstantNameAtIndex (GALGAS_string inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           C_Compiler * inCompiler
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
                                                                                 C_Compiler * inCompiler
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
                                                                                      C_Compiler * inCompiler
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
                                                                                                             C_Compiler * inCompiler
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumConstantListForGeneration ("enumConstantListForGeneration",
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
                                                                                          C_Compiler * inCompiler
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

//--- Constructors
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
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_unifiedTypeMapEntryList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mEntry" ":" ;
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

GALGAS_unifiedTypeMapEntryList GALGAS_unifiedTypeMapEntryList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_unifiedTypeMapEntryList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList GALGAS_unifiedTypeMapEntryList::constructor_listWithValue (const GALGAS_unifiedTypeMapEntry & inOperand0
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
                                                    C_Compiler * /* inCompiler */
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
                                                           C_Compiler * inCompiler
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
                                                           C_Compiler * inCompiler
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
                                                      C_Compiler * inCompiler
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
                                                     C_Compiler * inCompiler
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
                                                   C_Compiler * inCompiler
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
                                                  C_Compiler * inCompiler
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
                                                                              C_Compiler * /* inCompiler */
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
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapEntryList result = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList GALGAS_unifiedTypeMapEntryList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapEntryList result = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList GALGAS_unifiedTypeMapEntryList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapEntryList result = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapEntryList::plusAssign_operation (const GALGAS_unifiedTypeMapEntryList inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapEntryList::setter_setMEntryAtIndex (GALGAS_unifiedTypeMapEntry inOperand,
                                                              GALGAS_uint inIndex,
                                                              C_Compiler * inCompiler
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
                                                                                 C_Compiler * inCompiler
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMapEntryList ("unifiedTypeMapEntryList",
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
                                                                              C_Compiler * inCompiler
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

//--- Constructors
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
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_externTypeConstructorList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mConstructorName" ":" ;
  mObject.mProperty_mConstructorName.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mResultTypeName" ":" ;
  mObject.mProperty_mResultTypeName.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mParameterList" ":" ;
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

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_externTypeConstructorList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
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
                                                      C_Compiler * /* inCompiler */
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
                                                             C_Compiler * inCompiler
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
                                                             C_Compiler * inCompiler
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
                                                        C_Compiler * inCompiler
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
                                                       C_Compiler * inCompiler
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
                                                     C_Compiler * inCompiler
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
                                                    C_Compiler * inCompiler
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
                                                                                  C_Compiler * /* inCompiler */
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
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeConstructorList result = GALGAS_externTypeConstructorList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeConstructorList result = GALGAS_externTypeConstructorList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList GALGAS_externTypeConstructorList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeConstructorList result = GALGAS_externTypeConstructorList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList::plusAssign_operation (const GALGAS_externTypeConstructorList inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList::setter_setMConstructorNameAtIndex (GALGAS_lstring inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
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
                                                                                 C_Compiler * inCompiler
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
                                                                         C_Compiler * inCompiler
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
                                                                                C_Compiler * inCompiler
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
                                                                        C_Compiler * inCompiler
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
                                                                                                       C_Compiler * inCompiler
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeConstructorList ("externTypeConstructorList",
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
                                                                                  C_Compiler * inCompiler
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

//--- Constructors
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
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_externTypeGetterList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mGetterName" ":" ;
  mObject.mProperty_mGetterName.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mResultTypeName" ":" ;
  mObject.mProperty_mResultTypeName.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mParameterList" ":" ;
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

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_externTypeGetterList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
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
                                                 C_Compiler * /* inCompiler */
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
                                                        C_Compiler * inCompiler
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
                                                        C_Compiler * inCompiler
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
                                                   C_Compiler * inCompiler
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
                                                  C_Compiler * inCompiler
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
                                                C_Compiler * inCompiler
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
                                               C_Compiler * inCompiler
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
                                                                        C_Compiler * /* inCompiler */
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
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeGetterList result = GALGAS_externTypeGetterList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeGetterList result = GALGAS_externTypeGetterList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList GALGAS_externTypeGetterList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeGetterList result = GALGAS_externTypeGetterList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList::plusAssign_operation (const GALGAS_externTypeGetterList inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeGetterList::setter_setMGetterNameAtIndex (GALGAS_lstring inOperand,
                                                                GALGAS_uint inIndex,
                                                                C_Compiler * inCompiler
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
                                                                       C_Compiler * inCompiler
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
                                                                    C_Compiler * inCompiler
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
                                                                           C_Compiler * inCompiler
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
                                                                   C_Compiler * inCompiler
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
                                                                                                  C_Compiler * inCompiler
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeGetterList ("externTypeGetterList",
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
                                                                        C_Compiler * inCompiler
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

//--- Constructors
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
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_externTypeSetterList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mSetterName" ":" ;
  mObject.mProperty_mSetterName.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mFormalParameterList" ":" ;
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

GALGAS_externTypeSetterList GALGAS_externTypeSetterList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_externTypeSetterList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList GALGAS_externTypeSetterList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
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
                                                 C_Compiler * /* inCompiler */
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
                                                        C_Compiler * inCompiler
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
                                                        C_Compiler * inCompiler
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
                                                   C_Compiler * inCompiler
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
                                                  C_Compiler * inCompiler
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
                                                C_Compiler * inCompiler
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
                                               C_Compiler * inCompiler
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
                                                                        C_Compiler * /* inCompiler */
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
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeSetterList result = GALGAS_externTypeSetterList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList GALGAS_externTypeSetterList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeSetterList result = GALGAS_externTypeSetterList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList GALGAS_externTypeSetterList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeSetterList result = GALGAS_externTypeSetterList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeSetterList::plusAssign_operation (const GALGAS_externTypeSetterList inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeSetterList::setter_setMSetterNameAtIndex (GALGAS_lstring inOperand,
                                                                GALGAS_uint inIndex,
                                                                C_Compiler * inCompiler
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
                                                                       C_Compiler * inCompiler
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
                                                                         C_Compiler * inCompiler
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
                                                                                               C_Compiler * inCompiler
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeSetterList ("externTypeSetterList",
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
                                                                        C_Compiler * inCompiler
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

//--- Constructors
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
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_externTypeMethodList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mMethodName" ":" ;
  mObject.mProperty_mMethodName.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mFormalParameterList" ":" ;
  mObject.mProperty_mFormalParameterList.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mDeclarationLocation" ":" ;
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

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_externTypeMethodList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
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
                                                 C_Compiler * /* inCompiler */
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
                                                        C_Compiler * inCompiler
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
                                                        C_Compiler * inCompiler
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
                                                   C_Compiler * inCompiler
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
                                                  C_Compiler * inCompiler
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
                                                C_Compiler * inCompiler
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
                                               C_Compiler * inCompiler
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
                                                                        C_Compiler * /* inCompiler */
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
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeMethodList result = GALGAS_externTypeMethodList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeMethodList result = GALGAS_externTypeMethodList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList GALGAS_externTypeMethodList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeMethodList result = GALGAS_externTypeMethodList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList::plusAssign_operation (const GALGAS_externTypeMethodList inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeMethodList::setter_setMMethodNameAtIndex (GALGAS_lstring inOperand,
                                                                GALGAS_uint inIndex,
                                                                C_Compiler * inCompiler
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
                                                                       C_Compiler * inCompiler
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
                                                                         C_Compiler * inCompiler
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
                                                                                               C_Compiler * inCompiler
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
                                                                         C_Compiler * inCompiler
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
                                                                                 C_Compiler * inCompiler
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeMethodList ("externTypeMethodList",
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
                                                                        C_Compiler * inCompiler
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

GALGAS_externTypeDeclarationAST_2D_weak GALGAS_externTypeDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_externTypeDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationAST GALGAS_externTypeDeclarationAST_2D_weak::bang_externTypeDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeDeclarationAST_2D_weak ("externTypeDeclarationAST-weak",
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
                                                                                                C_Compiler * inCompiler
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

//--- Constructors
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
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_typeNameFormalParameterNameList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mFormalSelector" ":" ;
  mObject.mProperty_mFormalSelector.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mFormalParameterTypeName" ":" ;
  mObject.mProperty_mFormalParameterTypeName.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mFormalParameterName" ":" ;
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

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_typeNameFormalParameterNameList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
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
                                                            C_Compiler * /* inCompiler */
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
                                                                   C_Compiler * inCompiler
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
                                                                   C_Compiler * inCompiler
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
                                                              C_Compiler * inCompiler
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
                                                             C_Compiler * inCompiler
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
                                                           C_Compiler * inCompiler
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
                                                          C_Compiler * inCompiler
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
                                                                                              C_Compiler * /* inCompiler */
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
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_typeNameFormalParameterNameList result = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_typeNameFormalParameterNameList result = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeNameFormalParameterNameList GALGAS_typeNameFormalParameterNameList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_typeNameFormalParameterNameList result = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList::plusAssign_operation (const GALGAS_typeNameFormalParameterNameList inOperand,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeNameFormalParameterNameList::setter_setMFormalSelectorAtIndex (GALGAS_lstring inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               C_Compiler * inCompiler
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
                                                                                      C_Compiler * inCompiler
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
                                                                                        C_Compiler * inCompiler
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
                                                                                               C_Compiler * inCompiler
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
                                                                                    C_Compiler * inCompiler
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
                                                                                           C_Compiler * inCompiler
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeNameFormalParameterNameList ("typeNameFormalParameterNameList",
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
                                                                                              C_Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@formalParameterListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_formalParameterListAST : public cCollectionElement {
  public: GALGAS_formalParameterListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_formalParameterListAST (const GALGAS_lstring & in_mFormalSelector,
                                                     const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                     const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                     const GALGAS_lstring & in_mFormalArgumentName,
                                                     const GALGAS_bool & in_mIsUnused
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_formalParameterListAST (const GALGAS_formalParameterListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_formalParameterListAST::cCollectionElement_formalParameterListAST (const GALGAS_lstring & in_mFormalSelector,
                                                                                      const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                                                      const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                                      const GALGAS_lstring & in_mFormalArgumentName,
                                                                                      const GALGAS_bool & in_mIsUnused
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mFormalArgumentPassingMode, in_mFormalArgumentTypeName, in_mFormalArgumentName, in_mIsUnused) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_formalParameterListAST::cCollectionElement_formalParameterListAST (const GALGAS_formalParameterListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalSelector, inElement.mProperty_mFormalArgumentPassingMode, inElement.mProperty_mFormalArgumentTypeName, inElement.mProperty_mFormalArgumentName, inElement.mProperty_mIsUnused) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_formalParameterListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_formalParameterListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_formalParameterListAST (mObject.mProperty_mFormalSelector, mObject.mProperty_mFormalArgumentPassingMode, mObject.mProperty_mFormalArgumentTypeName, mObject.mProperty_mFormalArgumentName, mObject.mProperty_mIsUnused COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_formalParameterListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mFormalSelector" ":" ;
  mObject.mProperty_mFormalSelector.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mFormalArgumentPassingMode" ":" ;
  mObject.mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mFormalArgumentTypeName" ":" ;
  mObject.mProperty_mFormalArgumentTypeName.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mFormalArgumentName" ":" ;
  mObject.mProperty_mFormalArgumentName.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mIsUnused" ":" ;
  mObject.mProperty_mIsUnused.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_formalParameterListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_formalParameterListAST * operand = (cCollectionElement_formalParameterListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_formalParameterListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST::GALGAS_formalParameterListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST::GALGAS_formalParameterListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_formalParameterListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                                        const GALGAS_lstring & inOperand2,
                                                                                        const GALGAS_lstring & inOperand3,
                                                                                        const GALGAS_bool & inOperand4
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_formalParameterListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_formalParameterListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_formalParameterListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mFormalSelector,
                                                               const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                               const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                               const GALGAS_lstring & in_mFormalArgumentName,
                                                               const GALGAS_bool & in_mIsUnused
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_formalParameterListAST (in_mFormalSelector,
                                                            in_mFormalArgumentPassingMode,
                                                            in_mFormalArgumentTypeName,
                                                            in_mFormalArgumentName,
                                                            in_mIsUnused COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                         const GALGAS_lstring & inOperand2,
                                                         const GALGAS_lstring & inOperand3,
                                                         const GALGAS_bool & inOperand4
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_formalParameterListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::setter_append (const GALGAS_lstring inOperand0,
                                                   const GALGAS_formalArgumentPassingModeAST inOperand1,
                                                   const GALGAS_lstring inOperand2,
                                                   const GALGAS_lstring inOperand3,
                                                   const GALGAS_bool inOperand4,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_formalParameterListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                          const GALGAS_formalArgumentPassingModeAST inOperand1,
                                                          const GALGAS_lstring inOperand2,
                                                          const GALGAS_lstring inOperand3,
                                                          const GALGAS_bool inOperand4,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_formalParameterListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
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

void GALGAS_formalParameterListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                          GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                          GALGAS_lstring & outOperand2,
                                                          GALGAS_lstring & outOperand3,
                                                          GALGAS_bool & outOperand4,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
        outOperand0 = p->mObject.mProperty_mFormalSelector ;
        outOperand1 = p->mObject.mProperty_mFormalArgumentPassingMode ;
        outOperand2 = p->mObject.mProperty_mFormalArgumentTypeName ;
        outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
        outOperand4 = p->mObject.mProperty_mIsUnused ;
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

void GALGAS_formalParameterListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                     GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                     GALGAS_lstring & outOperand2,
                                                     GALGAS_lstring & outOperand3,
                                                     GALGAS_bool & outOperand4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentTypeName ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand4 = p->mObject.mProperty_mIsUnused ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                    GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                    GALGAS_lstring & outOperand2,
                                                    GALGAS_lstring & outOperand3,
                                                    GALGAS_bool & outOperand4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentTypeName ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand4 = p->mObject.mProperty_mIsUnused ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                  GALGAS_lstring & outOperand2,
                                                  GALGAS_lstring & outOperand3,
                                                  GALGAS_bool & outOperand4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentTypeName ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand4 = p->mObject.mProperty_mIsUnused ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                 GALGAS_lstring & outOperand2,
                                                 GALGAS_lstring & outOperand3,
                                                 GALGAS_bool & outOperand4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentTypeName ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand4 = p->mObject.mProperty_mIsUnused ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::add_operation (const GALGAS_formalParameterListAST & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result = GALGAS_formalParameterListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result = GALGAS_formalParameterListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result = GALGAS_formalParameterListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::plusAssign_operation (const GALGAS_formalParameterListAST inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::setter_setMFormalSelectorAtIndex (GALGAS_lstring inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalSelector = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_formalParameterListAST::getter_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    result = p->mObject.mProperty_mFormalSelector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::setter_setMFormalArgumentPassingModeAtIndex (GALGAS_formalArgumentPassingModeAST inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentPassingMode = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalArgumentPassingModeAST GALGAS_formalParameterListAST::getter_mFormalArgumentPassingModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) attributes.ptr () ;
  GALGAS_formalArgumentPassingModeAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    result = p->mObject.mProperty_mFormalArgumentPassingMode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::setter_setMFormalArgumentTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_formalParameterListAST::getter_mFormalArgumentTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    result = p->mObject.mProperty_mFormalArgumentTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::setter_setMFormalArgumentNameAtIndex (GALGAS_lstring inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_formalParameterListAST::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListAST::setter_setMIsUnusedAtIndex (GALGAS_bool inOperand,
                                                                GALGAS_uint inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIsUnused = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_formalParameterListAST::getter_mIsUnusedAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListAST * p = (cCollectionElement_formalParameterListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
    result = p->mObject.mProperty_mIsUnused ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_formalParameterListAST::cEnumerator_formalParameterListAST (const GALGAS_formalParameterListAST & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST_2D_element cEnumerator_formalParameterListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListAST * p = (const cCollectionElement_formalParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_formalParameterListAST::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListAST * p = (const cCollectionElement_formalParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
  return p->mObject.mProperty_mFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalArgumentPassingModeAST cEnumerator_formalParameterListAST::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListAST * p = (const cCollectionElement_formalParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
  return p->mObject.mProperty_mFormalArgumentPassingMode ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_formalParameterListAST::current_mFormalArgumentTypeName (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListAST * p = (const cCollectionElement_formalParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
  return p->mObject.mProperty_mFormalArgumentTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_formalParameterListAST::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListAST * p = (const cCollectionElement_formalParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_formalParameterListAST::current_mIsUnused (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListAST * p = (const cCollectionElement_formalParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListAST) ;
  return p->mObject.mProperty_mIsUnused ;
}




//--------------------------------------------------------------------------------------------------
//
//     @formalParameterListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalParameterListAST ("formalParameterListAST",
                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formalParameterListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalParameterListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formalParameterListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalParameterListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_formalParameterListAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_formalParameterListAST result ;
  const GALGAS_formalParameterListAST * p = (const GALGAS_formalParameterListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_formalParameterListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalParameterListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@graphInsertModifierList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_graphInsertModifierList : public cCollectionElement {
  public: GALGAS_graphInsertModifierList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_graphInsertModifierList (const GALGAS_lstring & in_mInsertModifierName,
                                                      const GALGAS_lstring & in_mInsertErrorMessage
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_graphInsertModifierList (const GALGAS_graphInsertModifierList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_graphInsertModifierList::cCollectionElement_graphInsertModifierList (const GALGAS_lstring & in_mInsertModifierName,
                                                                                        const GALGAS_lstring & in_mInsertErrorMessage
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInsertModifierName, in_mInsertErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_graphInsertModifierList::cCollectionElement_graphInsertModifierList (const GALGAS_graphInsertModifierList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInsertModifierName, inElement.mProperty_mInsertErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_graphInsertModifierList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_graphInsertModifierList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_graphInsertModifierList (mObject.mProperty_mInsertModifierName, mObject.mProperty_mInsertErrorMessage COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_graphInsertModifierList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mInsertModifierName" ":" ;
  mObject.mProperty_mInsertModifierName.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mInsertErrorMessage" ":" ;
  mObject.mProperty_mInsertErrorMessage.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_graphInsertModifierList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_graphInsertModifierList * operand = (cCollectionElement_graphInsertModifierList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_graphInsertModifierList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList::GALGAS_graphInsertModifierList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList::GALGAS_graphInsertModifierList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_graphInsertModifierList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_graphInsertModifierList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_graphInsertModifierList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_graphInsertModifierList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_lstring & in_mInsertModifierName,
                                                                const GALGAS_lstring & in_mInsertErrorMessage
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_graphInsertModifierList * p = nullptr ;
  macroMyNew (p, cCollectionElement_graphInsertModifierList (in_mInsertModifierName,
                                                             in_mInsertErrorMessage COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_lstring & inOperand1
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_graphInsertModifierList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::setter_append (const GALGAS_lstring inOperand0,
                                                    const GALGAS_lstring inOperand1,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_graphInsertModifierList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                           const GALGAS_lstring inOperand1,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_graphInsertModifierList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_graphInsertModifierList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           const GALGAS_uint inRemoveIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_graphInsertModifierList * p = (cCollectionElement_graphInsertModifierList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
        outOperand0 = p->mObject.mProperty_mInsertModifierName ;
        outOperand1 = p->mObject.mProperty_mInsertErrorMessage ;
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

void GALGAS_graphInsertModifierList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_graphInsertModifierList * p = (cCollectionElement_graphInsertModifierList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
    outOperand0 = p->mObject.mProperty_mInsertModifierName ;
    outOperand1 = p->mObject.mProperty_mInsertErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::setter_popLast (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_graphInsertModifierList * p = (cCollectionElement_graphInsertModifierList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
    outOperand0 = p->mObject.mProperty_mInsertModifierName ;
    outOperand1 = p->mObject.mProperty_mInsertErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::method_first (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_graphInsertModifierList * p = (cCollectionElement_graphInsertModifierList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
    outOperand0 = p->mObject.mProperty_mInsertModifierName ;
    outOperand1 = p->mObject.mProperty_mInsertErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::method_last (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_graphInsertModifierList * p = (cCollectionElement_graphInsertModifierList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
    outOperand0 = p->mObject.mProperty_mInsertModifierName ;
    outOperand1 = p->mObject.mProperty_mInsertErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::add_operation (const GALGAS_graphInsertModifierList & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_graphInsertModifierList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_graphInsertModifierList result = GALGAS_graphInsertModifierList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_graphInsertModifierList result = GALGAS_graphInsertModifierList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_graphInsertModifierList result = GALGAS_graphInsertModifierList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::plusAssign_operation (const GALGAS_graphInsertModifierList inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::setter_setMInsertModifierNameAtIndex (GALGAS_lstring inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_graphInsertModifierList * p = (cCollectionElement_graphInsertModifierList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInsertModifierName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_graphInsertModifierList::getter_mInsertModifierNameAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_graphInsertModifierList * p = (cCollectionElement_graphInsertModifierList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
    result = p->mObject.mProperty_mInsertModifierName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_graphInsertModifierList::setter_setMInsertErrorMessageAtIndex (GALGAS_lstring inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_graphInsertModifierList * p = (cCollectionElement_graphInsertModifierList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInsertErrorMessage = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_graphInsertModifierList::getter_mInsertErrorMessageAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_graphInsertModifierList * p = (cCollectionElement_graphInsertModifierList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
    result = p->mObject.mProperty_mInsertErrorMessage ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_graphInsertModifierList::cEnumerator_graphInsertModifierList (const GALGAS_graphInsertModifierList & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList_2D_element cEnumerator_graphInsertModifierList::current (LOCATION_ARGS) const {
  const cCollectionElement_graphInsertModifierList * p = (const cCollectionElement_graphInsertModifierList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_graphInsertModifierList::current_mInsertModifierName (LOCATION_ARGS) const {
  const cCollectionElement_graphInsertModifierList * p = (const cCollectionElement_graphInsertModifierList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
  return p->mObject.mProperty_mInsertModifierName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_graphInsertModifierList::current_mInsertErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_graphInsertModifierList * p = (const cCollectionElement_graphInsertModifierList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_graphInsertModifierList) ;
  return p->mObject.mProperty_mInsertErrorMessage ;
}




//--------------------------------------------------------------------------------------------------
//
//     @graphInsertModifierList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_graphInsertModifierList ("graphInsertModifierList",
                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_graphInsertModifierList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphInsertModifierList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_graphInsertModifierList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_graphInsertModifierList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList GALGAS_graphInsertModifierList::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_graphInsertModifierList result ;
  const GALGAS_graphInsertModifierList * p = (const GALGAS_graphInsertModifierList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_graphInsertModifierList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphInsertModifierList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_graphDeclarationAST_2D_weak::objectCompare (const GALGAS_graphDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_graphDeclarationAST_2D_weak::GALGAS_graphDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationAST_2D_weak & GALGAS_graphDeclarationAST_2D_weak::operator = (const GALGAS_graphDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationAST_2D_weak::GALGAS_graphDeclarationAST_2D_weak (const GALGAS_graphDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationAST_2D_weak GALGAS_graphDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_graphDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationAST GALGAS_graphDeclarationAST_2D_weak::bang_graphDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_graphDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_graphDeclarationAST) ;
      result = GALGAS_graphDeclarationAST ((cPtr_graphDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @graphDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_graphDeclarationAST_2D_weak ("graphDeclarationAST-weak",
                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_graphDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_graphDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_graphDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationAST_2D_weak GALGAS_graphDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_graphDeclarationAST_2D_weak result ;
  const GALGAS_graphDeclarationAST_2D_weak * p = (const GALGAS_graphDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_graphDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_listDeclarationAST_2D_weak::objectCompare (const GALGAS_listDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_listDeclarationAST_2D_weak::GALGAS_listDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_listDeclarationAST_2D_weak & GALGAS_listDeclarationAST_2D_weak::operator = (const GALGAS_listDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listDeclarationAST_2D_weak::GALGAS_listDeclarationAST_2D_weak (const GALGAS_listDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_listDeclarationAST_2D_weak GALGAS_listDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_listDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listDeclarationAST GALGAS_listDeclarationAST_2D_weak::bang_listDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_listDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_listDeclarationAST) ;
      result = GALGAS_listDeclarationAST ((cPtr_listDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @listDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listDeclarationAST_2D_weak ("listDeclarationAST-weak",
                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_listDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_listDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listDeclarationAST_2D_weak GALGAS_listDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_listDeclarationAST_2D_weak result ;
  const GALGAS_listDeclarationAST_2D_weak * p = (const GALGAS_listDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_listDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_listmapDeclarationAST_2D_weak::objectCompare (const GALGAS_listmapDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_listmapDeclarationAST_2D_weak::GALGAS_listmapDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_listmapDeclarationAST_2D_weak & GALGAS_listmapDeclarationAST_2D_weak::operator = (const GALGAS_listmapDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listmapDeclarationAST_2D_weak::GALGAS_listmapDeclarationAST_2D_weak (const GALGAS_listmapDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_listmapDeclarationAST_2D_weak GALGAS_listmapDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_listmapDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listmapDeclarationAST GALGAS_listmapDeclarationAST_2D_weak::bang_listmapDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_listmapDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_listmapDeclarationAST) ;
      result = GALGAS_listmapDeclarationAST ((cPtr_listmapDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @listmapDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listmapDeclarationAST_2D_weak ("listmapDeclarationAST-weak",
                                                      & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_listmapDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listmapDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_listmapDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listmapDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listmapDeclarationAST_2D_weak GALGAS_listmapDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_listmapDeclarationAST_2D_weak result ;
  const GALGAS_listmapDeclarationAST_2D_weak * p = (const GALGAS_listmapDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_listmapDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listmapDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_dictDeclarationAST_2D_weak::objectCompare (const GALGAS_dictDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_dictDeclarationAST_2D_weak::GALGAS_dictDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_dictDeclarationAST_2D_weak & GALGAS_dictDeclarationAST_2D_weak::operator = (const GALGAS_dictDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dictDeclarationAST_2D_weak::GALGAS_dictDeclarationAST_2D_weak (const GALGAS_dictDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_dictDeclarationAST_2D_weak GALGAS_dictDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_dictDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dictDeclarationAST GALGAS_dictDeclarationAST_2D_weak::bang_dictDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_dictDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dictDeclarationAST) ;
      result = GALGAS_dictDeclarationAST ((cPtr_dictDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @dictDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dictDeclarationAST_2D_weak ("dictDeclarationAST-weak",
                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dictDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dictDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dictDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dictDeclarationAST_2D_weak GALGAS_dictDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_dictDeclarationAST_2D_weak result ;
  const GALGAS_dictDeclarationAST_2D_weak * p = (const GALGAS_dictDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_dictDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dictDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@insertMethodListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_insertMethodListAST : public cCollectionElement {
  public: GALGAS_insertMethodListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_insertMethodListAST (const GALGAS_lstring & in_mInsertMethodName,
                                                  const GALGAS_lstring & in_mErrorMessage,
                                                  const GALGAS_lstring & in_mShadowErrorMessage
                                                  COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_insertMethodListAST (const GALGAS_insertMethodListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_insertMethodListAST::cCollectionElement_insertMethodListAST (const GALGAS_lstring & in_mInsertMethodName,
                                                                                const GALGAS_lstring & in_mErrorMessage,
                                                                                const GALGAS_lstring & in_mShadowErrorMessage
                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInsertMethodName, in_mErrorMessage, in_mShadowErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_insertMethodListAST::cCollectionElement_insertMethodListAST (const GALGAS_insertMethodListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInsertMethodName, inElement.mProperty_mErrorMessage, inElement.mProperty_mShadowErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_insertMethodListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_insertMethodListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_insertMethodListAST (mObject.mProperty_mInsertMethodName, mObject.mProperty_mErrorMessage, mObject.mProperty_mShadowErrorMessage COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_insertMethodListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mInsertMethodName" ":" ;
  mObject.mProperty_mInsertMethodName.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mErrorMessage" ":" ;
  mObject.mProperty_mErrorMessage.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mShadowErrorMessage" ":" ;
  mObject.mProperty_mShadowErrorMessage.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_insertMethodListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_insertMethodListAST * operand = (cCollectionElement_insertMethodListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_insertMethodListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST::GALGAS_insertMethodListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST::GALGAS_insertMethodListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_insertMethodListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1,
                                                                                  const GALGAS_lstring & inOperand2
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_insertMethodListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_insertMethodListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_insertMethodListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GALGAS_lstring & in_mInsertMethodName,
                                                            const GALGAS_lstring & in_mErrorMessage,
                                                            const GALGAS_lstring & in_mShadowErrorMessage
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_insertMethodListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_insertMethodListAST (in_mInsertMethodName,
                                                         in_mErrorMessage,
                                                         in_mShadowErrorMessage COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                      const GALGAS_lstring & inOperand1,
                                                      const GALGAS_lstring & inOperand2
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_insertMethodListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::setter_append (const GALGAS_lstring inOperand0,
                                                const GALGAS_lstring inOperand1,
                                                const GALGAS_lstring inOperand2,
                                                C_Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_insertMethodListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                       const GALGAS_lstring inOperand1,
                                                       const GALGAS_lstring inOperand2,
                                                       const GALGAS_uint inInsertionIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_insertMethodListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_insertMethodListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_lstring & outOperand2,
                                                       const GALGAS_uint inRemoveIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
        outOperand0 = p->mObject.mProperty_mInsertMethodName ;
        outOperand1 = p->mObject.mProperty_mErrorMessage ;
        outOperand2 = p->mObject.mProperty_mShadowErrorMessage ;
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

void GALGAS_insertMethodListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  GALGAS_lstring & outOperand2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mInsertMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
    outOperand2 = p->mObject.mProperty_mShadowErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_lstring & outOperand2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mInsertMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
    outOperand2 = p->mObject.mProperty_mShadowErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::method_first (GALGAS_lstring & outOperand0,
                                               GALGAS_lstring & outOperand1,
                                               GALGAS_lstring & outOperand2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mInsertMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
    outOperand2 = p->mObject.mProperty_mShadowErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::method_last (GALGAS_lstring & outOperand0,
                                              GALGAS_lstring & outOperand1,
                                              GALGAS_lstring & outOperand2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mInsertMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
    outOperand2 = p->mObject.mProperty_mShadowErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::add_operation (const GALGAS_insertMethodListAST & inOperand,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_insertMethodListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_insertMethodListAST result = GALGAS_insertMethodListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_insertMethodListAST result = GALGAS_insertMethodListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_insertMethodListAST result = GALGAS_insertMethodListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::plusAssign_operation (const GALGAS_insertMethodListAST inOperand,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::setter_setMInsertMethodNameAtIndex (GALGAS_lstring inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInsertMethodName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_insertMethodListAST::getter_mInsertMethodNameAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
    result = p->mObject.mProperty_mInsertMethodName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::setter_setMErrorMessageAtIndex (GALGAS_lstring inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mErrorMessage = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_insertMethodListAST::getter_mErrorMessageAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
    result = p->mObject.mProperty_mErrorMessage ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertMethodListAST::setter_setMShadowErrorMessageAtIndex (GALGAS_lstring inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mShadowErrorMessage = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_insertMethodListAST::getter_mShadowErrorMessageAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_insertMethodListAST * p = (cCollectionElement_insertMethodListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
    result = p->mObject.mProperty_mShadowErrorMessage ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_insertMethodListAST::cEnumerator_insertMethodListAST (const GALGAS_insertMethodListAST & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST_2D_element cEnumerator_insertMethodListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_insertMethodListAST * p = (const cCollectionElement_insertMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_insertMethodListAST::current_mInsertMethodName (LOCATION_ARGS) const {
  const cCollectionElement_insertMethodListAST * p = (const cCollectionElement_insertMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
  return p->mObject.mProperty_mInsertMethodName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_insertMethodListAST::current_mErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_insertMethodListAST * p = (const cCollectionElement_insertMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
  return p->mObject.mProperty_mErrorMessage ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_insertMethodListAST::current_mShadowErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_insertMethodListAST * p = (const cCollectionElement_insertMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertMethodListAST) ;
  return p->mObject.mProperty_mShadowErrorMessage ;
}




//--------------------------------------------------------------------------------------------------
//
//     @insertMethodListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_insertMethodListAST ("insertMethodListAST",
                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_insertMethodListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertMethodListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_insertMethodListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_insertMethodListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST GALGAS_insertMethodListAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_insertMethodListAST result ;
  const GALGAS_insertMethodListAST * p = (const GALGAS_insertMethodListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_insertMethodListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("insertMethodListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@mapSearchMethodListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_mapSearchMethodListAST : public cCollectionElement {
  public: GALGAS_mapSearchMethodListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_mapSearchMethodListAST (const GALGAS_lstring & in_mSearchMethodName,
                                                     const GALGAS_lstring & in_mErrorMessage
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_mapSearchMethodListAST (const GALGAS_mapSearchMethodListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_mapSearchMethodListAST::cCollectionElement_mapSearchMethodListAST (const GALGAS_lstring & in_mSearchMethodName,
                                                                                      const GALGAS_lstring & in_mErrorMessage
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSearchMethodName, in_mErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_mapSearchMethodListAST::cCollectionElement_mapSearchMethodListAST (const GALGAS_mapSearchMethodListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSearchMethodName, inElement.mProperty_mErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_mapSearchMethodListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_mapSearchMethodListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_mapSearchMethodListAST (mObject.mProperty_mSearchMethodName, mObject.mProperty_mErrorMessage COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_mapSearchMethodListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mSearchMethodName" ":" ;
  mObject.mProperty_mSearchMethodName.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mErrorMessage" ":" ;
  mObject.mProperty_mErrorMessage.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_mapSearchMethodListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_mapSearchMethodListAST * operand = (cCollectionElement_mapSearchMethodListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_mapSearchMethodListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST::GALGAS_mapSearchMethodListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST::GALGAS_mapSearchMethodListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_mapSearchMethodListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_mapSearchMethodListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_mapSearchMethodListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_mapSearchMethodListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mSearchMethodName,
                                                               const GALGAS_lstring & in_mErrorMessage
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_mapSearchMethodListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_mapSearchMethodListAST (in_mSearchMethodName,
                                                            in_mErrorMessage COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_lstring & inOperand1
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_mapSearchMethodListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::setter_append (const GALGAS_lstring inOperand0,
                                                   const GALGAS_lstring inOperand1,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_mapSearchMethodListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                          const GALGAS_lstring inOperand1,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_mapSearchMethodListAST (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_mapSearchMethodListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
        outOperand0 = p->mObject.mProperty_mSearchMethodName ;
        outOperand1 = p->mObject.mProperty_mErrorMessage ;
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

void GALGAS_mapSearchMethodListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mSearchMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mSearchMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mSearchMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mSearchMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::add_operation (const GALGAS_mapSearchMethodListAST & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result = GALGAS_mapSearchMethodListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result = GALGAS_mapSearchMethodListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result = GALGAS_mapSearchMethodListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::plusAssign_operation (const GALGAS_mapSearchMethodListAST inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::setter_setMSearchMethodNameAtIndex (GALGAS_lstring inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSearchMethodName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mapSearchMethodListAST::getter_mSearchMethodNameAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
    result = p->mObject.mProperty_mSearchMethodName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapSearchMethodListAST::setter_setMErrorMessageAtIndex (GALGAS_lstring inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mErrorMessage = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mapSearchMethodListAST::getter_mErrorMessageAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapSearchMethodListAST * p = (cCollectionElement_mapSearchMethodListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
    result = p->mObject.mProperty_mErrorMessage ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_mapSearchMethodListAST::cEnumerator_mapSearchMethodListAST (const GALGAS_mapSearchMethodListAST & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST_2D_element cEnumerator_mapSearchMethodListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_mapSearchMethodListAST * p = (const cCollectionElement_mapSearchMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapSearchMethodListAST::current_mSearchMethodName (LOCATION_ARGS) const {
  const cCollectionElement_mapSearchMethodListAST * p = (const cCollectionElement_mapSearchMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
  return p->mObject.mProperty_mSearchMethodName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapSearchMethodListAST::current_mErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_mapSearchMethodListAST * p = (const cCollectionElement_mapSearchMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapSearchMethodListAST) ;
  return p->mObject.mProperty_mErrorMessage ;
}




//--------------------------------------------------------------------------------------------------
//
//     @mapSearchMethodListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapSearchMethodListAST ("mapSearchMethodListAST",
                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapSearchMethodListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapSearchMethodListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapSearchMethodListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapSearchMethodListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_mapSearchMethodListAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_mapSearchMethodListAST result ;
  const GALGAS_mapSearchMethodListAST * p = (const GALGAS_mapSearchMethodListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_mapSearchMethodListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapSearchMethodListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@mapRemoveMethodListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_mapRemoveMethodListAST : public cCollectionElement {
  public: GALGAS_mapRemoveMethodListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_mapRemoveMethodListAST (const GALGAS_lstring & in_mMethodName,
                                                     const GALGAS_lstring & in_mErrorMessage
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_mapRemoveMethodListAST (const GALGAS_mapRemoveMethodListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_mapRemoveMethodListAST::cCollectionElement_mapRemoveMethodListAST (const GALGAS_lstring & in_mMethodName,
                                                                                      const GALGAS_lstring & in_mErrorMessage
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMethodName, in_mErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_mapRemoveMethodListAST::cCollectionElement_mapRemoveMethodListAST (const GALGAS_mapRemoveMethodListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mMethodName, inElement.mProperty_mErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_mapRemoveMethodListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_mapRemoveMethodListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_mapRemoveMethodListAST (mObject.mProperty_mMethodName, mObject.mProperty_mErrorMessage COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_mapRemoveMethodListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mMethodName" ":" ;
  mObject.mProperty_mMethodName.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mErrorMessage" ":" ;
  mObject.mProperty_mErrorMessage.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_mapRemoveMethodListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_mapRemoveMethodListAST * operand = (cCollectionElement_mapRemoveMethodListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_mapRemoveMethodListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST::GALGAS_mapRemoveMethodListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST::GALGAS_mapRemoveMethodListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_mapRemoveMethodListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_mapRemoveMethodListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_mapRemoveMethodListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_mapRemoveMethodListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mMethodName,
                                                               const GALGAS_lstring & in_mErrorMessage
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_mapRemoveMethodListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_mapRemoveMethodListAST (in_mMethodName,
                                                            in_mErrorMessage COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_lstring & inOperand1
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_mapRemoveMethodListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::setter_append (const GALGAS_lstring inOperand0,
                                                   const GALGAS_lstring inOperand1,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_mapRemoveMethodListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                          const GALGAS_lstring inOperand1,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_mapRemoveMethodListAST (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_mapRemoveMethodListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_mapRemoveMethodListAST * p = (cCollectionElement_mapRemoveMethodListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
        outOperand0 = p->mObject.mProperty_mMethodName ;
        outOperand1 = p->mObject.mProperty_mErrorMessage ;
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

void GALGAS_mapRemoveMethodListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapRemoveMethodListAST * p = (cCollectionElement_mapRemoveMethodListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapRemoveMethodListAST * p = (cCollectionElement_mapRemoveMethodListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapRemoveMethodListAST * p = (cCollectionElement_mapRemoveMethodListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapRemoveMethodListAST * p = (cCollectionElement_mapRemoveMethodListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
    outOperand0 = p->mObject.mProperty_mMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::add_operation (const GALGAS_mapRemoveMethodListAST & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_mapRemoveMethodListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_mapRemoveMethodListAST result = GALGAS_mapRemoveMethodListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_mapRemoveMethodListAST result = GALGAS_mapRemoveMethodListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_mapRemoveMethodListAST result = GALGAS_mapRemoveMethodListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::plusAssign_operation (const GALGAS_mapRemoveMethodListAST inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::setter_setMMethodNameAtIndex (GALGAS_lstring inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_mapRemoveMethodListAST * p = (cCollectionElement_mapRemoveMethodListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mMethodName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mapRemoveMethodListAST::getter_mMethodNameAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapRemoveMethodListAST * p = (cCollectionElement_mapRemoveMethodListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
    result = p->mObject.mProperty_mMethodName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mapRemoveMethodListAST::setter_setMErrorMessageAtIndex (GALGAS_lstring inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_mapRemoveMethodListAST * p = (cCollectionElement_mapRemoveMethodListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mErrorMessage = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mapRemoveMethodListAST::getter_mErrorMessageAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapRemoveMethodListAST * p = (cCollectionElement_mapRemoveMethodListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
    result = p->mObject.mProperty_mErrorMessage ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_mapRemoveMethodListAST::cEnumerator_mapRemoveMethodListAST (const GALGAS_mapRemoveMethodListAST & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST_2D_element cEnumerator_mapRemoveMethodListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_mapRemoveMethodListAST * p = (const cCollectionElement_mapRemoveMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapRemoveMethodListAST::current_mMethodName (LOCATION_ARGS) const {
  const cCollectionElement_mapRemoveMethodListAST * p = (const cCollectionElement_mapRemoveMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
  return p->mObject.mProperty_mMethodName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapRemoveMethodListAST::current_mErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_mapRemoveMethodListAST * p = (const cCollectionElement_mapRemoveMethodListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapRemoveMethodListAST) ;
  return p->mObject.mProperty_mErrorMessage ;
}




//--------------------------------------------------------------------------------------------------
//
//     @mapRemoveMethodListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapRemoveMethodListAST ("mapRemoveMethodListAST",
                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapRemoveMethodListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapRemoveMethodListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapRemoveMethodListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapRemoveMethodListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST GALGAS_mapRemoveMethodListAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_mapRemoveMethodListAST result ;
  const GALGAS_mapRemoveMethodListAST * p = (const GALGAS_mapRemoveMethodListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_mapRemoveMethodListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapRemoveMethodListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@insertOrReplaceDeclarationListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_insertOrReplaceDeclarationListAST : public cCollectionElement {
  public: GALGAS_insertOrReplaceDeclarationListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_insertOrReplaceDeclarationListAST (const GALGAS_location & in_mInsertOrReplaceDeclarationLocation
                                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_insertOrReplaceDeclarationListAST (const GALGAS_insertOrReplaceDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_insertOrReplaceDeclarationListAST::cCollectionElement_insertOrReplaceDeclarationListAST (const GALGAS_location & in_mInsertOrReplaceDeclarationLocation
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInsertOrReplaceDeclarationLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_insertOrReplaceDeclarationListAST::cCollectionElement_insertOrReplaceDeclarationListAST (const GALGAS_insertOrReplaceDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
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

void cCollectionElement_insertOrReplaceDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mInsertOrReplaceDeclarationLocation" ":" ;
  mObject.mProperty_mInsertOrReplaceDeclarationLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_insertOrReplaceDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_insertOrReplaceDeclarationListAST * operand = (cCollectionElement_insertOrReplaceDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_insertOrReplaceDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST::GALGAS_insertOrReplaceDeclarationListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST::GALGAS_insertOrReplaceDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_insertOrReplaceDeclarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::constructor_listWithValue (const GALGAS_location & inOperand0
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_insertOrReplaceDeclarationListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_insertOrReplaceDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_insertOrReplaceDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertOrReplaceDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GALGAS_location & in_mInsertOrReplaceDeclarationLocation
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_insertOrReplaceDeclarationListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_insertOrReplaceDeclarationListAST (in_mInsertOrReplaceDeclarationLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertOrReplaceDeclarationListAST::addAssign_operation (const GALGAS_location & inOperand0
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

void GALGAS_insertOrReplaceDeclarationListAST::setter_append (const GALGAS_location inOperand0,
                                                              C_Compiler * /* inCompiler */
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

void GALGAS_insertOrReplaceDeclarationListAST::setter_insertAtIndex (const GALGAS_location inOperand0,
                                                                     const GALGAS_uint inInsertionIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_insertOrReplaceDeclarationListAST (inOperand0 COMMA_THERE)) ;
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

void GALGAS_insertOrReplaceDeclarationListAST::setter_removeAtIndex (GALGAS_location & outOperand0,
                                                                     const GALGAS_uint inRemoveIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_insertOrReplaceDeclarationListAST * p = (cCollectionElement_insertOrReplaceDeclarationListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
        outOperand0 = p->mObject.mProperty_mInsertOrReplaceDeclarationLocation ;
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

void GALGAS_insertOrReplaceDeclarationListAST::setter_popFirst (GALGAS_location & outOperand0,
                                                                C_Compiler * inCompiler
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

void GALGAS_insertOrReplaceDeclarationListAST::setter_popLast (GALGAS_location & outOperand0,
                                                               C_Compiler * inCompiler
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

void GALGAS_insertOrReplaceDeclarationListAST::method_first (GALGAS_location & outOperand0,
                                                             C_Compiler * inCompiler
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

void GALGAS_insertOrReplaceDeclarationListAST::method_last (GALGAS_location & outOperand0,
                                                            C_Compiler * inCompiler
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

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::add_operation (const GALGAS_insertOrReplaceDeclarationListAST & inOperand,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_insertOrReplaceDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_insertOrReplaceDeclarationListAST result = GALGAS_insertOrReplaceDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_insertOrReplaceDeclarationListAST result = GALGAS_insertOrReplaceDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_insertOrReplaceDeclarationListAST result = GALGAS_insertOrReplaceDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertOrReplaceDeclarationListAST::plusAssign_operation (const GALGAS_insertOrReplaceDeclarationListAST inOperand,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertOrReplaceDeclarationListAST::setter_setMInsertOrReplaceDeclarationLocationAtIndex (GALGAS_location inOperand,
                                                                                                     GALGAS_uint inIndex,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_insertOrReplaceDeclarationListAST * p = (cCollectionElement_insertOrReplaceDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInsertOrReplaceDeclarationLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_insertOrReplaceDeclarationListAST::getter_mInsertOrReplaceDeclarationLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_insertOrReplaceDeclarationListAST * p = (cCollectionElement_insertOrReplaceDeclarationListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
    result = p->mObject.mProperty_mInsertOrReplaceDeclarationLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_insertOrReplaceDeclarationListAST::cEnumerator_insertOrReplaceDeclarationListAST (const GALGAS_insertOrReplaceDeclarationListAST & inEnumeratedObject,
                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST_2D_element cEnumerator_insertOrReplaceDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_insertOrReplaceDeclarationListAST * p = (const cCollectionElement_insertOrReplaceDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_insertOrReplaceDeclarationListAST::current_mInsertOrReplaceDeclarationLocation (LOCATION_ARGS) const {
  const cCollectionElement_insertOrReplaceDeclarationListAST * p = (const cCollectionElement_insertOrReplaceDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
  return p->mObject.mProperty_mInsertOrReplaceDeclarationLocation ;
}




//--------------------------------------------------------------------------------------------------
//
//     @insertOrReplaceDeclarationListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST ("insertOrReplaceDeclarationListAST",
                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_insertOrReplaceDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_insertOrReplaceDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_insertOrReplaceDeclarationListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST GALGAS_insertOrReplaceDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_insertOrReplaceDeclarationListAST result ;
  const GALGAS_insertOrReplaceDeclarationListAST * p = (const GALGAS_insertOrReplaceDeclarationListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_insertOrReplaceDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("insertOrReplaceDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_mapDeclarationAST_2D_weak::objectCompare (const GALGAS_mapDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_mapDeclarationAST_2D_weak::GALGAS_mapDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapDeclarationAST_2D_weak & GALGAS_mapDeclarationAST_2D_weak::operator = (const GALGAS_mapDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapDeclarationAST_2D_weak::GALGAS_mapDeclarationAST_2D_weak (const GALGAS_mapDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapDeclarationAST_2D_weak GALGAS_mapDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_mapDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapDeclarationAST GALGAS_mapDeclarationAST_2D_weak::bang_mapDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_mapDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_mapDeclarationAST) ;
      result = GALGAS_mapDeclarationAST ((cPtr_mapDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @mapDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapDeclarationAST_2D_weak ("mapDeclarationAST-weak",
                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapDeclarationAST_2D_weak GALGAS_mapDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_mapDeclarationAST_2D_weak result ;
  const GALGAS_mapDeclarationAST_2D_weak * p = (const GALGAS_mapDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_mapDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_insertMethodMap::cMapElement_insertMethodMap (const GALGAS_lstring & inKey
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_insertMethodMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_insertMethodMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_insertMethodMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_insertMethodMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_insertMethodMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_insertMethodMap * operand = (cMapElement_insertMethodMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap::GALGAS_insertMethodMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap::GALGAS_insertMethodMap (const GALGAS_insertMethodMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap & GALGAS_insertMethodMap::operator = (const GALGAS_insertMethodMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap GALGAS_insertMethodMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_insertMethodMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap GALGAS_insertMethodMap::constructor_mapWithMapToOverride (const GALGAS_insertMethodMap & inMapToOverride
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_insertMethodMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap GALGAS_insertMethodMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_insertMethodMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertMethodMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_insertMethodMap * p = nullptr ;
  macroMyNew (p, cMapElement_insertMethodMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@insertMethodMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap GALGAS_insertMethodMap::add_operation (const GALGAS_insertMethodMap & inOperand,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_insertMethodMap result = *this ;
  cEnumerator_insertMethodMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertMethodMap::setter_insertKey (GALGAS_lstring inKey,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_insertMethodMap * p = nullptr ;
  macroMyNew (p, cMapElement_insertMethodMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' insert setter is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_insertMethodMap * GALGAS_insertMethodMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_insertMethodMap * result = (cMapElement_insertMethodMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_insertMethodMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_insertMethodMap::cEnumerator_insertMethodMap (const GALGAS_insertMethodMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap_2D_element cEnumerator_insertMethodMap::current (LOCATION_ARGS) const {
  const cMapElement_insertMethodMap * p = (const cMapElement_insertMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_insertMethodMap) ;
  return GALGAS_insertMethodMap_2D_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_insertMethodMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_insertMethodMap::optional_searchKey (const GALGAS_string & inKey) const {
  const cMapElement_insertMethodMap * p = (const cMapElement_insertMethodMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_insertMethodMap) ;
  }else{
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @insertMethodMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_insertMethodMap ("insertMethodMap",
                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_insertMethodMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertMethodMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_insertMethodMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_insertMethodMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap GALGAS_insertMethodMap::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_insertMethodMap result ;
  const GALGAS_insertMethodMap * p = (const GALGAS_insertMethodMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_insertMethodMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("insertMethodMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_searchMethodMap::cMapElement_searchMethodMap (const GALGAS_lstring & inKey
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_searchMethodMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_searchMethodMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_searchMethodMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_searchMethodMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_searchMethodMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_searchMethodMap * operand = (cMapElement_searchMethodMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap::GALGAS_searchMethodMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap::GALGAS_searchMethodMap (const GALGAS_searchMethodMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap & GALGAS_searchMethodMap::operator = (const GALGAS_searchMethodMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap GALGAS_searchMethodMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_searchMethodMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap GALGAS_searchMethodMap::constructor_mapWithMapToOverride (const GALGAS_searchMethodMap & inMapToOverride
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_searchMethodMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap GALGAS_searchMethodMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_searchMethodMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_searchMethodMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_searchMethodMap * p = nullptr ;
  macroMyNew (p, cMapElement_searchMethodMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@searchMethodMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap GALGAS_searchMethodMap::add_operation (const GALGAS_searchMethodMap & inOperand,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_searchMethodMap result = *this ;
  cEnumerator_searchMethodMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_searchMethodMap::setter_insertKey (GALGAS_lstring inKey,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_searchMethodMap * p = nullptr ;
  macroMyNew (p, cMapElement_searchMethodMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' search method is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_searchMethodMap * GALGAS_searchMethodMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_searchMethodMap * result = (cMapElement_searchMethodMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_searchMethodMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_searchMethodMap::cEnumerator_searchMethodMap (const GALGAS_searchMethodMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap_2D_element cEnumerator_searchMethodMap::current (LOCATION_ARGS) const {
  const cMapElement_searchMethodMap * p = (const cMapElement_searchMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_searchMethodMap) ;
  return GALGAS_searchMethodMap_2D_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_searchMethodMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_searchMethodMap::optional_searchKey (const GALGAS_string & inKey) const {
  const cMapElement_searchMethodMap * p = (const cMapElement_searchMethodMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_searchMethodMap) ;
  }else{
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @searchMethodMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_searchMethodMap ("searchMethodMap",
                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_searchMethodMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_searchMethodMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_searchMethodMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_searchMethodMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap GALGAS_searchMethodMap::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_searchMethodMap result ;
  const GALGAS_searchMethodMap * p = (const GALGAS_searchMethodMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_searchMethodMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("searchMethodMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@sortedListSortDescriptorListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_sortedListSortDescriptorListAST : public cCollectionElement {
  public: GALGAS_sortedListSortDescriptorListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_sortedListSortDescriptorListAST (const GALGAS_lstring & in_mSortedAttributeName,
                                                              const GALGAS_bool & in_mAscending
                                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_sortedListSortDescriptorListAST (const GALGAS_sortedListSortDescriptorListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_sortedListSortDescriptorListAST::cCollectionElement_sortedListSortDescriptorListAST (const GALGAS_lstring & in_mSortedAttributeName,
                                                                                                        const GALGAS_bool & in_mAscending
                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSortedAttributeName, in_mAscending) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_sortedListSortDescriptorListAST::cCollectionElement_sortedListSortDescriptorListAST (const GALGAS_sortedListSortDescriptorListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
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

void cCollectionElement_sortedListSortDescriptorListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mSortedAttributeName" ":" ;
  mObject.mProperty_mSortedAttributeName.description (ioString, inIndentation) ;
  ioString += "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString += "mAscending" ":" ;
  mObject.mProperty_mAscending.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_sortedListSortDescriptorListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_sortedListSortDescriptorListAST * operand = (cCollectionElement_sortedListSortDescriptorListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_sortedListSortDescriptorListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST::GALGAS_sortedListSortDescriptorListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST::GALGAS_sortedListSortDescriptorListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListSortDescriptorListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_sortedListSortDescriptorListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListSortDescriptorListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_bool & inOperand1
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_sortedListSortDescriptorListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_sortedListSortDescriptorListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_sortedListSortDescriptorListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sortedListSortDescriptorListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                        const GALGAS_lstring & in_mSortedAttributeName,
                                                                        const GALGAS_bool & in_mAscending
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_sortedListSortDescriptorListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_sortedListSortDescriptorListAST (in_mSortedAttributeName,
                                                                     in_mAscending COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sortedListSortDescriptorListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_bool & inOperand1
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

void GALGAS_sortedListSortDescriptorListAST::setter_append (const GALGAS_lstring inOperand0,
                                                            const GALGAS_bool inOperand1,
                                                            C_Compiler * /* inCompiler */
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

void GALGAS_sortedListSortDescriptorListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                   const GALGAS_bool inOperand1,
                                                                   const GALGAS_uint inInsertionIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_sortedListSortDescriptorListAST (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_sortedListSortDescriptorListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                   GALGAS_bool & outOperand1,
                                                                   const GALGAS_uint inRemoveIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_sortedListSortDescriptorListAST * p = (cCollectionElement_sortedListSortDescriptorListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
        outOperand0 = p->mObject.mProperty_mSortedAttributeName ;
        outOperand1 = p->mObject.mProperty_mAscending ;
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

void GALGAS_sortedListSortDescriptorListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                              GALGAS_bool & outOperand1,
                                                              C_Compiler * inCompiler
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

void GALGAS_sortedListSortDescriptorListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                             GALGAS_bool & outOperand1,
                                                             C_Compiler * inCompiler
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

void GALGAS_sortedListSortDescriptorListAST::method_first (GALGAS_lstring & outOperand0,
                                                           GALGAS_bool & outOperand1,
                                                           C_Compiler * inCompiler
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

void GALGAS_sortedListSortDescriptorListAST::method_last (GALGAS_lstring & outOperand0,
                                                          GALGAS_bool & outOperand1,
                                                          C_Compiler * inCompiler
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

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListSortDescriptorListAST::add_operation (const GALGAS_sortedListSortDescriptorListAST & inOperand,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_sortedListSortDescriptorListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListSortDescriptorListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_sortedListSortDescriptorListAST result = GALGAS_sortedListSortDescriptorListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListSortDescriptorListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_sortedListSortDescriptorListAST result = GALGAS_sortedListSortDescriptorListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListSortDescriptorListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_sortedListSortDescriptorListAST result = GALGAS_sortedListSortDescriptorListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sortedListSortDescriptorListAST::plusAssign_operation (const GALGAS_sortedListSortDescriptorListAST inOperand,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sortedListSortDescriptorListAST::setter_setMSortedAttributeNameAtIndex (GALGAS_lstring inOperand,
                                                                                    GALGAS_uint inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_sortedListSortDescriptorListAST * p = (cCollectionElement_sortedListSortDescriptorListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSortedAttributeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_sortedListSortDescriptorListAST::getter_mSortedAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sortedListSortDescriptorListAST * p = (cCollectionElement_sortedListSortDescriptorListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
    result = p->mObject.mProperty_mSortedAttributeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sortedListSortDescriptorListAST::setter_setMAscendingAtIndex (GALGAS_bool inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_sortedListSortDescriptorListAST * p = (cCollectionElement_sortedListSortDescriptorListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAscending = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_sortedListSortDescriptorListAST::getter_mAscendingAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sortedListSortDescriptorListAST * p = (cCollectionElement_sortedListSortDescriptorListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
    result = p->mObject.mProperty_mAscending ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_sortedListSortDescriptorListAST::cEnumerator_sortedListSortDescriptorListAST (const GALGAS_sortedListSortDescriptorListAST & inEnumeratedObject,
                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST_2D_element cEnumerator_sortedListSortDescriptorListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_sortedListSortDescriptorListAST * p = (const cCollectionElement_sortedListSortDescriptorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_sortedListSortDescriptorListAST::current_mSortedAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_sortedListSortDescriptorListAST * p = (const cCollectionElement_sortedListSortDescriptorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
  return p->mObject.mProperty_mSortedAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_sortedListSortDescriptorListAST::current_mAscending (LOCATION_ARGS) const {
  const cCollectionElement_sortedListSortDescriptorListAST * p = (const cCollectionElement_sortedListSortDescriptorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
  return p->mObject.mProperty_mAscending ;
}




//--------------------------------------------------------------------------------------------------
//
//     @sortedListSortDescriptorListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortedListSortDescriptorListAST ("sortedListSortDescriptorListAST",
                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sortedListSortDescriptorListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListSortDescriptorListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sortedListSortDescriptorListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortedListSortDescriptorListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListSortDescriptorListAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_sortedListSortDescriptorListAST result ;
  const GALGAS_sortedListSortDescriptorListAST * p = (const GALGAS_sortedListSortDescriptorListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sortedListSortDescriptorListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedListSortDescriptorListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

