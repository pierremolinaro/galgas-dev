#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@syntaxRuleListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_syntaxRuleListAST : public cCollectionElement {
  public: GGS_syntaxRuleListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_syntaxRuleListAST (const GGS_lstring & in_mNonterminalName,
                                                const GGS_syntaxRuleLabelListAST & in_mLabelList
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_syntaxRuleListAST (const GGS_syntaxRuleListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_syntaxRuleListAST::cCollectionElement_syntaxRuleListAST (const GGS_lstring & in_mNonterminalName,
                                                                            const GGS_syntaxRuleLabelListAST & in_mLabelList
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mNonterminalName, in_mLabelList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_syntaxRuleListAST::cCollectionElement_syntaxRuleListAST (const GGS_syntaxRuleListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mNonterminalName, inElement.mProperty_mLabelList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_syntaxRuleListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_syntaxRuleListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_syntaxRuleListAST (mObject.mProperty_mNonterminalName, mObject.mProperty_mLabelList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_syntaxRuleListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNonterminalName" ":") ;
  mObject.mProperty_mNonterminalName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLabelList" ":") ;
  mObject.mProperty_mLabelList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST::GGS_syntaxRuleListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST::GGS_syntaxRuleListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST GGS_syntaxRuleListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_syntaxRuleListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST GGS_syntaxRuleListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_syntaxRuleListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleListAST::enterElement (const GGS_syntaxRuleListAST_2E_element & inValue,
                                          Compiler * /* inCompiler */
                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_syntaxRuleListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST GGS_syntaxRuleListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                       const GGS_syntaxRuleLabelListAST & inOperand1
                                                                       COMMA_LOCATION_ARGS) {
  GGS_syntaxRuleListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_syntaxRuleListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_syntaxRuleListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GGS_lstring & in_mNonterminalName,
                                                       const GGS_syntaxRuleLabelListAST & in_mLabelList
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxRuleListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_syntaxRuleListAST (in_mNonterminalName,
                                                       in_mLabelList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleListAST::addAssign_operation (const GGS_lstring & inOperand0,
                                                 const GGS_syntaxRuleLabelListAST & inOperand1
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_syntaxRuleListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleListAST::setter_append (const GGS_lstring inOperand0,
                                           const GGS_syntaxRuleLabelListAST inOperand1,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_syntaxRuleListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                  const GGS_syntaxRuleLabelListAST inOperand1,
                                                  const GGS_uint inInsertionIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_syntaxRuleListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                  GGS_syntaxRuleLabelListAST & outOperand1,
                                                  const GGS_uint inRemoveIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_syntaxRuleListAST * p = (cCollectionElement_syntaxRuleListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
      outOperand0 = p->mObject.mProperty_mNonterminalName ;
      outOperand1 = p->mObject.mProperty_mLabelList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleListAST::setter_popFirst (GGS_lstring & outOperand0,
                                             GGS_syntaxRuleLabelListAST & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxRuleListAST * p = (cCollectionElement_syntaxRuleListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mLabelList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleListAST::setter_popLast (GGS_lstring & outOperand0,
                                            GGS_syntaxRuleLabelListAST & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxRuleListAST * p = (cCollectionElement_syntaxRuleListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mLabelList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleListAST::method_first (GGS_lstring & outOperand0,
                                          GGS_syntaxRuleLabelListAST & outOperand1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxRuleListAST * p = (cCollectionElement_syntaxRuleListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mLabelList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleListAST::method_last (GGS_lstring & outOperand0,
                                         GGS_syntaxRuleLabelListAST & outOperand1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxRuleListAST * p = (cCollectionElement_syntaxRuleListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mLabelList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST GGS_syntaxRuleListAST::add_operation (const GGS_syntaxRuleListAST & inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_syntaxRuleListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST GGS_syntaxRuleListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_syntaxRuleListAST result = GGS_syntaxRuleListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST GGS_syntaxRuleListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_syntaxRuleListAST result = GGS_syntaxRuleListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST GGS_syntaxRuleListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_syntaxRuleListAST result = GGS_syntaxRuleListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleListAST::plusAssign_operation (const GGS_syntaxRuleListAST inOperand,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleListAST::setter_setMNonterminalNameAtIndex (GGS_lstring inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxRuleListAST * p = (cCollectionElement_syntaxRuleListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mNonterminalName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_syntaxRuleListAST::getter_mNonterminalNameAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxRuleListAST * p = (cCollectionElement_syntaxRuleListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
    result = p->mObject.mProperty_mNonterminalName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleListAST::setter_setMLabelListAtIndex (GGS_syntaxRuleLabelListAST inOperand,
                                                         GGS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxRuleListAST * p = (cCollectionElement_syntaxRuleListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLabelList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST GGS_syntaxRuleListAST::getter_mLabelListAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxRuleListAST * p = (cCollectionElement_syntaxRuleListAST *) attributes.ptr () ;
  GGS_syntaxRuleLabelListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
    result = p->mObject.mProperty_mLabelList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Enumerator for @syntaxRuleListAST
//--------------------------------------------------------------------------------------------------

cEnumerator_syntaxRuleListAST::cEnumerator_syntaxRuleListAST (const GGS_syntaxRuleListAST & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST_2E_element cEnumerator_syntaxRuleListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_syntaxRuleListAST * p = (const cCollectionElement_syntaxRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_syntaxRuleListAST::current_mNonterminalName (LOCATION_ARGS) const {
  const cCollectionElement_syntaxRuleListAST * p = (const cCollectionElement_syntaxRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
  return p->mObject.mProperty_mNonterminalName ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST cEnumerator_syntaxRuleListAST::current_mLabelList (LOCATION_ARGS) const {
  const cCollectionElement_syntaxRuleListAST * p = (const cCollectionElement_syntaxRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
  return p->mObject.mProperty_mLabelList ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @syntaxRuleListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_syntaxRuleListAST::DownEnumerator_syntaxRuleListAST (const GGS_syntaxRuleListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST_2E_element DownEnumerator_syntaxRuleListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_syntaxRuleListAST * p = (const cCollectionElement_syntaxRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_syntaxRuleListAST::current_mNonterminalName (LOCATION_ARGS) const {
  const cCollectionElement_syntaxRuleListAST * p = (const cCollectionElement_syntaxRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
  return p->mObject.mProperty_mNonterminalName ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST DownEnumerator_syntaxRuleListAST::current_mLabelList (LOCATION_ARGS) const {
  const cCollectionElement_syntaxRuleListAST * p = (const cCollectionElement_syntaxRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
  return p->mObject.mProperty_mLabelList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @syntaxRuleListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_syntaxRuleListAST::UpEnumerator_syntaxRuleListAST (const GGS_syntaxRuleListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST_2E_element UpEnumerator_syntaxRuleListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_syntaxRuleListAST * p = (const cCollectionElement_syntaxRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_syntaxRuleListAST::current_mNonterminalName (LOCATION_ARGS) const {
  const cCollectionElement_syntaxRuleListAST * p = (const cCollectionElement_syntaxRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
  return p->mObject.mProperty_mNonterminalName ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST UpEnumerator_syntaxRuleListAST::current_mLabelList (LOCATION_ARGS) const {
  const cCollectionElement_syntaxRuleListAST * p = (const cCollectionElement_syntaxRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
  return p->mObject.mProperty_mLabelList ;
}




//--------------------------------------------------------------------------------------------------
//     @syntaxRuleListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxRuleListAST ("syntaxRuleListAST",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syntaxRuleListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxRuleListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxRuleListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxRuleListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST GGS_syntaxRuleListAST::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_syntaxRuleListAST result ;
  const GGS_syntaxRuleListAST * p = (const GGS_syntaxRuleListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxRuleListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxRuleListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@listOfSyntaxInstructionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_listOfSyntaxInstructionList : public cCollectionElement {
  public: GGS_listOfSyntaxInstructionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_listOfSyntaxInstructionList (const GGS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                          const GGS_location & in_mEndOf_5F_instructions
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_listOfSyntaxInstructionList (const GGS_listOfSyntaxInstructionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_listOfSyntaxInstructionList::cCollectionElement_listOfSyntaxInstructionList (const GGS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                                                                const GGS_location & in_mEndOf_5F_instructions
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSyntaxInstructionList, in_mEndOf_5F_instructions) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_listOfSyntaxInstructionList::cCollectionElement_listOfSyntaxInstructionList (const GGS_listOfSyntaxInstructionList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSyntaxInstructionList, inElement.mProperty_mEndOf_5F_instructions) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_listOfSyntaxInstructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_listOfSyntaxInstructionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_listOfSyntaxInstructionList (mObject.mProperty_mSyntaxInstructionList, mObject.mProperty_mEndOf_5F_instructions COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_listOfSyntaxInstructionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSyntaxInstructionList" ":") ;
  mObject.mProperty_mSyntaxInstructionList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOf_instructions" ":") ;
  mObject.mProperty_mEndOf_5F_instructions.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList::GGS_listOfSyntaxInstructionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList::GGS_listOfSyntaxInstructionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList GGS_listOfSyntaxInstructionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_listOfSyntaxInstructionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList GGS_listOfSyntaxInstructionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_listOfSyntaxInstructionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::enterElement (const GGS_listOfSyntaxInstructionList_2E_element & inValue,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_listOfSyntaxInstructionList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList GGS_listOfSyntaxInstructionList::class_func_listWithValue (const GGS_syntaxInstructionList & inOperand0,
                                                                                           const GGS_location & inOperand1
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_listOfSyntaxInstructionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_listOfSyntaxInstructionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_listOfSyntaxInstructionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GGS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                                 const GGS_location & in_mEndOf_5F_instructions
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_listOfSyntaxInstructionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_listOfSyntaxInstructionList (in_mSyntaxInstructionList,
                                                                 in_mEndOf_5F_instructions COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::addAssign_operation (const GGS_syntaxInstructionList & inOperand0,
                                                           const GGS_location & inOperand1
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_listOfSyntaxInstructionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::setter_append (const GGS_syntaxInstructionList inOperand0,
                                                     const GGS_location inOperand1,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_listOfSyntaxInstructionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::setter_insertAtIndex (const GGS_syntaxInstructionList inOperand0,
                                                            const GGS_location inOperand1,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_listOfSyntaxInstructionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::setter_removeAtIndex (GGS_syntaxInstructionList & outOperand0,
                                                            GGS_location & outOperand1,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_listOfSyntaxInstructionList * p = (cCollectionElement_listOfSyntaxInstructionList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
      outOperand0 = p->mObject.mProperty_mSyntaxInstructionList ;
      outOperand1 = p->mObject.mProperty_mEndOf_5F_instructions ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::setter_popFirst (GGS_syntaxInstructionList & outOperand0,
                                                       GGS_location & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSyntaxInstructionList * p = (cCollectionElement_listOfSyntaxInstructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
    outOperand0 = p->mObject.mProperty_mSyntaxInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOf_5F_instructions ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::setter_popLast (GGS_syntaxInstructionList & outOperand0,
                                                      GGS_location & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSyntaxInstructionList * p = (cCollectionElement_listOfSyntaxInstructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
    outOperand0 = p->mObject.mProperty_mSyntaxInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOf_5F_instructions ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::method_first (GGS_syntaxInstructionList & outOperand0,
                                                    GGS_location & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSyntaxInstructionList * p = (cCollectionElement_listOfSyntaxInstructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
    outOperand0 = p->mObject.mProperty_mSyntaxInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOf_5F_instructions ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::method_last (GGS_syntaxInstructionList & outOperand0,
                                                   GGS_location & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSyntaxInstructionList * p = (cCollectionElement_listOfSyntaxInstructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
    outOperand0 = p->mObject.mProperty_mSyntaxInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOf_5F_instructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList GGS_listOfSyntaxInstructionList::add_operation (const GGS_listOfSyntaxInstructionList & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_listOfSyntaxInstructionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList GGS_listOfSyntaxInstructionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_listOfSyntaxInstructionList result = GGS_listOfSyntaxInstructionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList GGS_listOfSyntaxInstructionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_listOfSyntaxInstructionList result = GGS_listOfSyntaxInstructionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList GGS_listOfSyntaxInstructionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_listOfSyntaxInstructionList result = GGS_listOfSyntaxInstructionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::plusAssign_operation (const GGS_listOfSyntaxInstructionList inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::setter_setMSyntaxInstructionListAtIndex (GGS_syntaxInstructionList inOperand,
                                                                               GGS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_listOfSyntaxInstructionList * p = (cCollectionElement_listOfSyntaxInstructionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSyntaxInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList GGS_listOfSyntaxInstructionList::getter_mSyntaxInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSyntaxInstructionList * p = (cCollectionElement_listOfSyntaxInstructionList *) attributes.ptr () ;
  GGS_syntaxInstructionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
    result = p->mObject.mProperty_mSyntaxInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSyntaxInstructionList::setter_setMEndOf_5F_instructionsAtIndex (GGS_location inOperand,
                                                                               GGS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_listOfSyntaxInstructionList * p = (cCollectionElement_listOfSyntaxInstructionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOf_5F_instructions = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_listOfSyntaxInstructionList::getter_mEndOf_5F_instructionsAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSyntaxInstructionList * p = (cCollectionElement_listOfSyntaxInstructionList *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
    result = p->mObject.mProperty_mEndOf_5F_instructions ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Enumerator for @listOfSyntaxInstructionList
//--------------------------------------------------------------------------------------------------

cEnumerator_listOfSyntaxInstructionList::cEnumerator_listOfSyntaxInstructionList (const GGS_listOfSyntaxInstructionList & inEnumeratedObject,
                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList_2E_element cEnumerator_listOfSyntaxInstructionList::current (LOCATION_ARGS) const {
  const cCollectionElement_listOfSyntaxInstructionList * p = (const cCollectionElement_listOfSyntaxInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList cEnumerator_listOfSyntaxInstructionList::current_mSyntaxInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_listOfSyntaxInstructionList * p = (const cCollectionElement_listOfSyntaxInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
  return p->mObject.mProperty_mSyntaxInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location cEnumerator_listOfSyntaxInstructionList::current_mEndOf_5F_instructions (LOCATION_ARGS) const {
  const cCollectionElement_listOfSyntaxInstructionList * p = (const cCollectionElement_listOfSyntaxInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
  return p->mObject.mProperty_mEndOf_5F_instructions ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @listOfSyntaxInstructionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_listOfSyntaxInstructionList::DownEnumerator_listOfSyntaxInstructionList (const GGS_listOfSyntaxInstructionList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList_2E_element DownEnumerator_listOfSyntaxInstructionList::current (LOCATION_ARGS) const {
  const cCollectionElement_listOfSyntaxInstructionList * p = (const cCollectionElement_listOfSyntaxInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList DownEnumerator_listOfSyntaxInstructionList::current_mSyntaxInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_listOfSyntaxInstructionList * p = (const cCollectionElement_listOfSyntaxInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
  return p->mObject.mProperty_mSyntaxInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_listOfSyntaxInstructionList::current_mEndOf_5F_instructions (LOCATION_ARGS) const {
  const cCollectionElement_listOfSyntaxInstructionList * p = (const cCollectionElement_listOfSyntaxInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
  return p->mObject.mProperty_mEndOf_5F_instructions ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @listOfSyntaxInstructionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_listOfSyntaxInstructionList::UpEnumerator_listOfSyntaxInstructionList (const GGS_listOfSyntaxInstructionList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList_2E_element UpEnumerator_listOfSyntaxInstructionList::current (LOCATION_ARGS) const {
  const cCollectionElement_listOfSyntaxInstructionList * p = (const cCollectionElement_listOfSyntaxInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList UpEnumerator_listOfSyntaxInstructionList::current_mSyntaxInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_listOfSyntaxInstructionList * p = (const cCollectionElement_listOfSyntaxInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
  return p->mObject.mProperty_mSyntaxInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_listOfSyntaxInstructionList::current_mEndOf_5F_instructions (LOCATION_ARGS) const {
  const cCollectionElement_listOfSyntaxInstructionList * p = (const cCollectionElement_listOfSyntaxInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
  return p->mObject.mProperty_mEndOf_5F_instructions ;
}




//--------------------------------------------------------------------------------------------------
//     @listOfSyntaxInstructionList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listOfSyntaxInstructionList ("listOfSyntaxInstructionList",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_listOfSyntaxInstructionList::staticTypeDescriptor (void) const {
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

ComparisonResult GGS_galgas_33_SyntaxComponentAST_2E_weak::objectCompare (const GGS_galgas_33_SyntaxComponentAST_2E_weak & inOperand) const {
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

GGS_galgas_33_SyntaxComponentAST_2E_weak::GGS_galgas_33_SyntaxComponentAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentAST_2E_weak & GGS_galgas_33_SyntaxComponentAST_2E_weak::operator = (const GGS_galgas_33_SyntaxComponentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentAST_2E_weak::GGS_galgas_33_SyntaxComponentAST_2E_weak (const GGS_galgas_33_SyntaxComponentAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentAST_2E_weak GGS_galgas_33_SyntaxComponentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_galgas_33_SyntaxComponentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentAST GGS_galgas_33_SyntaxComponentAST_2E_weak::bang_galgas_33_SyntaxComponentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxComponentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_galgas_33_SyntaxComponentAST) ;
      result = GGS_galgas_33_SyntaxComponentAST ((cPtr_galgas_33_SyntaxComponentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @galgas3SyntaxComponentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST_2E_weak ("galgas3SyntaxComponentAST.weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_galgas_33_SyntaxComponentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgas_33_SyntaxComponentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgas_33_SyntaxComponentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentAST_2E_weak GGS_galgas_33_SyntaxComponentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_galgas_33_SyntaxComponentAST_2E_weak result ;
  const GGS_galgas_33_SyntaxComponentAST_2E_weak * p = (const GGS_galgas_33_SyntaxComponentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgas_33_SyntaxComponentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3SyntaxComponentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_galgas_33_GrammarComponentAST_2E_weak::objectCompare (const GGS_galgas_33_GrammarComponentAST_2E_weak & inOperand) const {
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

GGS_galgas_33_GrammarComponentAST_2E_weak::GGS_galgas_33_GrammarComponentAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_GrammarComponentAST_2E_weak & GGS_galgas_33_GrammarComponentAST_2E_weak::operator = (const GGS_galgas_33_GrammarComponentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_GrammarComponentAST_2E_weak::GGS_galgas_33_GrammarComponentAST_2E_weak (const GGS_galgas_33_GrammarComponentAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_galgas_33_GrammarComponentAST_2E_weak GGS_galgas_33_GrammarComponentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_galgas_33_GrammarComponentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_GrammarComponentAST GGS_galgas_33_GrammarComponentAST_2E_weak::bang_galgas_33_GrammarComponentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_GrammarComponentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_galgas_33_GrammarComponentAST) ;
      result = GGS_galgas_33_GrammarComponentAST ((cPtr_galgas_33_GrammarComponentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @galgas3GrammarComponentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST_2E_weak ("galgas3GrammarComponentAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_galgas_33_GrammarComponentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgas_33_GrammarComponentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgas_33_GrammarComponentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_GrammarComponentAST_2E_weak GGS_galgas_33_GrammarComponentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_galgas_33_GrammarComponentAST_2E_weak result ;
  const GGS_galgas_33_GrammarComponentAST_2E_weak * p = (const GGS_galgas_33_GrammarComponentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgas_33_GrammarComponentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3GrammarComponentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@galgas_33_SyntaxComponentListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_galgas_33_SyntaxComponentListAST : public cCollectionElement {
  public: GGS_galgas_33_SyntaxComponentListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_galgas_33_SyntaxComponentListAST (const GGS_lstring & in_mSyntaxComponentName,
                                                               const GGS_lstring & in_mImportedLexiqueFilePath,
                                                               const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                               const GGS_syntaxRuleListAST & in_mRuleList,
                                                               const GGS_bool & in_mHasTranslateFeature
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_galgas_33_SyntaxComponentListAST (const GGS_galgas_33_SyntaxComponentListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_galgas_33_SyntaxComponentListAST::cCollectionElement_galgas_33_SyntaxComponentListAST (const GGS_lstring & in_mSyntaxComponentName,
                                                                                                          const GGS_lstring & in_mImportedLexiqueFilePath,
                                                                                                          const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                                                          const GGS_syntaxRuleListAST & in_mRuleList,
                                                                                                          const GGS_bool & in_mHasTranslateFeature
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSyntaxComponentName, in_mImportedLexiqueFilePath, in_mNonterminalDeclarationList, in_mRuleList, in_mHasTranslateFeature) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_galgas_33_SyntaxComponentListAST::cCollectionElement_galgas_33_SyntaxComponentListAST (const GGS_galgas_33_SyntaxComponentListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSyntaxComponentName, inElement.mProperty_mImportedLexiqueFilePath, inElement.mProperty_mNonterminalDeclarationList, inElement.mProperty_mRuleList, inElement.mProperty_mHasTranslateFeature) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_galgas_33_SyntaxComponentListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_galgas_33_SyntaxComponentListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_galgas_33_SyntaxComponentListAST (mObject.mProperty_mSyntaxComponentName, mObject.mProperty_mImportedLexiqueFilePath, mObject.mProperty_mNonterminalDeclarationList, mObject.mProperty_mRuleList, mObject.mProperty_mHasTranslateFeature COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_galgas_33_SyntaxComponentListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSyntaxComponentName" ":") ;
  mObject.mProperty_mSyntaxComponentName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mImportedLexiqueFilePath" ":") ;
  mObject.mProperty_mImportedLexiqueFilePath.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNonterminalDeclarationList" ":") ;
  mObject.mProperty_mNonterminalDeclarationList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRuleList" ":") ;
  mObject.mProperty_mRuleList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mHasTranslateFeature" ":") ;
  mObject.mProperty_mHasTranslateFeature.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST::GGS_galgas_33_SyntaxComponentListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST::GGS_galgas_33_SyntaxComponentListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST GGS_galgas_33_SyntaxComponentListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_galgas_33_SyntaxComponentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST GGS_galgas_33_SyntaxComponentListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_galgas_33_SyntaxComponentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::enterElement (const GGS_galgas_33_SyntaxComponentListAST_2E_element & inValue,
                                                         Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_galgas_33_SyntaxComponentListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST GGS_galgas_33_SyntaxComponentListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                     const GGS_lstring & inOperand1,
                                                                                                     const GGS_nonterminalDeclarationListAST & inOperand2,
                                                                                                     const GGS_syntaxRuleListAST & inOperand3,
                                                                                                     const GGS_bool & inOperand4
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_galgas_33_SyntaxComponentListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GGS_galgas_33_SyntaxComponentListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_galgas_33_SyntaxComponentListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GGS_lstring & in_mSyntaxComponentName,
                                                                      const GGS_lstring & in_mImportedLexiqueFilePath,
                                                                      const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                      const GGS_syntaxRuleListAST & in_mRuleList,
                                                                      const GGS_bool & in_mHasTranslateFeature
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_galgas_33_SyntaxComponentListAST (in_mSyntaxComponentName,
                                                                      in_mImportedLexiqueFilePath,
                                                                      in_mNonterminalDeclarationList,
                                                                      in_mRuleList,
                                                                      in_mHasTranslateFeature COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::addAssign_operation (const GGS_lstring & inOperand0,
                                                                const GGS_lstring & inOperand1,
                                                                const GGS_nonterminalDeclarationListAST & inOperand2,
                                                                const GGS_syntaxRuleListAST & inOperand3,
                                                                const GGS_bool & inOperand4
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_galgas_33_SyntaxComponentListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::setter_append (const GGS_lstring inOperand0,
                                                          const GGS_lstring inOperand1,
                                                          const GGS_nonterminalDeclarationListAST inOperand2,
                                                          const GGS_syntaxRuleListAST inOperand3,
                                                          const GGS_bool inOperand4,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_galgas_33_SyntaxComponentListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                 const GGS_lstring inOperand1,
                                                                 const GGS_nonterminalDeclarationListAST inOperand2,
                                                                 const GGS_syntaxRuleListAST inOperand3,
                                                                 const GGS_bool inOperand4,
                                                                 const GGS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_galgas_33_SyntaxComponentListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                 GGS_lstring & outOperand1,
                                                                 GGS_nonterminalDeclarationListAST & outOperand2,
                                                                 GGS_syntaxRuleListAST & outOperand3,
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
    cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
      outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
      outOperand1 = p->mObject.mProperty_mImportedLexiqueFilePath ;
      outOperand2 = p->mObject.mProperty_mNonterminalDeclarationList ;
      outOperand3 = p->mObject.mProperty_mRuleList ;
      outOperand4 = p->mObject.mProperty_mHasTranslateFeature ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                            GGS_lstring & outOperand1,
                                                            GGS_nonterminalDeclarationListAST & outOperand2,
                                                            GGS_syntaxRuleListAST & outOperand3,
                                                            GGS_bool & outOperand4,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mImportedLexiqueFilePath ;
    outOperand2 = p->mObject.mProperty_mNonterminalDeclarationList ;
    outOperand3 = p->mObject.mProperty_mRuleList ;
    outOperand4 = p->mObject.mProperty_mHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::setter_popLast (GGS_lstring & outOperand0,
                                                           GGS_lstring & outOperand1,
                                                           GGS_nonterminalDeclarationListAST & outOperand2,
                                                           GGS_syntaxRuleListAST & outOperand3,
                                                           GGS_bool & outOperand4,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mImportedLexiqueFilePath ;
    outOperand2 = p->mObject.mProperty_mNonterminalDeclarationList ;
    outOperand3 = p->mObject.mProperty_mRuleList ;
    outOperand4 = p->mObject.mProperty_mHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::method_first (GGS_lstring & outOperand0,
                                                         GGS_lstring & outOperand1,
                                                         GGS_nonterminalDeclarationListAST & outOperand2,
                                                         GGS_syntaxRuleListAST & outOperand3,
                                                         GGS_bool & outOperand4,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mImportedLexiqueFilePath ;
    outOperand2 = p->mObject.mProperty_mNonterminalDeclarationList ;
    outOperand3 = p->mObject.mProperty_mRuleList ;
    outOperand4 = p->mObject.mProperty_mHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::method_last (GGS_lstring & outOperand0,
                                                        GGS_lstring & outOperand1,
                                                        GGS_nonterminalDeclarationListAST & outOperand2,
                                                        GGS_syntaxRuleListAST & outOperand3,
                                                        GGS_bool & outOperand4,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mImportedLexiqueFilePath ;
    outOperand2 = p->mObject.mProperty_mNonterminalDeclarationList ;
    outOperand3 = p->mObject.mProperty_mRuleList ;
    outOperand4 = p->mObject.mProperty_mHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST GGS_galgas_33_SyntaxComponentListAST::add_operation (const GGS_galgas_33_SyntaxComponentListAST & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxComponentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST GGS_galgas_33_SyntaxComponentListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxComponentListAST result = GGS_galgas_33_SyntaxComponentListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST GGS_galgas_33_SyntaxComponentListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxComponentListAST result = GGS_galgas_33_SyntaxComponentListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST GGS_galgas_33_SyntaxComponentListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxComponentListAST result = GGS_galgas_33_SyntaxComponentListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::plusAssign_operation (const GGS_galgas_33_SyntaxComponentListAST inOperand,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::setter_setMSyntaxComponentNameAtIndex (GGS_lstring inOperand,
                                                                                  GGS_uint inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSyntaxComponentName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_galgas_33_SyntaxComponentListAST::getter_mSyntaxComponentNameAtIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    result = p->mObject.mProperty_mSyntaxComponentName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::setter_setMImportedLexiqueFilePathAtIndex (GGS_lstring inOperand,
                                                                                      GGS_uint inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mImportedLexiqueFilePath = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_galgas_33_SyntaxComponentListAST::getter_mImportedLexiqueFilePathAtIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    result = p->mObject.mProperty_mImportedLexiqueFilePath ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::setter_setMNonterminalDeclarationListAtIndex (GGS_nonterminalDeclarationListAST inOperand,
                                                                                         GGS_uint inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mNonterminalDeclarationList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST GGS_galgas_33_SyntaxComponentListAST::getter_mNonterminalDeclarationListAtIndex (const GGS_uint & inIndex,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  GGS_nonterminalDeclarationListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    result = p->mObject.mProperty_mNonterminalDeclarationList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::setter_setMRuleListAtIndex (GGS_syntaxRuleListAST inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRuleList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST GGS_galgas_33_SyntaxComponentListAST::getter_mRuleListAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  GGS_syntaxRuleListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    result = p->mObject.mProperty_mRuleList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::setter_setMHasTranslateFeatureAtIndex (GGS_bool inOperand,
                                                                                  GGS_uint inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mHasTranslateFeature = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_galgas_33_SyntaxComponentListAST::getter_mHasTranslateFeatureAtIndex (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    result = p->mObject.mProperty_mHasTranslateFeature ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Enumerator for @galgas_33_SyntaxComponentListAST
//--------------------------------------------------------------------------------------------------

cEnumerator_galgas_33_SyntaxComponentListAST::cEnumerator_galgas_33_SyntaxComponentListAST (const GGS_galgas_33_SyntaxComponentListAST & inEnumeratedObject,
                                                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST_2E_element cEnumerator_galgas_33_SyntaxComponentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_galgas_33_SyntaxComponentListAST::current_mSyntaxComponentName (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject.mProperty_mSyntaxComponentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_galgas_33_SyntaxComponentListAST::current_mImportedLexiqueFilePath (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject.mProperty_mImportedLexiqueFilePath ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST cEnumerator_galgas_33_SyntaxComponentListAST::current_mNonterminalDeclarationList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject.mProperty_mNonterminalDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST cEnumerator_galgas_33_SyntaxComponentListAST::current_mRuleList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject.mProperty_mRuleList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_galgas_33_SyntaxComponentListAST::current_mHasTranslateFeature (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject.mProperty_mHasTranslateFeature ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @galgas_33_SyntaxComponentListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_galgas_33_SyntaxComponentListAST::DownEnumerator_galgas_33_SyntaxComponentListAST (const GGS_galgas_33_SyntaxComponentListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST_2E_element DownEnumerator_galgas_33_SyntaxComponentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_galgas_33_SyntaxComponentListAST::current_mSyntaxComponentName (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject.mProperty_mSyntaxComponentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_galgas_33_SyntaxComponentListAST::current_mImportedLexiqueFilePath (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject.mProperty_mImportedLexiqueFilePath ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST DownEnumerator_galgas_33_SyntaxComponentListAST::current_mNonterminalDeclarationList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject.mProperty_mNonterminalDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST DownEnumerator_galgas_33_SyntaxComponentListAST::current_mRuleList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject.mProperty_mRuleList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_galgas_33_SyntaxComponentListAST::current_mHasTranslateFeature (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject.mProperty_mHasTranslateFeature ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @galgas_33_SyntaxComponentListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_galgas_33_SyntaxComponentListAST::UpEnumerator_galgas_33_SyntaxComponentListAST (const GGS_galgas_33_SyntaxComponentListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST_2E_element UpEnumerator_galgas_33_SyntaxComponentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_galgas_33_SyntaxComponentListAST::current_mSyntaxComponentName (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject.mProperty_mSyntaxComponentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_galgas_33_SyntaxComponentListAST::current_mImportedLexiqueFilePath (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject.mProperty_mImportedLexiqueFilePath ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST UpEnumerator_galgas_33_SyntaxComponentListAST::current_mNonterminalDeclarationList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject.mProperty_mNonterminalDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST UpEnumerator_galgas_33_SyntaxComponentListAST::current_mRuleList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject.mProperty_mRuleList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_galgas_33_SyntaxComponentListAST::current_mHasTranslateFeature (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject.mProperty_mHasTranslateFeature ;
}




//--------------------------------------------------------------------------------------------------
//     @galgas3SyntaxComponentListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentListAST ("galgas3SyntaxComponentListAST",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_galgas_33_SyntaxComponentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgas_33_SyntaxComponentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgas_33_SyntaxComponentListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST GGS_galgas_33_SyntaxComponentListAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_galgas_33_SyntaxComponentListAST result ;
  const GGS_galgas_33_SyntaxComponentListAST * p = (const GGS_galgas_33_SyntaxComponentListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgas_33_SyntaxComponentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3SyntaxComponentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@prologueEpilogueList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_prologueEpilogueList : public cCollectionElement {
  public: GGS_prologueEpilogueList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_prologueEpilogueList (const GGS_semanticInstructionListAST & in_mInstructionList,
                                                   const GGS_location & in_mEndOfInstructionList
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_prologueEpilogueList (const GGS_prologueEpilogueList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_prologueEpilogueList::cCollectionElement_prologueEpilogueList (const GGS_semanticInstructionListAST & in_mInstructionList,
                                                                                  const GGS_location & in_mEndOfInstructionList
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstructionList, in_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_prologueEpilogueList::cCollectionElement_prologueEpilogueList (const GGS_prologueEpilogueList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_prologueEpilogueList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_prologueEpilogueList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_prologueEpilogueList (mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_prologueEpilogueList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfInstructionList" ":") ;
  mObject.mProperty_mEndOfInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList::GGS_prologueEpilogueList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList::GGS_prologueEpilogueList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList GGS_prologueEpilogueList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_prologueEpilogueList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList GGS_prologueEpilogueList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_prologueEpilogueList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::enterElement (const GGS_prologueEpilogueList_2E_element & inValue,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_prologueEpilogueList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList GGS_prologueEpilogueList::class_func_listWithValue (const GGS_semanticInstructionListAST & inOperand0,
                                                                             const GGS_location & inOperand1
                                                                             COMMA_LOCATION_ARGS) {
  GGS_prologueEpilogueList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_prologueEpilogueList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_prologueEpilogueList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GGS_semanticInstructionListAST & in_mInstructionList,
                                                          const GGS_location & in_mEndOfInstructionList
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_prologueEpilogueList * p = nullptr ;
  macroMyNew (p, cCollectionElement_prologueEpilogueList (in_mInstructionList,
                                                          in_mEndOfInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::addAssign_operation (const GGS_semanticInstructionListAST & inOperand0,
                                                    const GGS_location & inOperand1
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_prologueEpilogueList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::setter_append (const GGS_semanticInstructionListAST inOperand0,
                                              const GGS_location inOperand1,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_prologueEpilogueList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::setter_insertAtIndex (const GGS_semanticInstructionListAST inOperand0,
                                                     const GGS_location inOperand1,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_prologueEpilogueList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::setter_removeAtIndex (GGS_semanticInstructionListAST & outOperand0,
                                                     GGS_location & outOperand1,
                                                     const GGS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_prologueEpilogueList * p = (cCollectionElement_prologueEpilogueList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
      outOperand0 = p->mObject.mProperty_mInstructionList ;
      outOperand1 = p->mObject.mProperty_mEndOfInstructionList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::setter_popFirst (GGS_semanticInstructionListAST & outOperand0,
                                                GGS_location & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_prologueEpilogueList * p = (cCollectionElement_prologueEpilogueList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::setter_popLast (GGS_semanticInstructionListAST & outOperand0,
                                               GGS_location & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_prologueEpilogueList * p = (cCollectionElement_prologueEpilogueList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::method_first (GGS_semanticInstructionListAST & outOperand0,
                                             GGS_location & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_prologueEpilogueList * p = (cCollectionElement_prologueEpilogueList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::method_last (GGS_semanticInstructionListAST & outOperand0,
                                            GGS_location & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_prologueEpilogueList * p = (cCollectionElement_prologueEpilogueList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList GGS_prologueEpilogueList::add_operation (const GGS_prologueEpilogueList & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_prologueEpilogueList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList GGS_prologueEpilogueList::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_prologueEpilogueList result = GGS_prologueEpilogueList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList GGS_prologueEpilogueList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_prologueEpilogueList result = GGS_prologueEpilogueList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList GGS_prologueEpilogueList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_prologueEpilogueList result = GGS_prologueEpilogueList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::plusAssign_operation (const GGS_prologueEpilogueList inOperand,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::setter_setMInstructionListAtIndex (GGS_semanticInstructionListAST inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_prologueEpilogueList * p = (cCollectionElement_prologueEpilogueList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_prologueEpilogueList::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_prologueEpilogueList * p = (cCollectionElement_prologueEpilogueList *) attributes.ptr () ;
  GGS_semanticInstructionListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::setter_setMEndOfInstructionListAtIndex (GGS_location inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_prologueEpilogueList * p = (cCollectionElement_prologueEpilogueList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_prologueEpilogueList::getter_mEndOfInstructionListAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_prologueEpilogueList * p = (cCollectionElement_prologueEpilogueList *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
    result = p->mObject.mProperty_mEndOfInstructionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Enumerator for @prologueEpilogueList
//--------------------------------------------------------------------------------------------------

cEnumerator_prologueEpilogueList::cEnumerator_prologueEpilogueList (const GGS_prologueEpilogueList & inEnumeratedObject,
                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList_2E_element cEnumerator_prologueEpilogueList::current (LOCATION_ARGS) const {
  const cCollectionElement_prologueEpilogueList * p = (const cCollectionElement_prologueEpilogueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST cEnumerator_prologueEpilogueList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_prologueEpilogueList * p = (const cCollectionElement_prologueEpilogueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location cEnumerator_prologueEpilogueList::current_mEndOfInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_prologueEpilogueList * p = (const cCollectionElement_prologueEpilogueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
  return p->mObject.mProperty_mEndOfInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @prologueEpilogueList
//--------------------------------------------------------------------------------------------------

DownEnumerator_prologueEpilogueList::DownEnumerator_prologueEpilogueList (const GGS_prologueEpilogueList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList_2E_element DownEnumerator_prologueEpilogueList::current (LOCATION_ARGS) const {
  const cCollectionElement_prologueEpilogueList * p = (const cCollectionElement_prologueEpilogueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST DownEnumerator_prologueEpilogueList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_prologueEpilogueList * p = (const cCollectionElement_prologueEpilogueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_prologueEpilogueList::current_mEndOfInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_prologueEpilogueList * p = (const cCollectionElement_prologueEpilogueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
  return p->mObject.mProperty_mEndOfInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @prologueEpilogueList
//--------------------------------------------------------------------------------------------------

UpEnumerator_prologueEpilogueList::UpEnumerator_prologueEpilogueList (const GGS_prologueEpilogueList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList_2E_element UpEnumerator_prologueEpilogueList::current (LOCATION_ARGS) const {
  const cCollectionElement_prologueEpilogueList * p = (const cCollectionElement_prologueEpilogueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST UpEnumerator_prologueEpilogueList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_prologueEpilogueList * p = (const cCollectionElement_prologueEpilogueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_prologueEpilogueList::current_mEndOfInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_prologueEpilogueList * p = (const cCollectionElement_prologueEpilogueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
  return p->mObject.mProperty_mEndOfInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//     @prologueEpilogueList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prologueEpilogueList ("prologueEpilogueList",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_prologueEpilogueList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prologueEpilogueList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_prologueEpilogueList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_prologueEpilogueList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList GGS_prologueEpilogueList::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_prologueEpilogueList result ;
  const GGS_prologueEpilogueList * p = (const GGS_prologueEpilogueList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_prologueEpilogueList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prologueEpilogueList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@programRuleList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_programRuleList : public cCollectionElement {
  public: GGS_programRuleList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_programRuleList (const GGS_lstring & in_mSourceFileExtension,
                                              const GGS_lstring & in_mSourceFileHelp,
                                              const GGS_lstring & in_mSourceFileVariableName,
                                              const GGS_bool & in_mSourceFileVariableNameIsUnused,
                                              const GGS_lstring & in_mReferenceGrammar,
                                              const GGS_semanticInstructionListAST & in_mInstructionList,
                                              const GGS_location & in_mEndOfInstructionList
                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_programRuleList (const GGS_programRuleList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_programRuleList::cCollectionElement_programRuleList (const GGS_lstring & in_mSourceFileExtension,
                                                                        const GGS_lstring & in_mSourceFileHelp,
                                                                        const GGS_lstring & in_mSourceFileVariableName,
                                                                        const GGS_bool & in_mSourceFileVariableNameIsUnused,
                                                                        const GGS_lstring & in_mReferenceGrammar,
                                                                        const GGS_semanticInstructionListAST & in_mInstructionList,
                                                                        const GGS_location & in_mEndOfInstructionList
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSourceFileExtension, in_mSourceFileHelp, in_mSourceFileVariableName, in_mSourceFileVariableNameIsUnused, in_mReferenceGrammar, in_mInstructionList, in_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_programRuleList::cCollectionElement_programRuleList (const GGS_programRuleList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSourceFileExtension, inElement.mProperty_mSourceFileHelp, inElement.mProperty_mSourceFileVariableName, inElement.mProperty_mSourceFileVariableNameIsUnused, inElement.mProperty_mReferenceGrammar, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_programRuleList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_programRuleList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_programRuleList (mObject.mProperty_mSourceFileExtension, mObject.mProperty_mSourceFileHelp, mObject.mProperty_mSourceFileVariableName, mObject.mProperty_mSourceFileVariableNameIsUnused, mObject.mProperty_mReferenceGrammar, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_programRuleList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSourceFileExtension" ":") ;
  mObject.mProperty_mSourceFileExtension.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSourceFileHelp" ":") ;
  mObject.mProperty_mSourceFileHelp.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSourceFileVariableName" ":") ;
  mObject.mProperty_mSourceFileVariableName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSourceFileVariableNameIsUnused" ":") ;
  mObject.mProperty_mSourceFileVariableNameIsUnused.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mReferenceGrammar" ":") ;
  mObject.mProperty_mReferenceGrammar.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfInstructionList" ":") ;
  mObject.mProperty_mEndOfInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList::GGS_programRuleList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList::GGS_programRuleList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList GGS_programRuleList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_programRuleList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList GGS_programRuleList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_programRuleList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::enterElement (const GGS_programRuleList_2E_element & inValue,
                                        Compiler * /* inCompiler */
                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_programRuleList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList GGS_programRuleList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                   const GGS_lstring & inOperand1,
                                                                   const GGS_lstring & inOperand2,
                                                                   const GGS_bool & inOperand3,
                                                                   const GGS_lstring & inOperand4,
                                                                   const GGS_semanticInstructionListAST & inOperand5,
                                                                   const GGS_location & inOperand6
                                                                   COMMA_LOCATION_ARGS) {
  GGS_programRuleList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GGS_programRuleList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_programRuleList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GGS_lstring & in_mSourceFileExtension,
                                                     const GGS_lstring & in_mSourceFileHelp,
                                                     const GGS_lstring & in_mSourceFileVariableName,
                                                     const GGS_bool & in_mSourceFileVariableNameIsUnused,
                                                     const GGS_lstring & in_mReferenceGrammar,
                                                     const GGS_semanticInstructionListAST & in_mInstructionList,
                                                     const GGS_location & in_mEndOfInstructionList
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_programRuleList * p = nullptr ;
  macroMyNew (p, cCollectionElement_programRuleList (in_mSourceFileExtension,
                                                     in_mSourceFileHelp,
                                                     in_mSourceFileVariableName,
                                                     in_mSourceFileVariableNameIsUnused,
                                                     in_mReferenceGrammar,
                                                     in_mInstructionList,
                                                     in_mEndOfInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::addAssign_operation (const GGS_lstring & inOperand0,
                                               const GGS_lstring & inOperand1,
                                               const GGS_lstring & inOperand2,
                                               const GGS_bool & inOperand3,
                                               const GGS_lstring & inOperand4,
                                               const GGS_semanticInstructionListAST & inOperand5,
                                               const GGS_location & inOperand6
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_programRuleList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_append (const GGS_lstring inOperand0,
                                         const GGS_lstring inOperand1,
                                         const GGS_lstring inOperand2,
                                         const GGS_bool inOperand3,
                                         const GGS_lstring inOperand4,
                                         const GGS_semanticInstructionListAST inOperand5,
                                         const GGS_location inOperand6,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_programRuleList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                const GGS_lstring inOperand1,
                                                const GGS_lstring inOperand2,
                                                const GGS_bool inOperand3,
                                                const GGS_lstring inOperand4,
                                                const GGS_semanticInstructionListAST inOperand5,
                                                const GGS_location inOperand6,
                                                const GGS_uint inInsertionIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_programRuleList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                GGS_lstring & outOperand1,
                                                GGS_lstring & outOperand2,
                                                GGS_bool & outOperand3,
                                                GGS_lstring & outOperand4,
                                                GGS_semanticInstructionListAST & outOperand5,
                                                GGS_location & outOperand6,
                                                const GGS_uint inRemoveIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;
  outOperand5.drop () ;
  outOperand6.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_programRuleList) ;
      outOperand0 = p->mObject.mProperty_mSourceFileExtension ;
      outOperand1 = p->mObject.mProperty_mSourceFileHelp ;
      outOperand2 = p->mObject.mProperty_mSourceFileVariableName ;
      outOperand3 = p->mObject.mProperty_mSourceFileVariableNameIsUnused ;
      outOperand4 = p->mObject.mProperty_mReferenceGrammar ;
      outOperand5 = p->mObject.mProperty_mInstructionList ;
      outOperand6 = p->mObject.mProperty_mEndOfInstructionList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_popFirst (GGS_lstring & outOperand0,
                                           GGS_lstring & outOperand1,
                                           GGS_lstring & outOperand2,
                                           GGS_bool & outOperand3,
                                           GGS_lstring & outOperand4,
                                           GGS_semanticInstructionListAST & outOperand5,
                                           GGS_location & outOperand6,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    outOperand0 = p->mObject.mProperty_mSourceFileExtension ;
    outOperand1 = p->mObject.mProperty_mSourceFileHelp ;
    outOperand2 = p->mObject.mProperty_mSourceFileVariableName ;
    outOperand3 = p->mObject.mProperty_mSourceFileVariableNameIsUnused ;
    outOperand4 = p->mObject.mProperty_mReferenceGrammar ;
    outOperand5 = p->mObject.mProperty_mInstructionList ;
    outOperand6 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_popLast (GGS_lstring & outOperand0,
                                          GGS_lstring & outOperand1,
                                          GGS_lstring & outOperand2,
                                          GGS_bool & outOperand3,
                                          GGS_lstring & outOperand4,
                                          GGS_semanticInstructionListAST & outOperand5,
                                          GGS_location & outOperand6,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    outOperand0 = p->mObject.mProperty_mSourceFileExtension ;
    outOperand1 = p->mObject.mProperty_mSourceFileHelp ;
    outOperand2 = p->mObject.mProperty_mSourceFileVariableName ;
    outOperand3 = p->mObject.mProperty_mSourceFileVariableNameIsUnused ;
    outOperand4 = p->mObject.mProperty_mReferenceGrammar ;
    outOperand5 = p->mObject.mProperty_mInstructionList ;
    outOperand6 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::method_first (GGS_lstring & outOperand0,
                                        GGS_lstring & outOperand1,
                                        GGS_lstring & outOperand2,
                                        GGS_bool & outOperand3,
                                        GGS_lstring & outOperand4,
                                        GGS_semanticInstructionListAST & outOperand5,
                                        GGS_location & outOperand6,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    outOperand0 = p->mObject.mProperty_mSourceFileExtension ;
    outOperand1 = p->mObject.mProperty_mSourceFileHelp ;
    outOperand2 = p->mObject.mProperty_mSourceFileVariableName ;
    outOperand3 = p->mObject.mProperty_mSourceFileVariableNameIsUnused ;
    outOperand4 = p->mObject.mProperty_mReferenceGrammar ;
    outOperand5 = p->mObject.mProperty_mInstructionList ;
    outOperand6 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::method_last (GGS_lstring & outOperand0,
                                       GGS_lstring & outOperand1,
                                       GGS_lstring & outOperand2,
                                       GGS_bool & outOperand3,
                                       GGS_lstring & outOperand4,
                                       GGS_semanticInstructionListAST & outOperand5,
                                       GGS_location & outOperand6,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    outOperand0 = p->mObject.mProperty_mSourceFileExtension ;
    outOperand1 = p->mObject.mProperty_mSourceFileHelp ;
    outOperand2 = p->mObject.mProperty_mSourceFileVariableName ;
    outOperand3 = p->mObject.mProperty_mSourceFileVariableNameIsUnused ;
    outOperand4 = p->mObject.mProperty_mReferenceGrammar ;
    outOperand5 = p->mObject.mProperty_mInstructionList ;
    outOperand6 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList GGS_programRuleList::add_operation (const GGS_programRuleList & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_programRuleList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList GGS_programRuleList::getter_subListWithRange (const GGS_range & inRange,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_programRuleList result = GGS_programRuleList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList GGS_programRuleList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_programRuleList result = GGS_programRuleList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList GGS_programRuleList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_programRuleList result = GGS_programRuleList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::plusAssign_operation (const GGS_programRuleList inOperand,
                                                Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_setMSourceFileExtensionAtIndex (GGS_lstring inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSourceFileExtension = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_programRuleList::getter_mSourceFileExtensionAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    result = p->mObject.mProperty_mSourceFileExtension ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_setMSourceFileHelpAtIndex (GGS_lstring inOperand,
                                                            GGS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSourceFileHelp = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_programRuleList::getter_mSourceFileHelpAtIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    result = p->mObject.mProperty_mSourceFileHelp ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_setMSourceFileVariableNameAtIndex (GGS_lstring inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSourceFileVariableName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_programRuleList::getter_mSourceFileVariableNameAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    result = p->mObject.mProperty_mSourceFileVariableName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_setMSourceFileVariableNameIsUnusedAtIndex (GGS_bool inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSourceFileVariableNameIsUnused = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_programRuleList::getter_mSourceFileVariableNameIsUnusedAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    result = p->mObject.mProperty_mSourceFileVariableNameIsUnused ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_setMReferenceGrammarAtIndex (GGS_lstring inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mReferenceGrammar = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_programRuleList::getter_mReferenceGrammarAtIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    result = p->mObject.mProperty_mReferenceGrammar ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_setMInstructionListAtIndex (GGS_semanticInstructionListAST inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_programRuleList::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  GGS_semanticInstructionListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_setMEndOfInstructionListAtIndex (GGS_location inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_programRuleList::getter_mEndOfInstructionListAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    result = p->mObject.mProperty_mEndOfInstructionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Enumerator for @programRuleList
//--------------------------------------------------------------------------------------------------

cEnumerator_programRuleList::cEnumerator_programRuleList (const GGS_programRuleList & inEnumeratedObject,
                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList_2E_element cEnumerator_programRuleList::current (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_programRuleList::current_mSourceFileExtension (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mSourceFileExtension ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_programRuleList::current_mSourceFileHelp (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mSourceFileHelp ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_programRuleList::current_mSourceFileVariableName (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mSourceFileVariableName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_programRuleList::current_mSourceFileVariableNameIsUnused (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mSourceFileVariableNameIsUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_programRuleList::current_mReferenceGrammar (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mReferenceGrammar ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST cEnumerator_programRuleList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location cEnumerator_programRuleList::current_mEndOfInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mEndOfInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @programRuleList
//--------------------------------------------------------------------------------------------------

DownEnumerator_programRuleList::DownEnumerator_programRuleList (const GGS_programRuleList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList_2E_element DownEnumerator_programRuleList::current (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_programRuleList::current_mSourceFileExtension (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mSourceFileExtension ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_programRuleList::current_mSourceFileHelp (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mSourceFileHelp ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_programRuleList::current_mSourceFileVariableName (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mSourceFileVariableName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_programRuleList::current_mSourceFileVariableNameIsUnused (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mSourceFileVariableNameIsUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_programRuleList::current_mReferenceGrammar (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mReferenceGrammar ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST DownEnumerator_programRuleList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_programRuleList::current_mEndOfInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mEndOfInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @programRuleList
//--------------------------------------------------------------------------------------------------

UpEnumerator_programRuleList::UpEnumerator_programRuleList (const GGS_programRuleList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList_2E_element UpEnumerator_programRuleList::current (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_programRuleList::current_mSourceFileExtension (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mSourceFileExtension ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_programRuleList::current_mSourceFileHelp (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mSourceFileHelp ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_programRuleList::current_mSourceFileVariableName (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mSourceFileVariableName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_programRuleList::current_mSourceFileVariableNameIsUnused (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mSourceFileVariableNameIsUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_programRuleList::current_mReferenceGrammar (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mReferenceGrammar ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST UpEnumerator_programRuleList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_programRuleList::current_mEndOfInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mEndOfInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//     @programRuleList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programRuleList ("programRuleList",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_programRuleList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programRuleList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_programRuleList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_programRuleList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList GGS_programRuleList::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_programRuleList result ;
  const GGS_programRuleList * p = (const GGS_programRuleList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_programRuleList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programRuleList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasDeclarationAST::GGS_galgasDeclarationAST (void) :
mProperty_mDeclarationList (),
mProperty_implicitTypeDeclarationSet (),
mProperty_mSyntaxComponentList (),
mProperty_mSyntaxExtensions (),
mProperty_mGUIComponentList (),
mProperty_mPrologueDeclarationList (),
mProperty_mSourceRuleList (),
mProperty_mEpilogueDeclarationList () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgasDeclarationAST::~ GGS_galgasDeclarationAST (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_galgasDeclarationAST GGS_galgasDeclarationAST::init (Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_galgasDeclarationAST result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasDeclarationAST::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mDeclarationList = GGS_semanticDeclarationListAST::init (inCompiler COMMA_HERE) ;
  mProperty_implicitTypeDeclarationSet = GGS_stringset::init (inCompiler COMMA_HERE) ;
  mProperty_mSyntaxComponentList = GGS_galgas_33_SyntaxComponentListAST::init (inCompiler COMMA_HERE) ;
  mProperty_mSyntaxExtensions = GGS_syntaxExtensions::init (inCompiler COMMA_HERE) ;
  mProperty_mGUIComponentList = GGS_galgasGUIComponentListAST::init (inCompiler COMMA_HERE) ;
  mProperty_mPrologueDeclarationList = GGS_prologueEpilogueList::init (inCompiler COMMA_HERE) ;
  mProperty_mSourceRuleList = GGS_programRuleList::init (inCompiler COMMA_HERE) ;
  mProperty_mEpilogueDeclarationList = GGS_prologueEpilogueList::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasDeclarationAST::GGS_galgasDeclarationAST (const GGS_semanticDeclarationListAST & inOperand0,
                                                    const GGS_stringset & inOperand1,
                                                    const GGS_galgas_33_SyntaxComponentListAST & inOperand2,
                                                    const GGS_syntaxExtensions & inOperand3,
                                                    const GGS_galgasGUIComponentListAST & inOperand4,
                                                    const GGS_prologueEpilogueList & inOperand5,
                                                    const GGS_programRuleList & inOperand6,
                                                    const GGS_prologueEpilogueList & inOperand7) :
mProperty_mDeclarationList (inOperand0),
mProperty_implicitTypeDeclarationSet (inOperand1),
mProperty_mSyntaxComponentList (inOperand2),
mProperty_mSyntaxExtensions (inOperand3),
mProperty_mGUIComponentList (inOperand4),
mProperty_mPrologueDeclarationList (inOperand5),
mProperty_mSourceRuleList (inOperand6),
mProperty_mEpilogueDeclarationList (inOperand7) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgasDeclarationAST GGS_galgasDeclarationAST::class_func_new (Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_galgasDeclarationAST result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_galgasDeclarationAST::isValid (void) const {
  return mProperty_mDeclarationList.isValid () && mProperty_implicitTypeDeclarationSet.isValid () && mProperty_mSyntaxComponentList.isValid () && mProperty_mSyntaxExtensions.isValid () && mProperty_mGUIComponentList.isValid () && mProperty_mPrologueDeclarationList.isValid () && mProperty_mSourceRuleList.isValid () && mProperty_mEpilogueDeclarationList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasDeclarationAST::drop (void) {
  mProperty_mDeclarationList.drop () ;
  mProperty_implicitTypeDeclarationSet.drop () ;
  mProperty_mSyntaxComponentList.drop () ;
  mProperty_mSyntaxExtensions.drop () ;
  mProperty_mGUIComponentList.drop () ;
  mProperty_mPrologueDeclarationList.drop () ;
  mProperty_mSourceRuleList.drop () ;
  mProperty_mEpilogueDeclarationList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasDeclarationAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @galgasDeclarationAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDeclarationList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_implicitTypeDeclarationSet.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSyntaxComponentList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSyntaxExtensions.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGUIComponentList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPrologueDeclarationList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSourceRuleList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEpilogueDeclarationList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @galgasDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgasDeclarationAST ("galgasDeclarationAST",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_galgasDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgasDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgasDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgasDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasDeclarationAST GGS_galgasDeclarationAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_galgasDeclarationAST result ;
  const GGS_galgasDeclarationAST * p = (const GGS_galgasDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgasDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgasDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
  #ifdef NEW_ITERATOR
    UpEnumerator_functionSignature enumerator_1829 (temp_0) ;
  #else
    cEnumerator_functionSignature enumerator_1829 (temp_0, EnumerationOrder::Up) ;
  #endif
  while (enumerator_1829.hasCurrentObject ()) {
    result_result.plusAssign_operation(GGS_string ("!").add_operation (enumerator_1829.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("semanticsTypes.galgas", 40)) ;
    enumerator_1829.gotoNextObject () ;
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
  #ifdef NEW_ITERATOR
    UpEnumerator_functionSignature enumerator_1975 (temp_0) ;
  #else
    cEnumerator_functionSignature enumerator_1975 (temp_0, EnumerationOrder::Up) ;
  #endif
  while (enumerator_1975.hasCurrentObject ()) {
    result_result.plusAssign_operation(GGS_string ("\?").add_operation (enumerator_1975.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 47)), inCompiler  COMMA_SOURCE_FILE ("semanticsTypes.galgas", 47)) ;
    enumerator_1975.gotoNextObject () ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_methodQualifier ("methodQualifier",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_methodQualifier::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_methodKind ("methodKind",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_methodKind::staticTypeDescriptor (void) const {
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
//
//Class for element of '@optionalMethodSignature' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_optionalMethodSignature : public cCollectionElement {
  public: GGS_optionalMethodSignature_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_optionalMethodSignature (const GGS_bool & in_mInputArgument,
                                                      const GGS_lstring & in_mFormalSelector,
                                                      const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                      const GGS_string & in_mFormalArgumentName
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_optionalMethodSignature (const GGS_optionalMethodSignature_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_optionalMethodSignature::cCollectionElement_optionalMethodSignature (const GGS_bool & in_mInputArgument,
                                                                                        const GGS_lstring & in_mFormalSelector,
                                                                                        const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                        const GGS_string & in_mFormalArgumentName
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInputArgument, in_mFormalSelector, in_mFormalArgumentType, in_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_optionalMethodSignature::cCollectionElement_optionalMethodSignature (const GGS_optionalMethodSignature_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInputArgument, inElement.mProperty_mFormalSelector, inElement.mProperty_mFormalArgumentType, inElement.mProperty_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_optionalMethodSignature::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_optionalMethodSignature::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_optionalMethodSignature (mObject.mProperty_mInputArgument, mObject.mProperty_mFormalSelector, mObject.mProperty_mFormalArgumentType, mObject.mProperty_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_optionalMethodSignature::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInputArgument" ":") ;
  mObject.mProperty_mInputArgument.description (ioString, inIndentation) ;
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
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignature::GGS_optionalMethodSignature (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignature::GGS_optionalMethodSignature (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignature GGS_optionalMethodSignature::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_optionalMethodSignature (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignature GGS_optionalMethodSignature::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_optionalMethodSignature (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalMethodSignature::enterElement (const GGS_optionalMethodSignature_2E_element & inValue,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_optionalMethodSignature (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignature GGS_optionalMethodSignature::class_func_listWithValue (const GGS_bool & inOperand0,
                                                                                   const GGS_lstring & inOperand1,
                                                                                   const GGS_unifiedTypeMapEntry & inOperand2,
                                                                                   const GGS_string & inOperand3
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_optionalMethodSignature result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GGS_optionalMethodSignature (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_optionalMethodSignature::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalMethodSignature::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GGS_bool & in_mInputArgument,
                                                             const GGS_lstring & in_mFormalSelector,
                                                             const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                             const GGS_string & in_mFormalArgumentName
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_optionalMethodSignature * p = nullptr ;
  macroMyNew (p, cCollectionElement_optionalMethodSignature (in_mInputArgument,
                                                             in_mFormalSelector,
                                                             in_mFormalArgumentType,
                                                             in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalMethodSignature::addAssign_operation (const GGS_bool & inOperand0,
                                                       const GGS_lstring & inOperand1,
                                                       const GGS_unifiedTypeMapEntry & inOperand2,
                                                       const GGS_string & inOperand3
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_optionalMethodSignature (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalMethodSignature::setter_append (const GGS_bool inOperand0,
                                                 const GGS_lstring inOperand1,
                                                 const GGS_unifiedTypeMapEntry inOperand2,
                                                 const GGS_string inOperand3,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_optionalMethodSignature (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
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
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_optionalMethodSignature (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
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
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_optionalMethodSignature * p = (cCollectionElement_optionalMethodSignature *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
      outOperand0 = p->mObject.mProperty_mInputArgument ;
      outOperand1 = p->mObject.mProperty_mFormalSelector ;
      outOperand2 = p->mObject.mProperty_mFormalArgumentType ;
      outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalMethodSignature::setter_popFirst (GGS_bool & outOperand0,
                                                   GGS_lstring & outOperand1,
                                                   GGS_unifiedTypeMapEntry & outOperand2,
                                                   GGS_string & outOperand3,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_optionalMethodSignature * p = (cCollectionElement_optionalMethodSignature *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
    outOperand0 = p->mObject.mProperty_mInputArgument ;
    outOperand1 = p->mObject.mProperty_mFormalSelector ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalMethodSignature::setter_popLast (GGS_bool & outOperand0,
                                                  GGS_lstring & outOperand1,
                                                  GGS_unifiedTypeMapEntry & outOperand2,
                                                  GGS_string & outOperand3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_optionalMethodSignature * p = (cCollectionElement_optionalMethodSignature *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
    outOperand0 = p->mObject.mProperty_mInputArgument ;
    outOperand1 = p->mObject.mProperty_mFormalSelector ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalMethodSignature::method_first (GGS_bool & outOperand0,
                                                GGS_lstring & outOperand1,
                                                GGS_unifiedTypeMapEntry & outOperand2,
                                                GGS_string & outOperand3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_optionalMethodSignature * p = (cCollectionElement_optionalMethodSignature *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
    outOperand0 = p->mObject.mProperty_mInputArgument ;
    outOperand1 = p->mObject.mProperty_mFormalSelector ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalMethodSignature::method_last (GGS_bool & outOperand0,
                                               GGS_lstring & outOperand1,
                                               GGS_unifiedTypeMapEntry & outOperand2,
                                               GGS_string & outOperand3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_optionalMethodSignature * p = (cCollectionElement_optionalMethodSignature *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
    outOperand0 = p->mObject.mProperty_mInputArgument ;
    outOperand1 = p->mObject.mProperty_mFormalSelector ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignature GGS_optionalMethodSignature::add_operation (const GGS_optionalMethodSignature & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_optionalMethodSignature result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignature GGS_optionalMethodSignature::getter_subListWithRange (const GGS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_optionalMethodSignature result = GGS_optionalMethodSignature::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignature GGS_optionalMethodSignature::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_optionalMethodSignature result = GGS_optionalMethodSignature::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignature GGS_optionalMethodSignature::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_optionalMethodSignature result = GGS_optionalMethodSignature::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalMethodSignature::plusAssign_operation (const GGS_optionalMethodSignature inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalMethodSignature::setter_setMInputArgumentAtIndex (GGS_bool inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_optionalMethodSignature * p = (cCollectionElement_optionalMethodSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInputArgument = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionalMethodSignature::getter_mInputArgumentAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_optionalMethodSignature * p = (cCollectionElement_optionalMethodSignature *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
    result = p->mObject.mProperty_mInputArgument ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalMethodSignature::setter_setMFormalSelectorAtIndex (GGS_lstring inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_optionalMethodSignature * p = (cCollectionElement_optionalMethodSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalSelector = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_optionalMethodSignature::getter_mFormalSelectorAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_optionalMethodSignature * p = (cCollectionElement_optionalMethodSignature *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
    result = p->mObject.mProperty_mFormalSelector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalMethodSignature::setter_setMFormalArgumentTypeAtIndex (GGS_unifiedTypeMapEntry inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_optionalMethodSignature * p = (cCollectionElement_optionalMethodSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_optionalMethodSignature::getter_mFormalArgumentTypeAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_optionalMethodSignature * p = (cCollectionElement_optionalMethodSignature *) attributes.ptr () ;
  GGS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
    result = p->mObject.mProperty_mFormalArgumentType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalMethodSignature::setter_setMFormalArgumentNameAtIndex (GGS_string inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_optionalMethodSignature * p = (cCollectionElement_optionalMethodSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_optionalMethodSignature::getter_mFormalArgumentNameAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_optionalMethodSignature * p = (cCollectionElement_optionalMethodSignature *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Enumerator for @optionalMethodSignature
//--------------------------------------------------------------------------------------------------

cEnumerator_optionalMethodSignature::cEnumerator_optionalMethodSignature (const GGS_optionalMethodSignature & inEnumeratedObject,
                                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignature_2E_element cEnumerator_optionalMethodSignature::current (LOCATION_ARGS) const {
  const cCollectionElement_optionalMethodSignature * p = (const cCollectionElement_optionalMethodSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_optionalMethodSignature::current_mInputArgument (LOCATION_ARGS) const {
  const cCollectionElement_optionalMethodSignature * p = (const cCollectionElement_optionalMethodSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
  return p->mObject.mProperty_mInputArgument ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_optionalMethodSignature::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_optionalMethodSignature * p = (const cCollectionElement_optionalMethodSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
  return p->mObject.mProperty_mFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry cEnumerator_optionalMethodSignature::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_optionalMethodSignature * p = (const cCollectionElement_optionalMethodSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
  return p->mObject.mProperty_mFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_optionalMethodSignature::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_optionalMethodSignature * p = (const cCollectionElement_optionalMethodSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @optionalMethodSignature
//--------------------------------------------------------------------------------------------------

DownEnumerator_optionalMethodSignature::DownEnumerator_optionalMethodSignature (const GGS_optionalMethodSignature & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignature_2E_element DownEnumerator_optionalMethodSignature::current (LOCATION_ARGS) const {
  const cCollectionElement_optionalMethodSignature * p = (const cCollectionElement_optionalMethodSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_optionalMethodSignature::current_mInputArgument (LOCATION_ARGS) const {
  const cCollectionElement_optionalMethodSignature * p = (const cCollectionElement_optionalMethodSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
  return p->mObject.mProperty_mInputArgument ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_optionalMethodSignature::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_optionalMethodSignature * p = (const cCollectionElement_optionalMethodSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
  return p->mObject.mProperty_mFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_optionalMethodSignature::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_optionalMethodSignature * p = (const cCollectionElement_optionalMethodSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
  return p->mObject.mProperty_mFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_optionalMethodSignature::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_optionalMethodSignature * p = (const cCollectionElement_optionalMethodSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @optionalMethodSignature
//--------------------------------------------------------------------------------------------------

UpEnumerator_optionalMethodSignature::UpEnumerator_optionalMethodSignature (const GGS_optionalMethodSignature & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignature_2E_element UpEnumerator_optionalMethodSignature::current (LOCATION_ARGS) const {
  const cCollectionElement_optionalMethodSignature * p = (const cCollectionElement_optionalMethodSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_optionalMethodSignature::current_mInputArgument (LOCATION_ARGS) const {
  const cCollectionElement_optionalMethodSignature * p = (const cCollectionElement_optionalMethodSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
  return p->mObject.mProperty_mInputArgument ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_optionalMethodSignature::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_optionalMethodSignature * p = (const cCollectionElement_optionalMethodSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
  return p->mObject.mProperty_mFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_optionalMethodSignature::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_optionalMethodSignature * p = (const cCollectionElement_optionalMethodSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
  return p->mObject.mProperty_mFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_optionalMethodSignature::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_optionalMethodSignature * p = (const cCollectionElement_optionalMethodSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_optionalMethodSignature) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}




//--------------------------------------------------------------------------------------------------
//     @optionalMethodSignature generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalMethodSignature ("optionalMethodSignature",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_optionalMethodSignature::staticTypeDescriptor (void) const {
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
//
//Class for element of '@formalParameterSignature' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_formalParameterSignature : public cCollectionElement {
  public: GGS_formalParameterSignature_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_formalParameterSignature (const GGS_lstring & in_mFormalSelector,
                                                       const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                       const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                       const GGS_string & in_mFormalArgumentName
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_formalParameterSignature (const GGS_formalParameterSignature_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_formalParameterSignature::cCollectionElement_formalParameterSignature (const GGS_lstring & in_mFormalSelector,
                                                                                          const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                          const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                                                          const GGS_string & in_mFormalArgumentName
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mFormalArgumentType, in_mFormalArgumentPassingMode, in_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_formalParameterSignature::cCollectionElement_formalParameterSignature (const GGS_formalParameterSignature_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalSelector, inElement.mProperty_mFormalArgumentType, inElement.mProperty_mFormalArgumentPassingMode, inElement.mProperty_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_formalParameterSignature::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_formalParameterSignature::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_formalParameterSignature (mObject.mProperty_mFormalSelector, mObject.mProperty_mFormalArgumentType, mObject.mProperty_mFormalArgumentPassingMode, mObject.mProperty_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_formalParameterSignature::description (String & ioString, const int32_t inIndentation) const {
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
  ioString.appendCString ("mFormalArgumentPassingMode" ":") ;
  mObject.mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentName" ":") ;
  mObject.mProperty_mFormalArgumentName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature::GGS_formalParameterSignature (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature::GGS_formalParameterSignature (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_formalParameterSignature::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_formalParameterSignature (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_formalParameterSignature::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_formalParameterSignature (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterSignature::enterElement (const GGS_formalParameterSignature_2E_element & inValue,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_formalParameterSignature (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_formalParameterSignature::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                     const GGS_unifiedTypeMapEntry & inOperand1,
                                                                                     const GGS_formalArgumentPassingModeAST & inOperand2,
                                                                                     const GGS_string & inOperand3
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_formalParameterSignature result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GGS_formalParameterSignature (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_formalParameterSignature::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterSignature::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GGS_lstring & in_mFormalSelector,
                                                              const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                              const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                              const GGS_string & in_mFormalArgumentName
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterSignature * p = nullptr ;
  macroMyNew (p, cCollectionElement_formalParameterSignature (in_mFormalSelector,
                                                              in_mFormalArgumentType,
                                                              in_mFormalArgumentPassingMode,
                                                              in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterSignature::addAssign_operation (const GGS_lstring & inOperand0,
                                                        const GGS_unifiedTypeMapEntry & inOperand1,
                                                        const GGS_formalArgumentPassingModeAST & inOperand2,
                                                        const GGS_string & inOperand3
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_formalParameterSignature (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterSignature::setter_append (const GGS_lstring inOperand0,
                                                  const GGS_unifiedTypeMapEntry inOperand1,
                                                  const GGS_formalArgumentPassingModeAST inOperand2,
                                                  const GGS_string inOperand3,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_formalParameterSignature (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
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
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_formalParameterSignature (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
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
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
      outOperand0 = p->mObject.mProperty_mFormalSelector ;
      outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
      outOperand2 = p->mObject.mProperty_mFormalArgumentPassingMode ;
      outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterSignature::setter_popFirst (GGS_lstring & outOperand0,
                                                    GGS_unifiedTypeMapEntry & outOperand1,
                                                    GGS_formalArgumentPassingModeAST & outOperand2,
                                                    GGS_string & outOperand3,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterSignature::setter_popLast (GGS_lstring & outOperand0,
                                                   GGS_unifiedTypeMapEntry & outOperand1,
                                                   GGS_formalArgumentPassingModeAST & outOperand2,
                                                   GGS_string & outOperand3,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterSignature::method_first (GGS_lstring & outOperand0,
                                                 GGS_unifiedTypeMapEntry & outOperand1,
                                                 GGS_formalArgumentPassingModeAST & outOperand2,
                                                 GGS_string & outOperand3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterSignature::method_last (GGS_lstring & outOperand0,
                                                GGS_unifiedTypeMapEntry & outOperand1,
                                                GGS_formalArgumentPassingModeAST & outOperand2,
                                                GGS_string & outOperand3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_formalParameterSignature::add_operation (const GGS_formalParameterSignature & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_formalParameterSignature result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_formalParameterSignature::getter_subListWithRange (const GGS_range & inRange,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_formalParameterSignature result = GGS_formalParameterSignature::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_formalParameterSignature::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_formalParameterSignature result = GGS_formalParameterSignature::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_formalParameterSignature::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_formalParameterSignature result = GGS_formalParameterSignature::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterSignature::plusAssign_operation (const GGS_formalParameterSignature inOperand,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterSignature::setter_setMFormalSelectorAtIndex (GGS_lstring inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalSelector = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_formalParameterSignature::getter_mFormalSelectorAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    result = p->mObject.mProperty_mFormalSelector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterSignature::setter_setMFormalArgumentTypeAtIndex (GGS_unifiedTypeMapEntry inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_formalParameterSignature::getter_mFormalArgumentTypeAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) attributes.ptr () ;
  GGS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    result = p->mObject.mProperty_mFormalArgumentType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterSignature::setter_setMFormalArgumentPassingModeAtIndex (GGS_formalArgumentPassingModeAST inOperand,
                                                                                GGS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentPassingMode = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalArgumentPassingModeAST GGS_formalParameterSignature::getter_mFormalArgumentPassingModeAtIndex (const GGS_uint & inIndex,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) attributes.ptr () ;
  GGS_formalArgumentPassingModeAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    result = p->mObject.mProperty_mFormalArgumentPassingMode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterSignature::setter_setMFormalArgumentNameAtIndex (GGS_string inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_formalParameterSignature::getter_mFormalArgumentNameAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Enumerator for @formalParameterSignature
//--------------------------------------------------------------------------------------------------

cEnumerator_formalParameterSignature::cEnumerator_formalParameterSignature (const GGS_formalParameterSignature & inEnumeratedObject,
                                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature_2E_element cEnumerator_formalParameterSignature::current (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterSignature * p = (const cCollectionElement_formalParameterSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_formalParameterSignature::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterSignature * p = (const cCollectionElement_formalParameterSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
  return p->mObject.mProperty_mFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry cEnumerator_formalParameterSignature::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterSignature * p = (const cCollectionElement_formalParameterSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
  return p->mObject.mProperty_mFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalArgumentPassingModeAST cEnumerator_formalParameterSignature::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterSignature * p = (const cCollectionElement_formalParameterSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
  return p->mObject.mProperty_mFormalArgumentPassingMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_formalParameterSignature::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterSignature * p = (const cCollectionElement_formalParameterSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @formalParameterSignature
//--------------------------------------------------------------------------------------------------

DownEnumerator_formalParameterSignature::DownEnumerator_formalParameterSignature (const GGS_formalParameterSignature & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature_2E_element DownEnumerator_formalParameterSignature::current (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterSignature * p = (const cCollectionElement_formalParameterSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_formalParameterSignature::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterSignature * p = (const cCollectionElement_formalParameterSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
  return p->mObject.mProperty_mFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_formalParameterSignature::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterSignature * p = (const cCollectionElement_formalParameterSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
  return p->mObject.mProperty_mFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalArgumentPassingModeAST DownEnumerator_formalParameterSignature::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterSignature * p = (const cCollectionElement_formalParameterSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
  return p->mObject.mProperty_mFormalArgumentPassingMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_formalParameterSignature::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterSignature * p = (const cCollectionElement_formalParameterSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @formalParameterSignature
//--------------------------------------------------------------------------------------------------

UpEnumerator_formalParameterSignature::UpEnumerator_formalParameterSignature (const GGS_formalParameterSignature & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature_2E_element UpEnumerator_formalParameterSignature::current (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterSignature * p = (const cCollectionElement_formalParameterSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_formalParameterSignature::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterSignature * p = (const cCollectionElement_formalParameterSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
  return p->mObject.mProperty_mFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_formalParameterSignature::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterSignature * p = (const cCollectionElement_formalParameterSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
  return p->mObject.mProperty_mFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalArgumentPassingModeAST UpEnumerator_formalParameterSignature::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterSignature * p = (const cCollectionElement_formalParameterSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
  return p->mObject.mProperty_mFormalArgumentPassingMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_formalParameterSignature::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterSignature * p = (const cCollectionElement_formalParameterSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}




//--------------------------------------------------------------------------------------------------
//     @formalParameterSignature generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalParameterSignature ("formalParameterSignature",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_formalParameterSignature::staticTypeDescriptor (void) const {
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
  #ifdef NEW_ITERATOR
    UpEnumerator_typedPropertyList enumerator_8220 (temp_0) ;
  #else
    cEnumerator_typedPropertyList enumerator_8220 (temp_0, EnumerationOrder::Up) ;
  #endif
  while (enumerator_8220.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::equal, enumerator_8220.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("semanticsTypes.galgas", 213)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        result_result.plusAssign_operation(GGS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("semanticsTypes.galgas", 214)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = enumerator_8220.current (HERE).readProperty_hasSelector ().boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            result_result.plusAssign_operation(enumerator_8220.current (HERE).readProperty_name ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("semanticsTypes.galgas", 216)) ;
          }
        }
      }
    }
    enumerator_8220.gotoNextObject () ;
  }
//---
  return result_result ;
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
    s.appendCString ("method @AccessControl.protectedAccess invoked with an invalid enum value") ;
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
    s.appendCString ("method @AccessControl.protectedSetAccess invoked with an invalid enum value") ;
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
    s.appendCString ("method @AccessControl.privateAccess invoked with an invalid enum value") ;
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
    s.appendCString ("method @AccessControl.privateSetAccess invoked with an invalid enum value") ;
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
    s.appendCString ("method @AccessControl.fileprivateAccess invoked with an invalid enum value") ;
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
    s.appendCString ("method @AccessControl.fileprivateSetAccess invoked with an invalid enum value") ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl ("AccessControl",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_AccessControl::staticTypeDescriptor (void) const {
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

cMapElement_constantIndexMap::cMapElement_constantIndexMap (const GGS_constantIndexMap_2E_element & inValue
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mIndex (inValue.mProperty_mIndex),
mProperty_mAssociatedTypeList (inValue.mProperty_mAssociatedTypeList) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_constantIndexMap::cMapElement_constantIndexMap (const GGS_lstring & inKey,
                                                            const GGS_uint & in_mIndex,
                                                            const GGS_associatedValueDescriptorList & in_mAssociatedTypeList
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIndex (in_mIndex),
mProperty_mAssociatedTypeList (in_mAssociatedTypeList) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_constantIndexMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_constantIndexMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_constantIndexMap (mProperty_lkey, mProperty_mIndex, mProperty_mAssociatedTypeList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_constantIndexMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIndex" ":") ;
  mProperty_mIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAssociatedTypeList" ":") ;
  mProperty_mAssociatedTypeList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_constantIndexMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_constantIndexMap * operand = (cMapElement_constantIndexMap *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mIndex.objectCompare (operand->mProperty_mIndex) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mAssociatedTypeList.objectCompare (operand->mProperty_mAssociatedTypeList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap::GGS_constantIndexMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap::GGS_constantIndexMap (const GGS_constantIndexMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap & GGS_constantIndexMap::operator = (const GGS_constantIndexMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap GGS_constantIndexMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_constantIndexMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap GGS_constantIndexMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_constantIndexMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap_2E_element_3F_ GGS_constantIndexMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_constantIndexMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_constantIndexMap * p = (cMapElement_constantIndexMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_constantIndexMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_constantIndexMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mIndex = p->mProperty_mIndex ;
      element.mProperty_mAssociatedTypeList = p->mProperty_mAssociatedTypeList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap GGS_constantIndexMap::class_func_mapWithMapToOverride (const GGS_constantIndexMap & inMapToOverride
                                                                            COMMA_LOCATION_ARGS) {
  GGS_constantIndexMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap GGS_constantIndexMap::getter_overriddenMap (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_constantIndexMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantIndexMap::enterElement (const GGS_constantIndexMap_2E_element & inValue,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_constantIndexMap * p = nullptr ;
  macroMyNew (p, cMapElement_constantIndexMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@constantIndexMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantIndexMap::addAssign_operation (const GGS_lstring & inKey,
                                                const GGS_uint & inArgument0,
                                                const GGS_associatedValueDescriptorList & inArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_constantIndexMap * p = nullptr ;
  macroMyNew (p, cMapElement_constantIndexMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@constantIndexMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap GGS_constantIndexMap::add_operation (const GGS_constantIndexMap & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_constantIndexMap result = *this ;
  cEnumerator_constantIndexMap enumerator (inOperand, EnumerationOrder::Up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mIndex (HERE), enumerator.current_mAssociatedTypeList (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantIndexMap::setter_insertKey (GGS_lstring inKey,
                                             GGS_uint inArgument0,
                                             GGS_associatedValueDescriptorList inArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_constantIndexMap * p = nullptr ;
  macroMyNew (p, cMapElement_constantIndexMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' constant is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_constantIndexMap_searchKey = "the '%K' constant is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_constantIndexMap::method_searchKey (GGS_lstring inKey,
                                             GGS_uint & outArgument0,
                                             GGS_associatedValueDescriptorList & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kSearchErrorMessage_constantIndexMap_searchKey
                                                                                                 COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_constantIndexMap) ;
    outArgument0 = p->mProperty_mIndex ;
    outArgument1 = p->mProperty_mAssociatedTypeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_constantIndexMap::getter_mIndexForKey (const GGS_string & inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_constantIndexMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptorList GGS_constantIndexMap::getter_mAssociatedTypeListForKey (const GGS_string & inKey,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) attributes ;
  GGS_associatedValueDescriptorList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_constantIndexMap) ;
    result = p->mProperty_mAssociatedTypeList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantIndexMap::setter_setMIndexForKey (GGS_uint inAttributeValue,
                                                   GGS_string inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_constantIndexMap * p = (cMapElement_constantIndexMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_constantIndexMap) ;
    p->mProperty_mIndex = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_constantIndexMap::setter_setMAssociatedTypeListForKey (GGS_associatedValueDescriptorList inAttributeValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_constantIndexMap * p = (cMapElement_constantIndexMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_constantIndexMap) ;
    p->mProperty_mAssociatedTypeList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_constantIndexMap * GGS_constantIndexMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                        const GGS_string & inKey
                                                                                        COMMA_LOCATION_ARGS) {
  cMapElement_constantIndexMap * result = (cMapElement_constantIndexMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_constantIndexMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enumerator for @constantIndexMap
//--------------------------------------------------------------------------------------------------

cEnumerator_constantIndexMap::cEnumerator_constantIndexMap (const GGS_constantIndexMap & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap_2E_element cEnumerator_constantIndexMap::current (LOCATION_ARGS) const {
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantIndexMap) ;
  return GGS_constantIndexMap_2E_element (p->mProperty_lkey, p->mProperty_mIndex, p->mProperty_mAssociatedTypeList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_constantIndexMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_constantIndexMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantIndexMap) ;
  return p->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptorList cEnumerator_constantIndexMap::current_mAssociatedTypeList (LOCATION_ARGS) const {
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantIndexMap) ;
  return p->mProperty_mAssociatedTypeList ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @constantIndexMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_constantIndexMap::DownEnumerator_constantIndexMap (const GGS_constantIndexMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap_2E_element DownEnumerator_constantIndexMap::current (LOCATION_ARGS) const {
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantIndexMap) ;
  return GGS_constantIndexMap_2E_element (p->mProperty_lkey, p->mProperty_mIndex, p->mProperty_mAssociatedTypeList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_constantIndexMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_constantIndexMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantIndexMap) ;
  return p->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptorList DownEnumerator_constantIndexMap::current_mAssociatedTypeList (LOCATION_ARGS) const {
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantIndexMap) ;
  return p->mProperty_mAssociatedTypeList ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @constantIndexMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_constantIndexMap::UpEnumerator_constantIndexMap (const GGS_constantIndexMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap_2E_element UpEnumerator_constantIndexMap::current (LOCATION_ARGS) const {
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantIndexMap) ;
  return GGS_constantIndexMap_2E_element (p->mProperty_lkey, p->mProperty_mIndex, p->mProperty_mAssociatedTypeList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_constantIndexMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_constantIndexMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantIndexMap) ;
  return p->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptorList UpEnumerator_constantIndexMap::current_mAssociatedTypeList (LOCATION_ARGS) const {
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantIndexMap) ;
  return p->mProperty_mAssociatedTypeList ;
}


//--------------------------------------------------------------------------------------------------
//     @constantIndexMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantIndexMap ("constantIndexMap",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_constantIndexMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantIndexMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constantIndexMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constantIndexMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap GGS_constantIndexMap::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_constantIndexMap result ;
  const GGS_constantIndexMap * p = (const GGS_constantIndexMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constantIndexMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantIndexMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_internalRoutineMap::cMapElement_internalRoutineMap (const GGS_internalRoutineMap_2E_element & inValue
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mArgumentMap (inValue.mProperty_mArgumentMap) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_internalRoutineMap::cMapElement_internalRoutineMap (const GGS_lstring & inKey,
                                                                const GGS_routineArgumentMap & in_mArgumentMap
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mArgumentMap (in_mArgumentMap) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_internalRoutineMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_internalRoutineMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_internalRoutineMap (mProperty_lkey, mProperty_mArgumentMap COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_internalRoutineMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mArgumentMap" ":") ;
  mProperty_mArgumentMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap::GGS_internalRoutineMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap::GGS_internalRoutineMap (const GGS_internalRoutineMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap & GGS_internalRoutineMap::operator = (const GGS_internalRoutineMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap GGS_internalRoutineMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_internalRoutineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap GGS_internalRoutineMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_internalRoutineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap_2E_element_3F_ GGS_internalRoutineMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_internalRoutineMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_internalRoutineMap * p = (cMapElement_internalRoutineMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_internalRoutineMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_internalRoutineMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mArgumentMap = p->mProperty_mArgumentMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap GGS_internalRoutineMap::class_func_mapWithMapToOverride (const GGS_internalRoutineMap & inMapToOverride
                                                                                COMMA_LOCATION_ARGS) {
  GGS_internalRoutineMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap GGS_internalRoutineMap::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_internalRoutineMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_internalRoutineMap::enterElement (const GGS_internalRoutineMap_2E_element & inValue,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_internalRoutineMap * p = nullptr ;
  macroMyNew (p, cMapElement_internalRoutineMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@internalRoutineMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_internalRoutineMap::addAssign_operation (const GGS_lstring & inKey,
                                                  const GGS_routineArgumentMap & inArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_internalRoutineMap * p = nullptr ;
  macroMyNew (p, cMapElement_internalRoutineMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@internalRoutineMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap GGS_internalRoutineMap::add_operation (const GGS_internalRoutineMap & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_internalRoutineMap result = *this ;
  cEnumerator_internalRoutineMap enumerator (inOperand, EnumerationOrder::Up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mArgumentMap (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_internalRoutineMap::setter_insertKey (GGS_lstring inKey,
                                               GGS_routineArgumentMap inArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_internalRoutineMap * p = nullptr ;
  macroMyNew (p, cMapElement_internalRoutineMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' routine has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_internalRoutineMap_searchKey = "the '%K' routine is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_internalRoutineMap::method_searchKey (GGS_lstring inKey,
                                               GGS_routineArgumentMap & outArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_internalRoutineMap * p = (const cMapElement_internalRoutineMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_internalRoutineMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_internalRoutineMap) ;
    outArgument0 = p->mProperty_mArgumentMap ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_internalRoutineMap::setter_insertOrReplace (GGS_lstring inKey,
                                                     GGS_routineArgumentMap inArgument0
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  cMapElement_internalRoutineMap * p = nullptr ;
  macroMyNew (p, cMapElement_internalRoutineMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  performInsertOrReplace (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap GGS_internalRoutineMap::getter_mArgumentMapForKey (const GGS_string & inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_internalRoutineMap * p = (const cMapElement_internalRoutineMap *) attributes ;
  GGS_routineArgumentMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_internalRoutineMap) ;
    result = p->mProperty_mArgumentMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_internalRoutineMap::setter_setMArgumentMapForKey (GGS_routineArgumentMap inAttributeValue,
                                                           GGS_string inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_internalRoutineMap * p = (cMapElement_internalRoutineMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_internalRoutineMap) ;
    p->mProperty_mArgumentMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_internalRoutineMap * GGS_internalRoutineMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                            const GGS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) {
  cMapElement_internalRoutineMap * result = (cMapElement_internalRoutineMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_internalRoutineMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enumerator for @internalRoutineMap
//--------------------------------------------------------------------------------------------------

cEnumerator_internalRoutineMap::cEnumerator_internalRoutineMap (const GGS_internalRoutineMap & inEnumeratedObject,
                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap_2E_element cEnumerator_internalRoutineMap::current (LOCATION_ARGS) const {
  const cMapElement_internalRoutineMap * p = (const cMapElement_internalRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_internalRoutineMap) ;
  return GGS_internalRoutineMap_2E_element (p->mProperty_lkey, p->mProperty_mArgumentMap) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_internalRoutineMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap cEnumerator_internalRoutineMap::current_mArgumentMap (LOCATION_ARGS) const {
  const cMapElement_internalRoutineMap * p = (const cMapElement_internalRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_internalRoutineMap) ;
  return p->mProperty_mArgumentMap ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @internalRoutineMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_internalRoutineMap::DownEnumerator_internalRoutineMap (const GGS_internalRoutineMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap_2E_element DownEnumerator_internalRoutineMap::current (LOCATION_ARGS) const {
  const cMapElement_internalRoutineMap * p = (const cMapElement_internalRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_internalRoutineMap) ;
  return GGS_internalRoutineMap_2E_element (p->mProperty_lkey, p->mProperty_mArgumentMap) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_internalRoutineMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap DownEnumerator_internalRoutineMap::current_mArgumentMap (LOCATION_ARGS) const {
  const cMapElement_internalRoutineMap * p = (const cMapElement_internalRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_internalRoutineMap) ;
  return p->mProperty_mArgumentMap ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @internalRoutineMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_internalRoutineMap::UpEnumerator_internalRoutineMap (const GGS_internalRoutineMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap_2E_element UpEnumerator_internalRoutineMap::current (LOCATION_ARGS) const {
  const cMapElement_internalRoutineMap * p = (const cMapElement_internalRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_internalRoutineMap) ;
  return GGS_internalRoutineMap_2E_element (p->mProperty_lkey, p->mProperty_mArgumentMap) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_internalRoutineMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap UpEnumerator_internalRoutineMap::current_mArgumentMap (LOCATION_ARGS) const {
  const cMapElement_internalRoutineMap * p = (const cMapElement_internalRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_internalRoutineMap) ;
  return p->mProperty_mArgumentMap ;
}


//--------------------------------------------------------------------------------------------------
//     @internalRoutineMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_internalRoutineMap ("internalRoutineMap",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_internalRoutineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_internalRoutineMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_internalRoutineMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_internalRoutineMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap GGS_internalRoutineMap::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_internalRoutineMap result ;
  const GGS_internalRoutineMap * p = (const GGS_internalRoutineMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_internalRoutineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("internalRoutineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_routineArgumentMap::cMapElement_routineArgumentMap (const GGS_routineArgumentMap_2E_element & inValue
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mRoutineSignature (inValue.mProperty_mRoutineSignature),
mProperty_mIsFilePrivate (inValue.mProperty_mIsFilePrivate) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_routineArgumentMap::cMapElement_routineArgumentMap (const GGS_lstring & inKey,
                                                                const GGS_formalParameterSignature & in_mRoutineSignature,
                                                                const GGS_bool & in_mIsFilePrivate
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mRoutineSignature (in_mRoutineSignature),
mProperty_mIsFilePrivate (in_mIsFilePrivate) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_routineArgumentMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_routineArgumentMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_routineArgumentMap (mProperty_lkey, mProperty_mRoutineSignature, mProperty_mIsFilePrivate COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_routineArgumentMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRoutineSignature" ":") ;
  mProperty_mRoutineSignature.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsFilePrivate" ":") ;
  mProperty_mIsFilePrivate.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap::GGS_routineArgumentMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap::GGS_routineArgumentMap (const GGS_routineArgumentMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap & GGS_routineArgumentMap::operator = (const GGS_routineArgumentMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap GGS_routineArgumentMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_routineArgumentMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap GGS_routineArgumentMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_routineArgumentMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap_2E_element_3F_ GGS_routineArgumentMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineArgumentMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_routineArgumentMap * p = (cMapElement_routineArgumentMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_routineArgumentMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_routineArgumentMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mRoutineSignature = p->mProperty_mRoutineSignature ;
      element.mProperty_mIsFilePrivate = p->mProperty_mIsFilePrivate ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap GGS_routineArgumentMap::class_func_mapWithMapToOverride (const GGS_routineArgumentMap & inMapToOverride
                                                                                COMMA_LOCATION_ARGS) {
  GGS_routineArgumentMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap GGS_routineArgumentMap::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_routineArgumentMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap::enterElement (const GGS_routineArgumentMap_2E_element & inValue,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_routineArgumentMap * p = nullptr ;
  macroMyNew (p, cMapElement_routineArgumentMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@routineArgumentMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap::addAssign_operation (const GGS_lstring & inKey,
                                                  const GGS_formalParameterSignature & inArgument0,
                                                  const GGS_bool & inArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_routineArgumentMap * p = nullptr ;
  macroMyNew (p, cMapElement_routineArgumentMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@routineArgumentMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap GGS_routineArgumentMap::add_operation (const GGS_routineArgumentMap & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_routineArgumentMap result = *this ;
  cEnumerator_routineArgumentMap enumerator (inOperand, EnumerationOrder::Up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mRoutineSignature (HERE), enumerator.current_mIsFilePrivate (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap::setter_insertKey (GGS_lstring inKey,
                                               GGS_formalParameterSignature inArgument0,
                                               GGS_bool inArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_routineArgumentMap * p = nullptr ;
  macroMyNew (p, cMapElement_routineArgumentMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "-- internal error --" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_routineArgumentMap_searchKey = "-- internal error --" ;

//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap::method_searchKey (GGS_lstring inKey,
                                               GGS_formalParameterSignature & outArgument0,
                                               GGS_bool & outArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_routineArgumentMap * p = (const cMapElement_routineArgumentMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_routineArgumentMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_routineArgumentMap) ;
    outArgument0 = p->mProperty_mRoutineSignature ;
    outArgument1 = p->mProperty_mIsFilePrivate ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_routineArgumentMap::getter_mRoutineSignatureForKey (const GGS_string & inKey,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineArgumentMap * p = (const cMapElement_routineArgumentMap *) attributes ;
  GGS_formalParameterSignature result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineArgumentMap) ;
    result = p->mProperty_mRoutineSignature ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineArgumentMap::getter_mIsFilePrivateForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineArgumentMap * p = (const cMapElement_routineArgumentMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineArgumentMap) ;
    result = p->mProperty_mIsFilePrivate ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap::setter_setMRoutineSignatureForKey (GGS_formalParameterSignature inAttributeValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineArgumentMap * p = (cMapElement_routineArgumentMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineArgumentMap) ;
    p->mProperty_mRoutineSignature = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap::setter_setMIsFilePrivateForKey (GGS_bool inAttributeValue,
                                                             GGS_string inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineArgumentMap * p = (cMapElement_routineArgumentMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineArgumentMap) ;
    p->mProperty_mIsFilePrivate = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_routineArgumentMap * GGS_routineArgumentMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                            const GGS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) {
  cMapElement_routineArgumentMap * result = (cMapElement_routineArgumentMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_routineArgumentMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enumerator for @routineArgumentMap
//--------------------------------------------------------------------------------------------------

cEnumerator_routineArgumentMap::cEnumerator_routineArgumentMap (const GGS_routineArgumentMap & inEnumeratedObject,
                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap_2E_element cEnumerator_routineArgumentMap::current (LOCATION_ARGS) const {
  const cMapElement_routineArgumentMap * p = (const cMapElement_routineArgumentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineArgumentMap) ;
  return GGS_routineArgumentMap_2E_element (p->mProperty_lkey, p->mProperty_mRoutineSignature, p->mProperty_mIsFilePrivate) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_routineArgumentMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature cEnumerator_routineArgumentMap::current_mRoutineSignature (LOCATION_ARGS) const {
  const cMapElement_routineArgumentMap * p = (const cMapElement_routineArgumentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineArgumentMap) ;
  return p->mProperty_mRoutineSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_routineArgumentMap::current_mIsFilePrivate (LOCATION_ARGS) const {
  const cMapElement_routineArgumentMap * p = (const cMapElement_routineArgumentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineArgumentMap) ;
  return p->mProperty_mIsFilePrivate ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @routineArgumentMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_routineArgumentMap::DownEnumerator_routineArgumentMap (const GGS_routineArgumentMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap_2E_element DownEnumerator_routineArgumentMap::current (LOCATION_ARGS) const {
  const cMapElement_routineArgumentMap * p = (const cMapElement_routineArgumentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineArgumentMap) ;
  return GGS_routineArgumentMap_2E_element (p->mProperty_lkey, p->mProperty_mRoutineSignature, p->mProperty_mIsFilePrivate) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_routineArgumentMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature DownEnumerator_routineArgumentMap::current_mRoutineSignature (LOCATION_ARGS) const {
  const cMapElement_routineArgumentMap * p = (const cMapElement_routineArgumentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineArgumentMap) ;
  return p->mProperty_mRoutineSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_routineArgumentMap::current_mIsFilePrivate (LOCATION_ARGS) const {
  const cMapElement_routineArgumentMap * p = (const cMapElement_routineArgumentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineArgumentMap) ;
  return p->mProperty_mIsFilePrivate ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @routineArgumentMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_routineArgumentMap::UpEnumerator_routineArgumentMap (const GGS_routineArgumentMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap_2E_element UpEnumerator_routineArgumentMap::current (LOCATION_ARGS) const {
  const cMapElement_routineArgumentMap * p = (const cMapElement_routineArgumentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineArgumentMap) ;
  return GGS_routineArgumentMap_2E_element (p->mProperty_lkey, p->mProperty_mRoutineSignature, p->mProperty_mIsFilePrivate) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_routineArgumentMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature UpEnumerator_routineArgumentMap::current_mRoutineSignature (LOCATION_ARGS) const {
  const cMapElement_routineArgumentMap * p = (const cMapElement_routineArgumentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineArgumentMap) ;
  return p->mProperty_mRoutineSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_routineArgumentMap::current_mIsFilePrivate (LOCATION_ARGS) const {
  const cMapElement_routineArgumentMap * p = (const cMapElement_routineArgumentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineArgumentMap) ;
  return p->mProperty_mIsFilePrivate ;
}


//--------------------------------------------------------------------------------------------------
//     @routineArgumentMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineArgumentMap ("routineArgumentMap",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_routineArgumentMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineArgumentMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineArgumentMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineArgumentMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap GGS_routineArgumentMap::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_routineArgumentMap result ;
  const GGS_routineArgumentMap * p = (const GGS_routineArgumentMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineArgumentMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineArgumentMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@acceptableParameterList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_acceptableParameterList : public cCollectionElement {
  public: GGS_acceptableParameterList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_acceptableParameterList (const GGS_formalParameterSignature & in_mRoutineSignature,
                                                      const GGS_bool & in_mIsFilePrivate
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_acceptableParameterList (const GGS_acceptableParameterList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_acceptableParameterList::cCollectionElement_acceptableParameterList (const GGS_formalParameterSignature & in_mRoutineSignature,
                                                                                        const GGS_bool & in_mIsFilePrivate
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRoutineSignature, in_mIsFilePrivate) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_acceptableParameterList::cCollectionElement_acceptableParameterList (const GGS_acceptableParameterList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mRoutineSignature, inElement.mProperty_mIsFilePrivate) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_acceptableParameterList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_acceptableParameterList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_acceptableParameterList (mObject.mProperty_mRoutineSignature, mObject.mProperty_mIsFilePrivate COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_acceptableParameterList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRoutineSignature" ":") ;
  mObject.mProperty_mRoutineSignature.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsFilePrivate" ":") ;
  mObject.mProperty_mIsFilePrivate.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList::GGS_acceptableParameterList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList::GGS_acceptableParameterList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList GGS_acceptableParameterList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_acceptableParameterList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList GGS_acceptableParameterList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_acceptableParameterList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::enterElement (const GGS_acceptableParameterList_2E_element & inValue,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_acceptableParameterList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList GGS_acceptableParameterList::class_func_listWithValue (const GGS_formalParameterSignature & inOperand0,
                                                                                   const GGS_bool & inOperand1
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_acceptableParameterList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_acceptableParameterList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_acceptableParameterList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GGS_formalParameterSignature & in_mRoutineSignature,
                                                             const GGS_bool & in_mIsFilePrivate
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_acceptableParameterList * p = nullptr ;
  macroMyNew (p, cCollectionElement_acceptableParameterList (in_mRoutineSignature,
                                                             in_mIsFilePrivate COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::addAssign_operation (const GGS_formalParameterSignature & inOperand0,
                                                       const GGS_bool & inOperand1
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_acceptableParameterList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::setter_append (const GGS_formalParameterSignature inOperand0,
                                                 const GGS_bool inOperand1,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_acceptableParameterList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::setter_insertAtIndex (const GGS_formalParameterSignature inOperand0,
                                                        const GGS_bool inOperand1,
                                                        const GGS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_acceptableParameterList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::setter_removeAtIndex (GGS_formalParameterSignature & outOperand0,
                                                        GGS_bool & outOperand1,
                                                        const GGS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_acceptableParameterList * p = (cCollectionElement_acceptableParameterList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_acceptableParameterList) ;
      outOperand0 = p->mObject.mProperty_mRoutineSignature ;
      outOperand1 = p->mObject.mProperty_mIsFilePrivate ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::setter_popFirst (GGS_formalParameterSignature & outOperand0,
                                                   GGS_bool & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_acceptableParameterList * p = (cCollectionElement_acceptableParameterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_acceptableParameterList) ;
    outOperand0 = p->mObject.mProperty_mRoutineSignature ;
    outOperand1 = p->mObject.mProperty_mIsFilePrivate ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::setter_popLast (GGS_formalParameterSignature & outOperand0,
                                                  GGS_bool & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_acceptableParameterList * p = (cCollectionElement_acceptableParameterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_acceptableParameterList) ;
    outOperand0 = p->mObject.mProperty_mRoutineSignature ;
    outOperand1 = p->mObject.mProperty_mIsFilePrivate ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::method_first (GGS_formalParameterSignature & outOperand0,
                                                GGS_bool & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_acceptableParameterList * p = (cCollectionElement_acceptableParameterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_acceptableParameterList) ;
    outOperand0 = p->mObject.mProperty_mRoutineSignature ;
    outOperand1 = p->mObject.mProperty_mIsFilePrivate ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::method_last (GGS_formalParameterSignature & outOperand0,
                                               GGS_bool & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_acceptableParameterList * p = (cCollectionElement_acceptableParameterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_acceptableParameterList) ;
    outOperand0 = p->mObject.mProperty_mRoutineSignature ;
    outOperand1 = p->mObject.mProperty_mIsFilePrivate ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList GGS_acceptableParameterList::add_operation (const GGS_acceptableParameterList & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_acceptableParameterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList GGS_acceptableParameterList::getter_subListWithRange (const GGS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_acceptableParameterList result = GGS_acceptableParameterList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList GGS_acceptableParameterList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_acceptableParameterList result = GGS_acceptableParameterList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList GGS_acceptableParameterList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_acceptableParameterList result = GGS_acceptableParameterList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::plusAssign_operation (const GGS_acceptableParameterList inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::setter_setMRoutineSignatureAtIndex (GGS_formalParameterSignature inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_acceptableParameterList * p = (cCollectionElement_acceptableParameterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_acceptableParameterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRoutineSignature = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_acceptableParameterList::getter_mRoutineSignatureAtIndex (const GGS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_acceptableParameterList * p = (cCollectionElement_acceptableParameterList *) attributes.ptr () ;
  GGS_formalParameterSignature result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_acceptableParameterList) ;
    result = p->mObject.mProperty_mRoutineSignature ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::setter_setMIsFilePrivateAtIndex (GGS_bool inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_acceptableParameterList * p = (cCollectionElement_acceptableParameterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_acceptableParameterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIsFilePrivate = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_acceptableParameterList::getter_mIsFilePrivateAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_acceptableParameterList * p = (cCollectionElement_acceptableParameterList *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_acceptableParameterList) ;
    result = p->mObject.mProperty_mIsFilePrivate ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Enumerator for @acceptableParameterList
//--------------------------------------------------------------------------------------------------

cEnumerator_acceptableParameterList::cEnumerator_acceptableParameterList (const GGS_acceptableParameterList & inEnumeratedObject,
                                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList_2E_element cEnumerator_acceptableParameterList::current (LOCATION_ARGS) const {
  const cCollectionElement_acceptableParameterList * p = (const cCollectionElement_acceptableParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_acceptableParameterList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature cEnumerator_acceptableParameterList::current_mRoutineSignature (LOCATION_ARGS) const {
  const cCollectionElement_acceptableParameterList * p = (const cCollectionElement_acceptableParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_acceptableParameterList) ;
  return p->mObject.mProperty_mRoutineSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_acceptableParameterList::current_mIsFilePrivate (LOCATION_ARGS) const {
  const cCollectionElement_acceptableParameterList * p = (const cCollectionElement_acceptableParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_acceptableParameterList) ;
  return p->mObject.mProperty_mIsFilePrivate ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @acceptableParameterList
//--------------------------------------------------------------------------------------------------

DownEnumerator_acceptableParameterList::DownEnumerator_acceptableParameterList (const GGS_acceptableParameterList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList_2E_element DownEnumerator_acceptableParameterList::current (LOCATION_ARGS) const {
  const cCollectionElement_acceptableParameterList * p = (const cCollectionElement_acceptableParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_acceptableParameterList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature DownEnumerator_acceptableParameterList::current_mRoutineSignature (LOCATION_ARGS) const {
  const cCollectionElement_acceptableParameterList * p = (const cCollectionElement_acceptableParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_acceptableParameterList) ;
  return p->mObject.mProperty_mRoutineSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_acceptableParameterList::current_mIsFilePrivate (LOCATION_ARGS) const {
  const cCollectionElement_acceptableParameterList * p = (const cCollectionElement_acceptableParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_acceptableParameterList) ;
  return p->mObject.mProperty_mIsFilePrivate ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @acceptableParameterList
//--------------------------------------------------------------------------------------------------

UpEnumerator_acceptableParameterList::UpEnumerator_acceptableParameterList (const GGS_acceptableParameterList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList_2E_element UpEnumerator_acceptableParameterList::current (LOCATION_ARGS) const {
  const cCollectionElement_acceptableParameterList * p = (const cCollectionElement_acceptableParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_acceptableParameterList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature UpEnumerator_acceptableParameterList::current_mRoutineSignature (LOCATION_ARGS) const {
  const cCollectionElement_acceptableParameterList * p = (const cCollectionElement_acceptableParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_acceptableParameterList) ;
  return p->mObject.mProperty_mRoutineSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_acceptableParameterList::current_mIsFilePrivate (LOCATION_ARGS) const {
  const cCollectionElement_acceptableParameterList * p = (const cCollectionElement_acceptableParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_acceptableParameterList) ;
  return p->mObject.mProperty_mIsFilePrivate ;
}




//--------------------------------------------------------------------------------------------------
//     @acceptableParameterList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_acceptableParameterList ("acceptableParameterList",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_acceptableParameterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_acceptableParameterList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_acceptableParameterList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_acceptableParameterList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList GGS_acceptableParameterList::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_acceptableParameterList result ;
  const GGS_acceptableParameterList * p = (const GGS_acceptableParameterList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_acceptableParameterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("acceptableParameterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@location sourceFile'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_sourceFile (const GGS_location & inObject,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_location temp_1 = inObject ;
    test_0 = temp_1.getter_isNowhere (SOURCE_FILE ("semanticContext.galgas", 26)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_string ("SOURCE_FILE (\"\", 0)") ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_location temp_2 = inObject ;
    const GGS_location temp_3 = inObject ;
    result_result = GGS_string ("SOURCE_FILE (").add_operation (temp_2.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 29)).getter_lastPathComponent (SOURCE_FILE ("semanticContext.galgas", 29)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticContext.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 29)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 29)).add_operation (temp_3.getter_startLine (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 29)).getter_string (SOURCE_FILE ("semanticContext.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 29)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 29)) ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@location commaSourceFile'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_commaSourceFile (const GGS_location & inObject,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_location temp_0 = inObject ;
  result_result = GGS_string (" COMMA_").add_operation (extensionGetter_sourceFile (temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 36)) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInstructionInSemanticContext (cPtr_semanticInstructionAST * inObject,
                                                            GGS_unifiedTypeMap & io_ioTypeMap,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticInstructionAST) ;
    inObject->method_enterInstructionInSemanticContext (io_ioTypeMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterExpressionInSemanticContext (cPtr_semanticExpressionAST * inObject,
                                                           GGS_unifiedTypeMap & io_ioTypeMap,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticExpressionAST) ;
    inObject->method_enterExpressionInSemanticContext (io_ioTypeMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticInstructionListAST enterInstructionListInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterInstructionListInSemanticContext (const GGS_semanticInstructionListAST inObject,
                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_semanticInstructionListAST temp_0 = inObject ;
  #ifdef NEW_ITERATOR
    UpEnumerator_semanticInstructionListAST enumerator_2872 (temp_0) ;
  #else
    cEnumerator_semanticInstructionListAST enumerator_2872 (temp_0, EnumerationOrder::Up) ;
  #endif
  while (enumerator_2872.hasCurrentObject ()) {
    callExtensionMethod_enterInstructionInSemanticContext ((cPtr_semanticInstructionAST *) enumerator_2872.current_mInstruction (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 65)) ;
    enumerator_2872.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------

cMapElement_grammarLabelMap::cMapElement_grammarLabelMap (const GGS_grammarLabelMap_2E_element & inValue
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mLabelSignature (inValue.mProperty_mLabelSignature) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_grammarLabelMap::cMapElement_grammarLabelMap (const GGS_lstring & inKey,
                                                          const GGS_formalParameterSignature & in_mLabelSignature
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mLabelSignature (in_mLabelSignature) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_grammarLabelMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_grammarLabelMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_grammarLabelMap (mProperty_lkey, mProperty_mLabelSignature COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_grammarLabelMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLabelSignature" ":") ;
  mProperty_mLabelSignature.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap::GGS_grammarLabelMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap::GGS_grammarLabelMap (const GGS_grammarLabelMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap & GGS_grammarLabelMap::operator = (const GGS_grammarLabelMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap GGS_grammarLabelMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_grammarLabelMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap GGS_grammarLabelMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_grammarLabelMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap_2E_element_3F_ GGS_grammarLabelMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_grammarLabelMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_grammarLabelMap * p = (cMapElement_grammarLabelMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_grammarLabelMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_grammarLabelMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mLabelSignature = p->mProperty_mLabelSignature ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap GGS_grammarLabelMap::class_func_mapWithMapToOverride (const GGS_grammarLabelMap & inMapToOverride
                                                                          COMMA_LOCATION_ARGS) {
  GGS_grammarLabelMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap GGS_grammarLabelMap::getter_overriddenMap (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_grammarLabelMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarLabelMap::enterElement (const GGS_grammarLabelMap_2E_element & inValue,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  cMapElement_grammarLabelMap * p = nullptr ;
  macroMyNew (p, cMapElement_grammarLabelMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@grammarLabelMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarLabelMap::addAssign_operation (const GGS_lstring & inKey,
                                               const GGS_formalParameterSignature & inArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_grammarLabelMap * p = nullptr ;
  macroMyNew (p, cMapElement_grammarLabelMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@grammarLabelMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap GGS_grammarLabelMap::add_operation (const GGS_grammarLabelMap & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_grammarLabelMap result = *this ;
  cEnumerator_grammarLabelMap enumerator (inOperand, EnumerationOrder::Up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mLabelSignature (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarLabelMap::setter_insertKey (GGS_lstring inKey,
                                            GGS_formalParameterSignature inArgument0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_grammarLabelMap * p = nullptr ;
  macroMyNew (p, cMapElement_grammarLabelMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' grammar label has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_grammarLabelMap_searchKey = "the '%K' grammar label is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_grammarLabelMap::method_searchKey (GGS_lstring inKey,
                                            GGS_formalParameterSignature & outArgument0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  const cMapElement_grammarLabelMap * p = (const cMapElement_grammarLabelMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_grammarLabelMap_searchKey
                                                                                               COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_grammarLabelMap) ;
    outArgument0 = p->mProperty_mLabelSignature ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_grammarLabelMap::getter_mLabelSignatureForKey (const GGS_string & inKey,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_grammarLabelMap * p = (const cMapElement_grammarLabelMap *) attributes ;
  GGS_formalParameterSignature result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_grammarLabelMap) ;
    result = p->mProperty_mLabelSignature ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarLabelMap::setter_setMLabelSignatureForKey (GGS_formalParameterSignature inAttributeValue,
                                                           GGS_string inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_grammarLabelMap * p = (cMapElement_grammarLabelMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_grammarLabelMap) ;
    p->mProperty_mLabelSignature = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_grammarLabelMap * GGS_grammarLabelMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                      const GGS_string & inKey
                                                                                      COMMA_LOCATION_ARGS) {
  cMapElement_grammarLabelMap * result = (cMapElement_grammarLabelMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_grammarLabelMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enumerator for @grammarLabelMap
//--------------------------------------------------------------------------------------------------

cEnumerator_grammarLabelMap::cEnumerator_grammarLabelMap (const GGS_grammarLabelMap & inEnumeratedObject,
                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap_2E_element cEnumerator_grammarLabelMap::current (LOCATION_ARGS) const {
  const cMapElement_grammarLabelMap * p = (const cMapElement_grammarLabelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarLabelMap) ;
  return GGS_grammarLabelMap_2E_element (p->mProperty_lkey, p->mProperty_mLabelSignature) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_grammarLabelMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature cEnumerator_grammarLabelMap::current_mLabelSignature (LOCATION_ARGS) const {
  const cMapElement_grammarLabelMap * p = (const cMapElement_grammarLabelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarLabelMap) ;
  return p->mProperty_mLabelSignature ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @grammarLabelMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_grammarLabelMap::DownEnumerator_grammarLabelMap (const GGS_grammarLabelMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap_2E_element DownEnumerator_grammarLabelMap::current (LOCATION_ARGS) const {
  const cMapElement_grammarLabelMap * p = (const cMapElement_grammarLabelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarLabelMap) ;
  return GGS_grammarLabelMap_2E_element (p->mProperty_lkey, p->mProperty_mLabelSignature) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_grammarLabelMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature DownEnumerator_grammarLabelMap::current_mLabelSignature (LOCATION_ARGS) const {
  const cMapElement_grammarLabelMap * p = (const cMapElement_grammarLabelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarLabelMap) ;
  return p->mProperty_mLabelSignature ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @grammarLabelMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_grammarLabelMap::UpEnumerator_grammarLabelMap (const GGS_grammarLabelMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap_2E_element UpEnumerator_grammarLabelMap::current (LOCATION_ARGS) const {
  const cMapElement_grammarLabelMap * p = (const cMapElement_grammarLabelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarLabelMap) ;
  return GGS_grammarLabelMap_2E_element (p->mProperty_lkey, p->mProperty_mLabelSignature) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_grammarLabelMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature UpEnumerator_grammarLabelMap::current_mLabelSignature (LOCATION_ARGS) const {
  const cMapElement_grammarLabelMap * p = (const cMapElement_grammarLabelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarLabelMap) ;
  return p->mProperty_mLabelSignature ;
}


//--------------------------------------------------------------------------------------------------
//     @grammarLabelMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarLabelMap ("grammarLabelMap",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_grammarLabelMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarLabelMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarLabelMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarLabelMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap GGS_grammarLabelMap::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_grammarLabelMap result ;
  const GGS_grammarLabelMap * p = (const GGS_grammarLabelMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarLabelMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarLabelMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_grammarMap::cMapElement_grammarMap (const GGS_grammarMap_2E_element & inValue
                                                COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mLabelMap (inValue.mProperty_mLabelMap),
mProperty_mHasIndexing (inValue.mProperty_mHasIndexing),
mProperty_mHasTranslateFeature (inValue.mProperty_mHasTranslateFeature) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_grammarMap::cMapElement_grammarMap (const GGS_lstring & inKey,
                                                const GGS_grammarLabelMap & in_mLabelMap,
                                                const GGS_bool & in_mHasIndexing,
                                                const GGS_bool & in_mHasTranslateFeature
                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mLabelMap (in_mLabelMap),
mProperty_mHasIndexing (in_mHasIndexing),
mProperty_mHasTranslateFeature (in_mHasTranslateFeature) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_grammarMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_grammarMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_grammarMap (mProperty_lkey, mProperty_mLabelMap, mProperty_mHasIndexing, mProperty_mHasTranslateFeature COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_grammarMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLabelMap" ":") ;
  mProperty_mLabelMap.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mHasIndexing" ":") ;
  mProperty_mHasIndexing.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mHasTranslateFeature" ":") ;
  mProperty_mHasTranslateFeature.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarMap::GGS_grammarMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarMap::GGS_grammarMap (const GGS_grammarMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarMap & GGS_grammarMap::operator = (const GGS_grammarMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarMap GGS_grammarMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_grammarMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarMap GGS_grammarMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_grammarMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarMap_2E_element_3F_ GGS_grammarMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_grammarMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_grammarMap * p = (cMapElement_grammarMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_grammarMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_grammarMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mLabelMap = p->mProperty_mLabelMap ;
      element.mProperty_mHasIndexing = p->mProperty_mHasIndexing ;
      element.mProperty_mHasTranslateFeature = p->mProperty_mHasTranslateFeature ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarMap GGS_grammarMap::class_func_mapWithMapToOverride (const GGS_grammarMap & inMapToOverride
                                                                COMMA_LOCATION_ARGS) {
  GGS_grammarMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarMap GGS_grammarMap::getter_overriddenMap (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_grammarMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarMap::enterElement (const GGS_grammarMap_2E_element & inValue,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) {
  cMapElement_grammarMap * p = nullptr ;
  macroMyNew (p, cMapElement_grammarMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@grammarMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarMap::addAssign_operation (const GGS_lstring & inKey,
                                          const GGS_grammarLabelMap & inArgument0,
                                          const GGS_bool & inArgument1,
                                          const GGS_bool & inArgument2,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_grammarMap * p = nullptr ;
  macroMyNew (p, cMapElement_grammarMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@grammarMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarMap GGS_grammarMap::add_operation (const GGS_grammarMap & inOperand,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  GGS_grammarMap result = *this ;
  cEnumerator_grammarMap enumerator (inOperand, EnumerationOrder::Up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mLabelMap (HERE), enumerator.current_mHasIndexing (HERE), enumerator.current_mHasTranslateFeature (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarMap::setter_insertGrammar (GGS_lstring inKey,
                                           GGS_grammarLabelMap inArgument0,
                                           GGS_bool inArgument1,
                                           GGS_bool inArgument2,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_grammarMap * p = nullptr ;
  macroMyNew (p, cMapElement_grammarMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' grammar has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_grammarMap_searchKey = "the '%K' grammar is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_grammarMap::method_searchKey (GGS_lstring inKey,
                                       GGS_grammarLabelMap & outArgument0,
                                       GGS_bool & outArgument1,
                                       GGS_bool & outArgument2,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) performSearch (inKey,
                                                                                     inCompiler,
                                                                                     kSearchErrorMessage_grammarMap_searchKey
                                                                                     COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_grammarMap) ;
    outArgument0 = p->mProperty_mLabelMap ;
    outArgument1 = p->mProperty_mHasIndexing ;
    outArgument2 = p->mProperty_mHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap GGS_grammarMap::getter_mLabelMapForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) attributes ;
  GGS_grammarLabelMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_grammarMap) ;
    result = p->mProperty_mLabelMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_grammarMap::getter_mHasIndexingForKey (const GGS_string & inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_grammarMap) ;
    result = p->mProperty_mHasIndexing ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_grammarMap::getter_mHasTranslateFeatureForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_grammarMap) ;
    result = p->mProperty_mHasTranslateFeature ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarMap::setter_setMLabelMapForKey (GGS_grammarLabelMap inAttributeValue,
                                                GGS_string inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_grammarMap * p = (cMapElement_grammarMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_grammarMap) ;
    p->mProperty_mLabelMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarMap::setter_setMHasIndexingForKey (GGS_bool inAttributeValue,
                                                   GGS_string inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_grammarMap * p = (cMapElement_grammarMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_grammarMap) ;
    p->mProperty_mHasIndexing = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarMap::setter_setMHasTranslateFeatureForKey (GGS_bool inAttributeValue,
                                                           GGS_string inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_grammarMap * p = (cMapElement_grammarMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_grammarMap) ;
    p->mProperty_mHasTranslateFeature = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_grammarMap * GGS_grammarMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                            const GGS_string & inKey
                                                                            COMMA_LOCATION_ARGS) {
  cMapElement_grammarMap * result = (cMapElement_grammarMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_grammarMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enumerator for @grammarMap
//--------------------------------------------------------------------------------------------------

cEnumerator_grammarMap::cEnumerator_grammarMap (const GGS_grammarMap & inEnumeratedObject,
                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarMap_2E_element cEnumerator_grammarMap::current (LOCATION_ARGS) const {
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarMap) ;
  return GGS_grammarMap_2E_element (p->mProperty_lkey, p->mProperty_mLabelMap, p->mProperty_mHasIndexing, p->mProperty_mHasTranslateFeature) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_grammarMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap cEnumerator_grammarMap::current_mLabelMap (LOCATION_ARGS) const {
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarMap) ;
  return p->mProperty_mLabelMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_grammarMap::current_mHasIndexing (LOCATION_ARGS) const {
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarMap) ;
  return p->mProperty_mHasIndexing ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_grammarMap::current_mHasTranslateFeature (LOCATION_ARGS) const {
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarMap) ;
  return p->mProperty_mHasTranslateFeature ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @grammarMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_grammarMap::DownEnumerator_grammarMap (const GGS_grammarMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarMap_2E_element DownEnumerator_grammarMap::current (LOCATION_ARGS) const {
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarMap) ;
  return GGS_grammarMap_2E_element (p->mProperty_lkey, p->mProperty_mLabelMap, p->mProperty_mHasIndexing, p->mProperty_mHasTranslateFeature) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_grammarMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap DownEnumerator_grammarMap::current_mLabelMap (LOCATION_ARGS) const {
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarMap) ;
  return p->mProperty_mLabelMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_grammarMap::current_mHasIndexing (LOCATION_ARGS) const {
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarMap) ;
  return p->mProperty_mHasIndexing ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_grammarMap::current_mHasTranslateFeature (LOCATION_ARGS) const {
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarMap) ;
  return p->mProperty_mHasTranslateFeature ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @grammarMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_grammarMap::UpEnumerator_grammarMap (const GGS_grammarMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarMap_2E_element UpEnumerator_grammarMap::current (LOCATION_ARGS) const {
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarMap) ;
  return GGS_grammarMap_2E_element (p->mProperty_lkey, p->mProperty_mLabelMap, p->mProperty_mHasIndexing, p->mProperty_mHasTranslateFeature) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_grammarMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap UpEnumerator_grammarMap::current_mLabelMap (LOCATION_ARGS) const {
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarMap) ;
  return p->mProperty_mLabelMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_grammarMap::current_mHasIndexing (LOCATION_ARGS) const {
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarMap) ;
  return p->mProperty_mHasIndexing ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_grammarMap::current_mHasTranslateFeature (LOCATION_ARGS) const {
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarMap) ;
  return p->mProperty_mHasTranslateFeature ;
}


//--------------------------------------------------------------------------------------------------
//     @grammarMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarMap ("grammarMap",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_grammarMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarMap GGS_grammarMap::extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_grammarMap result ;
  const GGS_grammarMap * p = (const GGS_grammarMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_functionMap::cMapElement_functionMap (const GGS_functionMap_2E_element & inValue
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mFunctionSignature (inValue.mProperty_mFunctionSignature),
mProperty_mResultType (inValue.mProperty_mResultType),
mProperty_mIsInternal (inValue.mProperty_mIsInternal) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_functionMap::cMapElement_functionMap (const GGS_lstring & inKey,
                                                  const GGS_functionSignature & in_mFunctionSignature,
                                                  const GGS_unifiedTypeMapEntry & in_mResultType,
                                                  const GGS_bool & in_mIsInternal
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mFunctionSignature (in_mFunctionSignature),
mProperty_mResultType (in_mResultType),
mProperty_mIsInternal (in_mIsInternal) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_functionMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_functionMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_functionMap (mProperty_lkey, mProperty_mFunctionSignature, mProperty_mResultType, mProperty_mIsInternal COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_functionMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFunctionSignature" ":") ;
  mProperty_mFunctionSignature.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mResultType" ":") ;
  mProperty_mResultType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsInternal" ":") ;
  mProperty_mIsInternal.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionMap::GGS_functionMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_functionMap::GGS_functionMap (const GGS_functionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_functionMap & GGS_functionMap::operator = (const GGS_functionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionMap GGS_functionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_functionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionMap GGS_functionMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_functionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionMap_2E_element_3F_ GGS_functionMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_functionMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_functionMap * p = (cMapElement_functionMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_functionMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_functionMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mFunctionSignature = p->mProperty_mFunctionSignature ;
      element.mProperty_mResultType = p->mProperty_mResultType ;
      element.mProperty_mIsInternal = p->mProperty_mIsInternal ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionMap GGS_functionMap::class_func_mapWithMapToOverride (const GGS_functionMap & inMapToOverride
                                                                  COMMA_LOCATION_ARGS) {
  GGS_functionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionMap GGS_functionMap::getter_overriddenMap (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_functionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionMap::enterElement (const GGS_functionMap_2E_element & inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  cMapElement_functionMap * p = nullptr ;
  macroMyNew (p, cMapElement_functionMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@functionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionMap::addAssign_operation (const GGS_lstring & inKey,
                                           const GGS_functionSignature & inArgument0,
                                           const GGS_unifiedTypeMapEntry & inArgument1,
                                           const GGS_bool & inArgument2,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_functionMap * p = nullptr ;
  macroMyNew (p, cMapElement_functionMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@functionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionMap GGS_functionMap::add_operation (const GGS_functionMap & inOperand,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  GGS_functionMap result = *this ;
  cEnumerator_functionMap enumerator (inOperand, EnumerationOrder::Up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mFunctionSignature (HERE), enumerator.current_mResultType (HERE), enumerator.current_mIsInternal (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionMap::setter_insertKey (GGS_lstring inKey,
                                        GGS_functionSignature inArgument0,
                                        GGS_unifiedTypeMapEntry inArgument1,
                                        GGS_bool inArgument2,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  cMapElement_functionMap * p = nullptr ;
  macroMyNew (p, cMapElement_functionMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' function has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_functionMap_searchKey = "the '%K' function is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_functionMap::method_searchKey (GGS_lstring inKey,
                                        GGS_functionSignature & outArgument0,
                                        GGS_unifiedTypeMapEntry & outArgument1,
                                        GGS_bool & outArgument2,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) performSearch (inKey,
                                                                                       inCompiler,
                                                                                       kSearchErrorMessage_functionMap_searchKey
                                                                                       COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_functionMap) ;
    outArgument0 = p->mProperty_mFunctionSignature ;
    outArgument1 = p->mProperty_mResultType ;
    outArgument2 = p->mProperty_mIsInternal ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature GGS_functionMap::getter_mFunctionSignatureForKey (const GGS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) attributes ;
  GGS_functionSignature result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    result = p->mProperty_mFunctionSignature ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_functionMap::getter_mResultTypeForKey (const GGS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) attributes ;
  GGS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    result = p->mProperty_mResultType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_functionMap::getter_mIsInternalForKey (const GGS_string & inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    result = p->mProperty_mIsInternal ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionMap::setter_setMFunctionSignatureForKey (GGS_functionSignature inAttributeValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_functionMap * p = (cMapElement_functionMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    p->mProperty_mFunctionSignature = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_functionMap::setter_setMResultTypeForKey (GGS_unifiedTypeMapEntry inAttributeValue,
                                                   GGS_string inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_functionMap * p = (cMapElement_functionMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    p->mProperty_mResultType = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_functionMap::setter_setMIsInternalForKey (GGS_bool inAttributeValue,
                                                   GGS_string inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_functionMap * p = (cMapElement_functionMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    p->mProperty_mIsInternal = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_functionMap * GGS_functionMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                              const GGS_string & inKey
                                                                              COMMA_LOCATION_ARGS) {
  cMapElement_functionMap * result = (cMapElement_functionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_functionMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enumerator for @functionMap
//--------------------------------------------------------------------------------------------------

cEnumerator_functionMap::cEnumerator_functionMap (const GGS_functionMap & inEnumeratedObject,
                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionMap_2E_element cEnumerator_functionMap::current (LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_functionMap) ;
  return GGS_functionMap_2E_element (p->mProperty_lkey, p->mProperty_mFunctionSignature, p->mProperty_mResultType, p->mProperty_mIsInternal) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_functionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature cEnumerator_functionMap::current_mFunctionSignature (LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_functionMap) ;
  return p->mProperty_mFunctionSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry cEnumerator_functionMap::current_mResultType (LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_functionMap) ;
  return p->mProperty_mResultType ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_functionMap::current_mIsInternal (LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_functionMap) ;
  return p->mProperty_mIsInternal ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @functionMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_functionMap::DownEnumerator_functionMap (const GGS_functionMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionMap_2E_element DownEnumerator_functionMap::current (LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_functionMap) ;
  return GGS_functionMap_2E_element (p->mProperty_lkey, p->mProperty_mFunctionSignature, p->mProperty_mResultType, p->mProperty_mIsInternal) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_functionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature DownEnumerator_functionMap::current_mFunctionSignature (LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_functionMap) ;
  return p->mProperty_mFunctionSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_functionMap::current_mResultType (LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_functionMap) ;
  return p->mProperty_mResultType ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_functionMap::current_mIsInternal (LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_functionMap) ;
  return p->mProperty_mIsInternal ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @functionMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_functionMap::UpEnumerator_functionMap (const GGS_functionMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionMap_2E_element UpEnumerator_functionMap::current (LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_functionMap) ;
  return GGS_functionMap_2E_element (p->mProperty_lkey, p->mProperty_mFunctionSignature, p->mProperty_mResultType, p->mProperty_mIsInternal) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_functionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature UpEnumerator_functionMap::current_mFunctionSignature (LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_functionMap) ;
  return p->mProperty_mFunctionSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_functionMap::current_mResultType (LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_functionMap) ;
  return p->mProperty_mResultType ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_functionMap::current_mIsInternal (LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_functionMap) ;
  return p->mProperty_mIsInternal ;
}


//--------------------------------------------------------------------------------------------------
//     @functionMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionMap ("functionMap",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_functionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionMap GGS_functionMap::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_functionMap result ;
  const GGS_functionMap * p = (const GGS_functionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_wrapperFileMap::cMapElement_wrapperFileMap (const GGS_wrapperFileMap_2E_element & inValue
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mAbsoluteFilePath (inValue.mProperty_mAbsoluteFilePath),
mProperty_mIsTextFile (inValue.mProperty_mIsTextFile),
mProperty_mWrapperDirectoryIndex (inValue.mProperty_mWrapperDirectoryIndex),
mProperty_mWrapperFileIndex (inValue.mProperty_mWrapperFileIndex) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_wrapperFileMap::cMapElement_wrapperFileMap (const GGS_lstring & inKey,
                                                        const GGS_string & in_mAbsoluteFilePath,
                                                        const GGS_bool & in_mIsTextFile,
                                                        const GGS_uint & in_mWrapperDirectoryIndex,
                                                        const GGS_uint & in_mWrapperFileIndex
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mAbsoluteFilePath (in_mAbsoluteFilePath),
mProperty_mIsTextFile (in_mIsTextFile),
mProperty_mWrapperDirectoryIndex (in_mWrapperDirectoryIndex),
mProperty_mWrapperFileIndex (in_mWrapperFileIndex) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_wrapperFileMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_wrapperFileMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_wrapperFileMap (mProperty_lkey, mProperty_mAbsoluteFilePath, mProperty_mIsTextFile, mProperty_mWrapperDirectoryIndex, mProperty_mWrapperFileIndex COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_wrapperFileMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAbsoluteFilePath" ":") ;
  mProperty_mAbsoluteFilePath.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsTextFile" ":") ;
  mProperty_mIsTextFile.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mWrapperDirectoryIndex" ":") ;
  mProperty_mWrapperDirectoryIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mWrapperFileIndex" ":") ;
  mProperty_mWrapperFileIndex.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap::GGS_wrapperFileMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap::GGS_wrapperFileMap (const GGS_wrapperFileMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap & GGS_wrapperFileMap::operator = (const GGS_wrapperFileMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap GGS_wrapperFileMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_wrapperFileMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap GGS_wrapperFileMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_wrapperFileMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap_2E_element_3F_ GGS_wrapperFileMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_wrapperFileMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_wrapperFileMap * p = (cMapElement_wrapperFileMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_wrapperFileMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_wrapperFileMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mAbsoluteFilePath = p->mProperty_mAbsoluteFilePath ;
      element.mProperty_mIsTextFile = p->mProperty_mIsTextFile ;
      element.mProperty_mWrapperDirectoryIndex = p->mProperty_mWrapperDirectoryIndex ;
      element.mProperty_mWrapperFileIndex = p->mProperty_mWrapperFileIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap GGS_wrapperFileMap::class_func_mapWithMapToOverride (const GGS_wrapperFileMap & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GGS_wrapperFileMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap GGS_wrapperFileMap::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_wrapperFileMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperFileMap::enterElement (const GGS_wrapperFileMap_2E_element & inValue,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  cMapElement_wrapperFileMap * p = nullptr ;
  macroMyNew (p, cMapElement_wrapperFileMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@wrapperFileMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperFileMap::addAssign_operation (const GGS_lstring & inKey,
                                              const GGS_string & inArgument0,
                                              const GGS_bool & inArgument1,
                                              const GGS_uint & inArgument2,
                                              const GGS_uint & inArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_wrapperFileMap * p = nullptr ;
  macroMyNew (p, cMapElement_wrapperFileMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@wrapperFileMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap GGS_wrapperFileMap::add_operation (const GGS_wrapperFileMap & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_wrapperFileMap result = *this ;
  cEnumerator_wrapperFileMap enumerator (inOperand, EnumerationOrder::Up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mAbsoluteFilePath (HERE), enumerator.current_mIsTextFile (HERE), enumerator.current_mWrapperDirectoryIndex (HERE), enumerator.current_mWrapperFileIndex (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperFileMap::setter_insertKey (GGS_lstring inKey,
                                           GGS_string inArgument0,
                                           GGS_bool inArgument1,
                                           GGS_uint inArgument2,
                                           GGS_uint inArgument3,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_wrapperFileMap * p = nullptr ;
  macroMyNew (p, cMapElement_wrapperFileMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "INTERNAL ERROR" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_wrapperFileMap_searchKey = "INTERNAL ERROR" ;

//--------------------------------------------------------------------------------------------------

void GGS_wrapperFileMap::method_searchKey (GGS_lstring inKey,
                                           GGS_string & outArgument0,
                                           GGS_bool & outArgument1,
                                           GGS_uint & outArgument2,
                                           GGS_uint & outArgument3,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) performSearch (inKey,
                                                                                             inCompiler,
                                                                                             kSearchErrorMessage_wrapperFileMap_searchKey
                                                                                             COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    outArgument0 = p->mProperty_mAbsoluteFilePath ;
    outArgument1 = p->mProperty_mIsTextFile ;
    outArgument2 = p->mProperty_mWrapperDirectoryIndex ;
    outArgument3 = p->mProperty_mWrapperFileIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_wrapperFileMap::getter_mAbsoluteFilePathForKey (const GGS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) attributes ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    result = p->mProperty_mAbsoluteFilePath ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_wrapperFileMap::getter_mIsTextFileForKey (const GGS_string & inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    result = p->mProperty_mIsTextFile ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_wrapperFileMap::getter_mWrapperDirectoryIndexForKey (const GGS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    result = p->mProperty_mWrapperDirectoryIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_wrapperFileMap::getter_mWrapperFileIndexForKey (const GGS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    result = p->mProperty_mWrapperFileIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperFileMap::setter_setMAbsoluteFilePathForKey (GGS_string inAttributeValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_wrapperFileMap * p = (cMapElement_wrapperFileMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    p->mProperty_mAbsoluteFilePath = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperFileMap::setter_setMIsTextFileForKey (GGS_bool inAttributeValue,
                                                      GGS_string inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_wrapperFileMap * p = (cMapElement_wrapperFileMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    p->mProperty_mIsTextFile = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperFileMap::setter_setMWrapperDirectoryIndexForKey (GGS_uint inAttributeValue,
                                                                 GGS_string inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_wrapperFileMap * p = (cMapElement_wrapperFileMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    p->mProperty_mWrapperDirectoryIndex = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperFileMap::setter_setMWrapperFileIndexForKey (GGS_uint inAttributeValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_wrapperFileMap * p = (cMapElement_wrapperFileMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    p->mProperty_mWrapperFileIndex = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_wrapperFileMap * GGS_wrapperFileMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                    const GGS_string & inKey
                                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_wrapperFileMap * result = (cMapElement_wrapperFileMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_wrapperFileMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enumerator for @wrapperFileMap
//--------------------------------------------------------------------------------------------------

cEnumerator_wrapperFileMap::cEnumerator_wrapperFileMap (const GGS_wrapperFileMap & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap_2E_element cEnumerator_wrapperFileMap::current (LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
  return GGS_wrapperFileMap_2E_element (p->mProperty_lkey, p->mProperty_mAbsoluteFilePath, p->mProperty_mIsTextFile, p->mProperty_mWrapperDirectoryIndex, p->mProperty_mWrapperFileIndex) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_wrapperFileMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_wrapperFileMap::current_mAbsoluteFilePath (LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
  return p->mProperty_mAbsoluteFilePath ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_wrapperFileMap::current_mIsTextFile (LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
  return p->mProperty_mIsTextFile ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_wrapperFileMap::current_mWrapperDirectoryIndex (LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
  return p->mProperty_mWrapperDirectoryIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_wrapperFileMap::current_mWrapperFileIndex (LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
  return p->mProperty_mWrapperFileIndex ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @wrapperFileMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_wrapperFileMap::DownEnumerator_wrapperFileMap (const GGS_wrapperFileMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap_2E_element DownEnumerator_wrapperFileMap::current (LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
  return GGS_wrapperFileMap_2E_element (p->mProperty_lkey, p->mProperty_mAbsoluteFilePath, p->mProperty_mIsTextFile, p->mProperty_mWrapperDirectoryIndex, p->mProperty_mWrapperFileIndex) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_wrapperFileMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_wrapperFileMap::current_mAbsoluteFilePath (LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
  return p->mProperty_mAbsoluteFilePath ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_wrapperFileMap::current_mIsTextFile (LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
  return p->mProperty_mIsTextFile ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_wrapperFileMap::current_mWrapperDirectoryIndex (LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
  return p->mProperty_mWrapperDirectoryIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_wrapperFileMap::current_mWrapperFileIndex (LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
  return p->mProperty_mWrapperFileIndex ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @wrapperFileMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_wrapperFileMap::UpEnumerator_wrapperFileMap (const GGS_wrapperFileMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap_2E_element UpEnumerator_wrapperFileMap::current (LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
  return GGS_wrapperFileMap_2E_element (p->mProperty_lkey, p->mProperty_mAbsoluteFilePath, p->mProperty_mIsTextFile, p->mProperty_mWrapperDirectoryIndex, p->mProperty_mWrapperFileIndex) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_wrapperFileMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_wrapperFileMap::current_mAbsoluteFilePath (LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
  return p->mProperty_mAbsoluteFilePath ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_wrapperFileMap::current_mIsTextFile (LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
  return p->mProperty_mIsTextFile ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_wrapperFileMap::current_mWrapperDirectoryIndex (LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
  return p->mProperty_mWrapperDirectoryIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_wrapperFileMap::current_mWrapperFileIndex (LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
  return p->mProperty_mWrapperFileIndex ;
}


//--------------------------------------------------------------------------------------------------
//     @wrapperFileMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperFileMap ("wrapperFileMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_wrapperFileMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_wrapperFileMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_wrapperFileMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_wrapperFileMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap GGS_wrapperFileMap::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_wrapperFileMap result ;
  const GGS_wrapperFileMap * p = (const GGS_wrapperFileMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_wrapperFileMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("wrapperFileMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_wrapperDirectoryMap::cMapElement_wrapperDirectoryMap (const GGS_wrapperDirectoryMap_2E_element & inValue
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mRegularFileMap (inValue.mProperty_mRegularFileMap),
mProperty_mDirectoryMap (inValue.mProperty_mDirectoryMap),
mProperty_mWrapperDirectoryIndex (inValue.mProperty_mWrapperDirectoryIndex) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_wrapperDirectoryMap::cMapElement_wrapperDirectoryMap (const GGS_lstring & inKey,
                                                                  const GGS_wrapperFileMap & in_mRegularFileMap,
                                                                  const GGS_wrapperDirectoryMap & in_mDirectoryMap,
                                                                  const GGS_uint & in_mWrapperDirectoryIndex
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mRegularFileMap (in_mRegularFileMap),
mProperty_mDirectoryMap (in_mDirectoryMap),
mProperty_mWrapperDirectoryIndex (in_mWrapperDirectoryIndex) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_wrapperDirectoryMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_wrapperDirectoryMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_wrapperDirectoryMap (mProperty_lkey, mProperty_mRegularFileMap, mProperty_mDirectoryMap, mProperty_mWrapperDirectoryIndex COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_wrapperDirectoryMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRegularFileMap" ":") ;
  mProperty_mRegularFileMap.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDirectoryMap" ":") ;
  mProperty_mDirectoryMap.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mWrapperDirectoryIndex" ":") ;
  mProperty_mWrapperDirectoryIndex.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap::GGS_wrapperDirectoryMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap::GGS_wrapperDirectoryMap (const GGS_wrapperDirectoryMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap & GGS_wrapperDirectoryMap::operator = (const GGS_wrapperDirectoryMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap GGS_wrapperDirectoryMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_wrapperDirectoryMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap GGS_wrapperDirectoryMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_wrapperDirectoryMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap_2E_element_3F_ GGS_wrapperDirectoryMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_wrapperDirectoryMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_wrapperDirectoryMap * p = (cMapElement_wrapperDirectoryMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_wrapperDirectoryMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_wrapperDirectoryMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mRegularFileMap = p->mProperty_mRegularFileMap ;
      element.mProperty_mDirectoryMap = p->mProperty_mDirectoryMap ;
      element.mProperty_mWrapperDirectoryIndex = p->mProperty_mWrapperDirectoryIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap GGS_wrapperDirectoryMap::class_func_mapWithMapToOverride (const GGS_wrapperDirectoryMap & inMapToOverride
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_wrapperDirectoryMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap GGS_wrapperDirectoryMap::getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_wrapperDirectoryMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperDirectoryMap::enterElement (const GGS_wrapperDirectoryMap_2E_element & inValue,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_wrapperDirectoryMap * p = nullptr ;
  macroMyNew (p, cMapElement_wrapperDirectoryMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@wrapperDirectoryMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperDirectoryMap::addAssign_operation (const GGS_lstring & inKey,
                                                   const GGS_wrapperFileMap & inArgument0,
                                                   const GGS_wrapperDirectoryMap & inArgument1,
                                                   const GGS_uint & inArgument2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_wrapperDirectoryMap * p = nullptr ;
  macroMyNew (p, cMapElement_wrapperDirectoryMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@wrapperDirectoryMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap GGS_wrapperDirectoryMap::add_operation (const GGS_wrapperDirectoryMap & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_wrapperDirectoryMap result = *this ;
  cEnumerator_wrapperDirectoryMap enumerator (inOperand, EnumerationOrder::Up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mRegularFileMap (HERE), enumerator.current_mDirectoryMap (HERE), enumerator.current_mWrapperDirectoryIndex (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperDirectoryMap::setter_insertKey (GGS_lstring inKey,
                                                GGS_wrapperFileMap inArgument0,
                                                GGS_wrapperDirectoryMap inArgument1,
                                                GGS_uint inArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_wrapperDirectoryMap * p = nullptr ;
  macroMyNew (p, cMapElement_wrapperDirectoryMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "INTERNAL ERROR" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_wrapperDirectoryMap_searchKey = "INTERNAL ERROR" ;

//--------------------------------------------------------------------------------------------------

void GGS_wrapperDirectoryMap::method_searchKey (GGS_lstring inKey,
                                                GGS_wrapperFileMap & outArgument0,
                                                GGS_wrapperDirectoryMap & outArgument1,
                                                GGS_uint & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) performSearch (inKey,
                                                                                                       inCompiler,
                                                                                                       kSearchErrorMessage_wrapperDirectoryMap_searchKey
                                                                                                       COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
    outArgument0 = p->mProperty_mRegularFileMap ;
    outArgument1 = p->mProperty_mDirectoryMap ;
    outArgument2 = p->mProperty_mWrapperDirectoryIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap GGS_wrapperDirectoryMap::getter_mRegularFileMapForKey (const GGS_string & inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) attributes ;
  GGS_wrapperFileMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
    result = p->mProperty_mRegularFileMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap GGS_wrapperDirectoryMap::getter_mDirectoryMapForKey (const GGS_string & inKey,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) attributes ;
  GGS_wrapperDirectoryMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
    result = p->mProperty_mDirectoryMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_wrapperDirectoryMap::getter_mWrapperDirectoryIndexForKey (const GGS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
    result = p->mProperty_mWrapperDirectoryIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperDirectoryMap::setter_setMRegularFileMapForKey (GGS_wrapperFileMap inAttributeValue,
                                                               GGS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_wrapperDirectoryMap * p = (cMapElement_wrapperDirectoryMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
    p->mProperty_mRegularFileMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperDirectoryMap::setter_setMDirectoryMapForKey (GGS_wrapperDirectoryMap inAttributeValue,
                                                             GGS_string inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_wrapperDirectoryMap * p = (cMapElement_wrapperDirectoryMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
    p->mProperty_mDirectoryMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperDirectoryMap::setter_setMWrapperDirectoryIndexForKey (GGS_uint inAttributeValue,
                                                                      GGS_string inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_wrapperDirectoryMap * p = (cMapElement_wrapperDirectoryMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
    p->mProperty_mWrapperDirectoryIndex = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_wrapperDirectoryMap * GGS_wrapperDirectoryMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                              const GGS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) {
  cMapElement_wrapperDirectoryMap * result = (cMapElement_wrapperDirectoryMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_wrapperDirectoryMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enumerator for @wrapperDirectoryMap
//--------------------------------------------------------------------------------------------------

cEnumerator_wrapperDirectoryMap::cEnumerator_wrapperDirectoryMap (const GGS_wrapperDirectoryMap & inEnumeratedObject,
                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap_2E_element cEnumerator_wrapperDirectoryMap::current (LOCATION_ARGS) const {
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
  return GGS_wrapperDirectoryMap_2E_element (p->mProperty_lkey, p->mProperty_mRegularFileMap, p->mProperty_mDirectoryMap, p->mProperty_mWrapperDirectoryIndex) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_wrapperDirectoryMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap cEnumerator_wrapperDirectoryMap::current_mRegularFileMap (LOCATION_ARGS) const {
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
  return p->mProperty_mRegularFileMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap cEnumerator_wrapperDirectoryMap::current_mDirectoryMap (LOCATION_ARGS) const {
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
  return p->mProperty_mDirectoryMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_wrapperDirectoryMap::current_mWrapperDirectoryIndex (LOCATION_ARGS) const {
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
  return p->mProperty_mWrapperDirectoryIndex ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @wrapperDirectoryMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_wrapperDirectoryMap::DownEnumerator_wrapperDirectoryMap (const GGS_wrapperDirectoryMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap_2E_element DownEnumerator_wrapperDirectoryMap::current (LOCATION_ARGS) const {
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
  return GGS_wrapperDirectoryMap_2E_element (p->mProperty_lkey, p->mProperty_mRegularFileMap, p->mProperty_mDirectoryMap, p->mProperty_mWrapperDirectoryIndex) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_wrapperDirectoryMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap DownEnumerator_wrapperDirectoryMap::current_mRegularFileMap (LOCATION_ARGS) const {
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
  return p->mProperty_mRegularFileMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap DownEnumerator_wrapperDirectoryMap::current_mDirectoryMap (LOCATION_ARGS) const {
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
  return p->mProperty_mDirectoryMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_wrapperDirectoryMap::current_mWrapperDirectoryIndex (LOCATION_ARGS) const {
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
  return p->mProperty_mWrapperDirectoryIndex ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @wrapperDirectoryMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_wrapperDirectoryMap::UpEnumerator_wrapperDirectoryMap (const GGS_wrapperDirectoryMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap_2E_element UpEnumerator_wrapperDirectoryMap::current (LOCATION_ARGS) const {
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
  return GGS_wrapperDirectoryMap_2E_element (p->mProperty_lkey, p->mProperty_mRegularFileMap, p->mProperty_mDirectoryMap, p->mProperty_mWrapperDirectoryIndex) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_wrapperDirectoryMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap UpEnumerator_wrapperDirectoryMap::current_mRegularFileMap (LOCATION_ARGS) const {
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
  return p->mProperty_mRegularFileMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap UpEnumerator_wrapperDirectoryMap::current_mDirectoryMap (LOCATION_ARGS) const {
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
  return p->mProperty_mDirectoryMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_wrapperDirectoryMap::current_mWrapperDirectoryIndex (LOCATION_ARGS) const {
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
  return p->mProperty_mWrapperDirectoryIndex ;
}


//--------------------------------------------------------------------------------------------------
//     @wrapperDirectoryMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperDirectoryMap ("wrapperDirectoryMap",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_wrapperDirectoryMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_wrapperDirectoryMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_wrapperDirectoryMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_wrapperDirectoryMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap GGS_wrapperDirectoryMap::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_wrapperDirectoryMap result ;
  const GGS_wrapperDirectoryMap * p = (const GGS_wrapperDirectoryMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_wrapperDirectoryMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("wrapperDirectoryMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_filewrapperTemplateMap::cMapElement_filewrapperTemplateMap (const GGS_filewrapperTemplateMap_2E_element & inValue
                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mTemplateSignature (inValue.mProperty_mTemplateSignature),
mProperty_mFilewrapperTemplatePath (inValue.mProperty_mFilewrapperTemplatePath) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_filewrapperTemplateMap::cMapElement_filewrapperTemplateMap (const GGS_lstring & inKey,
                                                                        const GGS_functionSignature & in_mTemplateSignature,
                                                                        const GGS_lstring & in_mFilewrapperTemplatePath
                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mTemplateSignature (in_mTemplateSignature),
mProperty_mFilewrapperTemplatePath (in_mFilewrapperTemplatePath) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_filewrapperTemplateMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_filewrapperTemplateMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_filewrapperTemplateMap (mProperty_lkey, mProperty_mTemplateSignature, mProperty_mFilewrapperTemplatePath COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_filewrapperTemplateMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTemplateSignature" ":") ;
  mProperty_mTemplateSignature.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFilewrapperTemplatePath" ":") ;
  mProperty_mFilewrapperTemplatePath.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap::GGS_filewrapperTemplateMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap::GGS_filewrapperTemplateMap (const GGS_filewrapperTemplateMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap & GGS_filewrapperTemplateMap::operator = (const GGS_filewrapperTemplateMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap GGS_filewrapperTemplateMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_filewrapperTemplateMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap GGS_filewrapperTemplateMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_filewrapperTemplateMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap_2E_element_3F_ GGS_filewrapperTemplateMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_filewrapperTemplateMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_filewrapperTemplateMap * p = (cMapElement_filewrapperTemplateMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_filewrapperTemplateMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_filewrapperTemplateMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mTemplateSignature = p->mProperty_mTemplateSignature ;
      element.mProperty_mFilewrapperTemplatePath = p->mProperty_mFilewrapperTemplatePath ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap GGS_filewrapperTemplateMap::class_func_mapWithMapToOverride (const GGS_filewrapperTemplateMap & inMapToOverride
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_filewrapperTemplateMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap GGS_filewrapperTemplateMap::getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_filewrapperTemplateMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateMap::enterElement (const GGS_filewrapperTemplateMap_2E_element & inValue,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_filewrapperTemplateMap * p = nullptr ;
  macroMyNew (p, cMapElement_filewrapperTemplateMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@filewrapperTemplateMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateMap::addAssign_operation (const GGS_lstring & inKey,
                                                      const GGS_functionSignature & inArgument0,
                                                      const GGS_lstring & inArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_filewrapperTemplateMap * p = nullptr ;
  macroMyNew (p, cMapElement_filewrapperTemplateMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@filewrapperTemplateMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap GGS_filewrapperTemplateMap::add_operation (const GGS_filewrapperTemplateMap & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_filewrapperTemplateMap result = *this ;
  cEnumerator_filewrapperTemplateMap enumerator (inOperand, EnumerationOrder::Up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mTemplateSignature (HERE), enumerator.current_mFilewrapperTemplatePath (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateMap::setter_insertKey (GGS_lstring inKey,
                                                   GGS_functionSignature inArgument0,
                                                   GGS_lstring inArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_filewrapperTemplateMap * p = nullptr ;
  macroMyNew (p, cMapElement_filewrapperTemplateMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' filewrapper template has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_filewrapperTemplateMap_searchKey = "the '%K' filewrapper template is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateMap::method_searchKey (GGS_lstring inKey,
                                                   GGS_functionSignature & outArgument0,
                                                   GGS_lstring & outArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_filewrapperTemplateMap * p = (const cMapElement_filewrapperTemplateMap *) performSearch (inKey,
                                                                                                             inCompiler,
                                                                                                             kSearchErrorMessage_filewrapperTemplateMap_searchKey
                                                                                                             COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
    outArgument0 = p->mProperty_mTemplateSignature ;
    outArgument1 = p->mProperty_mFilewrapperTemplatePath ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature GGS_filewrapperTemplateMap::getter_mTemplateSignatureForKey (const GGS_string & inKey,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_filewrapperTemplateMap * p = (const cMapElement_filewrapperTemplateMap *) attributes ;
  GGS_functionSignature result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
    result = p->mProperty_mTemplateSignature ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_filewrapperTemplateMap::getter_mFilewrapperTemplatePathForKey (const GGS_string & inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_filewrapperTemplateMap * p = (const cMapElement_filewrapperTemplateMap *) attributes ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
    result = p->mProperty_mFilewrapperTemplatePath ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateMap::setter_setMTemplateSignatureForKey (GGS_functionSignature inAttributeValue,
                                                                     GGS_string inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_filewrapperTemplateMap * p = (cMapElement_filewrapperTemplateMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
    p->mProperty_mTemplateSignature = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateMap::setter_setMFilewrapperTemplatePathForKey (GGS_lstring inAttributeValue,
                                                                           GGS_string inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_filewrapperTemplateMap * p = (cMapElement_filewrapperTemplateMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
    p->mProperty_mFilewrapperTemplatePath = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_filewrapperTemplateMap * GGS_filewrapperTemplateMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                    const GGS_string & inKey
                                                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_filewrapperTemplateMap * result = (cMapElement_filewrapperTemplateMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_filewrapperTemplateMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enumerator for @filewrapperTemplateMap
//--------------------------------------------------------------------------------------------------

cEnumerator_filewrapperTemplateMap::cEnumerator_filewrapperTemplateMap (const GGS_filewrapperTemplateMap & inEnumeratedObject,
                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap_2E_element cEnumerator_filewrapperTemplateMap::current (LOCATION_ARGS) const {
  const cMapElement_filewrapperTemplateMap * p = (const cMapElement_filewrapperTemplateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
  return GGS_filewrapperTemplateMap_2E_element (p->mProperty_lkey, p->mProperty_mTemplateSignature, p->mProperty_mFilewrapperTemplatePath) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_filewrapperTemplateMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature cEnumerator_filewrapperTemplateMap::current_mTemplateSignature (LOCATION_ARGS) const {
  const cMapElement_filewrapperTemplateMap * p = (const cMapElement_filewrapperTemplateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
  return p->mProperty_mTemplateSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_filewrapperTemplateMap::current_mFilewrapperTemplatePath (LOCATION_ARGS) const {
  const cMapElement_filewrapperTemplateMap * p = (const cMapElement_filewrapperTemplateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
  return p->mProperty_mFilewrapperTemplatePath ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @filewrapperTemplateMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_filewrapperTemplateMap::DownEnumerator_filewrapperTemplateMap (const GGS_filewrapperTemplateMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap_2E_element DownEnumerator_filewrapperTemplateMap::current (LOCATION_ARGS) const {
  const cMapElement_filewrapperTemplateMap * p = (const cMapElement_filewrapperTemplateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
  return GGS_filewrapperTemplateMap_2E_element (p->mProperty_lkey, p->mProperty_mTemplateSignature, p->mProperty_mFilewrapperTemplatePath) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_filewrapperTemplateMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature DownEnumerator_filewrapperTemplateMap::current_mTemplateSignature (LOCATION_ARGS) const {
  const cMapElement_filewrapperTemplateMap * p = (const cMapElement_filewrapperTemplateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
  return p->mProperty_mTemplateSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_filewrapperTemplateMap::current_mFilewrapperTemplatePath (LOCATION_ARGS) const {
  const cMapElement_filewrapperTemplateMap * p = (const cMapElement_filewrapperTemplateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
  return p->mProperty_mFilewrapperTemplatePath ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @filewrapperTemplateMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_filewrapperTemplateMap::UpEnumerator_filewrapperTemplateMap (const GGS_filewrapperTemplateMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap_2E_element UpEnumerator_filewrapperTemplateMap::current (LOCATION_ARGS) const {
  const cMapElement_filewrapperTemplateMap * p = (const cMapElement_filewrapperTemplateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
  return GGS_filewrapperTemplateMap_2E_element (p->mProperty_lkey, p->mProperty_mTemplateSignature, p->mProperty_mFilewrapperTemplatePath) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_filewrapperTemplateMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature UpEnumerator_filewrapperTemplateMap::current_mTemplateSignature (LOCATION_ARGS) const {
  const cMapElement_filewrapperTemplateMap * p = (const cMapElement_filewrapperTemplateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
  return p->mProperty_mTemplateSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_filewrapperTemplateMap::current_mFilewrapperTemplatePath (LOCATION_ARGS) const {
  const cMapElement_filewrapperTemplateMap * p = (const cMapElement_filewrapperTemplateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
  return p->mProperty_mFilewrapperTemplatePath ;
}


//--------------------------------------------------------------------------------------------------
//     @filewrapperTemplateMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateMap ("filewrapperTemplateMap",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_filewrapperTemplateMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperTemplateMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperTemplateMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap GGS_filewrapperTemplateMap::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_filewrapperTemplateMap result ;
  const GGS_filewrapperTemplateMap * p = (const GGS_filewrapperTemplateMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperTemplateMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_filewrapperMap::cMapElement_filewrapperMap (const GGS_filewrapperMap_2E_element & inValue
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mFilewrapperPath (inValue.mProperty_mFilewrapperPath),
mProperty_mFilewrapperExtensionList (inValue.mProperty_mFilewrapperExtensionList),
mProperty_mFilewrapperFileMap (inValue.mProperty_mFilewrapperFileMap),
mProperty_mFilewrapperDirectoryMap (inValue.mProperty_mFilewrapperDirectoryMap),
mProperty_mFilewrapperTemplateMap (inValue.mProperty_mFilewrapperTemplateMap),
mProperty_mIsInternal (inValue.mProperty_mIsInternal) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_filewrapperMap::cMapElement_filewrapperMap (const GGS_lstring & inKey,
                                                        const GGS_lstring & in_mFilewrapperPath,
                                                        const GGS_lstringlist & in_mFilewrapperExtensionList,
                                                        const GGS_wrapperFileMap & in_mFilewrapperFileMap,
                                                        const GGS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                                        const GGS_filewrapperTemplateMap & in_mFilewrapperTemplateMap,
                                                        const GGS_bool & in_mIsInternal
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mFilewrapperPath (in_mFilewrapperPath),
mProperty_mFilewrapperExtensionList (in_mFilewrapperExtensionList),
mProperty_mFilewrapperFileMap (in_mFilewrapperFileMap),
mProperty_mFilewrapperDirectoryMap (in_mFilewrapperDirectoryMap),
mProperty_mFilewrapperTemplateMap (in_mFilewrapperTemplateMap),
mProperty_mIsInternal (in_mIsInternal) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_filewrapperMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_filewrapperMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_filewrapperMap (mProperty_lkey, mProperty_mFilewrapperPath, mProperty_mFilewrapperExtensionList, mProperty_mFilewrapperFileMap, mProperty_mFilewrapperDirectoryMap, mProperty_mFilewrapperTemplateMap, mProperty_mIsInternal COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_filewrapperMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFilewrapperPath" ":") ;
  mProperty_mFilewrapperPath.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFilewrapperExtensionList" ":") ;
  mProperty_mFilewrapperExtensionList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFilewrapperFileMap" ":") ;
  mProperty_mFilewrapperFileMap.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFilewrapperDirectoryMap" ":") ;
  mProperty_mFilewrapperDirectoryMap.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFilewrapperTemplateMap" ":") ;
  mProperty_mFilewrapperTemplateMap.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsInternal" ":") ;
  mProperty_mIsInternal.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap::GGS_filewrapperMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap::GGS_filewrapperMap (const GGS_filewrapperMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap & GGS_filewrapperMap::operator = (const GGS_filewrapperMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap GGS_filewrapperMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_filewrapperMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap GGS_filewrapperMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_filewrapperMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap_2E_element_3F_ GGS_filewrapperMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_filewrapperMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_filewrapperMap * p = (cMapElement_filewrapperMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_filewrapperMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_filewrapperMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mFilewrapperPath = p->mProperty_mFilewrapperPath ;
      element.mProperty_mFilewrapperExtensionList = p->mProperty_mFilewrapperExtensionList ;
      element.mProperty_mFilewrapperFileMap = p->mProperty_mFilewrapperFileMap ;
      element.mProperty_mFilewrapperDirectoryMap = p->mProperty_mFilewrapperDirectoryMap ;
      element.mProperty_mFilewrapperTemplateMap = p->mProperty_mFilewrapperTemplateMap ;
      element.mProperty_mIsInternal = p->mProperty_mIsInternal ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap GGS_filewrapperMap::class_func_mapWithMapToOverride (const GGS_filewrapperMap & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GGS_filewrapperMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap GGS_filewrapperMap::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_filewrapperMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperMap::enterElement (const GGS_filewrapperMap_2E_element & inValue,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  cMapElement_filewrapperMap * p = nullptr ;
  macroMyNew (p, cMapElement_filewrapperMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@filewrapperMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperMap::addAssign_operation (const GGS_lstring & inKey,
                                              const GGS_lstring & inArgument0,
                                              const GGS_lstringlist & inArgument1,
                                              const GGS_wrapperFileMap & inArgument2,
                                              const GGS_wrapperDirectoryMap & inArgument3,
                                              const GGS_filewrapperTemplateMap & inArgument4,
                                              const GGS_bool & inArgument5,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_filewrapperMap * p = nullptr ;
  macroMyNew (p, cMapElement_filewrapperMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@filewrapperMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap GGS_filewrapperMap::add_operation (const GGS_filewrapperMap & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_filewrapperMap result = *this ;
  cEnumerator_filewrapperMap enumerator (inOperand, EnumerationOrder::Up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mFilewrapperPath (HERE), enumerator.current_mFilewrapperExtensionList (HERE), enumerator.current_mFilewrapperFileMap (HERE), enumerator.current_mFilewrapperDirectoryMap (HERE), enumerator.current_mFilewrapperTemplateMap (HERE), enumerator.current_mIsInternal (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperMap::setter_insertKey (GGS_lstring inKey,
                                           GGS_lstring inArgument0,
                                           GGS_lstringlist inArgument1,
                                           GGS_wrapperFileMap inArgument2,
                                           GGS_wrapperDirectoryMap inArgument3,
                                           GGS_filewrapperTemplateMap inArgument4,
                                           GGS_bool inArgument5,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_filewrapperMap * p = nullptr ;
  macroMyNew (p, cMapElement_filewrapperMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' filewrapper has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_filewrapperMap_searchKey = "the '%K' filewrapper is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperMap::method_searchKey (GGS_lstring inKey,
                                           GGS_lstring & outArgument0,
                                           GGS_lstringlist & outArgument1,
                                           GGS_wrapperFileMap & outArgument2,
                                           GGS_wrapperDirectoryMap & outArgument3,
                                           GGS_filewrapperTemplateMap & outArgument4,
                                           GGS_bool & outArgument5,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) performSearch (inKey,
                                                                                             inCompiler,
                                                                                             kSearchErrorMessage_filewrapperMap_searchKey
                                                                                             COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    outArgument0 = p->mProperty_mFilewrapperPath ;
    outArgument1 = p->mProperty_mFilewrapperExtensionList ;
    outArgument2 = p->mProperty_mFilewrapperFileMap ;
    outArgument3 = p->mProperty_mFilewrapperDirectoryMap ;
    outArgument4 = p->mProperty_mFilewrapperTemplateMap ;
    outArgument5 = p->mProperty_mIsInternal ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_filewrapperMap::getter_mFilewrapperPathForKey (const GGS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) attributes ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    result = p->mProperty_mFilewrapperPath ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_filewrapperMap::getter_mFilewrapperExtensionListForKey (const GGS_string & inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) attributes ;
  GGS_lstringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    result = p->mProperty_mFilewrapperExtensionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap GGS_filewrapperMap::getter_mFilewrapperFileMapForKey (const GGS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) attributes ;
  GGS_wrapperFileMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    result = p->mProperty_mFilewrapperFileMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap GGS_filewrapperMap::getter_mFilewrapperDirectoryMapForKey (const GGS_string & inKey,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) attributes ;
  GGS_wrapperDirectoryMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    result = p->mProperty_mFilewrapperDirectoryMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap GGS_filewrapperMap::getter_mFilewrapperTemplateMapForKey (const GGS_string & inKey,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) attributes ;
  GGS_filewrapperTemplateMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    result = p->mProperty_mFilewrapperTemplateMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_filewrapperMap::getter_mIsInternalForKey (const GGS_string & inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    result = p->mProperty_mIsInternal ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperMap::setter_setMFilewrapperPathForKey (GGS_lstring inAttributeValue,
                                                           GGS_string inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_filewrapperMap * p = (cMapElement_filewrapperMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    p->mProperty_mFilewrapperPath = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperMap::setter_setMFilewrapperExtensionListForKey (GGS_lstringlist inAttributeValue,
                                                                    GGS_string inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_filewrapperMap * p = (cMapElement_filewrapperMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    p->mProperty_mFilewrapperExtensionList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperMap::setter_setMFilewrapperFileMapForKey (GGS_wrapperFileMap inAttributeValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_filewrapperMap * p = (cMapElement_filewrapperMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    p->mProperty_mFilewrapperFileMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperMap::setter_setMFilewrapperDirectoryMapForKey (GGS_wrapperDirectoryMap inAttributeValue,
                                                                   GGS_string inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_filewrapperMap * p = (cMapElement_filewrapperMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    p->mProperty_mFilewrapperDirectoryMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperMap::setter_setMFilewrapperTemplateMapForKey (GGS_filewrapperTemplateMap inAttributeValue,
                                                                  GGS_string inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_filewrapperMap * p = (cMapElement_filewrapperMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    p->mProperty_mFilewrapperTemplateMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperMap::setter_setMIsInternalForKey (GGS_bool inAttributeValue,
                                                      GGS_string inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_filewrapperMap * p = (cMapElement_filewrapperMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    p->mProperty_mIsInternal = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_filewrapperMap * GGS_filewrapperMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                    const GGS_string & inKey
                                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_filewrapperMap * result = (cMapElement_filewrapperMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_filewrapperMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enumerator for @filewrapperMap
//--------------------------------------------------------------------------------------------------

cEnumerator_filewrapperMap::cEnumerator_filewrapperMap (const GGS_filewrapperMap & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap_2E_element cEnumerator_filewrapperMap::current (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return GGS_filewrapperMap_2E_element (p->mProperty_lkey, p->mProperty_mFilewrapperPath, p->mProperty_mFilewrapperExtensionList, p->mProperty_mFilewrapperFileMap, p->mProperty_mFilewrapperDirectoryMap, p->mProperty_mFilewrapperTemplateMap, p->mProperty_mIsInternal) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_filewrapperMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_filewrapperMap::current_mFilewrapperPath (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mProperty_mFilewrapperPath ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist cEnumerator_filewrapperMap::current_mFilewrapperExtensionList (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mProperty_mFilewrapperExtensionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap cEnumerator_filewrapperMap::current_mFilewrapperFileMap (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mProperty_mFilewrapperFileMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap cEnumerator_filewrapperMap::current_mFilewrapperDirectoryMap (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mProperty_mFilewrapperDirectoryMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap cEnumerator_filewrapperMap::current_mFilewrapperTemplateMap (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mProperty_mFilewrapperTemplateMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_filewrapperMap::current_mIsInternal (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mProperty_mIsInternal ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @filewrapperMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_filewrapperMap::DownEnumerator_filewrapperMap (const GGS_filewrapperMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap_2E_element DownEnumerator_filewrapperMap::current (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return GGS_filewrapperMap_2E_element (p->mProperty_lkey, p->mProperty_mFilewrapperPath, p->mProperty_mFilewrapperExtensionList, p->mProperty_mFilewrapperFileMap, p->mProperty_mFilewrapperDirectoryMap, p->mProperty_mFilewrapperTemplateMap, p->mProperty_mIsInternal) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_filewrapperMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_filewrapperMap::current_mFilewrapperPath (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mProperty_mFilewrapperPath ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist DownEnumerator_filewrapperMap::current_mFilewrapperExtensionList (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mProperty_mFilewrapperExtensionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap DownEnumerator_filewrapperMap::current_mFilewrapperFileMap (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mProperty_mFilewrapperFileMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap DownEnumerator_filewrapperMap::current_mFilewrapperDirectoryMap (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mProperty_mFilewrapperDirectoryMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap DownEnumerator_filewrapperMap::current_mFilewrapperTemplateMap (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mProperty_mFilewrapperTemplateMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_filewrapperMap::current_mIsInternal (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mProperty_mIsInternal ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @filewrapperMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_filewrapperMap::UpEnumerator_filewrapperMap (const GGS_filewrapperMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap_2E_element UpEnumerator_filewrapperMap::current (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return GGS_filewrapperMap_2E_element (p->mProperty_lkey, p->mProperty_mFilewrapperPath, p->mProperty_mFilewrapperExtensionList, p->mProperty_mFilewrapperFileMap, p->mProperty_mFilewrapperDirectoryMap, p->mProperty_mFilewrapperTemplateMap, p->mProperty_mIsInternal) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_filewrapperMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_filewrapperMap::current_mFilewrapperPath (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mProperty_mFilewrapperPath ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist UpEnumerator_filewrapperMap::current_mFilewrapperExtensionList (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mProperty_mFilewrapperExtensionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap UpEnumerator_filewrapperMap::current_mFilewrapperFileMap (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mProperty_mFilewrapperFileMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap UpEnumerator_filewrapperMap::current_mFilewrapperDirectoryMap (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mProperty_mFilewrapperDirectoryMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap UpEnumerator_filewrapperMap::current_mFilewrapperTemplateMap (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mProperty_mFilewrapperTemplateMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_filewrapperMap::current_mIsInternal (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mProperty_mIsInternal ;
}


//--------------------------------------------------------------------------------------------------
//     @filewrapperMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperMap ("filewrapperMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_filewrapperMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap GGS_filewrapperMap::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_filewrapperMap result ;
  const GGS_filewrapperMap * p = (const GGS_filewrapperMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_optionComponentMapForSemanticAnalysis::cMapElement_optionComponentMapForSemanticAnalysis (const GGS_optionComponentMapForSemanticAnalysis_2E_element & inValue
                                                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mIsPredefined (inValue.mProperty_mIsPredefined),
mProperty_mBoolOptionMap (inValue.mProperty_mBoolOptionMap),
mProperty_mUIntOptionMap (inValue.mProperty_mUIntOptionMap),
mProperty_mStringOptionMap (inValue.mProperty_mStringOptionMap),
mProperty_mStringListOptionMap (inValue.mProperty_mStringListOptionMap) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_optionComponentMapForSemanticAnalysis::cMapElement_optionComponentMapForSemanticAnalysis (const GGS_lstring & inKey,
                                                                                                      const GGS_bool & in_mIsPredefined,
                                                                                                      const GGS_commandLineOptionMap & in_mBoolOptionMap,
                                                                                                      const GGS_commandLineOptionMap & in_mUIntOptionMap,
                                                                                                      const GGS_commandLineOptionMap & in_mStringOptionMap,
                                                                                                      const GGS_commandLineOptionMap & in_mStringListOptionMap
                                                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIsPredefined (in_mIsPredefined),
mProperty_mBoolOptionMap (in_mBoolOptionMap),
mProperty_mUIntOptionMap (in_mUIntOptionMap),
mProperty_mStringOptionMap (in_mStringOptionMap),
mProperty_mStringListOptionMap (in_mStringListOptionMap) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_optionComponentMapForSemanticAnalysis::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_optionComponentMapForSemanticAnalysis::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_optionComponentMapForSemanticAnalysis (mProperty_lkey, mProperty_mIsPredefined, mProperty_mBoolOptionMap, mProperty_mUIntOptionMap, mProperty_mStringOptionMap, mProperty_mStringListOptionMap COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_optionComponentMapForSemanticAnalysis::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsPredefined" ":") ;
  mProperty_mIsPredefined.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBoolOptionMap" ":") ;
  mProperty_mBoolOptionMap.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mUIntOptionMap" ":") ;
  mProperty_mUIntOptionMap.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mStringOptionMap" ":") ;
  mProperty_mStringOptionMap.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mStringListOptionMap" ":") ;
  mProperty_mStringListOptionMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis::GGS_optionComponentMapForSemanticAnalysis (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis::GGS_optionComponentMapForSemanticAnalysis (const GGS_optionComponentMapForSemanticAnalysis & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis & GGS_optionComponentMapForSemanticAnalysis::operator = (const GGS_optionComponentMapForSemanticAnalysis & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis GGS_optionComponentMapForSemanticAnalysis::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_optionComponentMapForSemanticAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis GGS_optionComponentMapForSemanticAnalysis::class_func_emptyMap (LOCATION_ARGS) {
  GGS_optionComponentMapForSemanticAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_ GGS_optionComponentMapForSemanticAnalysis
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_optionComponentMapForSemanticAnalysis * p = (cMapElement_optionComponentMapForSemanticAnalysis *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_::init_nil () ;
    }else{
      GGS_optionComponentMapForSemanticAnalysis_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mIsPredefined = p->mProperty_mIsPredefined ;
      element.mProperty_mBoolOptionMap = p->mProperty_mBoolOptionMap ;
      element.mProperty_mUIntOptionMap = p->mProperty_mUIntOptionMap ;
      element.mProperty_mStringOptionMap = p->mProperty_mStringOptionMap ;
      element.mProperty_mStringListOptionMap = p->mProperty_mStringListOptionMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis GGS_optionComponentMapForSemanticAnalysis::class_func_mapWithMapToOverride (const GGS_optionComponentMapForSemanticAnalysis & inMapToOverride
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_optionComponentMapForSemanticAnalysis result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis GGS_optionComponentMapForSemanticAnalysis::getter_overriddenMap (Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_optionComponentMapForSemanticAnalysis result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForSemanticAnalysis::enterElement (const GGS_optionComponentMapForSemanticAnalysis_2E_element & inValue,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_optionComponentMapForSemanticAnalysis * p = nullptr ;
  macroMyNew (p, cMapElement_optionComponentMapForSemanticAnalysis (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@optionComponentMapForSemanticAnalysis insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForSemanticAnalysis::addAssign_operation (const GGS_lstring & inKey,
                                                                     const GGS_bool & inArgument0,
                                                                     const GGS_commandLineOptionMap & inArgument1,
                                                                     const GGS_commandLineOptionMap & inArgument2,
                                                                     const GGS_commandLineOptionMap & inArgument3,
                                                                     const GGS_commandLineOptionMap & inArgument4,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_optionComponentMapForSemanticAnalysis * p = nullptr ;
  macroMyNew (p, cMapElement_optionComponentMapForSemanticAnalysis (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@optionComponentMapForSemanticAnalysis insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis GGS_optionComponentMapForSemanticAnalysis::add_operation (const GGS_optionComponentMapForSemanticAnalysis & inOperand,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_optionComponentMapForSemanticAnalysis result = *this ;
  cEnumerator_optionComponentMapForSemanticAnalysis enumerator (inOperand, EnumerationOrder::Up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mIsPredefined (HERE), enumerator.current_mBoolOptionMap (HERE), enumerator.current_mUIntOptionMap (HERE), enumerator.current_mStringOptionMap (HERE), enumerator.current_mStringListOptionMap (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForSemanticAnalysis::setter_insertKey (GGS_lstring inKey,
                                                                  GGS_bool inArgument0,
                                                                  GGS_commandLineOptionMap inArgument1,
                                                                  GGS_commandLineOptionMap inArgument2,
                                                                  GGS_commandLineOptionMap inArgument3,
                                                                  GGS_commandLineOptionMap inArgument4,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_optionComponentMapForSemanticAnalysis * p = nullptr ;
  macroMyNew (p, cMapElement_optionComponentMapForSemanticAnalysis (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of the '%K' option component: it has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_optionComponentMapForSemanticAnalysis_searchKey = "the '%K' option component is not imported" ;

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForSemanticAnalysis::method_searchKey (GGS_lstring inKey,
                                                                  GGS_bool & outArgument0,
                                                                  GGS_commandLineOptionMap & outArgument1,
                                                                  GGS_commandLineOptionMap & outArgument2,
                                                                  GGS_commandLineOptionMap & outArgument3,
                                                                  GGS_commandLineOptionMap & outArgument4,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) performSearch (inKey,
                                                                                                                                           inCompiler,
                                                                                                                                           kSearchErrorMessage_optionComponentMapForSemanticAnalysis_searchKey
                                                                                                                                           COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    outArgument0 = p->mProperty_mIsPredefined ;
    outArgument1 = p->mProperty_mBoolOptionMap ;
    outArgument2 = p->mProperty_mUIntOptionMap ;
    outArgument3 = p->mProperty_mStringOptionMap ;
    outArgument4 = p->mProperty_mStringListOptionMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionComponentMapForSemanticAnalysis::getter_mIsPredefinedForKey (const GGS_string & inKey,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    result = p->mProperty_mIsPredefined ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap GGS_optionComponentMapForSemanticAnalysis::getter_mBoolOptionMapForKey (const GGS_string & inKey,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  GGS_commandLineOptionMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    result = p->mProperty_mBoolOptionMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap GGS_optionComponentMapForSemanticAnalysis::getter_mUIntOptionMapForKey (const GGS_string & inKey,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  GGS_commandLineOptionMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    result = p->mProperty_mUIntOptionMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap GGS_optionComponentMapForSemanticAnalysis::getter_mStringOptionMapForKey (const GGS_string & inKey,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  GGS_commandLineOptionMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    result = p->mProperty_mStringOptionMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap GGS_optionComponentMapForSemanticAnalysis::getter_mStringListOptionMapForKey (const GGS_string & inKey,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  GGS_commandLineOptionMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    result = p->mProperty_mStringListOptionMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForSemanticAnalysis::setter_setMIsPredefinedForKey (GGS_bool inAttributeValue,
                                                                               GGS_string inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_optionComponentMapForSemanticAnalysis * p = (cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    p->mProperty_mIsPredefined = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForSemanticAnalysis::setter_setMBoolOptionMapForKey (GGS_commandLineOptionMap inAttributeValue,
                                                                                GGS_string inKey,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_optionComponentMapForSemanticAnalysis * p = (cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    p->mProperty_mBoolOptionMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForSemanticAnalysis::setter_setMUIntOptionMapForKey (GGS_commandLineOptionMap inAttributeValue,
                                                                                GGS_string inKey,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_optionComponentMapForSemanticAnalysis * p = (cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    p->mProperty_mUIntOptionMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForSemanticAnalysis::setter_setMStringOptionMapForKey (GGS_commandLineOptionMap inAttributeValue,
                                                                                  GGS_string inKey,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_optionComponentMapForSemanticAnalysis * p = (cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    p->mProperty_mStringOptionMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForSemanticAnalysis::setter_setMStringListOptionMapForKey (GGS_commandLineOptionMap inAttributeValue,
                                                                                      GGS_string inKey,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_optionComponentMapForSemanticAnalysis * p = (cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    p->mProperty_mStringListOptionMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_optionComponentMapForSemanticAnalysis * GGS_optionComponentMapForSemanticAnalysis::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                                  const GGS_string & inKey
                                                                                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_optionComponentMapForSemanticAnalysis * result = (cMapElement_optionComponentMapForSemanticAnalysis *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enumerator for @optionComponentMapForSemanticAnalysis
//--------------------------------------------------------------------------------------------------

cEnumerator_optionComponentMapForSemanticAnalysis::cEnumerator_optionComponentMapForSemanticAnalysis (const GGS_optionComponentMapForSemanticAnalysis & inEnumeratedObject,
                                                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis_2E_element cEnumerator_optionComponentMapForSemanticAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return GGS_optionComponentMapForSemanticAnalysis_2E_element (p->mProperty_lkey, p->mProperty_mIsPredefined, p->mProperty_mBoolOptionMap, p->mProperty_mUIntOptionMap, p->mProperty_mStringOptionMap, p->mProperty_mStringListOptionMap) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_optionComponentMapForSemanticAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_optionComponentMapForSemanticAnalysis::current_mIsPredefined (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return p->mProperty_mIsPredefined ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap cEnumerator_optionComponentMapForSemanticAnalysis::current_mBoolOptionMap (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return p->mProperty_mBoolOptionMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap cEnumerator_optionComponentMapForSemanticAnalysis::current_mUIntOptionMap (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return p->mProperty_mUIntOptionMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap cEnumerator_optionComponentMapForSemanticAnalysis::current_mStringOptionMap (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return p->mProperty_mStringOptionMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap cEnumerator_optionComponentMapForSemanticAnalysis::current_mStringListOptionMap (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return p->mProperty_mStringListOptionMap ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @optionComponentMapForSemanticAnalysis
//--------------------------------------------------------------------------------------------------

DownEnumerator_optionComponentMapForSemanticAnalysis::DownEnumerator_optionComponentMapForSemanticAnalysis (const GGS_optionComponentMapForSemanticAnalysis & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis_2E_element DownEnumerator_optionComponentMapForSemanticAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return GGS_optionComponentMapForSemanticAnalysis_2E_element (p->mProperty_lkey, p->mProperty_mIsPredefined, p->mProperty_mBoolOptionMap, p->mProperty_mUIntOptionMap, p->mProperty_mStringOptionMap, p->mProperty_mStringListOptionMap) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_optionComponentMapForSemanticAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_optionComponentMapForSemanticAnalysis::current_mIsPredefined (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return p->mProperty_mIsPredefined ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap DownEnumerator_optionComponentMapForSemanticAnalysis::current_mBoolOptionMap (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return p->mProperty_mBoolOptionMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap DownEnumerator_optionComponentMapForSemanticAnalysis::current_mUIntOptionMap (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return p->mProperty_mUIntOptionMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap DownEnumerator_optionComponentMapForSemanticAnalysis::current_mStringOptionMap (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return p->mProperty_mStringOptionMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap DownEnumerator_optionComponentMapForSemanticAnalysis::current_mStringListOptionMap (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return p->mProperty_mStringListOptionMap ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @optionComponentMapForSemanticAnalysis
//--------------------------------------------------------------------------------------------------

UpEnumerator_optionComponentMapForSemanticAnalysis::UpEnumerator_optionComponentMapForSemanticAnalysis (const GGS_optionComponentMapForSemanticAnalysis & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis_2E_element UpEnumerator_optionComponentMapForSemanticAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return GGS_optionComponentMapForSemanticAnalysis_2E_element (p->mProperty_lkey, p->mProperty_mIsPredefined, p->mProperty_mBoolOptionMap, p->mProperty_mUIntOptionMap, p->mProperty_mStringOptionMap, p->mProperty_mStringListOptionMap) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_optionComponentMapForSemanticAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_optionComponentMapForSemanticAnalysis::current_mIsPredefined (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return p->mProperty_mIsPredefined ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap UpEnumerator_optionComponentMapForSemanticAnalysis::current_mBoolOptionMap (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return p->mProperty_mBoolOptionMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap UpEnumerator_optionComponentMapForSemanticAnalysis::current_mUIntOptionMap (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return p->mProperty_mUIntOptionMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap UpEnumerator_optionComponentMapForSemanticAnalysis::current_mStringOptionMap (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return p->mProperty_mStringOptionMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap UpEnumerator_optionComponentMapForSemanticAnalysis::current_mStringListOptionMap (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return p->mProperty_mStringListOptionMap ;
}


//--------------------------------------------------------------------------------------------------
//     @optionComponentMapForSemanticAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis ("optionComponentMapForSemanticAnalysis",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_optionComponentMapForSemanticAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionComponentMapForSemanticAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionComponentMapForSemanticAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis GGS_optionComponentMapForSemanticAnalysis::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_optionComponentMapForSemanticAnalysis result ;
  const GGS_optionComponentMapForSemanticAnalysis * p = (const GGS_optionComponentMapForSemanticAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionComponentMapForSemanticAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentMapForSemanticAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_lexiqueComponentMapForSemanticAnalysis::cMapElement_lexiqueComponentMapForSemanticAnalysis (const GGS_lexiqueComponentMapForSemanticAnalysis_2E_element & inValue
                                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mIsTemplate (inValue.mProperty_mIsTemplate),
mProperty_mTerminalMap (inValue.mProperty_mTerminalMap),
mProperty_mIndexingListAST (inValue.mProperty_mIndexingListAST),
mProperty_mTerminalListAST (inValue.mProperty_mTerminalListAST),
mProperty_mLexicalAttributeListAST (inValue.mProperty_mLexicalAttributeListAST),
mProperty_mLexicalStyleListAST (inValue.mProperty_mLexicalStyleListAST),
mProperty_mLexicalListDeclarationListAST (inValue.mProperty_mLexicalListDeclarationListAST) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_lexiqueComponentMapForSemanticAnalysis::cMapElement_lexiqueComponentMapForSemanticAnalysis (const GGS_lstring & inKey,
                                                                                                        const GGS_bool & in_mIsTemplate,
                                                                                                        const GGS_terminalMap & in_mTerminalMap,
                                                                                                        const GGS_indexingListAST & in_mIndexingListAST,
                                                                                                        const GGS_terminalDeclarationListAST & in_mTerminalListAST,
                                                                                                        const GGS_lexicalAttributeListAST & in_mLexicalAttributeListAST,
                                                                                                        const GGS_lexicalStyleListAST & in_mLexicalStyleListAST,
                                                                                                        const GGS_lexicalListDeclarationListAST & in_mLexicalListDeclarationListAST
                                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIsTemplate (in_mIsTemplate),
mProperty_mTerminalMap (in_mTerminalMap),
mProperty_mIndexingListAST (in_mIndexingListAST),
mProperty_mTerminalListAST (in_mTerminalListAST),
mProperty_mLexicalAttributeListAST (in_mLexicalAttributeListAST),
mProperty_mLexicalStyleListAST (in_mLexicalStyleListAST),
mProperty_mLexicalListDeclarationListAST (in_mLexicalListDeclarationListAST) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_lexiqueComponentMapForSemanticAnalysis::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_lexiqueComponentMapForSemanticAnalysis::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_lexiqueComponentMapForSemanticAnalysis (mProperty_lkey, mProperty_mIsTemplate, mProperty_mTerminalMap, mProperty_mIndexingListAST, mProperty_mTerminalListAST, mProperty_mLexicalAttributeListAST, mProperty_mLexicalStyleListAST, mProperty_mLexicalListDeclarationListAST COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_lexiqueComponentMapForSemanticAnalysis::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsTemplate" ":") ;
  mProperty_mIsTemplate.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTerminalMap" ":") ;
  mProperty_mTerminalMap.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIndexingListAST" ":") ;
  mProperty_mIndexingListAST.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTerminalListAST" ":") ;
  mProperty_mTerminalListAST.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexicalAttributeListAST" ":") ;
  mProperty_mLexicalAttributeListAST.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexicalStyleListAST" ":") ;
  mProperty_mLexicalStyleListAST.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexicalListDeclarationListAST" ":") ;
  mProperty_mLexicalListDeclarationListAST.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis::GGS_lexiqueComponentMapForSemanticAnalysis (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis::GGS_lexiqueComponentMapForSemanticAnalysis (const GGS_lexiqueComponentMapForSemanticAnalysis & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis & GGS_lexiqueComponentMapForSemanticAnalysis::operator = (const GGS_lexiqueComponentMapForSemanticAnalysis & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis GGS_lexiqueComponentMapForSemanticAnalysis::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_lexiqueComponentMapForSemanticAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis GGS_lexiqueComponentMapForSemanticAnalysis::class_func_emptyMap (LOCATION_ARGS) {
  GGS_lexiqueComponentMapForSemanticAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_ GGS_lexiqueComponentMapForSemanticAnalysis
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_::init_nil () ;
    }else{
      GGS_lexiqueComponentMapForSemanticAnalysis_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mIsTemplate = p->mProperty_mIsTemplate ;
      element.mProperty_mTerminalMap = p->mProperty_mTerminalMap ;
      element.mProperty_mIndexingListAST = p->mProperty_mIndexingListAST ;
      element.mProperty_mTerminalListAST = p->mProperty_mTerminalListAST ;
      element.mProperty_mLexicalAttributeListAST = p->mProperty_mLexicalAttributeListAST ;
      element.mProperty_mLexicalStyleListAST = p->mProperty_mLexicalStyleListAST ;
      element.mProperty_mLexicalListDeclarationListAST = p->mProperty_mLexicalListDeclarationListAST ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis GGS_lexiqueComponentMapForSemanticAnalysis::class_func_mapWithMapToOverride (const GGS_lexiqueComponentMapForSemanticAnalysis & inMapToOverride
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_lexiqueComponentMapForSemanticAnalysis result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis GGS_lexiqueComponentMapForSemanticAnalysis::getter_overriddenMap (Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_lexiqueComponentMapForSemanticAnalysis result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::enterElement (const GGS_lexiqueComponentMapForSemanticAnalysis_2E_element & inValue,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = nullptr ;
  macroMyNew (p, cMapElement_lexiqueComponentMapForSemanticAnalysis (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexiqueComponentMapForSemanticAnalysis insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::addAssign_operation (const GGS_lstring & inKey,
                                                                      const GGS_bool & inArgument0,
                                                                      const GGS_terminalMap & inArgument1,
                                                                      const GGS_indexingListAST & inArgument2,
                                                                      const GGS_terminalDeclarationListAST & inArgument3,
                                                                      const GGS_lexicalAttributeListAST & inArgument4,
                                                                      const GGS_lexicalStyleListAST & inArgument5,
                                                                      const GGS_lexicalListDeclarationListAST & inArgument6,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = nullptr ;
  macroMyNew (p, cMapElement_lexiqueComponentMapForSemanticAnalysis (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexiqueComponentMapForSemanticAnalysis insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis GGS_lexiqueComponentMapForSemanticAnalysis::add_operation (const GGS_lexiqueComponentMapForSemanticAnalysis & inOperand,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lexiqueComponentMapForSemanticAnalysis result = *this ;
  cEnumerator_lexiqueComponentMapForSemanticAnalysis enumerator (inOperand, EnumerationOrder::Up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mIsTemplate (HERE), enumerator.current_mTerminalMap (HERE), enumerator.current_mIndexingListAST (HERE), enumerator.current_mTerminalListAST (HERE), enumerator.current_mLexicalAttributeListAST (HERE), enumerator.current_mLexicalStyleListAST (HERE), enumerator.current_mLexicalListDeclarationListAST (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::setter_insertKey (GGS_lstring inKey,
                                                                   GGS_bool inArgument0,
                                                                   GGS_terminalMap inArgument1,
                                                                   GGS_indexingListAST inArgument2,
                                                                   GGS_terminalDeclarationListAST inArgument3,
                                                                   GGS_lexicalAttributeListAST inArgument4,
                                                                   GGS_lexicalStyleListAST inArgument5,
                                                                   GGS_lexicalListDeclarationListAST inArgument6,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = nullptr ;
  macroMyNew (p, cMapElement_lexiqueComponentMapForSemanticAnalysis (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of the '%K' lexique component: it has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_lexiqueComponentMapForSemanticAnalysis_searchKey = "the '%K' lexique component is not imported" ;

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::method_searchKey (GGS_lstring inKey,
                                                                   GGS_bool & outArgument0,
                                                                   GGS_terminalMap & outArgument1,
                                                                   GGS_indexingListAST & outArgument2,
                                                                   GGS_terminalDeclarationListAST & outArgument3,
                                                                   GGS_lexicalAttributeListAST & outArgument4,
                                                                   GGS_lexicalStyleListAST & outArgument5,
                                                                   GGS_lexicalListDeclarationListAST & outArgument6,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) performSearch (inKey,
                                                                                                                                             inCompiler,
                                                                                                                                             kSearchErrorMessage_lexiqueComponentMapForSemanticAnalysis_searchKey
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
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    outArgument0 = p->mProperty_mIsTemplate ;
    outArgument1 = p->mProperty_mTerminalMap ;
    outArgument2 = p->mProperty_mIndexingListAST ;
    outArgument3 = p->mProperty_mTerminalListAST ;
    outArgument4 = p->mProperty_mLexicalAttributeListAST ;
    outArgument5 = p->mProperty_mLexicalStyleListAST ;
    outArgument6 = p->mProperty_mLexicalListDeclarationListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexiqueComponentMapForSemanticAnalysis::getter_mIsTemplateForKey (const GGS_string & inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    result = p->mProperty_mIsTemplate ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalMap GGS_lexiqueComponentMapForSemanticAnalysis::getter_mTerminalMapForKey (const GGS_string & inKey,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  GGS_terminalMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    result = p->mProperty_mTerminalMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_indexingListAST GGS_lexiqueComponentMapForSemanticAnalysis::getter_mIndexingListASTForKey (const GGS_string & inKey,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  GGS_indexingListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    result = p->mProperty_mIndexingListAST ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalDeclarationListAST GGS_lexiqueComponentMapForSemanticAnalysis::getter_mTerminalListASTForKey (const GGS_string & inKey,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  GGS_terminalDeclarationListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    result = p->mProperty_mTerminalListAST ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeListAST GGS_lexiqueComponentMapForSemanticAnalysis::getter_mLexicalAttributeListASTForKey (const GGS_string & inKey,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  GGS_lexicalAttributeListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    result = p->mProperty_mLexicalAttributeListAST ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleListAST GGS_lexiqueComponentMapForSemanticAnalysis::getter_mLexicalStyleListASTForKey (const GGS_string & inKey,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  GGS_lexicalStyleListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    result = p->mProperty_mLexicalStyleListAST ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListDeclarationListAST GGS_lexiqueComponentMapForSemanticAnalysis::getter_mLexicalListDeclarationListASTForKey (const GGS_string & inKey,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  GGS_lexicalListDeclarationListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    result = p->mProperty_mLexicalListDeclarationListAST ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::setter_setMIsTemplateForKey (GGS_bool inAttributeValue,
                                                                              GGS_string inKey,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    p->mProperty_mIsTemplate = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::setter_setMTerminalMapForKey (GGS_terminalMap inAttributeValue,
                                                                               GGS_string inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    p->mProperty_mTerminalMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::setter_setMIndexingListASTForKey (GGS_indexingListAST inAttributeValue,
                                                                                   GGS_string inKey,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    p->mProperty_mIndexingListAST = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::setter_setMTerminalListASTForKey (GGS_terminalDeclarationListAST inAttributeValue,
                                                                                   GGS_string inKey,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    p->mProperty_mTerminalListAST = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::setter_setMLexicalAttributeListASTForKey (GGS_lexicalAttributeListAST inAttributeValue,
                                                                                           GGS_string inKey,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    p->mProperty_mLexicalAttributeListAST = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::setter_setMLexicalStyleListASTForKey (GGS_lexicalStyleListAST inAttributeValue,
                                                                                       GGS_string inKey,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    p->mProperty_mLexicalStyleListAST = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::setter_setMLexicalListDeclarationListASTForKey (GGS_lexicalListDeclarationListAST inAttributeValue,
                                                                                                 GGS_string inKey,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    p->mProperty_mLexicalListDeclarationListAST = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_lexiqueComponentMapForSemanticAnalysis * GGS_lexiqueComponentMapForSemanticAnalysis::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                                    const GGS_string & inKey
                                                                                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_lexiqueComponentMapForSemanticAnalysis * result = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enumerator for @lexiqueComponentMapForSemanticAnalysis
//--------------------------------------------------------------------------------------------------

cEnumerator_lexiqueComponentMapForSemanticAnalysis::cEnumerator_lexiqueComponentMapForSemanticAnalysis (const GGS_lexiqueComponentMapForSemanticAnalysis & inEnumeratedObject,
                                                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis_2E_element cEnumerator_lexiqueComponentMapForSemanticAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return GGS_lexiqueComponentMapForSemanticAnalysis_2E_element (p->mProperty_lkey, p->mProperty_mIsTemplate, p->mProperty_mTerminalMap, p->mProperty_mIndexingListAST, p->mProperty_mTerminalListAST, p->mProperty_mLexicalAttributeListAST, p->mProperty_mLexicalStyleListAST, p->mProperty_mLexicalListDeclarationListAST) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_lexiqueComponentMapForSemanticAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mIsTemplate (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mProperty_mIsTemplate ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalMap cEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mTerminalMap (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mProperty_mTerminalMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_indexingListAST cEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mIndexingListAST (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mProperty_mIndexingListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalDeclarationListAST cEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mTerminalListAST (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mProperty_mTerminalListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeListAST cEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mLexicalAttributeListAST (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mProperty_mLexicalAttributeListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleListAST cEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mLexicalStyleListAST (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mProperty_mLexicalStyleListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListDeclarationListAST cEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mLexicalListDeclarationListAST (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mProperty_mLexicalListDeclarationListAST ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @lexiqueComponentMapForSemanticAnalysis
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexiqueComponentMapForSemanticAnalysis::DownEnumerator_lexiqueComponentMapForSemanticAnalysis (const GGS_lexiqueComponentMapForSemanticAnalysis & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis_2E_element DownEnumerator_lexiqueComponentMapForSemanticAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return GGS_lexiqueComponentMapForSemanticAnalysis_2E_element (p->mProperty_lkey, p->mProperty_mIsTemplate, p->mProperty_mTerminalMap, p->mProperty_mIndexingListAST, p->mProperty_mTerminalListAST, p->mProperty_mLexicalAttributeListAST, p->mProperty_mLexicalStyleListAST, p->mProperty_mLexicalListDeclarationListAST) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexiqueComponentMapForSemanticAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mIsTemplate (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mProperty_mIsTemplate ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalMap DownEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mTerminalMap (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mProperty_mTerminalMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_indexingListAST DownEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mIndexingListAST (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mProperty_mIndexingListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalDeclarationListAST DownEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mTerminalListAST (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mProperty_mTerminalListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeListAST DownEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mLexicalAttributeListAST (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mProperty_mLexicalAttributeListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleListAST DownEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mLexicalStyleListAST (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mProperty_mLexicalStyleListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListDeclarationListAST DownEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mLexicalListDeclarationListAST (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mProperty_mLexicalListDeclarationListAST ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @lexiqueComponentMapForSemanticAnalysis
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexiqueComponentMapForSemanticAnalysis::UpEnumerator_lexiqueComponentMapForSemanticAnalysis (const GGS_lexiqueComponentMapForSemanticAnalysis & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis_2E_element UpEnumerator_lexiqueComponentMapForSemanticAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return GGS_lexiqueComponentMapForSemanticAnalysis_2E_element (p->mProperty_lkey, p->mProperty_mIsTemplate, p->mProperty_mTerminalMap, p->mProperty_mIndexingListAST, p->mProperty_mTerminalListAST, p->mProperty_mLexicalAttributeListAST, p->mProperty_mLexicalStyleListAST, p->mProperty_mLexicalListDeclarationListAST) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexiqueComponentMapForSemanticAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mIsTemplate (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mProperty_mIsTemplate ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalMap UpEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mTerminalMap (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mProperty_mTerminalMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_indexingListAST UpEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mIndexingListAST (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mProperty_mIndexingListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalDeclarationListAST UpEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mTerminalListAST (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mProperty_mTerminalListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeListAST UpEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mLexicalAttributeListAST (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mProperty_mLexicalAttributeListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleListAST UpEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mLexicalStyleListAST (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mProperty_mLexicalStyleListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListDeclarationListAST UpEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mLexicalListDeclarationListAST (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mProperty_mLexicalListDeclarationListAST ;
}


//--------------------------------------------------------------------------------------------------
//     @lexiqueComponentMapForSemanticAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis ("lexiqueComponentMapForSemanticAnalysis",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexiqueComponentMapForSemanticAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexiqueComponentMapForSemanticAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexiqueComponentMapForSemanticAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis GGS_lexiqueComponentMapForSemanticAnalysis::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_lexiqueComponentMapForSemanticAnalysis result ;
  const GGS_lexiqueComponentMapForSemanticAnalysis * p = (const GGS_lexiqueComponentMapForSemanticAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexiqueComponentMapForSemanticAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueComponentMapForSemanticAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_syntaxComponentMap::cMapElement_syntaxComponentMap (const GGS_syntaxComponentMap_2E_element & inValue
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mLexiqueName (inValue.mProperty_mLexiqueName),
mProperty_mNonterminalDeclarationList (inValue.mProperty_mNonterminalDeclarationList),
mProperty_mRuleList (inValue.mProperty_mRuleList),
mProperty_mHasTranslateFeature (inValue.mProperty_mHasTranslateFeature) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_syntaxComponentMap::cMapElement_syntaxComponentMap (const GGS_lstring & inKey,
                                                                const GGS_lstring & in_mLexiqueName,
                                                                const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                const GGS_syntaxRuleListAST & in_mRuleList,
                                                                const GGS_bool & in_mHasTranslateFeature
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mLexiqueName (in_mLexiqueName),
mProperty_mNonterminalDeclarationList (in_mNonterminalDeclarationList),
mProperty_mRuleList (in_mRuleList),
mProperty_mHasTranslateFeature (in_mHasTranslateFeature) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_syntaxComponentMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_syntaxComponentMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_syntaxComponentMap (mProperty_lkey, mProperty_mLexiqueName, mProperty_mNonterminalDeclarationList, mProperty_mRuleList, mProperty_mHasTranslateFeature COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_syntaxComponentMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexiqueName" ":") ;
  mProperty_mLexiqueName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNonterminalDeclarationList" ":") ;
  mProperty_mNonterminalDeclarationList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRuleList" ":") ;
  mProperty_mRuleList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mHasTranslateFeature" ":") ;
  mProperty_mHasTranslateFeature.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap::GGS_syntaxComponentMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap::GGS_syntaxComponentMap (const GGS_syntaxComponentMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap & GGS_syntaxComponentMap::operator = (const GGS_syntaxComponentMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap GGS_syntaxComponentMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_syntaxComponentMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap GGS_syntaxComponentMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_syntaxComponentMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap_2E_element_3F_ GGS_syntaxComponentMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_syntaxComponentMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_syntaxComponentMap * p = (cMapElement_syntaxComponentMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_syntaxComponentMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_syntaxComponentMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mLexiqueName = p->mProperty_mLexiqueName ;
      element.mProperty_mNonterminalDeclarationList = p->mProperty_mNonterminalDeclarationList ;
      element.mProperty_mRuleList = p->mProperty_mRuleList ;
      element.mProperty_mHasTranslateFeature = p->mProperty_mHasTranslateFeature ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap GGS_syntaxComponentMap::class_func_mapWithMapToOverride (const GGS_syntaxComponentMap & inMapToOverride
                                                                                COMMA_LOCATION_ARGS) {
  GGS_syntaxComponentMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap GGS_syntaxComponentMap::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_syntaxComponentMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentMap::enterElement (const GGS_syntaxComponentMap_2E_element & inValue,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_syntaxComponentMap * p = nullptr ;
  macroMyNew (p, cMapElement_syntaxComponentMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@syntaxComponentMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentMap::addAssign_operation (const GGS_lstring & inKey,
                                                  const GGS_lstring & inArgument0,
                                                  const GGS_nonterminalDeclarationListAST & inArgument1,
                                                  const GGS_syntaxRuleListAST & inArgument2,
                                                  const GGS_bool & inArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_syntaxComponentMap * p = nullptr ;
  macroMyNew (p, cMapElement_syntaxComponentMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@syntaxComponentMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap GGS_syntaxComponentMap::add_operation (const GGS_syntaxComponentMap & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_syntaxComponentMap result = *this ;
  cEnumerator_syntaxComponentMap enumerator (inOperand, EnumerationOrder::Up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mLexiqueName (HERE), enumerator.current_mNonterminalDeclarationList (HERE), enumerator.current_mRuleList (HERE), enumerator.current_mHasTranslateFeature (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentMap::setter_insertKey (GGS_lstring inKey,
                                               GGS_lstring inArgument0,
                                               GGS_nonterminalDeclarationListAST inArgument1,
                                               GGS_syntaxRuleListAST inArgument2,
                                               GGS_bool inArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_syntaxComponentMap * p = nullptr ;
  macroMyNew (p, cMapElement_syntaxComponentMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' syntax component has already been parsed" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_syntaxComponentMap_searchKey = "the '%K' syntax component is not parsed" ;

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentMap::method_searchKey (GGS_lstring inKey,
                                               GGS_lstring & outArgument0,
                                               GGS_nonterminalDeclarationListAST & outArgument1,
                                               GGS_syntaxRuleListAST & outArgument2,
                                               GGS_bool & outArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_syntaxComponentMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    outArgument0 = p->mProperty_mLexiqueName ;
    outArgument1 = p->mProperty_mNonterminalDeclarationList ;
    outArgument2 = p->mProperty_mRuleList ;
    outArgument3 = p->mProperty_mHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_syntaxComponentMap::getter_mLexiqueNameForKey (const GGS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) attributes ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    result = p->mProperty_mLexiqueName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST GGS_syntaxComponentMap::getter_mNonterminalDeclarationListForKey (const GGS_string & inKey,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) attributes ;
  GGS_nonterminalDeclarationListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    result = p->mProperty_mNonterminalDeclarationList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST GGS_syntaxComponentMap::getter_mRuleListForKey (const GGS_string & inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) attributes ;
  GGS_syntaxRuleListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    result = p->mProperty_mRuleList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_syntaxComponentMap::getter_mHasTranslateFeatureForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    result = p->mProperty_mHasTranslateFeature ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentMap::setter_setMLexiqueNameForKey (GGS_lstring inAttributeValue,
                                                           GGS_string inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_syntaxComponentMap * p = (cMapElement_syntaxComponentMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    p->mProperty_mLexiqueName = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentMap::setter_setMNonterminalDeclarationListForKey (GGS_nonterminalDeclarationListAST inAttributeValue,
                                                                          GGS_string inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_syntaxComponentMap * p = (cMapElement_syntaxComponentMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    p->mProperty_mNonterminalDeclarationList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentMap::setter_setMRuleListForKey (GGS_syntaxRuleListAST inAttributeValue,
                                                        GGS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_syntaxComponentMap * p = (cMapElement_syntaxComponentMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    p->mProperty_mRuleList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentMap::setter_setMHasTranslateFeatureForKey (GGS_bool inAttributeValue,
                                                                   GGS_string inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_syntaxComponentMap * p = (cMapElement_syntaxComponentMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    p->mProperty_mHasTranslateFeature = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_syntaxComponentMap * GGS_syntaxComponentMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                            const GGS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) {
  cMapElement_syntaxComponentMap * result = (cMapElement_syntaxComponentMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_syntaxComponentMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enumerator for @syntaxComponentMap
//--------------------------------------------------------------------------------------------------

cEnumerator_syntaxComponentMap::cEnumerator_syntaxComponentMap (const GGS_syntaxComponentMap & inEnumeratedObject,
                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap_2E_element cEnumerator_syntaxComponentMap::current (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return GGS_syntaxComponentMap_2E_element (p->mProperty_lkey, p->mProperty_mLexiqueName, p->mProperty_mNonterminalDeclarationList, p->mProperty_mRuleList, p->mProperty_mHasTranslateFeature) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_syntaxComponentMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_syntaxComponentMap::current_mLexiqueName (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return p->mProperty_mLexiqueName ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST cEnumerator_syntaxComponentMap::current_mNonterminalDeclarationList (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return p->mProperty_mNonterminalDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST cEnumerator_syntaxComponentMap::current_mRuleList (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return p->mProperty_mRuleList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_syntaxComponentMap::current_mHasTranslateFeature (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return p->mProperty_mHasTranslateFeature ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @syntaxComponentMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_syntaxComponentMap::DownEnumerator_syntaxComponentMap (const GGS_syntaxComponentMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap_2E_element DownEnumerator_syntaxComponentMap::current (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return GGS_syntaxComponentMap_2E_element (p->mProperty_lkey, p->mProperty_mLexiqueName, p->mProperty_mNonterminalDeclarationList, p->mProperty_mRuleList, p->mProperty_mHasTranslateFeature) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_syntaxComponentMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_syntaxComponentMap::current_mLexiqueName (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return p->mProperty_mLexiqueName ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST DownEnumerator_syntaxComponentMap::current_mNonterminalDeclarationList (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return p->mProperty_mNonterminalDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST DownEnumerator_syntaxComponentMap::current_mRuleList (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return p->mProperty_mRuleList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_syntaxComponentMap::current_mHasTranslateFeature (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return p->mProperty_mHasTranslateFeature ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @syntaxComponentMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_syntaxComponentMap::UpEnumerator_syntaxComponentMap (const GGS_syntaxComponentMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap_2E_element UpEnumerator_syntaxComponentMap::current (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return GGS_syntaxComponentMap_2E_element (p->mProperty_lkey, p->mProperty_mLexiqueName, p->mProperty_mNonterminalDeclarationList, p->mProperty_mRuleList, p->mProperty_mHasTranslateFeature) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_syntaxComponentMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_syntaxComponentMap::current_mLexiqueName (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return p->mProperty_mLexiqueName ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST UpEnumerator_syntaxComponentMap::current_mNonterminalDeclarationList (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return p->mProperty_mNonterminalDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST UpEnumerator_syntaxComponentMap::current_mRuleList (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return p->mProperty_mRuleList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_syntaxComponentMap::current_mHasTranslateFeature (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return p->mProperty_mHasTranslateFeature ;
}


//--------------------------------------------------------------------------------------------------
//     @syntaxComponentMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxComponentMap ("syntaxComponentMap",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syntaxComponentMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxComponentMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxComponentMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxComponentMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap GGS_syntaxComponentMap::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_syntaxComponentMap result ;
  const GGS_syntaxComponentMap * p = (const GGS_syntaxComponentMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxComponentMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxComponentMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionInitializerMapForType::cMapElement_extensionInitializerMapForType (const GGS_extensionInitializerMapForType_2E_element & inValue
                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mFormalParameterList (inValue.mProperty_mFormalParameterList) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionInitializerMapForType::cMapElement_extensionInitializerMapForType (const GGS_lstring & inKey,
                                                                                        const GGS_formalInputParameterListAST & in_mFormalParameterList
                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mFormalParameterList (in_mFormalParameterList) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_extensionInitializerMapForType::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_extensionInitializerMapForType::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_extensionInitializerMapForType (mProperty_lkey, mProperty_mFormalParameterList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_extensionInitializerMapForType::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalParameterList" ":") ;
  mProperty_mFormalParameterList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType::GGS_extensionInitializerMapForType (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType::GGS_extensionInitializerMapForType (const GGS_extensionInitializerMapForType & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType & GGS_extensionInitializerMapForType::operator = (const GGS_extensionInitializerMapForType & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType GGS_extensionInitializerMapForType::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_extensionInitializerMapForType result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType GGS_extensionInitializerMapForType::class_func_emptyMap (LOCATION_ARGS) {
  GGS_extensionInitializerMapForType result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType_2E_element_3F_ GGS_extensionInitializerMapForType
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extensionInitializerMapForType_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_extensionInitializerMapForType * p = (cMapElement_extensionInitializerMapForType *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_extensionInitializerMapForType_2E_element_3F_::init_nil () ;
    }else{
      GGS_extensionInitializerMapForType_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mFormalParameterList = p->mProperty_mFormalParameterList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType GGS_extensionInitializerMapForType::class_func_mapWithMapToOverride (const GGS_extensionInitializerMapForType & inMapToOverride
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_extensionInitializerMapForType result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType GGS_extensionInitializerMapForType::getter_overriddenMap (Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_extensionInitializerMapForType result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerMapForType::enterElement (const GGS_extensionInitializerMapForType_2E_element & inValue,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_extensionInitializerMapForType * p = nullptr ;
  macroMyNew (p, cMapElement_extensionInitializerMapForType (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionInitializerMapForType insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerMapForType::addAssign_operation (const GGS_lstring & inKey,
                                                              const GGS_formalInputParameterListAST & inArgument0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_extensionInitializerMapForType * p = nullptr ;
  macroMyNew (p, cMapElement_extensionInitializerMapForType (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionInitializerMapForType insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType GGS_extensionInitializerMapForType::add_operation (const GGS_extensionInitializerMapForType & inOperand,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_extensionInitializerMapForType result = *this ;
  cEnumerator_extensionInitializerMapForType enumerator (inOperand, EnumerationOrder::Up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mFormalParameterList (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerMapForType::setter_insertKey (GGS_lstring inKey,
                                                           GGS_formalInputParameterListAST inArgument0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_extensionInitializerMapForType * p = nullptr ;
  macroMyNew (p, cMapElement_extensionInitializerMapForType (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' initializer has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST GGS_extensionInitializerMapForType::getter_mFormalParameterListForKey (const GGS_string & inKey,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionInitializerMapForType * p = (const cMapElement_extensionInitializerMapForType *) attributes ;
  GGS_formalInputParameterListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionInitializerMapForType) ;
    result = p->mProperty_mFormalParameterList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerMapForType::setter_setMFormalParameterListForKey (GGS_formalInputParameterListAST inAttributeValue,
                                                                               GGS_string inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_extensionInitializerMapForType * p = (cMapElement_extensionInitializerMapForType *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionInitializerMapForType) ;
    p->mProperty_mFormalParameterList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionInitializerMapForType * GGS_extensionInitializerMapForType::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                    const GGS_string & inKey
                                                                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_extensionInitializerMapForType * result = (cMapElement_extensionInitializerMapForType *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionInitializerMapForType) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enumerator for @extensionInitializerMapForType
//--------------------------------------------------------------------------------------------------

cEnumerator_extensionInitializerMapForType::cEnumerator_extensionInitializerMapForType (const GGS_extensionInitializerMapForType & inEnumeratedObject,
                                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType_2E_element cEnumerator_extensionInitializerMapForType::current (LOCATION_ARGS) const {
  const cMapElement_extensionInitializerMapForType * p = (const cMapElement_extensionInitializerMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionInitializerMapForType) ;
  return GGS_extensionInitializerMapForType_2E_element (p->mProperty_lkey, p->mProperty_mFormalParameterList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_extensionInitializerMapForType::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST cEnumerator_extensionInitializerMapForType::current_mFormalParameterList (LOCATION_ARGS) const {
  const cMapElement_extensionInitializerMapForType * p = (const cMapElement_extensionInitializerMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionInitializerMapForType) ;
  return p->mProperty_mFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @extensionInitializerMapForType
//--------------------------------------------------------------------------------------------------

DownEnumerator_extensionInitializerMapForType::DownEnumerator_extensionInitializerMapForType (const GGS_extensionInitializerMapForType & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType_2E_element DownEnumerator_extensionInitializerMapForType::current (LOCATION_ARGS) const {
  const cMapElement_extensionInitializerMapForType * p = (const cMapElement_extensionInitializerMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionInitializerMapForType) ;
  return GGS_extensionInitializerMapForType_2E_element (p->mProperty_lkey, p->mProperty_mFormalParameterList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_extensionInitializerMapForType::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST DownEnumerator_extensionInitializerMapForType::current_mFormalParameterList (LOCATION_ARGS) const {
  const cMapElement_extensionInitializerMapForType * p = (const cMapElement_extensionInitializerMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionInitializerMapForType) ;
  return p->mProperty_mFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @extensionInitializerMapForType
//--------------------------------------------------------------------------------------------------

UpEnumerator_extensionInitializerMapForType::UpEnumerator_extensionInitializerMapForType (const GGS_extensionInitializerMapForType & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType_2E_element UpEnumerator_extensionInitializerMapForType::current (LOCATION_ARGS) const {
  const cMapElement_extensionInitializerMapForType * p = (const cMapElement_extensionInitializerMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionInitializerMapForType) ;
  return GGS_extensionInitializerMapForType_2E_element (p->mProperty_lkey, p->mProperty_mFormalParameterList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_extensionInitializerMapForType::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST UpEnumerator_extensionInitializerMapForType::current_mFormalParameterList (LOCATION_ARGS) const {
  const cMapElement_extensionInitializerMapForType * p = (const cMapElement_extensionInitializerMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionInitializerMapForType) ;
  return p->mProperty_mFormalParameterList ;
}


//--------------------------------------------------------------------------------------------------
//     @extensionInitializerMapForType generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionInitializerMapForType ("extensionInitializerMapForType",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionInitializerMapForType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionInitializerMapForType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionInitializerMapForType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionInitializerMapForType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType GGS_extensionInitializerMapForType::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_extensionInitializerMapForType result ;
  const GGS_extensionInitializerMapForType * p = (const GGS_extensionInitializerMapForType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionInitializerMapForType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionInitializerMapForType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionInitializerForBuildingContext::cMapElement_extensionInitializerForBuildingContext (const GGS_extensionInitializerForBuildingContext_2E_element & inValue
                                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mExtensionInitializerMapForType (inValue.mProperty_mExtensionInitializerMapForType) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionInitializerForBuildingContext::cMapElement_extensionInitializerForBuildingContext (const GGS_lstring & inKey,
                                                                                                        const GGS_extensionInitializerMapForType & in_mExtensionInitializerMapForType
                                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mExtensionInitializerMapForType (in_mExtensionInitializerMapForType) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_extensionInitializerForBuildingContext::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_extensionInitializerForBuildingContext::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_extensionInitializerForBuildingContext (mProperty_lkey, mProperty_mExtensionInitializerMapForType COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_extensionInitializerForBuildingContext::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExtensionInitializerMapForType" ":") ;
  mProperty_mExtensionInitializerMapForType.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext::GGS_extensionInitializerForBuildingContext (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext::GGS_extensionInitializerForBuildingContext (const GGS_extensionInitializerForBuildingContext & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext & GGS_extensionInitializerForBuildingContext::operator = (const GGS_extensionInitializerForBuildingContext & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext GGS_extensionInitializerForBuildingContext::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_extensionInitializerForBuildingContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext GGS_extensionInitializerForBuildingContext::class_func_emptyMap (LOCATION_ARGS) {
  GGS_extensionInitializerForBuildingContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext_2E_element_3F_ GGS_extensionInitializerForBuildingContext
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extensionInitializerForBuildingContext_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_extensionInitializerForBuildingContext * p = (cMapElement_extensionInitializerForBuildingContext *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_extensionInitializerForBuildingContext_2E_element_3F_::init_nil () ;
    }else{
      GGS_extensionInitializerForBuildingContext_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mExtensionInitializerMapForType = p->mProperty_mExtensionInitializerMapForType ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext GGS_extensionInitializerForBuildingContext::class_func_mapWithMapToOverride (const GGS_extensionInitializerForBuildingContext & inMapToOverride
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_extensionInitializerForBuildingContext result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext GGS_extensionInitializerForBuildingContext::getter_overriddenMap (Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_extensionInitializerForBuildingContext result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerForBuildingContext::enterElement (const GGS_extensionInitializerForBuildingContext_2E_element & inValue,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cMapElement_extensionInitializerForBuildingContext * p = nullptr ;
  macroMyNew (p, cMapElement_extensionInitializerForBuildingContext (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionInitializerForBuildingContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerForBuildingContext::addAssign_operation (const GGS_lstring & inKey,
                                                                      const GGS_extensionInitializerMapForType & inArgument0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cMapElement_extensionInitializerForBuildingContext * p = nullptr ;
  macroMyNew (p, cMapElement_extensionInitializerForBuildingContext (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionInitializerForBuildingContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext GGS_extensionInitializerForBuildingContext::add_operation (const GGS_extensionInitializerForBuildingContext & inOperand,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_extensionInitializerForBuildingContext result = *this ;
  cEnumerator_extensionInitializerForBuildingContext enumerator (inOperand, EnumerationOrder::Up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mExtensionInitializerMapForType (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerForBuildingContext::setter_insertKey (GGS_lstring inKey,
                                                                   GGS_extensionInitializerMapForType inArgument0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_extensionInitializerForBuildingContext * p = nullptr ;
  macroMyNew (p, cMapElement_extensionInitializerForBuildingContext (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "internal error" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_extensionInitializerForBuildingContext_searchKey = "internal error" ;

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerForBuildingContext::method_searchKey (GGS_lstring inKey,
                                                                   GGS_extensionInitializerMapForType & outArgument0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_extensionInitializerForBuildingContext * p = (const cMapElement_extensionInitializerForBuildingContext *) performSearch (inKey,
                                                                                                                                             inCompiler,
                                                                                                                                             kSearchErrorMessage_extensionInitializerForBuildingContext_searchKey
                                                                                                                                             COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_extensionInitializerForBuildingContext) ;
    outArgument0 = p->mProperty_mExtensionInitializerMapForType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType GGS_extensionInitializerForBuildingContext::getter_mExtensionInitializerMapForTypeForKey (const GGS_string & inKey,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionInitializerForBuildingContext * p = (const cMapElement_extensionInitializerForBuildingContext *) attributes ;
  GGS_extensionInitializerMapForType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionInitializerForBuildingContext) ;
    result = p->mProperty_mExtensionInitializerMapForType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerForBuildingContext::setter_setMExtensionInitializerMapForTypeForKey (GGS_extensionInitializerMapForType inAttributeValue,
                                                                                                  GGS_string inKey,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_extensionInitializerForBuildingContext * p = (cMapElement_extensionInitializerForBuildingContext *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionInitializerForBuildingContext) ;
    p->mProperty_mExtensionInitializerMapForType = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionInitializerForBuildingContext * GGS_extensionInitializerForBuildingContext::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                                    const GGS_string & inKey
                                                                                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_extensionInitializerForBuildingContext * result = (cMapElement_extensionInitializerForBuildingContext *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionInitializerForBuildingContext) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enumerator for @extensionInitializerForBuildingContext
//--------------------------------------------------------------------------------------------------

cEnumerator_extensionInitializerForBuildingContext::cEnumerator_extensionInitializerForBuildingContext (const GGS_extensionInitializerForBuildingContext & inEnumeratedObject,
                                                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext_2E_element cEnumerator_extensionInitializerForBuildingContext::current (LOCATION_ARGS) const {
  const cMapElement_extensionInitializerForBuildingContext * p = (const cMapElement_extensionInitializerForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionInitializerForBuildingContext) ;
  return GGS_extensionInitializerForBuildingContext_2E_element (p->mProperty_lkey, p->mProperty_mExtensionInitializerMapForType) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_extensionInitializerForBuildingContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType cEnumerator_extensionInitializerForBuildingContext::current_mExtensionInitializerMapForType (LOCATION_ARGS) const {
  const cMapElement_extensionInitializerForBuildingContext * p = (const cMapElement_extensionInitializerForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionInitializerForBuildingContext) ;
  return p->mProperty_mExtensionInitializerMapForType ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @extensionInitializerForBuildingContext
//--------------------------------------------------------------------------------------------------

DownEnumerator_extensionInitializerForBuildingContext::DownEnumerator_extensionInitializerForBuildingContext (const GGS_extensionInitializerForBuildingContext & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext_2E_element DownEnumerator_extensionInitializerForBuildingContext::current (LOCATION_ARGS) const {
  const cMapElement_extensionInitializerForBuildingContext * p = (const cMapElement_extensionInitializerForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionInitializerForBuildingContext) ;
  return GGS_extensionInitializerForBuildingContext_2E_element (p->mProperty_lkey, p->mProperty_mExtensionInitializerMapForType) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_extensionInitializerForBuildingContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType DownEnumerator_extensionInitializerForBuildingContext::current_mExtensionInitializerMapForType (LOCATION_ARGS) const {
  const cMapElement_extensionInitializerForBuildingContext * p = (const cMapElement_extensionInitializerForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionInitializerForBuildingContext) ;
  return p->mProperty_mExtensionInitializerMapForType ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @extensionInitializerForBuildingContext
//--------------------------------------------------------------------------------------------------

UpEnumerator_extensionInitializerForBuildingContext::UpEnumerator_extensionInitializerForBuildingContext (const GGS_extensionInitializerForBuildingContext & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext_2E_element UpEnumerator_extensionInitializerForBuildingContext::current (LOCATION_ARGS) const {
  const cMapElement_extensionInitializerForBuildingContext * p = (const cMapElement_extensionInitializerForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionInitializerForBuildingContext) ;
  return GGS_extensionInitializerForBuildingContext_2E_element (p->mProperty_lkey, p->mProperty_mExtensionInitializerMapForType) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_extensionInitializerForBuildingContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType UpEnumerator_extensionInitializerForBuildingContext::current_mExtensionInitializerMapForType (LOCATION_ARGS) const {
  const cMapElement_extensionInitializerForBuildingContext * p = (const cMapElement_extensionInitializerForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionInitializerForBuildingContext) ;
  return p->mProperty_mExtensionInitializerMapForType ;
}


//--------------------------------------------------------------------------------------------------
//     @extensionInitializerForBuildingContext generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionInitializerForBuildingContext ("extensionInitializerForBuildingContext",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionInitializerForBuildingContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionInitializerForBuildingContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionInitializerForBuildingContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionInitializerForBuildingContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext GGS_extensionInitializerForBuildingContext::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_extensionInitializerForBuildingContext result ;
  const GGS_extensionInitializerForBuildingContext * p = (const GGS_extensionInitializerForBuildingContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionInitializerForBuildingContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionInitializerForBuildingContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionMethodMapForType::cMapElement_extensionMethodMapForType (const GGS_extensionMethodMapForType_2E_element & inValue
                                                                              COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mFormalParameterList (inValue.mProperty_mFormalParameterList),
mProperty_mQualifier (inValue.mProperty_mQualifier) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionMethodMapForType::cMapElement_extensionMethodMapForType (const GGS_lstring & inKey,
                                                                              const GGS_formalParameterListAST & in_mFormalParameterList,
                                                                              const GGS_methodQualifier & in_mQualifier
                                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mFormalParameterList (in_mFormalParameterList),
mProperty_mQualifier (in_mQualifier) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_extensionMethodMapForType::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_extensionMethodMapForType::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_extensionMethodMapForType (mProperty_lkey, mProperty_mFormalParameterList, mProperty_mQualifier COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_extensionMethodMapForType::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalParameterList" ":") ;
  mProperty_mFormalParameterList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mQualifier" ":") ;
  mProperty_mQualifier.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType::GGS_extensionMethodMapForType (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType::GGS_extensionMethodMapForType (const GGS_extensionMethodMapForType & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType & GGS_extensionMethodMapForType::operator = (const GGS_extensionMethodMapForType & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType GGS_extensionMethodMapForType::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_extensionMethodMapForType result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType GGS_extensionMethodMapForType::class_func_emptyMap (LOCATION_ARGS) {
  GGS_extensionMethodMapForType result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType_2E_element_3F_ GGS_extensionMethodMapForType
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extensionMethodMapForType_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_extensionMethodMapForType * p = (cMapElement_extensionMethodMapForType *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_extensionMethodMapForType_2E_element_3F_::init_nil () ;
    }else{
      GGS_extensionMethodMapForType_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mFormalParameterList = p->mProperty_mFormalParameterList ;
      element.mProperty_mQualifier = p->mProperty_mQualifier ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType GGS_extensionMethodMapForType::class_func_mapWithMapToOverride (const GGS_extensionMethodMapForType & inMapToOverride
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_extensionMethodMapForType result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType GGS_extensionMethodMapForType::getter_overriddenMap (Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_extensionMethodMapForType result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForType::enterElement (const GGS_extensionMethodMapForType_2E_element & inValue,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForType * p = nullptr ;
  macroMyNew (p, cMapElement_extensionMethodMapForType (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionMethodMapForType insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForType::addAssign_operation (const GGS_lstring & inKey,
                                                         const GGS_formalParameterListAST & inArgument0,
                                                         const GGS_methodQualifier & inArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForType * p = nullptr ;
  macroMyNew (p, cMapElement_extensionMethodMapForType (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionMethodMapForType insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType GGS_extensionMethodMapForType::add_operation (const GGS_extensionMethodMapForType & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_extensionMethodMapForType result = *this ;
  cEnumerator_extensionMethodMapForType enumerator (inOperand, EnumerationOrder::Up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mFormalParameterList (HERE), enumerator.current_mQualifier (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForType::setter_insertKey (GGS_lstring inKey,
                                                      GGS_formalParameterListAST inArgument0,
                                                      GGS_methodQualifier inArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForType * p = nullptr ;
  macroMyNew (p, cMapElement_extensionMethodMapForType (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' method has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST GGS_extensionMethodMapForType::getter_mFormalParameterListForKey (const GGS_string & inKey,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionMethodMapForType * p = (const cMapElement_extensionMethodMapForType *) attributes ;
  GGS_formalParameterListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionMethodMapForType) ;
    result = p->mProperty_mFormalParameterList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier GGS_extensionMethodMapForType::getter_mQualifierForKey (const GGS_string & inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionMethodMapForType * p = (const cMapElement_extensionMethodMapForType *) attributes ;
  GGS_methodQualifier result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionMethodMapForType) ;
    result = p->mProperty_mQualifier ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForType::setter_setMFormalParameterListForKey (GGS_formalParameterListAST inAttributeValue,
                                                                          GGS_string inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_extensionMethodMapForType * p = (cMapElement_extensionMethodMapForType *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionMethodMapForType) ;
    p->mProperty_mFormalParameterList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForType::setter_setMQualifierForKey (GGS_methodQualifier inAttributeValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_extensionMethodMapForType * p = (cMapElement_extensionMethodMapForType *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionMethodMapForType) ;
    p->mProperty_mQualifier = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionMethodMapForType * GGS_extensionMethodMapForType::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                          const GGS_string & inKey
                                                                                                          COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForType * result = (cMapElement_extensionMethodMapForType *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionMethodMapForType) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enumerator for @extensionMethodMapForType
//--------------------------------------------------------------------------------------------------

cEnumerator_extensionMethodMapForType::cEnumerator_extensionMethodMapForType (const GGS_extensionMethodMapForType & inEnumeratedObject,
                                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType_2E_element cEnumerator_extensionMethodMapForType::current (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForType * p = (const cMapElement_extensionMethodMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForType) ;
  return GGS_extensionMethodMapForType_2E_element (p->mProperty_lkey, p->mProperty_mFormalParameterList, p->mProperty_mQualifier) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_extensionMethodMapForType::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST cEnumerator_extensionMethodMapForType::current_mFormalParameterList (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForType * p = (const cMapElement_extensionMethodMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForType) ;
  return p->mProperty_mFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier cEnumerator_extensionMethodMapForType::current_mQualifier (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForType * p = (const cMapElement_extensionMethodMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForType) ;
  return p->mProperty_mQualifier ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @extensionMethodMapForType
//--------------------------------------------------------------------------------------------------

DownEnumerator_extensionMethodMapForType::DownEnumerator_extensionMethodMapForType (const GGS_extensionMethodMapForType & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType_2E_element DownEnumerator_extensionMethodMapForType::current (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForType * p = (const cMapElement_extensionMethodMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForType) ;
  return GGS_extensionMethodMapForType_2E_element (p->mProperty_lkey, p->mProperty_mFormalParameterList, p->mProperty_mQualifier) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_extensionMethodMapForType::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST DownEnumerator_extensionMethodMapForType::current_mFormalParameterList (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForType * p = (const cMapElement_extensionMethodMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForType) ;
  return p->mProperty_mFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier DownEnumerator_extensionMethodMapForType::current_mQualifier (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForType * p = (const cMapElement_extensionMethodMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForType) ;
  return p->mProperty_mQualifier ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @extensionMethodMapForType
//--------------------------------------------------------------------------------------------------

UpEnumerator_extensionMethodMapForType::UpEnumerator_extensionMethodMapForType (const GGS_extensionMethodMapForType & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType_2E_element UpEnumerator_extensionMethodMapForType::current (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForType * p = (const cMapElement_extensionMethodMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForType) ;
  return GGS_extensionMethodMapForType_2E_element (p->mProperty_lkey, p->mProperty_mFormalParameterList, p->mProperty_mQualifier) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_extensionMethodMapForType::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST UpEnumerator_extensionMethodMapForType::current_mFormalParameterList (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForType * p = (const cMapElement_extensionMethodMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForType) ;
  return p->mProperty_mFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier UpEnumerator_extensionMethodMapForType::current_mQualifier (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForType * p = (const cMapElement_extensionMethodMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForType) ;
  return p->mProperty_mQualifier ;
}


//--------------------------------------------------------------------------------------------------
//     @extensionMethodMapForType generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForType ("extensionMethodMapForType",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionMethodMapForType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionMethodMapForType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionMethodMapForType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType GGS_extensionMethodMapForType::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_extensionMethodMapForType result ;
  const GGS_extensionMethodMapForType * p = (const GGS_extensionMethodMapForType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionMethodMapForType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodMapForType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionMethodMapForBuildingContext::cMapElement_extensionMethodMapForBuildingContext (const GGS_extensionMethodMapForBuildingContext_2E_element & inValue
                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mExtensionMethodMapForType (inValue.mProperty_mExtensionMethodMapForType) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionMethodMapForBuildingContext::cMapElement_extensionMethodMapForBuildingContext (const GGS_lstring & inKey,
                                                                                                    const GGS_extensionMethodMapForType & in_mExtensionMethodMapForType
                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mExtensionMethodMapForType (in_mExtensionMethodMapForType) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_extensionMethodMapForBuildingContext::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_extensionMethodMapForBuildingContext::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_extensionMethodMapForBuildingContext (mProperty_lkey, mProperty_mExtensionMethodMapForType COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_extensionMethodMapForBuildingContext::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExtensionMethodMapForType" ":") ;
  mProperty_mExtensionMethodMapForType.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext::GGS_extensionMethodMapForBuildingContext (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext::GGS_extensionMethodMapForBuildingContext (const GGS_extensionMethodMapForBuildingContext & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext & GGS_extensionMethodMapForBuildingContext::operator = (const GGS_extensionMethodMapForBuildingContext & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext GGS_extensionMethodMapForBuildingContext::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_extensionMethodMapForBuildingContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext GGS_extensionMethodMapForBuildingContext::class_func_emptyMap (LOCATION_ARGS) {
  GGS_extensionMethodMapForBuildingContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext_2E_element_3F_ GGS_extensionMethodMapForBuildingContext
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extensionMethodMapForBuildingContext_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_extensionMethodMapForBuildingContext * p = (cMapElement_extensionMethodMapForBuildingContext *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_extensionMethodMapForBuildingContext_2E_element_3F_::init_nil () ;
    }else{
      GGS_extensionMethodMapForBuildingContext_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mExtensionMethodMapForType = p->mProperty_mExtensionMethodMapForType ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext GGS_extensionMethodMapForBuildingContext::class_func_mapWithMapToOverride (const GGS_extensionMethodMapForBuildingContext & inMapToOverride
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_extensionMethodMapForBuildingContext result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext GGS_extensionMethodMapForBuildingContext::getter_overriddenMap (Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_extensionMethodMapForBuildingContext result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForBuildingContext::enterElement (const GGS_extensionMethodMapForBuildingContext_2E_element & inValue,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForBuildingContext * p = nullptr ;
  macroMyNew (p, cMapElement_extensionMethodMapForBuildingContext (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionMethodMapForBuildingContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForBuildingContext::addAssign_operation (const GGS_lstring & inKey,
                                                                    const GGS_extensionMethodMapForType & inArgument0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForBuildingContext * p = nullptr ;
  macroMyNew (p, cMapElement_extensionMethodMapForBuildingContext (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionMethodMapForBuildingContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext GGS_extensionMethodMapForBuildingContext::add_operation (const GGS_extensionMethodMapForBuildingContext & inOperand,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_extensionMethodMapForBuildingContext result = *this ;
  cEnumerator_extensionMethodMapForBuildingContext enumerator (inOperand, EnumerationOrder::Up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mExtensionMethodMapForType (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForBuildingContext::setter_insertKey (GGS_lstring inKey,
                                                                 GGS_extensionMethodMapForType inArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForBuildingContext * p = nullptr ;
  macroMyNew (p, cMapElement_extensionMethodMapForBuildingContext (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "internal error" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey = "internal error" ;

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForBuildingContext::method_searchKey (GGS_lstring inKey,
                                                                 GGS_extensionMethodMapForType & outArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForBuildingContext * p = (const cMapElement_extensionMethodMapForBuildingContext *) performSearch (inKey,
                                                                                                                                         inCompiler,
                                                                                                                                         kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey
                                                                                                                                         COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_extensionMethodMapForBuildingContext) ;
    outArgument0 = p->mProperty_mExtensionMethodMapForType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType GGS_extensionMethodMapForBuildingContext::getter_mExtensionMethodMapForTypeForKey (const GGS_string & inKey,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionMethodMapForBuildingContext * p = (const cMapElement_extensionMethodMapForBuildingContext *) attributes ;
  GGS_extensionMethodMapForType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionMethodMapForBuildingContext) ;
    result = p->mProperty_mExtensionMethodMapForType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForBuildingContext::setter_setMExtensionMethodMapForTypeForKey (GGS_extensionMethodMapForType inAttributeValue,
                                                                                           GGS_string inKey,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_extensionMethodMapForBuildingContext * p = (cMapElement_extensionMethodMapForBuildingContext *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_extensionMethodMapForBuildingContext) ;
    p->mProperty_mExtensionMethodMapForType = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionMethodMapForBuildingContext * GGS_extensionMethodMapForBuildingContext::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                                const GGS_string & inKey
                                                                                                                                COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForBuildingContext * result = (cMapElement_extensionMethodMapForBuildingContext *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionMethodMapForBuildingContext) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enumerator for @extensionMethodMapForBuildingContext
//--------------------------------------------------------------------------------------------------

cEnumerator_extensionMethodMapForBuildingContext::cEnumerator_extensionMethodMapForBuildingContext (const GGS_extensionMethodMapForBuildingContext & inEnumeratedObject,
                                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext_2E_element cEnumerator_extensionMethodMapForBuildingContext::current (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForBuildingContext * p = (const cMapElement_extensionMethodMapForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForBuildingContext) ;
  return GGS_extensionMethodMapForBuildingContext_2E_element (p->mProperty_lkey, p->mProperty_mExtensionMethodMapForType) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_extensionMethodMapForBuildingContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType cEnumerator_extensionMethodMapForBuildingContext::current_mExtensionMethodMapForType (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForBuildingContext * p = (const cMapElement_extensionMethodMapForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForBuildingContext) ;
  return p->mProperty_mExtensionMethodMapForType ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @extensionMethodMapForBuildingContext
//--------------------------------------------------------------------------------------------------

DownEnumerator_extensionMethodMapForBuildingContext::DownEnumerator_extensionMethodMapForBuildingContext (const GGS_extensionMethodMapForBuildingContext & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext_2E_element DownEnumerator_extensionMethodMapForBuildingContext::current (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForBuildingContext * p = (const cMapElement_extensionMethodMapForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForBuildingContext) ;
  return GGS_extensionMethodMapForBuildingContext_2E_element (p->mProperty_lkey, p->mProperty_mExtensionMethodMapForType) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_extensionMethodMapForBuildingContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType DownEnumerator_extensionMethodMapForBuildingContext::current_mExtensionMethodMapForType (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForBuildingContext * p = (const cMapElement_extensionMethodMapForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForBuildingContext) ;
  return p->mProperty_mExtensionMethodMapForType ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @extensionMethodMapForBuildingContext
//--------------------------------------------------------------------------------------------------

UpEnumerator_extensionMethodMapForBuildingContext::UpEnumerator_extensionMethodMapForBuildingContext (const GGS_extensionMethodMapForBuildingContext & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext_2E_element UpEnumerator_extensionMethodMapForBuildingContext::current (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForBuildingContext * p = (const cMapElement_extensionMethodMapForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForBuildingContext) ;
  return GGS_extensionMethodMapForBuildingContext_2E_element (p->mProperty_lkey, p->mProperty_mExtensionMethodMapForType) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_extensionMethodMapForBuildingContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType UpEnumerator_extensionMethodMapForBuildingContext::current_mExtensionMethodMapForType (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForBuildingContext * p = (const cMapElement_extensionMethodMapForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForBuildingContext) ;
  return p->mProperty_mExtensionMethodMapForType ;
}


//--------------------------------------------------------------------------------------------------
//     @extensionMethodMapForBuildingContext generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext ("extensionMethodMapForBuildingContext",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionMethodMapForBuildingContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionMethodMapForBuildingContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionMethodMapForBuildingContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext GGS_extensionMethodMapForBuildingContext::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_extensionMethodMapForBuildingContext result ;
  const GGS_extensionMethodMapForBuildingContext * p = (const GGS_extensionMethodMapForBuildingContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionMethodMapForBuildingContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodMapForBuildingContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

