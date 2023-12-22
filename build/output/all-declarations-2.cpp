#include "galgas2/Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalMessageDeclarationListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalMessageDeclarationListAST : public cCollectionElement {
  public: GALGAS_lexicalMessageDeclarationListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_lexicalMessageDeclarationListAST (const GALGAS_lstring & in_mMessageName,
                                                               const GALGAS_lstring & in_mMessageValue
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalMessageDeclarationListAST (const GALGAS_lexicalMessageDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_lexicalMessageDeclarationListAST::cCollectionElement_lexicalMessageDeclarationListAST (const GALGAS_lstring & in_mMessageName,
                                                                                                          const GALGAS_lstring & in_mMessageValue
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMessageName, in_mMessageValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalMessageDeclarationListAST::cCollectionElement_lexicalMessageDeclarationListAST (const GALGAS_lexicalMessageDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mMessageName" ":") ;
  mObject.mProperty_mMessageName.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mMessageValue" ":") ;
  mObject.mProperty_mMessageValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalMessageDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalMessageDeclarationListAST * operand = (cCollectionElement_lexicalMessageDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalMessageDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST::GALGAS_lexicalMessageDeclarationListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST::GALGAS_lexicalMessageDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalMessageDeclarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_lstring & inOperand1
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalMessageDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalMessageDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalMessageDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_lstring & in_mMessageName,
                                                                         const GALGAS_lstring & in_mMessageValue
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalMessageDeclarationListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalMessageDeclarationListAST (in_mMessageName,
                                                                      in_mMessageValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                   const GALGAS_lstring & inOperand1
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

void GALGAS_lexicalMessageDeclarationListAST::setter_append (const GALGAS_lstring inOperand0,
                                                             const GALGAS_lstring inOperand1,
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

void GALGAS_lexicalMessageDeclarationListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                    const GALGAS_lstring inOperand1,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_lexicalMessageDeclarationListAST (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_lexicalMessageDeclarationListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                    GALGAS_lstring & outOperand1,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
        outOperand0 = p->mObject.mProperty_mMessageName ;
        outOperand1 = p->mObject.mProperty_mMessageValue ;
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

void GALGAS_lexicalMessageDeclarationListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                               GALGAS_lstring & outOperand1,
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

void GALGAS_lexicalMessageDeclarationListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                              GALGAS_lstring & outOperand1,
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

void GALGAS_lexicalMessageDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
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

void GALGAS_lexicalMessageDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
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

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::add_operation (const GALGAS_lexicalMessageDeclarationListAST & inOperand,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalMessageDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalMessageDeclarationListAST result = GALGAS_lexicalMessageDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalMessageDeclarationListAST result = GALGAS_lexicalMessageDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalMessageDeclarationListAST result = GALGAS_lexicalMessageDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageDeclarationListAST::plusAssign_operation (const GALGAS_lexicalMessageDeclarationListAST inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageDeclarationListAST::setter_setMMessageNameAtIndex (GALGAS_lstring inOperand,
                                                                             GALGAS_uint inIndex,
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

GALGAS_lstring GALGAS_lexicalMessageDeclarationListAST::getter_mMessageNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    result = p->mObject.mProperty_mMessageName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageDeclarationListAST::setter_setMMessageValueAtIndex (GALGAS_lstring inOperand,
                                                                              GALGAS_uint inIndex,
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

GALGAS_lstring GALGAS_lexicalMessageDeclarationListAST::getter_mMessageValueAtIndex (const GALGAS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    result = p->mObject.mProperty_mMessageValue ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_lexicalMessageDeclarationListAST::cEnumerator_lexicalMessageDeclarationListAST (const GALGAS_lexicalMessageDeclarationListAST & inEnumeratedObject,
                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST_2D_element cEnumerator_lexicalMessageDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalMessageDeclarationListAST * p = (const cCollectionElement_lexicalMessageDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalMessageDeclarationListAST::current_mMessageName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalMessageDeclarationListAST * p = (const cCollectionElement_lexicalMessageDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
  return p->mObject.mProperty_mMessageName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalMessageDeclarationListAST::current_mMessageValue (LOCATION_ARGS) const {
  const cCollectionElement_lexicalMessageDeclarationListAST * p = (const cCollectionElement_lexicalMessageDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
  return p->mObject.mProperty_mMessageValue ;
}




//--------------------------------------------------------------------------------------------------
//
//     @lexicalMessageDeclarationListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalMessageDeclarationListAST ("lexicalMessageDeclarationListAST",
                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalMessageDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalMessageDeclarationListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalMessageDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalMessageDeclarationListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalMessageDeclarationListAST result ;
  const GALGAS_lexicalMessageDeclarationListAST * p = (const GALGAS_lexicalMessageDeclarationListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalMessageDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalMessageDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalListDeclarationListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalListDeclarationListAST : public cCollectionElement {
  public: GALGAS_lexicalListDeclarationListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_lexicalListDeclarationListAST (const GALGAS_lstring & in_mName,
                                                            const GALGAS_lstring & in_mStyle,
                                                            const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                            const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                            const GALGAS_lexicalListEntryListAST & in_mEntryList
                                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalListDeclarationListAST (const GALGAS_lexicalListDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_lexicalListDeclarationListAST::cCollectionElement_lexicalListDeclarationListAST (const GALGAS_lstring & in_mName,
                                                                                                    const GALGAS_lstring & in_mStyle,
                                                                                                    const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                                                                    const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                                                                    const GALGAS_lexicalListEntryListAST & in_mEntryList
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mStyle, in_mSyntaxErrorMessage, in_mSentAttributeList, in_mEntryList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalListDeclarationListAST::cCollectionElement_lexicalListDeclarationListAST (const GALGAS_lexicalListDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mName" ":") ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mStyle" ":") ;
  mObject.mProperty_mStyle.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mSyntaxErrorMessage" ":") ;
  mObject.mProperty_mSyntaxErrorMessage.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mSentAttributeList" ":") ;
  mObject.mProperty_mSentAttributeList.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mEntryList" ":") ;
  mObject.mProperty_mEntryList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalListDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalListDeclarationListAST * operand = (cCollectionElement_lexicalListDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalListDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST::GALGAS_lexicalListDeclarationListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST::GALGAS_lexicalListDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalListDeclarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_lstring & inOperand1,
                                                                                                      const GALGAS_lstring & inOperand2,
                                                                                                      const GALGAS_sentLexicalAttributeListAST & inOperand3,
                                                                                                      const GALGAS_lexicalListEntryListAST & inOperand4
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalListDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_lexicalListDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalListDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalListDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_lstring & in_mName,
                                                                      const GALGAS_lstring & in_mStyle,
                                                                      const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                                      const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                                      const GALGAS_lexicalListEntryListAST & in_mEntryList
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

void GALGAS_lexicalListDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_lstring & inOperand1,
                                                                const GALGAS_lstring & inOperand2,
                                                                const GALGAS_sentLexicalAttributeListAST & inOperand3,
                                                                const GALGAS_lexicalListEntryListAST & inOperand4
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

void GALGAS_lexicalListDeclarationListAST::setter_append (const GALGAS_lstring inOperand0,
                                                          const GALGAS_lstring inOperand1,
                                                          const GALGAS_lstring inOperand2,
                                                          const GALGAS_sentLexicalAttributeListAST inOperand3,
                                                          const GALGAS_lexicalListEntryListAST inOperand4,
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

void GALGAS_lexicalListDeclarationListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                 const GALGAS_lstring inOperand1,
                                                                 const GALGAS_lstring inOperand2,
                                                                 const GALGAS_sentLexicalAttributeListAST inOperand3,
                                                                 const GALGAS_lexicalListEntryListAST inOperand4,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_lexicalListDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
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

void GALGAS_lexicalListDeclarationListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                 GALGAS_lstring & outOperand1,
                                                                 GALGAS_lstring & outOperand2,
                                                                 GALGAS_sentLexicalAttributeListAST & outOperand3,
                                                                 GALGAS_lexicalListEntryListAST & outOperand4,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
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

void GALGAS_lexicalListDeclarationListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            GALGAS_lstring & outOperand2,
                                                            GALGAS_sentLexicalAttributeListAST & outOperand3,
                                                            GALGAS_lexicalListEntryListAST & outOperand4,
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

void GALGAS_lexicalListDeclarationListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           GALGAS_lstring & outOperand2,
                                                           GALGAS_sentLexicalAttributeListAST & outOperand3,
                                                           GALGAS_lexicalListEntryListAST & outOperand4,
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

void GALGAS_lexicalListDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_lstring & outOperand2,
                                                         GALGAS_sentLexicalAttributeListAST & outOperand3,
                                                         GALGAS_lexicalListEntryListAST & outOperand4,
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

void GALGAS_lexicalListDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_lstring & outOperand2,
                                                        GALGAS_sentLexicalAttributeListAST & outOperand3,
                                                        GALGAS_lexicalListEntryListAST & outOperand4,
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

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::add_operation (const GALGAS_lexicalListDeclarationListAST & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalListDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListDeclarationListAST result = GALGAS_lexicalListDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListDeclarationListAST result = GALGAS_lexicalListDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListDeclarationListAST result = GALGAS_lexicalListDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalListDeclarationListAST::plusAssign_operation (const GALGAS_lexicalListDeclarationListAST inOperand,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalListDeclarationListAST::setter_setMNameAtIndex (GALGAS_lstring inOperand,
                                                                   GALGAS_uint inIndex,
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

GALGAS_lstring GALGAS_lexicalListDeclarationListAST::getter_mNameAtIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalListDeclarationListAST::setter_setMStyleAtIndex (GALGAS_lstring inOperand,
                                                                    GALGAS_uint inIndex,
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

GALGAS_lstring GALGAS_lexicalListDeclarationListAST::getter_mStyleAtIndex (const GALGAS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    result = p->mObject.mProperty_mStyle ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalListDeclarationListAST::setter_setMSyntaxErrorMessageAtIndex (GALGAS_lstring inOperand,
                                                                                 GALGAS_uint inIndex,
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

GALGAS_lstring GALGAS_lexicalListDeclarationListAST::getter_mSyntaxErrorMessageAtIndex (const GALGAS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    result = p->mObject.mProperty_mSyntaxErrorMessage ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalListDeclarationListAST::setter_setMSentAttributeListAtIndex (GALGAS_sentLexicalAttributeListAST inOperand,
                                                                                GALGAS_uint inIndex,
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

GALGAS_sentLexicalAttributeListAST GALGAS_lexicalListDeclarationListAST::getter_mSentAttributeListAtIndex (const GALGAS_uint & inIndex,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  GALGAS_sentLexicalAttributeListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    result = p->mObject.mProperty_mSentAttributeList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalListDeclarationListAST::setter_setMEntryListAtIndex (GALGAS_lexicalListEntryListAST inOperand,
                                                                        GALGAS_uint inIndex,
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

GALGAS_lexicalListEntryListAST GALGAS_lexicalListDeclarationListAST::getter_mEntryListAtIndex (const GALGAS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  GALGAS_lexicalListEntryListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    result = p->mObject.mProperty_mEntryList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_lexicalListDeclarationListAST::cEnumerator_lexicalListDeclarationListAST (const GALGAS_lexicalListDeclarationListAST & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST_2D_element cEnumerator_lexicalListDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalListDeclarationListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalListDeclarationListAST::current_mStyle (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mProperty_mStyle ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalListDeclarationListAST::current_mSyntaxErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mProperty_mSyntaxErrorMessage ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST cEnumerator_lexicalListDeclarationListAST::current_mSentAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mProperty_mSentAttributeList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST cEnumerator_lexicalListDeclarationListAST::current_mEntryList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mProperty_mEntryList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @lexicalListDeclarationListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalListDeclarationListAST ("lexicalListDeclarationListAST",
                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalListDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalListDeclarationListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalListDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalListDeclarationListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalListDeclarationListAST result ;
  const GALGAS_lexicalListDeclarationListAST * p = (const GALGAS_lexicalListDeclarationListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalListDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalListDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalRuleListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalRuleListAST : public cCollectionElement {
  public: GALGAS_lexicalRuleListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_lexicalRuleListAST (const GALGAS_abstractLexicalRuleAST & in_mLexicalRule
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalRuleListAST (const GALGAS_lexicalRuleListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_lexicalRuleListAST::cCollectionElement_lexicalRuleListAST (const GALGAS_abstractLexicalRuleAST & in_mLexicalRule
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalRule) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalRuleListAST::cCollectionElement_lexicalRuleListAST (const GALGAS_lexicalRuleListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mLexicalRule" ":") ;
  mObject.mProperty_mLexicalRule.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalRuleListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalRuleListAST * operand = (cCollectionElement_lexicalRuleListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalRuleListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST::GALGAS_lexicalRuleListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST::GALGAS_lexicalRuleListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalRuleListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::constructor_listWithValue (const GALGAS_abstractLexicalRuleAST & inOperand0
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRuleListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_lexicalRuleListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalRuleListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRuleListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_abstractLexicalRuleAST & in_mLexicalRule
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalRuleListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalRuleListAST (in_mLexicalRule COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRuleListAST::addAssign_operation (const GALGAS_abstractLexicalRuleAST & inOperand0
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

void GALGAS_lexicalRuleListAST::setter_append (const GALGAS_abstractLexicalRuleAST inOperand0,
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

void GALGAS_lexicalRuleListAST::setter_insertAtIndex (const GALGAS_abstractLexicalRuleAST inOperand0,
                                                      const GALGAS_uint inInsertionIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_lexicalRuleListAST (inOperand0 COMMA_THERE)) ;
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

void GALGAS_lexicalRuleListAST::setter_removeAtIndex (GALGAS_abstractLexicalRuleAST & outOperand0,
                                                      const GALGAS_uint inRemoveIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
        outOperand0 = p->mObject.mProperty_mLexicalRule ;
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

void GALGAS_lexicalRuleListAST::setter_popFirst (GALGAS_abstractLexicalRuleAST & outOperand0,
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

void GALGAS_lexicalRuleListAST::setter_popLast (GALGAS_abstractLexicalRuleAST & outOperand0,
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

void GALGAS_lexicalRuleListAST::method_first (GALGAS_abstractLexicalRuleAST & outOperand0,
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

void GALGAS_lexicalRuleListAST::method_last (GALGAS_abstractLexicalRuleAST & outOperand0,
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

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::add_operation (const GALGAS_lexicalRuleListAST & inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalRuleListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRuleListAST result = GALGAS_lexicalRuleListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRuleListAST result = GALGAS_lexicalRuleListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRuleListAST result = GALGAS_lexicalRuleListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRuleListAST::plusAssign_operation (const GALGAS_lexicalRuleListAST inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRuleListAST::setter_setMLexicalRuleAtIndex (GALGAS_abstractLexicalRuleAST inOperand,
                                                               GALGAS_uint inIndex,
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

GALGAS_abstractLexicalRuleAST GALGAS_lexicalRuleListAST::getter_mLexicalRuleAtIndex (const GALGAS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) attributes.ptr () ;
  GALGAS_abstractLexicalRuleAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
    result = p->mObject.mProperty_mLexicalRule ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_lexicalRuleListAST::cEnumerator_lexicalRuleListAST (const GALGAS_lexicalRuleListAST & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST_2D_element cEnumerator_lexicalRuleListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRuleListAST * p = (const cCollectionElement_lexicalRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRuleAST cEnumerator_lexicalRuleListAST::current_mLexicalRule (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRuleListAST * p = (const cCollectionElement_lexicalRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
  return p->mObject.mProperty_mLexicalRule ;
}




//--------------------------------------------------------------------------------------------------
//
//     @lexicalRuleListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRuleListAST ("lexicalRuleListAST",
                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRuleListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRuleListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRuleListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRuleListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRuleListAST result ;
  const GALGAS_lexicalRuleListAST * p = (const GALGAS_lexicalRuleListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalRuleListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRuleListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@indexingListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_indexingListAST : public cCollectionElement {
  public: GALGAS_indexingListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_indexingListAST (const GALGAS_lstring & in_mIndexName,
                                              const GALGAS_lstring & in_mIndexComment
                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_indexingListAST (const GALGAS_indexingListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_indexingListAST::cCollectionElement_indexingListAST (const GALGAS_lstring & in_mIndexName,
                                                                        const GALGAS_lstring & in_mIndexComment
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mIndexName, in_mIndexComment) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_indexingListAST::cCollectionElement_indexingListAST (const GALGAS_indexingListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mIndexName" ":") ;
  mObject.mProperty_mIndexName.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mIndexComment" ":") ;
  mObject.mProperty_mIndexComment.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_indexingListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_indexingListAST * operand = (cCollectionElement_indexingListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_indexingListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_indexingListAST::GALGAS_indexingListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_indexingListAST::GALGAS_indexingListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_indexingListAST GALGAS_indexingListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_indexingListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_indexingListAST GALGAS_indexingListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_lstring & inOperand1
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_indexingListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_indexingListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_indexingListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_indexingListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GALGAS_lstring & in_mIndexName,
                                                        const GALGAS_lstring & in_mIndexComment
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_indexingListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_indexingListAST (in_mIndexName,
                                                     in_mIndexComment COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_indexingListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                  const GALGAS_lstring & inOperand1
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

void GALGAS_indexingListAST::setter_append (const GALGAS_lstring inOperand0,
                                            const GALGAS_lstring inOperand1,
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

void GALGAS_indexingListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                   const GALGAS_lstring inOperand1,
                                                   const GALGAS_uint inInsertionIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_indexingListAST (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_indexingListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   const GALGAS_uint inRemoveIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_indexingListAST * p = (cCollectionElement_indexingListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
        outOperand0 = p->mObject.mProperty_mIndexName ;
        outOperand1 = p->mObject.mProperty_mIndexComment ;
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

void GALGAS_indexingListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                              GALGAS_lstring & outOperand1,
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

void GALGAS_indexingListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                             GALGAS_lstring & outOperand1,
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

void GALGAS_indexingListAST::method_first (GALGAS_lstring & outOperand0,
                                           GALGAS_lstring & outOperand1,
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

void GALGAS_indexingListAST::method_last (GALGAS_lstring & outOperand0,
                                          GALGAS_lstring & outOperand1,
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

GALGAS_indexingListAST GALGAS_indexingListAST::add_operation (const GALGAS_indexingListAST & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_indexingListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_indexingListAST GALGAS_indexingListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_indexingListAST result = GALGAS_indexingListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_indexingListAST GALGAS_indexingListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_indexingListAST result = GALGAS_indexingListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_indexingListAST GALGAS_indexingListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_indexingListAST result = GALGAS_indexingListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_indexingListAST::plusAssign_operation (const GALGAS_indexingListAST inOperand,
                                                   Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_indexingListAST::setter_setMIndexNameAtIndex (GALGAS_lstring inOperand,
                                                          GALGAS_uint inIndex,
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

GALGAS_lstring GALGAS_indexingListAST::getter_mIndexNameAtIndex (const GALGAS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_indexingListAST * p = (cCollectionElement_indexingListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
    result = p->mObject.mProperty_mIndexName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_indexingListAST::setter_setMIndexCommentAtIndex (GALGAS_lstring inOperand,
                                                             GALGAS_uint inIndex,
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

GALGAS_lstring GALGAS_indexingListAST::getter_mIndexCommentAtIndex (const GALGAS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_indexingListAST * p = (cCollectionElement_indexingListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
    result = p->mObject.mProperty_mIndexComment ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_indexingListAST::cEnumerator_indexingListAST (const GALGAS_indexingListAST & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_indexingListAST_2D_element cEnumerator_indexingListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_indexingListAST * p = (const cCollectionElement_indexingListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_indexingListAST::current_mIndexName (LOCATION_ARGS) const {
  const cCollectionElement_indexingListAST * p = (const cCollectionElement_indexingListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
  return p->mObject.mProperty_mIndexName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_indexingListAST::current_mIndexComment (LOCATION_ARGS) const {
  const cCollectionElement_indexingListAST * p = (const cCollectionElement_indexingListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
  return p->mObject.mProperty_mIndexComment ;
}




//--------------------------------------------------------------------------------------------------
//
//     @indexingListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_indexingListAST ("indexingListAST",
                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_indexingListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_indexingListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_indexingListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_indexingListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_indexingListAST GALGAS_indexingListAST::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_indexingListAST result ;
  const GALGAS_indexingListAST * p = (const GALGAS_indexingListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_indexingListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("indexingListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_semanticDeclarationAST_2D_weak::objectCompare (const GALGAS_semanticDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_semanticDeclarationAST_2D_weak::GALGAS_semanticDeclarationAST_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationAST_2D_weak & GALGAS_semanticDeclarationAST_2D_weak::operator = (const GALGAS_semanticDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationAST_2D_weak::GALGAS_semanticDeclarationAST_2D_weak (const GALGAS_semanticDeclarationAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationAST_2D_weak GALGAS_semanticDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_semanticDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationAST GALGAS_semanticDeclarationAST_2D_weak::bang_semanticDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_semanticDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticDeclarationAST) ;
      result = GALGAS_semanticDeclarationAST ((cPtr_semanticDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @semanticDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak ("semanticDeclarationAST-weak",
                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationAST_2D_weak GALGAS_semanticDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationAST_2D_weak result ;
  const GALGAS_semanticDeclarationAST_2D_weak * p = (const GALGAS_semanticDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateLexiqueComponentAST_2D_weak::objectCompare (const GALGAS_templateLexiqueComponentAST_2D_weak & inOperand) const {
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

GALGAS_templateLexiqueComponentAST_2D_weak::GALGAS_templateLexiqueComponentAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateLexiqueComponentAST_2D_weak & GALGAS_templateLexiqueComponentAST_2D_weak::operator = (const GALGAS_templateLexiqueComponentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateLexiqueComponentAST_2D_weak::GALGAS_templateLexiqueComponentAST_2D_weak (const GALGAS_templateLexiqueComponentAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateLexiqueComponentAST_2D_weak GALGAS_templateLexiqueComponentAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateLexiqueComponentAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateLexiqueComponentAST GALGAS_templateLexiqueComponentAST_2D_weak::bang_templateLexiqueComponentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateLexiqueComponentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateLexiqueComponentAST) ;
      result = GALGAS_templateLexiqueComponentAST ((cPtr_templateLexiqueComponentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @templateLexiqueComponentAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLexiqueComponentAST_2D_weak ("templateLexiqueComponentAST-weak",
                                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateLexiqueComponentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLexiqueComponentAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateLexiqueComponentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLexiqueComponentAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateLexiqueComponentAST_2D_weak GALGAS_templateLexiqueComponentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateLexiqueComponentAST_2D_weak result ;
  const GALGAS_templateLexiqueComponentAST_2D_weak * p = (const GALGAS_templateLexiqueComponentAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateLexiqueComponentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLexiqueComponentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalExpressionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalExpressionAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_lexicalExpressionAST::objectCompare (const GALGAS_lexicalExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
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

GALGAS_lexicalExpressionAST::GALGAS_lexicalExpressionAST (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST::GALGAS_lexicalExpressionAST (const cPtr_lexicalExpressionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalExpressionAST::cPtr_lexicalExpressionAST (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @lexicalExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExpressionAST ("lexicalExpressionAST",
                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST GALGAS_lexicalExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExpressionAST result ;
  const GALGAS_lexicalExpressionAST * p = (const GALGAS_lexicalExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalExpressionAST_2D_weak::objectCompare (const GALGAS_lexicalExpressionAST_2D_weak & inOperand) const {
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

GALGAS_lexicalExpressionAST_2D_weak::GALGAS_lexicalExpressionAST_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST_2D_weak & GALGAS_lexicalExpressionAST_2D_weak::operator = (const GALGAS_lexicalExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST_2D_weak::GALGAS_lexicalExpressionAST_2D_weak (const GALGAS_lexicalExpressionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST_2D_weak GALGAS_lexicalExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST GALGAS_lexicalExpressionAST_2D_weak::bang_lexicalExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalExpressionAST) ;
      result = GALGAS_lexicalExpressionAST ((cPtr_lexicalExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExpressionAST_2D_weak ("lexicalExpressionAST-weak",
                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST_2D_weak GALGAS_lexicalExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExpressionAST_2D_weak result ;
  const GALGAS_lexicalExpressionAST_2D_weak * p = (const GALGAS_lexicalExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalInstructionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_lexicalInstructionAST::objectCompare (const GALGAS_lexicalInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
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

GALGAS_lexicalInstructionAST::GALGAS_lexicalInstructionAST (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionAST::GALGAS_lexicalInstructionAST (const cPtr_lexicalInstructionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalInstructionAST::cPtr_lexicalInstructionAST (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @lexicalInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalInstructionAST ("lexicalInstructionAST",
                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionAST GALGAS_lexicalInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalInstructionAST result ;
  const GALGAS_lexicalInstructionAST * p = (const GALGAS_lexicalInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalInstructionAST_2D_weak::objectCompare (const GALGAS_lexicalInstructionAST_2D_weak & inOperand) const {
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

GALGAS_lexicalInstructionAST_2D_weak::GALGAS_lexicalInstructionAST_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionAST_2D_weak & GALGAS_lexicalInstructionAST_2D_weak::operator = (const GALGAS_lexicalInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionAST_2D_weak::GALGAS_lexicalInstructionAST_2D_weak (const GALGAS_lexicalInstructionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionAST_2D_weak GALGAS_lexicalInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionAST GALGAS_lexicalInstructionAST_2D_weak::bang_lexicalInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalInstructionAST) ;
      result = GALGAS_lexicalInstructionAST ((cPtr_lexicalInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalInstructionAST_2D_weak ("lexicalInstructionAST-weak",
                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionAST_2D_weak GALGAS_lexicalInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalInstructionAST_2D_weak result ;
  const GALGAS_lexicalInstructionAST_2D_weak * p = (const GALGAS_lexicalInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalInstructionListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalInstructionListAST : public cCollectionElement {
  public: GALGAS_lexicalInstructionListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_lexicalInstructionListAST (const GALGAS_lexicalInstructionAST & in_mInstruction
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalInstructionListAST (const GALGAS_lexicalInstructionListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_lexicalInstructionListAST::cCollectionElement_lexicalInstructionListAST (const GALGAS_lexicalInstructionAST & in_mInstruction
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalInstructionListAST::cCollectionElement_lexicalInstructionListAST (const GALGAS_lexicalInstructionListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mInstruction" ":") ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalInstructionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalInstructionListAST * operand = (cCollectionElement_lexicalInstructionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalInstructionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST::GALGAS_lexicalInstructionListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST::GALGAS_lexicalInstructionListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalInstructionListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::constructor_listWithValue (const GALGAS_lexicalInstructionAST & inOperand0
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalInstructionListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_lexicalInstructionListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalInstructionListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalInstructionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_lexicalInstructionAST & in_mInstruction
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalInstructionListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalInstructionListAST (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalInstructionListAST::addAssign_operation (const GALGAS_lexicalInstructionAST & inOperand0
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

void GALGAS_lexicalInstructionListAST::setter_append (const GALGAS_lexicalInstructionAST inOperand0,
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

void GALGAS_lexicalInstructionListAST::setter_insertAtIndex (const GALGAS_lexicalInstructionAST inOperand0,
                                                             const GALGAS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_lexicalInstructionListAST (inOperand0 COMMA_THERE)) ;
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

void GALGAS_lexicalInstructionListAST::setter_removeAtIndex (GALGAS_lexicalInstructionAST & outOperand0,
                                                             const GALGAS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
        outOperand0 = p->mObject.mProperty_mInstruction ;
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

void GALGAS_lexicalInstructionListAST::setter_popFirst (GALGAS_lexicalInstructionAST & outOperand0,
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

void GALGAS_lexicalInstructionListAST::setter_popLast (GALGAS_lexicalInstructionAST & outOperand0,
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

void GALGAS_lexicalInstructionListAST::method_first (GALGAS_lexicalInstructionAST & outOperand0,
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

void GALGAS_lexicalInstructionListAST::method_last (GALGAS_lexicalInstructionAST & outOperand0,
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

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::add_operation (const GALGAS_lexicalInstructionListAST & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result = GALGAS_lexicalInstructionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result = GALGAS_lexicalInstructionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result = GALGAS_lexicalInstructionListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalInstructionListAST::plusAssign_operation (const GALGAS_lexicalInstructionListAST inOperand,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalInstructionListAST::setter_setMInstructionAtIndex (GALGAS_lexicalInstructionAST inOperand,
                                                                      GALGAS_uint inIndex,
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

GALGAS_lexicalInstructionAST GALGAS_lexicalInstructionListAST::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) attributes.ptr () ;
  GALGAS_lexicalInstructionAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_lexicalInstructionListAST::cEnumerator_lexicalInstructionListAST (const GALGAS_lexicalInstructionListAST & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST_2D_element cEnumerator_lexicalInstructionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalInstructionListAST * p = (const cCollectionElement_lexicalInstructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionAST cEnumerator_lexicalInstructionListAST::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_lexicalInstructionListAST * p = (const cCollectionElement_lexicalInstructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
  return p->mObject.mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//
//     @lexicalInstructionListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalInstructionListAST ("lexicalInstructionListAST",
                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalInstructionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalInstructionListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalInstructionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalInstructionListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalInstructionListAST result ;
  const GALGAS_lexicalInstructionListAST * p = (const GALGAS_lexicalInstructionListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalInstructionListAST *> (p)) {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractLexicalRuleAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_abstractLexicalRuleAST::objectCompare (const GALGAS_abstractLexicalRuleAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
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

GALGAS_abstractLexicalRuleAST::GALGAS_abstractLexicalRuleAST (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRuleAST::GALGAS_abstractLexicalRuleAST (const cPtr_abstractLexicalRuleAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractLexicalRuleAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractLexicalRuleAST class
//--------------------------------------------------------------------------------------------------

cPtr_abstractLexicalRuleAST::cPtr_abstractLexicalRuleAST (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @abstractLexicalRuleAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractLexicalRuleAST ("abstractLexicalRuleAST",
                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractLexicalRuleAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractLexicalRuleAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractLexicalRuleAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractLexicalRuleAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRuleAST GALGAS_abstractLexicalRuleAST::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_abstractLexicalRuleAST result ;
  const GALGAS_abstractLexicalRuleAST * p = (const GALGAS_abstractLexicalRuleAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractLexicalRuleAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractLexicalRuleAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractLexicalRuleAST_2D_weak::objectCompare (const GALGAS_abstractLexicalRuleAST_2D_weak & inOperand) const {
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

GALGAS_abstractLexicalRuleAST_2D_weak::GALGAS_abstractLexicalRuleAST_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRuleAST_2D_weak & GALGAS_abstractLexicalRuleAST_2D_weak::operator = (const GALGAS_abstractLexicalRuleAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRuleAST_2D_weak::GALGAS_abstractLexicalRuleAST_2D_weak (const GALGAS_abstractLexicalRuleAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRuleAST_2D_weak GALGAS_abstractLexicalRuleAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractLexicalRuleAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRuleAST GALGAS_abstractLexicalRuleAST_2D_weak::bang_abstractLexicalRuleAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractLexicalRuleAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractLexicalRuleAST) ;
      result = GALGAS_abstractLexicalRuleAST ((cPtr_abstractLexicalRuleAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @abstractLexicalRuleAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractLexicalRuleAST_2D_weak ("abstractLexicalRuleAST-weak",
                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractLexicalRuleAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractLexicalRuleAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractLexicalRuleAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractLexicalRuleAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRuleAST_2D_weak GALGAS_abstractLexicalRuleAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_abstractLexicalRuleAST_2D_weak result ;
  const GALGAS_abstractLexicalRuleAST_2D_weak * p = (const GALGAS_abstractLexicalRuleAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractLexicalRuleAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractLexicalRuleAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@lexicalRuleListAST useLoopLocalVar'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool extensionGetter_useLoopLocalVar (const GALGAS_lexicalRuleListAST & inObject,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
  const GALGAS_lexicalRuleListAST temp_0 = inObject ;
  cEnumerator_lexicalRuleListAST enumerator_2913 (temp_0, kENUMERATION_UP) ;
  bool bool_1 = result_result.operator_not (SOURCE_FILE ("lexiqueTypesForAST.galgas", 71)).isValidAndTrue () ;
  if (enumerator_2913.hasCurrentObject () && bool_1) {
    while (enumerator_2913.hasCurrentObject () && bool_1) {
      result_result = callExtensionGetter_lexicalRuleUsesLoopLocalVar ((const cPtr_abstractLexicalRuleAST *) enumerator_2913.current_mLexicalRule (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 72)) ;
      enumerator_2913.gotoNextObject () ;
      if (enumerator_2913.hasCurrentObject ()) {
        bool_1 = result_result.operator_not (SOURCE_FILE ("lexiqueTypesForAST.galgas", 71)).isValidAndTrue () ;
      }
    }
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalImplicitRuleAST_2D_weak::objectCompare (const GALGAS_lexicalImplicitRuleAST_2D_weak & inOperand) const {
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

GALGAS_lexicalImplicitRuleAST_2D_weak::GALGAS_lexicalImplicitRuleAST_2D_weak (void) :
GALGAS_abstractLexicalRuleAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST_2D_weak & GALGAS_lexicalImplicitRuleAST_2D_weak::operator = (const GALGAS_lexicalImplicitRuleAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST_2D_weak::GALGAS_lexicalImplicitRuleAST_2D_weak (const GALGAS_lexicalImplicitRuleAST & inSource) :
GALGAS_abstractLexicalRuleAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST_2D_weak GALGAS_lexicalImplicitRuleAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalImplicitRuleAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST GALGAS_lexicalImplicitRuleAST_2D_weak::bang_lexicalImplicitRuleAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalImplicitRuleAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalImplicitRuleAST) ;
      result = GALGAS_lexicalImplicitRuleAST ((cPtr_lexicalImplicitRuleAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalImplicitRuleAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalImplicitRuleAST_2D_weak ("lexicalImplicitRuleAST-weak",
                                                       & kTypeDescriptor_GALGAS_abstractLexicalRuleAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalImplicitRuleAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalImplicitRuleAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalImplicitRuleAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalImplicitRuleAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST_2D_weak GALGAS_lexicalImplicitRuleAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalImplicitRuleAST_2D_weak result ;
  const GALGAS_lexicalImplicitRuleAST_2D_weak * p = (const GALGAS_lexicalImplicitRuleAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalImplicitRuleAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalImplicitRuleAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalExplicitRuleAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalExplicitRuleAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractLexicalRuleAST::printNonNullClassInstanceProperties () ;
    mProperty_mLexicalRuleExpression.printNonNullClassInstanceProperties ("mLexicalRuleExpression") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalExplicitRuleAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalExplicitRuleAST * p = (const cPtr_lexicalExplicitRuleAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalExplicitRuleAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLexicalRuleExpression.objectCompare (p->mProperty_mLexicalRuleExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalExplicitRuleAST::objectCompare (const GALGAS_lexicalExplicitRuleAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
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

GALGAS_lexicalExplicitRuleAST::GALGAS_lexicalExplicitRuleAST (void) :
GALGAS_abstractLexicalRuleAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitRuleAST::GALGAS_lexicalExplicitRuleAST (const cPtr_lexicalExplicitRuleAST * inSourcePtr) :
GALGAS_abstractLexicalRuleAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalExplicitRuleAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitRuleAST GALGAS_lexicalExplicitRuleAST::constructor_new (const GALGAS_lexicalExpressionAST & inAttribute_mLexicalRuleExpression,
                                                                              const GALGAS_lexicalInstructionListAST & inAttribute_mInstructionList
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExplicitRuleAST result ;
  if (inAttribute_mLexicalRuleExpression.isValid () && inAttribute_mInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalExplicitRuleAST (inAttribute_mLexicalRuleExpression, inAttribute_mInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST GALGAS_lexicalExplicitRuleAST::readProperty_mLexicalRuleExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lexicalExpressionAST () ;
  }else{
    cPtr_lexicalExplicitRuleAST * p = (cPtr_lexicalExplicitRuleAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalExplicitRuleAST) ;
    return p->mProperty_mLexicalRuleExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST GALGAS_lexicalExplicitRuleAST::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lexicalInstructionListAST () ;
  }else{
    cPtr_lexicalExplicitRuleAST * p = (cPtr_lexicalExplicitRuleAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalExplicitRuleAST) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalExplicitRuleAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalExplicitRuleAST::cPtr_lexicalExplicitRuleAST (const GALGAS_lexicalExpressionAST & in_mLexicalRuleExpression,
                                                          const GALGAS_lexicalInstructionListAST & in_mInstructionList
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRuleAST (THERE),
mProperty_mLexicalRuleExpression (in_mLexicalRuleExpression),
mProperty_mInstructionList (in_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalExplicitRuleAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitRuleAST ;
}

void cPtr_lexicalExplicitRuleAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.addString ("[@lexicalExplicitRuleAST:") ;
  mProperty_mLexicalRuleExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalExplicitRuleAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalExplicitRuleAST (mProperty_mLexicalRuleExpression, mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexicalExplicitRuleAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExplicitRuleAST ("lexicalExplicitRuleAST",
                                               & kTypeDescriptor_GALGAS_abstractLexicalRuleAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalExplicitRuleAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitRuleAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalExplicitRuleAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExplicitRuleAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitRuleAST GALGAS_lexicalExplicitRuleAST::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExplicitRuleAST result ;
  const GALGAS_lexicalExplicitRuleAST * p = (const GALGAS_lexicalExplicitRuleAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalExplicitRuleAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExplicitRuleAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalExplicitRuleAST_2D_weak::objectCompare (const GALGAS_lexicalExplicitRuleAST_2D_weak & inOperand) const {
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

GALGAS_lexicalExplicitRuleAST_2D_weak::GALGAS_lexicalExplicitRuleAST_2D_weak (void) :
GALGAS_abstractLexicalRuleAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitRuleAST_2D_weak & GALGAS_lexicalExplicitRuleAST_2D_weak::operator = (const GALGAS_lexicalExplicitRuleAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitRuleAST_2D_weak::GALGAS_lexicalExplicitRuleAST_2D_weak (const GALGAS_lexicalExplicitRuleAST & inSource) :
GALGAS_abstractLexicalRuleAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitRuleAST_2D_weak GALGAS_lexicalExplicitRuleAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalExplicitRuleAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitRuleAST GALGAS_lexicalExplicitRuleAST_2D_weak::bang_lexicalExplicitRuleAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExplicitRuleAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalExplicitRuleAST) ;
      result = GALGAS_lexicalExplicitRuleAST ((cPtr_lexicalExplicitRuleAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalExplicitRuleAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExplicitRuleAST_2D_weak ("lexicalExplicitRuleAST-weak",
                                                       & kTypeDescriptor_GALGAS_abstractLexicalRuleAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalExplicitRuleAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitRuleAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalExplicitRuleAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExplicitRuleAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitRuleAST_2D_weak GALGAS_lexicalExplicitRuleAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExplicitRuleAST_2D_weak result ;
  const GALGAS_lexicalExplicitRuleAST_2D_weak * p = (const GALGAS_lexicalExplicitRuleAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalExplicitRuleAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExplicitRuleAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@sentLexicalAttributeListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_sentLexicalAttributeListAST : public cCollectionElement {
  public: GALGAS_sentLexicalAttributeListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_sentLexicalAttributeListAST (const GALGAS_lstring & in_mFormalSelector,
                                                          const GALGAS_lstring & in_mAttributeName
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_sentLexicalAttributeListAST (const GALGAS_sentLexicalAttributeListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_sentLexicalAttributeListAST::cCollectionElement_sentLexicalAttributeListAST (const GALGAS_lstring & in_mFormalSelector,
                                                                                                const GALGAS_lstring & in_mAttributeName
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mAttributeName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_sentLexicalAttributeListAST::cCollectionElement_sentLexicalAttributeListAST (const GALGAS_sentLexicalAttributeListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mFormalSelector" ":") ;
  mObject.mProperty_mFormalSelector.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mAttributeName" ":") ;
  mObject.mProperty_mAttributeName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_sentLexicalAttributeListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_sentLexicalAttributeListAST * operand = (cCollectionElement_sentLexicalAttributeListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_sentLexicalAttributeListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST::GALGAS_sentLexicalAttributeListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST::GALGAS_sentLexicalAttributeListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_sentLexicalAttributeListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_sentLexicalAttributeListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_sentLexicalAttributeListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_sentLexicalAttributeListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sentLexicalAttributeListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_lstring & in_mFormalSelector,
                                                                    const GALGAS_lstring & in_mAttributeName
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_sentLexicalAttributeListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_sentLexicalAttributeListAST (in_mFormalSelector,
                                                                 in_mAttributeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sentLexicalAttributeListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_lstring & inOperand1
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

void GALGAS_sentLexicalAttributeListAST::setter_append (const GALGAS_lstring inOperand0,
                                                        const GALGAS_lstring inOperand1,
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

void GALGAS_sentLexicalAttributeListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                               const GALGAS_lstring inOperand1,
                                                               const GALGAS_uint inInsertionIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_sentLexicalAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_sentLexicalAttributeListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                               GALGAS_lstring & outOperand1,
                                                               const GALGAS_uint inRemoveIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
        outOperand0 = p->mObject.mProperty_mFormalSelector ;
        outOperand1 = p->mObject.mProperty_mAttributeName ;
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

void GALGAS_sentLexicalAttributeListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
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

void GALGAS_sentLexicalAttributeListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
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

void GALGAS_sentLexicalAttributeListAST::method_first (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
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

void GALGAS_sentLexicalAttributeListAST::method_last (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
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

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::add_operation (const GALGAS_sentLexicalAttributeListAST & inOperand,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_sentLexicalAttributeListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_sentLexicalAttributeListAST result = GALGAS_sentLexicalAttributeListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_sentLexicalAttributeListAST result = GALGAS_sentLexicalAttributeListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_sentLexicalAttributeListAST result = GALGAS_sentLexicalAttributeListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sentLexicalAttributeListAST::plusAssign_operation (const GALGAS_sentLexicalAttributeListAST inOperand,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sentLexicalAttributeListAST::setter_setMFormalSelectorAtIndex (GALGAS_lstring inOperand,
                                                                           GALGAS_uint inIndex,
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

GALGAS_lstring GALGAS_sentLexicalAttributeListAST::getter_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    result = p->mObject.mProperty_mFormalSelector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sentLexicalAttributeListAST::setter_setMAttributeNameAtIndex (GALGAS_lstring inOperand,
                                                                          GALGAS_uint inIndex,
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

GALGAS_lstring GALGAS_sentLexicalAttributeListAST::getter_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    result = p->mObject.mProperty_mAttributeName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_sentLexicalAttributeListAST::cEnumerator_sentLexicalAttributeListAST (const GALGAS_sentLexicalAttributeListAST & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST_2D_element cEnumerator_sentLexicalAttributeListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_sentLexicalAttributeListAST * p = (const cCollectionElement_sentLexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_sentLexicalAttributeListAST::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_sentLexicalAttributeListAST * p = (const cCollectionElement_sentLexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
  return p->mObject.mProperty_mFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_sentLexicalAttributeListAST::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_sentLexicalAttributeListAST * p = (const cCollectionElement_sentLexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
  return p->mObject.mProperty_mAttributeName ;
}




//--------------------------------------------------------------------------------------------------
//
//     @sentLexicalAttributeListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sentLexicalAttributeListAST ("sentLexicalAttributeListAST",
                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sentLexicalAttributeListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sentLexicalAttributeListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sentLexicalAttributeListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sentLexicalAttributeListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sentLexicalAttributeListAST result ;
  const GALGAS_sentLexicalAttributeListAST * p = (const GALGAS_sentLexicalAttributeListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sentLexicalAttributeListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sentLexicalAttributeListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalListEntryListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalListEntryListAST : public cCollectionElement {
  public: GALGAS_lexicalListEntryListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_lexicalListEntryListAST (const GALGAS_lstring & in_mEntrySpelling,
                                                      const GALGAS_lstring & in_mTerminalSpelling,
                                                      const GALGAS_bool & in_nonAtomicSelection,
                                                      const GALGAS_bool & in_isEndOfTemplateMark
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalListEntryListAST (const GALGAS_lexicalListEntryListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_lexicalListEntryListAST::cCollectionElement_lexicalListEntryListAST (const GALGAS_lstring & in_mEntrySpelling,
                                                                                        const GALGAS_lstring & in_mTerminalSpelling,
                                                                                        const GALGAS_bool & in_nonAtomicSelection,
                                                                                        const GALGAS_bool & in_isEndOfTemplateMark
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEntrySpelling, in_mTerminalSpelling, in_nonAtomicSelection, in_isEndOfTemplateMark) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalListEntryListAST::cCollectionElement_lexicalListEntryListAST (const GALGAS_lexicalListEntryListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEntrySpelling, inElement.mProperty_mTerminalSpelling, inElement.mProperty_nonAtomicSelection, inElement.mProperty_isEndOfTemplateMark) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalListEntryListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalListEntryListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_lexicalListEntryListAST (mObject.mProperty_mEntrySpelling, mObject.mProperty_mTerminalSpelling, mObject.mProperty_nonAtomicSelection, mObject.mProperty_isEndOfTemplateMark COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalListEntryListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mEntrySpelling" ":") ;
  mObject.mProperty_mEntrySpelling.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mTerminalSpelling" ":") ;
  mObject.mProperty_mTerminalSpelling.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("nonAtomicSelection" ":") ;
  mObject.mProperty_nonAtomicSelection.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("isEndOfTemplateMark" ":") ;
  mObject.mProperty_isEndOfTemplateMark.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalListEntryListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalListEntryListAST * operand = (cCollectionElement_lexicalListEntryListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalListEntryListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST::GALGAS_lexicalListEntryListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST::GALGAS_lexicalListEntryListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalListEntryListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1,
                                                                                          const GALGAS_bool & inOperand2,
                                                                                          const GALGAS_bool & inOperand3
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalListEntryListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_lexicalListEntryListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalListEntryListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_lstring & in_mEntrySpelling,
                                                                const GALGAS_lstring & in_mTerminalSpelling,
                                                                const GALGAS_bool & in_nonAtomicSelection,
                                                                const GALGAS_bool & in_isEndOfTemplateMark
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListEntryListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalListEntryListAST (in_mEntrySpelling,
                                                             in_mTerminalSpelling,
                                                             in_nonAtomicSelection,
                                                             in_isEndOfTemplateMark COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_lstring & inOperand1,
                                                          const GALGAS_bool & inOperand2,
                                                          const GALGAS_bool & inOperand3
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalListEntryListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST::setter_append (const GALGAS_lstring inOperand0,
                                                    const GALGAS_lstring inOperand1,
                                                    const GALGAS_bool inOperand2,
                                                    const GALGAS_bool inOperand3,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalListEntryListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                           const GALGAS_lstring inOperand1,
                                                           const GALGAS_bool inOperand2,
                                                           const GALGAS_bool inOperand3,
                                                           const GALGAS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_lexicalListEntryListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
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

void GALGAS_lexicalListEntryListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
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
      cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
        outOperand0 = p->mObject.mProperty_mEntrySpelling ;
        outOperand1 = p->mObject.mProperty_mTerminalSpelling ;
        outOperand2 = p->mObject.mProperty_nonAtomicSelection ;
        outOperand3 = p->mObject.mProperty_isEndOfTemplateMark ;
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

void GALGAS_lexicalListEntryListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_bool & outOperand2,
                                                      GALGAS_bool & outOperand3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    outOperand0 = p->mObject.mProperty_mEntrySpelling ;
    outOperand1 = p->mObject.mProperty_mTerminalSpelling ;
    outOperand2 = p->mObject.mProperty_nonAtomicSelection ;
    outOperand3 = p->mObject.mProperty_isEndOfTemplateMark ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_bool & outOperand2,
                                                     GALGAS_bool & outOperand3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    outOperand0 = p->mObject.mProperty_mEntrySpelling ;
    outOperand1 = p->mObject.mProperty_mTerminalSpelling ;
    outOperand2 = p->mObject.mProperty_nonAtomicSelection ;
    outOperand3 = p->mObject.mProperty_isEndOfTemplateMark ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST::method_first (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_bool & outOperand2,
                                                   GALGAS_bool & outOperand3,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    outOperand0 = p->mObject.mProperty_mEntrySpelling ;
    outOperand1 = p->mObject.mProperty_mTerminalSpelling ;
    outOperand2 = p->mObject.mProperty_nonAtomicSelection ;
    outOperand3 = p->mObject.mProperty_isEndOfTemplateMark ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST::method_last (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  GALGAS_bool & outOperand2,
                                                  GALGAS_bool & outOperand3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    outOperand0 = p->mObject.mProperty_mEntrySpelling ;
    outOperand1 = p->mObject.mProperty_mTerminalSpelling ;
    outOperand2 = p->mObject.mProperty_nonAtomicSelection ;
    outOperand3 = p->mObject.mProperty_isEndOfTemplateMark ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::add_operation (const GALGAS_lexicalListEntryListAST & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalListEntryListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListEntryListAST result = GALGAS_lexicalListEntryListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListEntryListAST result = GALGAS_lexicalListEntryListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListEntryListAST result = GALGAS_lexicalListEntryListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST::plusAssign_operation (const GALGAS_lexicalListEntryListAST inOperand,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST::setter_setMEntrySpellingAtIndex (GALGAS_lstring inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEntrySpelling = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalListEntryListAST::getter_mEntrySpellingAtIndex (const GALGAS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    result = p->mObject.mProperty_mEntrySpelling ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST::setter_setMTerminalSpellingAtIndex (GALGAS_lstring inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTerminalSpelling = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalListEntryListAST::getter_mTerminalSpellingAtIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    result = p->mObject.mProperty_mTerminalSpelling ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST::setter_setNonAtomicSelectionAtIndex (GALGAS_bool inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_nonAtomicSelection = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalListEntryListAST::getter_nonAtomicSelectionAtIndex (const GALGAS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    result = p->mObject.mProperty_nonAtomicSelection ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST::setter_setIsEndOfTemplateMarkAtIndex (GALGAS_bool inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_isEndOfTemplateMark = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalListEntryListAST::getter_isEndOfTemplateMarkAtIndex (const GALGAS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    result = p->mObject.mProperty_isEndOfTemplateMark ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_lexicalListEntryListAST::cEnumerator_lexicalListEntryListAST (const GALGAS_lexicalListEntryListAST & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST_2D_element cEnumerator_lexicalListEntryListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalListEntryListAST::current_mEntrySpelling (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject.mProperty_mEntrySpelling ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalListEntryListAST::current_mTerminalSpelling (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject.mProperty_mTerminalSpelling ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_lexicalListEntryListAST::current_nonAtomicSelection (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject.mProperty_nonAtomicSelection ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_lexicalListEntryListAST::current_isEndOfTemplateMark (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject.mProperty_isEndOfTemplateMark ;
}




//--------------------------------------------------------------------------------------------------
//
//     @lexicalListEntryListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalListEntryListAST ("lexicalListEntryListAST",
                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalListEntryListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalListEntryListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalListEntryListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalListEntryListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalListEntryListAST result ;
  const GALGAS_lexicalListEntryListAST * p = (const GALGAS_lexicalListEntryListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalListEntryListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalListEntryListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalOrExpressionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalOrExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLeftOperand.printNonNullClassInstanceProperties ("mLeftOperand") ;
    mProperty_mRightOperand.printNonNullClassInstanceProperties ("mRightOperand") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalOrExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalOrExpressionAST * p = (const cPtr_lexicalOrExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalOrExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftOperand.objectCompare (p->mProperty_mLeftOperand) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightOperand.objectCompare (p->mProperty_mRightOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalOrExpressionAST::objectCompare (const GALGAS_lexicalOrExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
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

GALGAS_lexicalOrExpressionAST::GALGAS_lexicalOrExpressionAST (void) :
GALGAS_lexicalExpressionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalOrExpressionAST::GALGAS_lexicalOrExpressionAST (const cPtr_lexicalOrExpressionAST * inSourcePtr) :
GALGAS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalOrExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexicalOrExpressionAST GALGAS_lexicalOrExpressionAST::constructor_new (const GALGAS_lexicalExpressionAST & inAttribute_mLeftOperand,
                                                                              const GALGAS_lexicalExpressionAST & inAttribute_mRightOperand
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalOrExpressionAST result ;
  if (inAttribute_mLeftOperand.isValid () && inAttribute_mRightOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalOrExpressionAST (inAttribute_mLeftOperand, inAttribute_mRightOperand COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST GALGAS_lexicalOrExpressionAST::readProperty_mLeftOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lexicalExpressionAST () ;
  }else{
    cPtr_lexicalOrExpressionAST * p = (cPtr_lexicalOrExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalOrExpressionAST) ;
    return p->mProperty_mLeftOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST GALGAS_lexicalOrExpressionAST::readProperty_mRightOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lexicalExpressionAST () ;
  }else{
    cPtr_lexicalOrExpressionAST * p = (cPtr_lexicalOrExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalOrExpressionAST) ;
    return p->mProperty_mRightOperand ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalOrExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalOrExpressionAST::cPtr_lexicalOrExpressionAST (const GALGAS_lexicalExpressionAST & in_mLeftOperand,
                                                          const GALGAS_lexicalExpressionAST & in_mRightOperand
                                                          COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (THERE),
mProperty_mLeftOperand (in_mLeftOperand),
mProperty_mRightOperand (in_mRightOperand) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalOrExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalOrExpressionAST ;
}

void cPtr_lexicalOrExpressionAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.addString ("[@lexicalOrExpressionAST:") ;
  mProperty_mLeftOperand.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRightOperand.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalOrExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalOrExpressionAST (mProperty_mLeftOperand, mProperty_mRightOperand COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexicalOrExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalOrExpressionAST ("lexicalOrExpressionAST",
                                               & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalOrExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalOrExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalOrExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalOrExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalOrExpressionAST GALGAS_lexicalOrExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalOrExpressionAST result ;
  const GALGAS_lexicalOrExpressionAST * p = (const GALGAS_lexicalOrExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalOrExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalOrExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalOrExpressionAST_2D_weak::objectCompare (const GALGAS_lexicalOrExpressionAST_2D_weak & inOperand) const {
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

GALGAS_lexicalOrExpressionAST_2D_weak::GALGAS_lexicalOrExpressionAST_2D_weak (void) :
GALGAS_lexicalExpressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalOrExpressionAST_2D_weak & GALGAS_lexicalOrExpressionAST_2D_weak::operator = (const GALGAS_lexicalOrExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalOrExpressionAST_2D_weak::GALGAS_lexicalOrExpressionAST_2D_weak (const GALGAS_lexicalOrExpressionAST & inSource) :
GALGAS_lexicalExpressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalOrExpressionAST_2D_weak GALGAS_lexicalOrExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalOrExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalOrExpressionAST GALGAS_lexicalOrExpressionAST_2D_weak::bang_lexicalOrExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalOrExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalOrExpressionAST) ;
      result = GALGAS_lexicalOrExpressionAST ((cPtr_lexicalOrExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalOrExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalOrExpressionAST_2D_weak ("lexicalOrExpressionAST-weak",
                                                       & kTypeDescriptor_GALGAS_lexicalExpressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalOrExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalOrExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalOrExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalOrExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalOrExpressionAST_2D_weak GALGAS_lexicalOrExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalOrExpressionAST_2D_weak result ;
  const GALGAS_lexicalOrExpressionAST_2D_weak * p = (const GALGAS_lexicalOrExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalOrExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalOrExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalCharacterSetMatchAST_2D_weak::objectCompare (const GALGAS_lexicalCharacterSetMatchAST_2D_weak & inOperand) const {
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

GALGAS_lexicalCharacterSetMatchAST_2D_weak::GALGAS_lexicalCharacterSetMatchAST_2D_weak (void) :
GALGAS_lexicalExpressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST_2D_weak & GALGAS_lexicalCharacterSetMatchAST_2D_weak::operator = (const GALGAS_lexicalCharacterSetMatchAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST_2D_weak::GALGAS_lexicalCharacterSetMatchAST_2D_weak (const GALGAS_lexicalCharacterSetMatchAST & inSource) :
GALGAS_lexicalExpressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST_2D_weak GALGAS_lexicalCharacterSetMatchAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalCharacterSetMatchAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST GALGAS_lexicalCharacterSetMatchAST_2D_weak::bang_lexicalCharacterSetMatchAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalCharacterSetMatchAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalCharacterSetMatchAST) ;
      result = GALGAS_lexicalCharacterSetMatchAST ((cPtr_lexicalCharacterSetMatchAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalCharacterSetMatchAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST_2D_weak ("lexicalCharacterSetMatchAST-weak",
                                                            & kTypeDescriptor_GALGAS_lexicalExpressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalCharacterSetMatchAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalCharacterSetMatchAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCharacterSetMatchAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST_2D_weak GALGAS_lexicalCharacterSetMatchAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterSetMatchAST_2D_weak result ;
  const GALGAS_lexicalCharacterSetMatchAST_2D_weak * p = (const GALGAS_lexicalCharacterSetMatchAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalCharacterSetMatchAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterSetMatchAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalCharacterMatchAST_2D_weak::objectCompare (const GALGAS_lexicalCharacterMatchAST_2D_weak & inOperand) const {
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

GALGAS_lexicalCharacterMatchAST_2D_weak::GALGAS_lexicalCharacterMatchAST_2D_weak (void) :
GALGAS_lexicalExpressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST_2D_weak & GALGAS_lexicalCharacterMatchAST_2D_weak::operator = (const GALGAS_lexicalCharacterMatchAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST_2D_weak::GALGAS_lexicalCharacterMatchAST_2D_weak (const GALGAS_lexicalCharacterMatchAST & inSource) :
GALGAS_lexicalExpressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST_2D_weak GALGAS_lexicalCharacterMatchAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalCharacterMatchAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST GALGAS_lexicalCharacterMatchAST_2D_weak::bang_lexicalCharacterMatchAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalCharacterMatchAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalCharacterMatchAST) ;
      result = GALGAS_lexicalCharacterMatchAST ((cPtr_lexicalCharacterMatchAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalCharacterMatchAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalCharacterMatchAST_2D_weak ("lexicalCharacterMatchAST-weak",
                                                         & kTypeDescriptor_GALGAS_lexicalExpressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalCharacterMatchAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterMatchAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalCharacterMatchAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCharacterMatchAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST_2D_weak GALGAS_lexicalCharacterMatchAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterMatchAST_2D_weak result ;
  const GALGAS_lexicalCharacterMatchAST_2D_weak * p = (const GALGAS_lexicalCharacterMatchAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalCharacterMatchAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterMatchAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::objectCompare (const GALGAS_lexicalCharacterIntervalMatchAST_2D_weak & inOperand) const {
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

GALGAS_lexicalCharacterIntervalMatchAST_2D_weak GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::constructor_nil (LOCATION_ARGS) {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST_2D_weak ("lexicalCharacterIntervalMatchAST-weak",
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

typeComparisonResult GALGAS_lexicalStringMatchAST_2D_weak::objectCompare (const GALGAS_lexicalStringMatchAST_2D_weak & inOperand) const {
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

GALGAS_lexicalStringMatchAST_2D_weak GALGAS_lexicalStringMatchAST_2D_weak::constructor_nil (LOCATION_ARGS) {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalStringMatchAST_2D_weak ("lexicalStringMatchAST-weak",
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

typeComparisonResult GALGAS_lexicalStringNotMatchAST_2D_weak::objectCompare (const GALGAS_lexicalStringNotMatchAST_2D_weak & inOperand) const {
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

GALGAS_lexicalStringNotMatchAST_2D_weak GALGAS_lexicalStringNotMatchAST_2D_weak::constructor_nil (LOCATION_ARGS) {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalStringNotMatchAST_2D_weak ("lexicalStringNotMatchAST-weak",
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

//--- Constructors
  public: cCollectionElement_lexicalSendSearchListAST (const GALGAS_lstring & in_mAttributeName,
                                                       const GALGAS_lstring & in_mSearchListName
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalSendSearchListAST (const GALGAS_lexicalSendSearchListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mAttributeName" ":") ;
  mObject.mProperty_mAttributeName.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mSearchListName" ":") ;
  mObject.mProperty_mSearchListName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalSendSearchListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalSendSearchListAST * operand = (cCollectionElement_lexicalSendSearchListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalSendSearchListAST) ;
  return mObject.objectCompare (operand->mObject) ;
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

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalSendSearchListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
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
  GALGAS_lexicalSendSearchListAST result = GALGAS_lexicalSendSearchListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSendSearchListAST result = GALGAS_lexicalSendSearchListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSendSearchListAST result = GALGAS_lexicalSendSearchListAST::constructor_emptyList (THERE) ;
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
                                                                            const typeEnumerationOrder inOrder) :
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSendSearchListAST ("lexicalSendSearchListAST",
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalSendDefaultActionAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_lexicalSendDefaultActionAST::objectCompare (const GALGAS_lexicalSendDefaultActionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST ("lexicalSendDefaultActionAST",
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

typeComparisonResult GALGAS_lexicalSendDefaultActionAST_2D_weak::objectCompare (const GALGAS_lexicalSendDefaultActionAST_2D_weak & inOperand) const {
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

GALGAS_lexicalSendDefaultActionAST_2D_weak GALGAS_lexicalSendDefaultActionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST_2D_weak ("lexicalSendDefaultActionAST-weak",
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

typeComparisonResult GALGAS_lexicalSendTerminalByDefaultAST_2D_weak::objectCompare (const GALGAS_lexicalSendTerminalByDefaultAST_2D_weak & inOperand) const {
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

GALGAS_lexicalSendTerminalByDefaultAST_2D_weak GALGAS_lexicalSendTerminalByDefaultAST_2D_weak::constructor_nil (LOCATION_ARGS) {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST_2D_weak ("lexicalSendTerminalByDefaultAST-weak",
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

typeComparisonResult GALGAS_lexicalErrorByDefaultAST_2D_weak::objectCompare (const GALGAS_lexicalErrorByDefaultAST_2D_weak & inOperand) const {
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

GALGAS_lexicalErrorByDefaultAST_2D_weak GALGAS_lexicalErrorByDefaultAST_2D_weak::constructor_nil (LOCATION_ARGS) {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST_2D_weak ("lexicalErrorByDefaultAST-weak",
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

//--- Constructors
  public: cCollectionElement_lexicalWhileBranchListAST (const GALGAS_lexicalExpressionAST & in_mWhileExpression,
                                                        const GALGAS_lexicalInstructionListAST & in_mWhileInstructionList
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalWhileBranchListAST (const GALGAS_lexicalWhileBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mWhileExpression" ":") ;
  mObject.mProperty_mWhileExpression.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mWhileInstructionList" ":") ;
  mObject.mProperty_mWhileInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalWhileBranchListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalWhileBranchListAST * operand = (cCollectionElement_lexicalWhileBranchListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalWhileBranchListAST) ;
  return mObject.objectCompare (operand->mObject) ;
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

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalWhileBranchListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::constructor_listWithValue (const GALGAS_lexicalExpressionAST & inOperand0,
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
  GALGAS_lexicalWhileBranchListAST result = GALGAS_lexicalWhileBranchListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalWhileBranchListAST result = GALGAS_lexicalWhileBranchListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalWhileBranchListAST result = GALGAS_lexicalWhileBranchListAST::constructor_emptyList (THERE) ;
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
                                                                              const typeEnumerationOrder inOrder) :
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalWhileBranchListAST ("lexicalWhileBranchListAST",
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

//--- Constructors
  public: cCollectionElement_lexicalSelectBranchListAST (const GALGAS_lexicalExpressionAST & in_mSelectExpression,
                                                         const GALGAS_lexicalInstructionListAST & in_mSelectInstructionList
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalSelectBranchListAST (const GALGAS_lexicalSelectBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mSelectExpression" ":") ;
  mObject.mProperty_mSelectExpression.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mSelectInstructionList" ":") ;
  mObject.mProperty_mSelectInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalSelectBranchListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalSelectBranchListAST * operand = (cCollectionElement_lexicalSelectBranchListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalSelectBranchListAST) ;
  return mObject.objectCompare (operand->mObject) ;
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

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalSelectBranchListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::constructor_listWithValue (const GALGAS_lexicalExpressionAST & inOperand0,
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
  GALGAS_lexicalSelectBranchListAST result = GALGAS_lexicalSelectBranchListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSelectBranchListAST result = GALGAS_lexicalSelectBranchListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSelectBranchListAST result = GALGAS_lexicalSelectBranchListAST::constructor_emptyList (THERE) ;
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
                                                                                const typeEnumerationOrder inOrder) :
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSelectBranchListAST ("lexicalSelectBranchListAST",
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST::objectCompare (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST ("lexicalRoutineOrFunctionFormalInputArgumentAST",
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

typeComparisonResult GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak::objectCompare (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak & inOperand) const {
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

GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak::constructor_nil (LOCATION_ARGS) {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak ("lexicalRoutineOrFunctionFormalInputArgumentAST-weak",
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

//--- Constructors
  public: cCollectionElement_lexicalFunctionCallActualArgumentListAST (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument
                                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalFunctionCallActualArgumentListAST (const GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mLexicalActualInputArgument" ":") ;
  mObject.mProperty_mLexicalActualInputArgument.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalFunctionCallActualArgumentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalFunctionCallActualArgumentListAST * operand = (cCollectionElement_lexicalFunctionCallActualArgumentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
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

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalFunctionCallActualArgumentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::constructor_listWithValue (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0
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
  GALGAS_lexicalFunctionCallActualArgumentListAST result = GALGAS_lexicalFunctionCallActualArgumentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionCallActualArgumentListAST result = GALGAS_lexicalFunctionCallActualArgumentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionCallActualArgumentListAST result = GALGAS_lexicalFunctionCallActualArgumentListAST::constructor_emptyList (THERE) ;
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
                                                                                                            const typeEnumerationOrder inOrder) :
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST ("lexicalFunctionCallActualArgumentListAST",
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

typeComparisonResult GALGAS_lexicalAttributeInputArgumentAST_2D_weak::objectCompare (const GALGAS_lexicalAttributeInputArgumentAST_2D_weak & inOperand) const {
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

GALGAS_lexicalAttributeInputArgumentAST_2D_weak GALGAS_lexicalAttributeInputArgumentAST_2D_weak::constructor_nil (LOCATION_ARGS) {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST_2D_weak ("lexicalAttributeInputArgumentAST-weak",
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

typeComparisonResult GALGAS_lexicalCharacterInputArgumentAST_2D_weak::objectCompare (const GALGAS_lexicalCharacterInputArgumentAST_2D_weak & inOperand) const {
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

GALGAS_lexicalCharacterInputArgumentAST_2D_weak GALGAS_lexicalCharacterInputArgumentAST_2D_weak::constructor_nil (LOCATION_ARGS) {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST_2D_weak ("lexicalCharacterInputArgumentAST-weak",
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

typeComparisonResult GALGAS_lexicalUnsignedInputArgumentAST_2D_weak::objectCompare (const GALGAS_lexicalUnsignedInputArgumentAST_2D_weak & inOperand) const {
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

GALGAS_lexicalUnsignedInputArgumentAST_2D_weak GALGAS_lexicalUnsignedInputArgumentAST_2D_weak::constructor_nil (LOCATION_ARGS) {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST_2D_weak ("lexicalUnsignedInputArgumentAST-weak",
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalCurrentCharacterInputArgumentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST::printNonNullClassInstanceProperties () ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalCurrentCharacterInputArgumentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalCurrentCharacterInputArgumentAST * p = (const cPtr_lexicalCurrentCharacterInputArgumentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalCurrentCharacterInputArgumentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalCurrentCharacterInputArgumentAST::objectCompare (const GALGAS_lexicalCurrentCharacterInputArgumentAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
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

GALGAS_lexicalCurrentCharacterInputArgumentAST::GALGAS_lexicalCurrentCharacterInputArgumentAST (void) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCurrentCharacterInputArgumentAST::GALGAS_lexicalCurrentCharacterInputArgumentAST (const cPtr_lexicalCurrentCharacterInputArgumentAST * inSourcePtr) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCurrentCharacterInputArgumentAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCurrentCharacterInputArgumentAST GALGAS_lexicalCurrentCharacterInputArgumentAST::constructor_new (const GALGAS_location & inAttribute_mLocation
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCurrentCharacterInputArgumentAST result ;
  if (inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalCurrentCharacterInputArgumentAST (inAttribute_mLocation COMMA_THERE)) ;
  }
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
mProperty_mLocation (in_mLocation) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalCurrentCharacterInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST ;
}

void cPtr_lexicalCurrentCharacterInputArgumentAST::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.addString ("[@lexicalCurrentCharacterInputArgumentAST:") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST ("lexicalCurrentCharacterInputArgumentAST",
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

typeComparisonResult GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak::objectCompare (const GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak & inOperand) const {
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

GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak::constructor_nil (LOCATION_ARGS) {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak ("lexicalCurrentCharacterInputArgumentAST-weak",
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

typeComparisonResult GALGAS_lexicalFunctionInputArgumentAST_2D_weak::objectCompare (const GALGAS_lexicalFunctionInputArgumentAST_2D_weak & inOperand) const {
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

GALGAS_lexicalFunctionInputArgumentAST_2D_weak GALGAS_lexicalFunctionInputArgumentAST_2D_weak::constructor_nil (LOCATION_ARGS) {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST_2D_weak ("lexicalFunctionInputArgumentAST-weak",
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
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalArgumentModeAST GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalArgumentModeAST result ;
  result.mEnum = kEnum_lexicalInputMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalArgumentModeAST GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalArgumentModeAST result ;
  result.mEnum = kEnum_lexicalInputOutputMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_lexicalArgumentModeAST::optional_lexicalInputMode () const {
  const bool ok = mEnum == kEnum_lexicalInputMode ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_lexicalArgumentModeAST::optional_lexicalInputOutputMode () const {
  const bool ok = mEnum == kEnum_lexicalInputOutputMode ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_lexicalArgumentModeAST [3] = {
  "(not built)",
  "lexicalInputMode",
  "lexicalInputOutputMode"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalArgumentModeAST::getter_isLexicalInputMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalInputMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalArgumentModeAST::getter_isLexicalInputOutputMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalInputOutputMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalArgumentModeAST::description (String & ioString,
                                                 const int32_t /* inIndentation */) const {
  ioString.addString ("<enum @lexicalArgumentModeAST: ") ;
  ioString.addString (gEnumNameArrayFor_lexicalArgumentModeAST [mEnum]) ;
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalArgumentModeAST::objectCompare (const GALGAS_lexicalArgumentModeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalArgumentModeAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalArgumentModeAST ("lexicalArgumentModeAST",
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
  case GALGAS_lexicalArgumentModeAST::kNotBuilt:
    break ;
  case GALGAS_lexicalArgumentModeAST::kEnum_lexicalInputMode:
    {
      result_result = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_lexicalArgumentModeAST::kEnum_lexicalInputOutputMode:
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
  case GALGAS_lexicalArgumentModeAST::kNotBuilt:
    break ;
  case GALGAS_lexicalArgumentModeAST::kEnum_lexicalInputMode:
    {
      result_result = GALGAS_string ("const ") ;
    }
    break ;
  case GALGAS_lexicalArgumentModeAST::kEnum_lexicalInputOutputMode:
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
  case GALGAS_lexicalArgumentModeAST::kNotBuilt:
    break ;
  case GALGAS_lexicalArgumentModeAST::kEnum_lexicalInputMode:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalArgumentModeAST::kEnum_lexicalInputOutputMode:
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
  case GALGAS_lexicalArgumentModeAST::kNotBuilt:
    break ;
  case GALGAS_lexicalArgumentModeAST::kEnum_lexicalInputMode:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalArgumentModeAST::kEnum_lexicalInputOutputMode:
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
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = kEnum_lexicalType_5F_string ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = kEnum_lexicalType_5F_char ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = kEnum_lexicalType_5F_uint ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = kEnum_lexicalType_5F_uint_36__34_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = kEnum_lexicalType_5F_sint ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = kEnum_lexicalType_5F_sint_36__34_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_double (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = kEnum_lexicalType_5F_double ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = kEnum_lexicalType_5F_bigint ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_lexicalTypeEnum::optional_lexicalType_5F_string () const {
  const bool ok = mEnum == kEnum_lexicalType_5F_string ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_lexicalTypeEnum::optional_lexicalType_5F_char () const {
  const bool ok = mEnum == kEnum_lexicalType_5F_char ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_lexicalTypeEnum::optional_lexicalType_5F_uint () const {
  const bool ok = mEnum == kEnum_lexicalType_5F_uint ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_lexicalTypeEnum::optional_lexicalType_5F_uint_36__34_ () const {
  const bool ok = mEnum == kEnum_lexicalType_5F_uint_36__34_ ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_lexicalTypeEnum::optional_lexicalType_5F_sint () const {
  const bool ok = mEnum == kEnum_lexicalType_5F_sint ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_lexicalTypeEnum::optional_lexicalType_5F_sint_36__34_ () const {
  const bool ok = mEnum == kEnum_lexicalType_5F_sint_36__34_ ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_lexicalTypeEnum::optional_lexicalType_5F_double () const {
  const bool ok = mEnum == kEnum_lexicalType_5F_double ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_lexicalTypeEnum::optional_lexicalType_5F_bigint () const {
  const bool ok = mEnum == kEnum_lexicalType_5F_bigint ;
  return ok ;
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

GALGAS_bool GALGAS_lexicalTypeEnum::getter_isLexicalType_5F_string (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_string == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalTypeEnum::getter_isLexicalType_5F_char (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_char == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalTypeEnum::getter_isLexicalType_5F_uint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_uint == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalTypeEnum::getter_isLexicalType_5F_uint_36__34_ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_uint_36__34_ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalTypeEnum::getter_isLexicalType_5F_sint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_sint == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalTypeEnum::getter_isLexicalType_5F_sint_36__34_ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_sint_36__34_ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalTypeEnum::getter_isLexicalType_5F_double (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_double == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalTypeEnum::getter_isLexicalType_5F_bigint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_bigint == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalTypeEnum::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.addString ("<enum @lexicalTypeEnum: ") ;
  ioString.addString (gEnumNameArrayFor_lexicalTypeEnum [mEnum]) ;
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalTypeEnum::objectCompare (const GALGAS_lexicalTypeEnum & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalTypeEnum generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalTypeEnum ("lexicalTypeEnum",
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

//--- Constructors
  public: cCollectionElement_lexicalSentValueList (const GALGAS_lstring & in_mLexicalFormalSelector,
                                                   const GALGAS_string & in_mLexicalAttributeName,
                                                   const GALGAS_lexicalTypeEnum & in_mLexicalType
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalSentValueList (const GALGAS_lexicalSentValueList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mLexicalFormalSelector" ":") ;
  mObject.mProperty_mLexicalFormalSelector.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mLexicalAttributeName" ":") ;
  mObject.mProperty_mLexicalAttributeName.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mLexicalType" ":") ;
  mObject.mProperty_mLexicalType.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalSentValueList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalSentValueList * operand = (cCollectionElement_lexicalSentValueList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalSentValueList) ;
  return mObject.objectCompare (operand->mObject) ;
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

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalSentValueList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
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
  GALGAS_lexicalSentValueList result = GALGAS_lexicalSentValueList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSentValueList result = GALGAS_lexicalSentValueList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSentValueList result = GALGAS_lexicalSentValueList::constructor_emptyList (THERE) ;
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
                                                                    const typeEnumerationOrder inOrder) :
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSentValueList ("lexicalSentValueList",
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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mSentAttributeList" ":") ;
  mProperty_mSentAttributeList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_terminalMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_terminalMap * operand = (cMapElement_terminalMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mSentAttributeList.objectCompare (operand->mProperty_mSentAttributeList) ;
  }
  return result ;
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

GALGAS_terminalMap GALGAS_terminalMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_terminalMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalMap GALGAS_terminalMap::constructor_mapWithMapToOverride (const GALGAS_terminalMap & inMapToOverride
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
  cEnumerator_terminalMap enumerator (inOperand, kENUMERATION_UP) ;
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
                                                  const typeEnumerationOrder inOrder) :
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

bool GALGAS_terminalMap::optional_searchKey (const GALGAS_string & inKey,
                                             GALGAS_lexicalSentValueList & outArgument0) const {
  const cMapElement_terminalMap * p = (const cMapElement_terminalMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_terminalMap) ;
    outArgument0 = p->mProperty_mSentAttributeList ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @terminalMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalMap ("terminalMap",
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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mLexicalType" ":") ;
  mProperty_mLexicalType.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_lexicalTypeMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalTypeMap * operand = (cMapElement_lexicalTypeMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mLexicalType.objectCompare (operand->mProperty_mLexicalType) ;
  }
  return result ;
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

GALGAS_lexicalTypeMap GALGAS_lexicalTypeMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalTypeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeMap GALGAS_lexicalTypeMap::constructor_mapWithMapToOverride (const GALGAS_lexicalTypeMap & inMapToOverride
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
  cEnumerator_lexicalTypeMap enumerator (inOperand, kENUMERATION_UP) ;
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
                                                        const typeEnumerationOrder inOrder) :
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

bool GALGAS_lexicalTypeMap::optional_searchKey (const GALGAS_string & inKey,
                                                GALGAS_lexicalTypeEnum & outArgument0) const {
  const cMapElement_lexicalTypeMap * p = (const cMapElement_lexicalTypeMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_lexicalTypeMap) ;
    outArgument0 = p->mProperty_mLexicalType ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalTypeMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalTypeMap ("lexicalTypeMap",
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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mLexicalType" ":") ;
  mProperty_mLexicalType.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_lexicalAttributeMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalAttributeMap * operand = (cMapElement_lexicalAttributeMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mLexicalType.objectCompare (operand->mProperty_mLexicalType) ;
  }
  return result ;
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

GALGAS_lexicalAttributeMap GALGAS_lexicalAttributeMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalAttributeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeMap GALGAS_lexicalAttributeMap::constructor_mapWithMapToOverride (const GALGAS_lexicalAttributeMap & inMapToOverride
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
  cEnumerator_lexicalAttributeMap enumerator (inOperand, kENUMERATION_UP) ;
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
                                                                  const typeEnumerationOrder inOrder) :
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

bool GALGAS_lexicalAttributeMap::optional_searchKey (const GALGAS_string & inKey,
                                                     GALGAS_lexicalTypeEnum & outArgument0) const {
  const cMapElement_lexicalAttributeMap * p = (const cMapElement_lexicalAttributeMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_lexicalAttributeMap) ;
    outArgument0 = p->mProperty_mLexicalType ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalAttributeMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalAttributeMap ("lexicalAttributeMap",
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

//--- Constructors
  public: cCollectionElement_terminalList (const GALGAS_lstring & in_mTerminalName,
                                           const GALGAS_lexicalSentValueList & in_mSentAttributeList,
                                           const GALGAS_string & in_mSyntaxErrorMessage,
                                           const GALGAS_bool & in_isEndOfTemplateMark,
                                           const GALGAS_bool & in_atomicSelection,
                                           const GALGAS_uint & in_mStyleIndex
                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_terminalList (const GALGAS_terminalList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mTerminalName" ":") ;
  mObject.mProperty_mTerminalName.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mSentAttributeList" ":") ;
  mObject.mProperty_mSentAttributeList.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mSyntaxErrorMessage" ":") ;
  mObject.mProperty_mSyntaxErrorMessage.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("isEndOfTemplateMark" ":") ;
  mObject.mProperty_isEndOfTemplateMark.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("atomicSelection" ":") ;
  mObject.mProperty_atomicSelection.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mStyleIndex" ":") ;
  mObject.mProperty_mStyleIndex.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_terminalList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_terminalList * operand = (cCollectionElement_terminalList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_terminalList) ;
  return mObject.objectCompare (operand->mObject) ;
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

GALGAS_terminalList GALGAS_terminalList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_terminalList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalList GALGAS_terminalList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
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
  GALGAS_terminalList result = GALGAS_terminalList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalList GALGAS_terminalList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_terminalList result = GALGAS_terminalList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalList GALGAS_terminalList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_terminalList result = GALGAS_terminalList::constructor_emptyList (THERE) ;
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
                                                    const typeEnumerationOrder inOrder) :
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalList ("terminalList",
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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mTerminal" ":") ;
  mProperty_mTerminal.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("atomicSelection" ":") ;
  mProperty_atomicSelection.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("isEndOfTemplateMark" ":") ;
  mProperty_isEndOfTemplateMark.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_lexicalExplicitTokenListMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalExplicitTokenListMap * operand = (cMapElement_lexicalExplicitTokenListMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mTerminal.objectCompare (operand->mProperty_mTerminal) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_atomicSelection.objectCompare (operand->mProperty_atomicSelection) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_isEndOfTemplateMark.objectCompare (operand->mProperty_isEndOfTemplateMark) ;
  }
  return result ;
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

GALGAS_lexicalExplicitTokenListMap GALGAS_lexicalExplicitTokenListMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMap GALGAS_lexicalExplicitTokenListMap::constructor_mapWithMapToOverride (const GALGAS_lexicalExplicitTokenListMap & inMapToOverride
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
  cEnumerator_lexicalExplicitTokenListMap enumerator (inOperand, kENUMERATION_UP) ;
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
                                                                                  const typeEnumerationOrder inOrder) :
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

bool GALGAS_lexicalExplicitTokenListMap::optional_searchKey (const GALGAS_string & inKey,
                                                             GALGAS_lstring & outArgument0,
                                                             GALGAS_bool & outArgument1,
                                                             GALGAS_bool & outArgument2) const {
  const cMapElement_lexicalExplicitTokenListMap * p = (const cMapElement_lexicalExplicitTokenListMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
    outArgument0 = p->mProperty_mTerminal ;
    outArgument1 = p->mProperty_atomicSelection ;
    outArgument2 = p->mProperty_isEndOfTemplateMark ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalExplicitTokenListMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap ("lexicalExplicitTokenListMap",
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

//--- Constructor
  public: cSortedListElement_tokenSortedlist (const GALGAS_uint & in_mLength,
                                              const GALGAS_string & in_mName,
                                              const GALGAS_string & in_mTerminalName
                                              COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public: virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mLength" ":") ;
  mObject.mProperty_mLength.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mName" ":") ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mTerminalName" ":") ;
  mObject.mProperty_mTerminalName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cSortedListElement_tokenSortedlist::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_tokenSortedlist * operand = (cSortedListElement_tokenSortedlist *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_tokenSortedlist) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_tokenSortedlist::GALGAS_tokenSortedlist (void) :
AC_GALGAS_sortedlist () {
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cSortedListElement_tokenSortedlist::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_tokenSortedlist * operand = (const cSortedListElement_tokenSortedlist *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_tokenSortedlist) ;
  if (result == kOperandEqual) {
    result = mObject.mProperty_mLength.objectCompare (operand->mObject.mProperty_mLength) ;
  }
  if (result == kOperandEqual) {
    result = mObject.mProperty_mName.objectCompare (operand->mObject.mProperty_mName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_tokenSortedlist GALGAS_tokenSortedlist::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_tokenSortedlist result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_tokenSortedlist GALGAS_tokenSortedlist::constructor_sortedListWithValue (const GALGAS_uint & inOperand0,
                                                                                const GALGAS_string & inOperand1,
                                                                                const GALGAS_string & inOperand2
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_tokenSortedlist result = constructor_emptySortedList (THERE) ;
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
                                                          const typeEnumerationOrder inOrder) :
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tokenSortedlist ("tokenSortedlist",
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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mExplicitTokenListMap" ":") ;
  mProperty_mExplicitTokenListMap.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mTokenSortedList" ":") ;
  mProperty_mTokenSortedList.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mShouldBeGenerated" ":") ;
  mProperty_mShouldBeGenerated.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_lexicalExplicitTokenListMapMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalExplicitTokenListMapMap * operand = (cMapElement_lexicalExplicitTokenListMapMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mExplicitTokenListMap.objectCompare (operand->mProperty_mExplicitTokenListMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTokenSortedList.objectCompare (operand->mProperty_mTokenSortedList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mShouldBeGenerated.objectCompare (operand->mProperty_mShouldBeGenerated) ;
  }
  return result ;
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

GALGAS_lexicalExplicitTokenListMapMap GALGAS_lexicalExplicitTokenListMapMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMapMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMapMap GALGAS_lexicalExplicitTokenListMapMap::constructor_mapWithMapToOverride (const GALGAS_lexicalExplicitTokenListMapMap & inMapToOverride
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
  cEnumerator_lexicalExplicitTokenListMapMap enumerator (inOperand, kENUMERATION_UP) ;
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
                                                                                        const typeEnumerationOrder inOrder) :
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

bool GALGAS_lexicalExplicitTokenListMapMap::optional_searchKey (const GALGAS_string & inKey,
                                                                GALGAS_lexicalExplicitTokenListMap & outArgument0,
                                                                GALGAS_tokenSortedlist & outArgument1,
                                                                GALGAS_bool & outArgument2) const {
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
    outArgument0 = p->mProperty_mExplicitTokenListMap ;
    outArgument1 = p->mProperty_mTokenSortedList ;
    outArgument2 = p->mProperty_mShouldBeGenerated ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalExplicitTokenListMapMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap ("lexicalExplicitTokenListMapMap",
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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mLexicalMessage" ":") ;
  mProperty_mLexicalMessage.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mMessageIsUsed" ":") ;
  mProperty_mMessageIsUsed.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_lexicalMessageMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalMessageMap * operand = (cMapElement_lexicalMessageMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mLexicalMessage.objectCompare (operand->mProperty_mLexicalMessage) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMessageIsUsed.objectCompare (operand->mProperty_mMessageIsUsed) ;
  }
  return result ;
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

GALGAS_lexicalMessageMap GALGAS_lexicalMessageMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalMessageMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageMap GALGAS_lexicalMessageMap::constructor_mapWithMapToOverride (const GALGAS_lexicalMessageMap & inMapToOverride
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
  cEnumerator_lexicalMessageMap enumerator (inOperand, kENUMERATION_UP) ;
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
                                                              const typeEnumerationOrder inOrder) :
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

bool GALGAS_lexicalMessageMap::optional_searchKey (const GALGAS_string & inKey,
                                                   GALGAS_lstring & outArgument0,
                                                   GALGAS_bool & outArgument1) const {
  const cMapElement_lexicalMessageMap * p = (const cMapElement_lexicalMessageMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
    outArgument0 = p->mProperty_mLexicalMessage ;
    outArgument1 = p->mProperty_mMessageIsUsed ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalMessageMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalMessageMap ("lexicalMessageMap",
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

//--- Constructors
  public: cCollectionElement_lexicalRoutineFormalArgumentList (const GALGAS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                               const GALGAS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                               const GALGAS_string & in_mArgumentNameForComment
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalRoutineFormalArgumentList (const GALGAS_lexicalRoutineFormalArgumentList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mLexicalFormalArgumentMode" ":") ;
  mObject.mProperty_mLexicalFormalArgumentMode.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mLexicalFormalArgumentType" ":") ;
  mObject.mProperty_mLexicalFormalArgumentType.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mArgumentNameForComment" ":") ;
  mObject.mProperty_mArgumentNameForComment.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalRoutineFormalArgumentList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalRoutineFormalArgumentList * operand = (cCollectionElement_lexicalRoutineFormalArgumentList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalRoutineFormalArgumentList) ;
  return mObject.objectCompare (operand->mObject) ;
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

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalRoutineFormalArgumentList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::constructor_listWithValue (const GALGAS_lexicalArgumentModeAST & inOperand0,
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
  GALGAS_lexicalRoutineFormalArgumentList result = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineFormalArgumentList result = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineFormalArgumentList result = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (THERE) ;
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
                                                                                            const typeEnumerationOrder inOrder) :
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList ("lexicalRoutineFormalArgumentList",
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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mLexicalRoutineFormalArgumentList" ":") ;
  mProperty_mLexicalRoutineFormalArgumentList.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mErrorMessageList" ":") ;
  mProperty_mErrorMessageList.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mIsExtern" ":") ;
  mProperty_mIsExtern.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_lexicalRoutineMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalRoutineMap * operand = (cMapElement_lexicalRoutineMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mLexicalRoutineFormalArgumentList.objectCompare (operand->mProperty_mLexicalRoutineFormalArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mErrorMessageList.objectCompare (operand->mProperty_mErrorMessageList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsExtern.objectCompare (operand->mProperty_mIsExtern) ;
  }
  return result ;
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

GALGAS_lexicalRoutineMap GALGAS_lexicalRoutineMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalRoutineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineMap GALGAS_lexicalRoutineMap::constructor_mapWithMapToOverride (const GALGAS_lexicalRoutineMap & inMapToOverride
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
  cEnumerator_lexicalRoutineMap enumerator (inOperand, kENUMERATION_UP) ;
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
                                                              const typeEnumerationOrder inOrder) :
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

bool GALGAS_lexicalRoutineMap::optional_searchKey (const GALGAS_string & inKey,
                                                   GALGAS_lexicalRoutineFormalArgumentList & outArgument0,
                                                   GALGAS_stringlist & outArgument1,
                                                   GALGAS_bool & outArgument2) const {
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    outArgument0 = p->mProperty_mLexicalRoutineFormalArgumentList ;
    outArgument1 = p->mProperty_mErrorMessageList ;
    outArgument2 = p->mProperty_mIsExtern ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalRoutineMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRoutineMap ("lexicalRoutineMap",
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

//--- Constructors
  public: cCollectionElement_lexicalFunctionFormalArgumentList (const GALGAS_lexicalTypeEnum & in_mLexicalType,
                                                                const GALGAS_string & in_mArgumentNameForComment
                                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalFunctionFormalArgumentList (const GALGAS_lexicalFunctionFormalArgumentList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mLexicalType" ":") ;
  mObject.mProperty_mLexicalType.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mArgumentNameForComment" ":") ;
  mObject.mProperty_mArgumentNameForComment.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalFunctionFormalArgumentList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalFunctionFormalArgumentList * operand = (cCollectionElement_lexicalFunctionFormalArgumentList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalFunctionFormalArgumentList) ;
  return mObject.objectCompare (operand->mObject) ;
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

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalFunctionFormalArgumentList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::constructor_listWithValue (const GALGAS_lexicalTypeEnum & inOperand0,
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
  GALGAS_lexicalFunctionFormalArgumentList result = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionFormalArgumentList result = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionFormalArgumentList result = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (THERE) ;
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
                                                                                              const typeEnumerationOrder inOrder) :
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList ("lexicalFunctionFormalArgumentList",
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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mLexicalTypeList" ":") ;
  mProperty_mLexicalTypeList.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mReturnedLexicalType" ":") ;
  mProperty_mReturnedLexicalType.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mReplacementFunctionName" ":") ;
  mProperty_mReplacementFunctionName.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mIsExtern" ":") ;
  mProperty_mIsExtern.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_lexicalFunctionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalFunctionMap * operand = (cMapElement_lexicalFunctionMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mLexicalTypeList.objectCompare (operand->mProperty_mLexicalTypeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReturnedLexicalType.objectCompare (operand->mProperty_mReturnedLexicalType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReplacementFunctionName.objectCompare (operand->mProperty_mReplacementFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsExtern.objectCompare (operand->mProperty_mIsExtern) ;
  }
  return result ;
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

GALGAS_lexicalFunctionMap GALGAS_lexicalFunctionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalFunctionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionMap GALGAS_lexicalFunctionMap::constructor_mapWithMapToOverride (const GALGAS_lexicalFunctionMap & inMapToOverride
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
  cEnumerator_lexicalFunctionMap enumerator (inOperand, kENUMERATION_UP) ;
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
                                                                const typeEnumerationOrder inOrder) :
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

bool GALGAS_lexicalFunctionMap::optional_searchKey (const GALGAS_string & inKey,
                                                    GALGAS_lexicalFunctionFormalArgumentList & outArgument0,
                                                    GALGAS_lexicalTypeEnum & outArgument1,
                                                    GALGAS_string & outArgument2,
                                                    GALGAS_bool & outArgument3) const {
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    outArgument0 = p->mProperty_mLexicalTypeList ;
    outArgument1 = p->mProperty_mReturnedLexicalType ;
    outArgument2 = p->mProperty_mReplacementFunctionName ;
    outArgument3 = p->mProperty_mIsExtern ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalFunctionMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionMap ("lexicalFunctionMap",
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

//--- Constructors
  public: cCollectionElement_templateDelimitorList (const GALGAS_lstring & in_mStartString,
                                                    const GALGAS_lstring & in_mEndString,
                                                    const GALGAS_bool & in_mPreservesStartDelimiter
                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_templateDelimitorList (const GALGAS_templateDelimitorList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mStartString" ":") ;
  mObject.mProperty_mStartString.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mEndString" ":") ;
  mObject.mProperty_mEndString.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mPreservesStartDelimiter" ":") ;
  mObject.mProperty_mPreservesStartDelimiter.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_templateDelimitorList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_templateDelimitorList * operand = (cCollectionElement_templateDelimitorList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_templateDelimitorList) ;
  return mObject.objectCompare (operand->mObject) ;
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

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateDelimitorList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
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
  GALGAS_templateDelimitorList result = GALGAS_templateDelimitorList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_templateDelimitorList result = GALGAS_templateDelimitorList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_templateDelimitorList result = GALGAS_templateDelimitorList::constructor_emptyList (THERE) ;
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
                                                                      const typeEnumerationOrder inOrder) :
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateDelimitorList ("templateDelimitorList",
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
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mComment" ":") ;
  mProperty_mComment.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mStyleIndex" ":") ;
  mProperty_mStyleIndex.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_styleMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_styleMap * operand = (cMapElement_styleMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mComment.objectCompare (operand->mProperty_mComment) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStyleIndex.objectCompare (operand->mProperty_mStyleIndex) ;
  }
  return result ;
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

GALGAS_styleMap GALGAS_styleMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_styleMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_styleMap GALGAS_styleMap::constructor_mapWithMapToOverride (const GALGAS_styleMap & inMapToOverride
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
  cEnumerator_styleMap enumerator (inOperand, kENUMERATION_UP) ;
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
                                            const typeEnumerationOrder inOrder) :
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

bool GALGAS_styleMap::optional_searchKey (const GALGAS_string & inKey,
                                          GALGAS_lstring & outArgument0,
                                          GALGAS_uint & outArgument1) const {
  const cMapElement_styleMap * p = (const cMapElement_styleMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_styleMap) ;
    outArgument0 = p->mProperty_mComment ;
    outArgument1 = p->mProperty_mStyleIndex ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @styleMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_styleMap ("styleMap",
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

typeComparisonResult cMapElement_lexicalTagMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalTagMap * operand = (cMapElement_lexicalTagMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
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

GALGAS_lexicalTagMap GALGAS_lexicalTagMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalTagMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTagMap GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (const GALGAS_lexicalTagMap & inMapToOverride
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
  cEnumerator_lexicalTagMap enumerator (inOperand, kENUMERATION_UP) ;
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
                                                      const typeEnumerationOrder inOrder) :
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

bool GALGAS_lexicalTagMap::optional_searchKey (const GALGAS_string & inKey) const {
  const cMapElement_lexicalTagMap * p = (const cMapElement_lexicalTagMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_lexicalTagMap) ;
  }else{
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalTagMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalTagMap ("lexicalTagMap",
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

