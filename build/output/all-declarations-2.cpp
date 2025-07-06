#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

//--------------------------------------------------------------------------------------------------
//Class for element of '@lexicalListEntryListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalListEntryListAST : public cCollectionElement {
  public: GGS_lexicalListEntryListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_lexicalListEntryListAST (const GGS_lstring & in_mEntrySpelling,
                                                      const GGS_lstring & in_mTerminalSpelling,
                                                      const GGS_bool & in_nonAtomicSelection,
                                                      const GGS_bool & in_isEndOfTemplateMark
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalListEntryListAST (const GGS_lexicalListEntryListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalListEntryListAST::cCollectionElement_lexicalListEntryListAST (const GGS_lstring & in_mEntrySpelling,
                                                                                        const GGS_lstring & in_mTerminalSpelling,
                                                                                        const GGS_bool & in_nonAtomicSelection,
                                                                                        const GGS_bool & in_isEndOfTemplateMark
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEntrySpelling, in_mTerminalSpelling, in_nonAtomicSelection, in_isEndOfTemplateMark) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalListEntryListAST::cCollectionElement_lexicalListEntryListAST (const GGS_lexicalListEntryListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEntrySpelling" ":") ;
  mObject.mProperty_mEntrySpelling.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTerminalSpelling" ":") ;
  mObject.mProperty_mTerminalSpelling.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("nonAtomicSelection" ":") ;
  mObject.mProperty_nonAtomicSelection.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("isEndOfTemplateMark" ":") ;
  mObject.mProperty_isEndOfTemplateMark.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListEntryListAST::GGS_lexicalListEntryListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListEntryListAST::GGS_lexicalListEntryListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListEntryListAST GGS_lexicalListEntryListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_lexicalListEntryListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListEntryListAST GGS_lexicalListEntryListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_lexicalListEntryListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListEntryListAST::plusPlusAssignOperation (const GGS_lexicalListEntryListAST_2E_element & inValue
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalListEntryListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListEntryListAST GGS_lexicalListEntryListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                   const GGS_lstring & inOperand1,
                                                                                   const GGS_bool & inOperand2,
                                                                                   const GGS_bool & inOperand3
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_lexicalListEntryListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GGS_lexicalListEntryListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_lexicalListEntryListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListEntryListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GGS_lstring & in_mEntrySpelling,
                                                             const GGS_lstring & in_mTerminalSpelling,
                                                             const GGS_bool & in_nonAtomicSelection,
                                                             const GGS_bool & in_isEndOfTemplateMark
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

void GGS_lexicalListEntryListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                      const GGS_lstring & inOperand1,
                                                      const GGS_bool & inOperand2,
                                                      const GGS_bool & inOperand3
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

void GGS_lexicalListEntryListAST::setter_append (const GGS_lstring inOperand0,
                                                 const GGS_lstring inOperand1,
                                                 const GGS_bool inOperand2,
                                                 const GGS_bool inOperand3,
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

void GGS_lexicalListEntryListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                        const GGS_lstring inOperand1,
                                                        const GGS_bool inOperand2,
                                                        const GGS_bool inOperand3,
                                                        const GGS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalListEntryListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListEntryListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                        GGS_lstring & outOperand1,
                                                        GGS_bool & outOperand2,
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
    cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
      outOperand0 = p->mObject.mProperty_mEntrySpelling ;
      outOperand1 = p->mObject.mProperty_mTerminalSpelling ;
      outOperand2 = p->mObject.mProperty_nonAtomicSelection ;
      outOperand3 = p->mObject.mProperty_isEndOfTemplateMark ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListEntryListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                   GGS_lstring & outOperand1,
                                                   GGS_bool & outOperand2,
                                                   GGS_bool & outOperand3,
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

void GGS_lexicalListEntryListAST::setter_popLast (GGS_lstring & outOperand0,
                                                  GGS_lstring & outOperand1,
                                                  GGS_bool & outOperand2,
                                                  GGS_bool & outOperand3,
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

void GGS_lexicalListEntryListAST::method_first (GGS_lstring & outOperand0,
                                                GGS_lstring & outOperand1,
                                                GGS_bool & outOperand2,
                                                GGS_bool & outOperand3,
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

void GGS_lexicalListEntryListAST::method_last (GGS_lstring & outOperand0,
                                               GGS_lstring & outOperand1,
                                               GGS_bool & outOperand2,
                                               GGS_bool & outOperand3,
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

GGS_lexicalListEntryListAST GGS_lexicalListEntryListAST::add_operation (const GGS_lexicalListEntryListAST & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalListEntryListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListEntryListAST GGS_lexicalListEntryListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lexicalListEntryListAST result = GGS_lexicalListEntryListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListEntryListAST GGS_lexicalListEntryListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lexicalListEntryListAST result = GGS_lexicalListEntryListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListEntryListAST GGS_lexicalListEntryListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_lexicalListEntryListAST result = GGS_lexicalListEntryListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListEntryListAST::plusAssignOperation (const GGS_lexicalListEntryListAST inOperand,
                                                       Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListEntryListAST::setter_setMEntrySpellingAtIndex (GGS_lstring inOperand,
                                                                   GGS_uint inIndex,
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

GGS_lstring GGS_lexicalListEntryListAST::getter_mEntrySpellingAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    result = p->mObject.mProperty_mEntrySpelling ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListEntryListAST::setter_setMTerminalSpellingAtIndex (GGS_lstring inOperand,
                                                                      GGS_uint inIndex,
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

GGS_lstring GGS_lexicalListEntryListAST::getter_mTerminalSpellingAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    result = p->mObject.mProperty_mTerminalSpelling ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListEntryListAST::setter_setNonAtomicSelectionAtIndex (GGS_bool inOperand,
                                                                       GGS_uint inIndex,
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

GGS_bool GGS_lexicalListEntryListAST::getter_nonAtomicSelectionAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    result = p->mObject.mProperty_nonAtomicSelection ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListEntryListAST::setter_setIsEndOfTemplateMarkAtIndex (GGS_bool inOperand,
                                                                        GGS_uint inIndex,
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

GGS_bool GGS_lexicalListEntryListAST::getter_isEndOfTemplateMarkAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    result = p->mObject.mProperty_isEndOfTemplateMark ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @lexicalListEntryListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalListEntryListAST::DownEnumerator_lexicalListEntryListAST (const GGS_lexicalListEntryListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListEntryListAST_2E_element DownEnumerator_lexicalListEntryListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalListEntryListAST::current_mEntrySpelling (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject.mProperty_mEntrySpelling ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalListEntryListAST::current_mTerminalSpelling (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject.mProperty_mTerminalSpelling ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_lexicalListEntryListAST::current_nonAtomicSelection (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject.mProperty_nonAtomicSelection ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_lexicalListEntryListAST::current_isEndOfTemplateMark (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject.mProperty_isEndOfTemplateMark ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @lexicalListEntryListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalListEntryListAST::UpEnumerator_lexicalListEntryListAST (const GGS_lexicalListEntryListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListEntryListAST_2E_element UpEnumerator_lexicalListEntryListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalListEntryListAST::current_mEntrySpelling (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject.mProperty_mEntrySpelling ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalListEntryListAST::current_mTerminalSpelling (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject.mProperty_mTerminalSpelling ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_lexicalListEntryListAST::current_nonAtomicSelection (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject.mProperty_nonAtomicSelection ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_lexicalListEntryListAST::current_isEndOfTemplateMark (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject.mProperty_isEndOfTemplateMark ;
}




//--------------------------------------------------------------------------------------------------
//     @lexicalListEntryListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalListEntryListAST ("lexicalListEntryListAST",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalListEntryListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalListEntryListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalListEntryListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalListEntryListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListEntryListAST GGS_lexicalListEntryListAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_lexicalListEntryListAST result ;
  const GGS_lexicalListEntryListAST * p = (const GGS_lexicalListEntryListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalListEntryListAST *> (p)) {
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

ComparisonResult GGS_lexicalOrExpressionAST::objectCompare (const GGS_lexicalOrExpressionAST & inOperand) const {
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

GGS_lexicalOrExpressionAST::GGS_lexicalOrExpressionAST (void) :
GGS_lexicalExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalOrExpressionAST GGS_lexicalOrExpressionAST::
init_21__21_ (const GGS_lexicalExpressionAST & in_mLeftOperand,
              const GGS_lexicalExpressionAST & in_mRightOperand,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalOrExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalOrExpressionAST (inCompiler COMMA_THERE)) ;
  object->lexicalOrExpressionAST_init_21__21_ (in_mLeftOperand, in_mRightOperand, inCompiler) ;
  const GGS_lexicalOrExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalOrExpressionAST::
lexicalOrExpressionAST_init_21__21_ (const GGS_lexicalExpressionAST & in_mLeftOperand,
                                     const GGS_lexicalExpressionAST & in_mRightOperand,
                                     Compiler * /* inCompiler */) {
  mProperty_mLeftOperand = in_mLeftOperand ;
  mProperty_mRightOperand = in_mRightOperand ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalOrExpressionAST::GGS_lexicalOrExpressionAST (const cPtr_lexicalOrExpressionAST * inSourcePtr) :
GGS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalOrExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalOrExpressionAST GGS_lexicalOrExpressionAST::class_func_new (const GGS_lexicalExpressionAST & in_mLeftOperand,
                                                                       const GGS_lexicalExpressionAST & in_mRightOperand,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  GGS_lexicalOrExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalOrExpressionAST (in_mLeftOperand, in_mRightOperand,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExpressionAST GGS_lexicalOrExpressionAST::readProperty_mLeftOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalExpressionAST () ;
  }else{
    cPtr_lexicalOrExpressionAST * p = (cPtr_lexicalOrExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalOrExpressionAST) ;
    return p->mProperty_mLeftOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExpressionAST GGS_lexicalOrExpressionAST::readProperty_mRightOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalExpressionAST () ;
  }else{
    cPtr_lexicalOrExpressionAST * p = (cPtr_lexicalOrExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalOrExpressionAST) ;
    return p->mProperty_mRightOperand ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalOrExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalOrExpressionAST::cPtr_lexicalOrExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mLeftOperand (),
mProperty_mRightOperand () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalOrExpressionAST::cPtr_lexicalOrExpressionAST (const GGS_lexicalExpressionAST & in_mLeftOperand,
                                                          const GGS_lexicalExpressionAST & in_mRightOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mLeftOperand (),
mProperty_mRightOperand () {
  mProperty_mLeftOperand = in_mLeftOperand ;
  mProperty_mRightOperand = in_mRightOperand ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalOrExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalOrExpressionAST ;
}

void cPtr_lexicalOrExpressionAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalOrExpressionAST:") ;
  mProperty_mLeftOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalOrExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalOrExpressionAST (mProperty_mLeftOperand, mProperty_mRightOperand, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalOrExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLeftOperand.printNonNullClassInstanceProperties ("mLeftOperand") ;
    mProperty_mRightOperand.printNonNullClassInstanceProperties ("mRightOperand") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalOrExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalOrExpressionAST ("lexicalOrExpressionAST",
                                                                              & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalOrExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalOrExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalOrExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalOrExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalOrExpressionAST GGS_lexicalOrExpressionAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_lexicalOrExpressionAST result ;
  const GGS_lexicalOrExpressionAST * p = (const GGS_lexicalOrExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalOrExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalOrExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalOrExpressionAST_2E_weak::objectCompare (const GGS_lexicalOrExpressionAST_2E_weak & inOperand) const {
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

GGS_lexicalOrExpressionAST_2E_weak::GGS_lexicalOrExpressionAST_2E_weak (void) :
GGS_lexicalExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalOrExpressionAST_2E_weak & GGS_lexicalOrExpressionAST_2E_weak::operator = (const GGS_lexicalOrExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalOrExpressionAST_2E_weak::GGS_lexicalOrExpressionAST_2E_weak (const GGS_lexicalOrExpressionAST & inSource) :
GGS_lexicalExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalOrExpressionAST_2E_weak GGS_lexicalOrExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalOrExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalOrExpressionAST GGS_lexicalOrExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalOrExpressionAST result ;
  if (isValid ()) {
    const cPtr_lexicalOrExpressionAST * p = (cPtr_lexicalOrExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalOrExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalOrExpressionAST GGS_lexicalOrExpressionAST_2E_weak::bang_lexicalOrExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalOrExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalOrExpressionAST) ;
      result = GGS_lexicalOrExpressionAST ((cPtr_lexicalOrExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalOrExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalOrExpressionAST_2E_weak ("lexicalOrExpressionAST.weak",
                                                                                      & kTypeDescriptor_GALGAS_lexicalExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalOrExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalOrExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalOrExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalOrExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalOrExpressionAST_2E_weak GGS_lexicalOrExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_lexicalOrExpressionAST_2E_weak result ;
  const GGS_lexicalOrExpressionAST_2E_weak * p = (const GGS_lexicalOrExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalOrExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalOrExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalCharacterSetMatchAST_2E_weak::objectCompare (const GGS_lexicalCharacterSetMatchAST_2E_weak & inOperand) const {
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

GGS_lexicalCharacterSetMatchAST_2E_weak::GGS_lexicalCharacterSetMatchAST_2E_weak (void) :
GGS_lexicalExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterSetMatchAST_2E_weak & GGS_lexicalCharacterSetMatchAST_2E_weak::operator = (const GGS_lexicalCharacterSetMatchAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterSetMatchAST_2E_weak::GGS_lexicalCharacterSetMatchAST_2E_weak (const GGS_lexicalCharacterSetMatchAST & inSource) :
GGS_lexicalExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterSetMatchAST_2E_weak GGS_lexicalCharacterSetMatchAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalCharacterSetMatchAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterSetMatchAST GGS_lexicalCharacterSetMatchAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalCharacterSetMatchAST result ;
  if (isValid ()) {
    const cPtr_lexicalCharacterSetMatchAST * p = (cPtr_lexicalCharacterSetMatchAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalCharacterSetMatchAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterSetMatchAST GGS_lexicalCharacterSetMatchAST_2E_weak::bang_lexicalCharacterSetMatchAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalCharacterSetMatchAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalCharacterSetMatchAST) ;
      result = GGS_lexicalCharacterSetMatchAST ((cPtr_lexicalCharacterSetMatchAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalCharacterSetMatchAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST_2E_weak ("lexicalCharacterSetMatchAST.weak",
                                                                                           & kTypeDescriptor_GALGAS_lexicalExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalCharacterSetMatchAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalCharacterSetMatchAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalCharacterSetMatchAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterSetMatchAST_2E_weak GGS_lexicalCharacterSetMatchAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalCharacterSetMatchAST_2E_weak result ;
  const GGS_lexicalCharacterSetMatchAST_2E_weak * p = (const GGS_lexicalCharacterSetMatchAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalCharacterSetMatchAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterSetMatchAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalCharacterMatchAST_2E_weak::objectCompare (const GGS_lexicalCharacterMatchAST_2E_weak & inOperand) const {
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

GGS_lexicalCharacterMatchAST_2E_weak::GGS_lexicalCharacterMatchAST_2E_weak (void) :
GGS_lexicalExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterMatchAST_2E_weak & GGS_lexicalCharacterMatchAST_2E_weak::operator = (const GGS_lexicalCharacterMatchAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterMatchAST_2E_weak::GGS_lexicalCharacterMatchAST_2E_weak (const GGS_lexicalCharacterMatchAST & inSource) :
GGS_lexicalExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterMatchAST_2E_weak GGS_lexicalCharacterMatchAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalCharacterMatchAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterMatchAST GGS_lexicalCharacterMatchAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalCharacterMatchAST result ;
  if (isValid ()) {
    const cPtr_lexicalCharacterMatchAST * p = (cPtr_lexicalCharacterMatchAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalCharacterMatchAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterMatchAST GGS_lexicalCharacterMatchAST_2E_weak::bang_lexicalCharacterMatchAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalCharacterMatchAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalCharacterMatchAST) ;
      result = GGS_lexicalCharacterMatchAST ((cPtr_lexicalCharacterMatchAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalCharacterMatchAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterMatchAST_2E_weak ("lexicalCharacterMatchAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_lexicalExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalCharacterMatchAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterMatchAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalCharacterMatchAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalCharacterMatchAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterMatchAST_2E_weak GGS_lexicalCharacterMatchAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalCharacterMatchAST_2E_weak result ;
  const GGS_lexicalCharacterMatchAST_2E_weak * p = (const GGS_lexicalCharacterMatchAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalCharacterMatchAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterMatchAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalCharacterIntervalMatchAST_2E_weak::objectCompare (const GGS_lexicalCharacterIntervalMatchAST_2E_weak & inOperand) const {
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

GGS_lexicalCharacterIntervalMatchAST_2E_weak::GGS_lexicalCharacterIntervalMatchAST_2E_weak (void) :
GGS_lexicalExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterIntervalMatchAST_2E_weak & GGS_lexicalCharacterIntervalMatchAST_2E_weak::operator = (const GGS_lexicalCharacterIntervalMatchAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterIntervalMatchAST_2E_weak::GGS_lexicalCharacterIntervalMatchAST_2E_weak (const GGS_lexicalCharacterIntervalMatchAST & inSource) :
GGS_lexicalExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterIntervalMatchAST_2E_weak GGS_lexicalCharacterIntervalMatchAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalCharacterIntervalMatchAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterIntervalMatchAST GGS_lexicalCharacterIntervalMatchAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalCharacterIntervalMatchAST result ;
  if (isValid ()) {
    const cPtr_lexicalCharacterIntervalMatchAST * p = (cPtr_lexicalCharacterIntervalMatchAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalCharacterIntervalMatchAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterIntervalMatchAST GGS_lexicalCharacterIntervalMatchAST_2E_weak::bang_lexicalCharacterIntervalMatchAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalCharacterIntervalMatchAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalCharacterIntervalMatchAST) ;
      result = GGS_lexicalCharacterIntervalMatchAST ((cPtr_lexicalCharacterIntervalMatchAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalCharacterIntervalMatchAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST_2E_weak ("lexicalCharacterIntervalMatchAST.weak",
                                                                                                & kTypeDescriptor_GALGAS_lexicalExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalCharacterIntervalMatchAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalCharacterIntervalMatchAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalCharacterIntervalMatchAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterIntervalMatchAST_2E_weak GGS_lexicalCharacterIntervalMatchAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalCharacterIntervalMatchAST_2E_weak result ;
  const GGS_lexicalCharacterIntervalMatchAST_2E_weak * p = (const GGS_lexicalCharacterIntervalMatchAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalCharacterIntervalMatchAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterIntervalMatchAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalStringMatchAST_2E_weak::objectCompare (const GGS_lexicalStringMatchAST_2E_weak & inOperand) const {
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

GGS_lexicalStringMatchAST_2E_weak::GGS_lexicalStringMatchAST_2E_weak (void) :
GGS_lexicalExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStringMatchAST_2E_weak & GGS_lexicalStringMatchAST_2E_weak::operator = (const GGS_lexicalStringMatchAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStringMatchAST_2E_weak::GGS_lexicalStringMatchAST_2E_weak (const GGS_lexicalStringMatchAST & inSource) :
GGS_lexicalExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalStringMatchAST_2E_weak GGS_lexicalStringMatchAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalStringMatchAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStringMatchAST GGS_lexicalStringMatchAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalStringMatchAST result ;
  if (isValid ()) {
    const cPtr_lexicalStringMatchAST * p = (cPtr_lexicalStringMatchAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalStringMatchAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStringMatchAST GGS_lexicalStringMatchAST_2E_weak::bang_lexicalStringMatchAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalStringMatchAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalStringMatchAST) ;
      result = GGS_lexicalStringMatchAST ((cPtr_lexicalStringMatchAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalStringMatchAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStringMatchAST_2E_weak ("lexicalStringMatchAST.weak",
                                                                                     & kTypeDescriptor_GALGAS_lexicalExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalStringMatchAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringMatchAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalStringMatchAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalStringMatchAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStringMatchAST_2E_weak GGS_lexicalStringMatchAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_lexicalStringMatchAST_2E_weak result ;
  const GGS_lexicalStringMatchAST_2E_weak * p = (const GGS_lexicalStringMatchAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalStringMatchAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStringMatchAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalStringNotMatchAST_2E_weak::objectCompare (const GGS_lexicalStringNotMatchAST_2E_weak & inOperand) const {
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

GGS_lexicalStringNotMatchAST_2E_weak::GGS_lexicalStringNotMatchAST_2E_weak (void) :
GGS_lexicalExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStringNotMatchAST_2E_weak & GGS_lexicalStringNotMatchAST_2E_weak::operator = (const GGS_lexicalStringNotMatchAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStringNotMatchAST_2E_weak::GGS_lexicalStringNotMatchAST_2E_weak (const GGS_lexicalStringNotMatchAST & inSource) :
GGS_lexicalExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalStringNotMatchAST_2E_weak GGS_lexicalStringNotMatchAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalStringNotMatchAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStringNotMatchAST GGS_lexicalStringNotMatchAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalStringNotMatchAST result ;
  if (isValid ()) {
    const cPtr_lexicalStringNotMatchAST * p = (cPtr_lexicalStringNotMatchAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalStringNotMatchAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStringNotMatchAST GGS_lexicalStringNotMatchAST_2E_weak::bang_lexicalStringNotMatchAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalStringNotMatchAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalStringNotMatchAST) ;
      result = GGS_lexicalStringNotMatchAST ((cPtr_lexicalStringNotMatchAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalStringNotMatchAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStringNotMatchAST_2E_weak ("lexicalStringNotMatchAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_lexicalExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalStringNotMatchAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringNotMatchAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalStringNotMatchAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalStringNotMatchAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStringNotMatchAST_2E_weak GGS_lexicalStringNotMatchAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalStringNotMatchAST_2E_weak result ;
  const GGS_lexicalStringNotMatchAST_2E_weak * p = (const GGS_lexicalStringNotMatchAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalStringNotMatchAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStringNotMatchAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@lexicalSendSearchListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalSendSearchListAST : public cCollectionElement {
  public: GGS_lexicalSendSearchListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_lexicalSendSearchListAST (const GGS_lstring & in_mAttributeName,
                                                       const GGS_lstring & in_mSearchListName
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalSendSearchListAST (const GGS_lexicalSendSearchListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalSendSearchListAST::cCollectionElement_lexicalSendSearchListAST (const GGS_lstring & in_mAttributeName,
                                                                                          const GGS_lstring & in_mSearchListName
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeName, in_mSearchListName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalSendSearchListAST::cCollectionElement_lexicalSendSearchListAST (const GGS_lexicalSendSearchListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAttributeName" ":") ;
  mObject.mProperty_mAttributeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSearchListName" ":") ;
  mObject.mProperty_mSearchListName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendSearchListAST::GGS_lexicalSendSearchListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendSearchListAST::GGS_lexicalSendSearchListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendSearchListAST GGS_lexicalSendSearchListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_lexicalSendSearchListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendSearchListAST GGS_lexicalSendSearchListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_lexicalSendSearchListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSendSearchListAST::plusPlusAssignOperation (const GGS_lexicalSendSearchListAST_2E_element & inValue
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalSendSearchListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendSearchListAST GGS_lexicalSendSearchListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                     const GGS_lstring & inOperand1
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_lexicalSendSearchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_lexicalSendSearchListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_lexicalSendSearchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSendSearchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GGS_lstring & in_mAttributeName,
                                                              const GGS_lstring & in_mSearchListName
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalSendSearchListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalSendSearchListAST (in_mAttributeName,
                                                              in_mSearchListName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSendSearchListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                       const GGS_lstring & inOperand1
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

void GGS_lexicalSendSearchListAST::setter_append (const GGS_lstring inOperand0,
                                                  const GGS_lstring inOperand1,
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

void GGS_lexicalSendSearchListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                         const GGS_lstring inOperand1,
                                                         const GGS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalSendSearchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSendSearchListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                         GGS_lstring & outOperand1,
                                                         const GGS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalSendSearchListAST * p = (cCollectionElement_lexicalSendSearchListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
      outOperand0 = p->mObject.mProperty_mAttributeName ;
      outOperand1 = p->mObject.mProperty_mSearchListName ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSendSearchListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                    GGS_lstring & outOperand1,
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

void GGS_lexicalSendSearchListAST::setter_popLast (GGS_lstring & outOperand0,
                                                   GGS_lstring & outOperand1,
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

void GGS_lexicalSendSearchListAST::method_first (GGS_lstring & outOperand0,
                                                 GGS_lstring & outOperand1,
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

void GGS_lexicalSendSearchListAST::method_last (GGS_lstring & outOperand0,
                                                GGS_lstring & outOperand1,
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

GGS_lexicalSendSearchListAST GGS_lexicalSendSearchListAST::add_operation (const GGS_lexicalSendSearchListAST & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalSendSearchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendSearchListAST GGS_lexicalSendSearchListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lexicalSendSearchListAST result = GGS_lexicalSendSearchListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendSearchListAST GGS_lexicalSendSearchListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lexicalSendSearchListAST result = GGS_lexicalSendSearchListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendSearchListAST GGS_lexicalSendSearchListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lexicalSendSearchListAST result = GGS_lexicalSendSearchListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSendSearchListAST::plusAssignOperation (const GGS_lexicalSendSearchListAST inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSendSearchListAST::setter_setMAttributeNameAtIndex (GGS_lstring inOperand,
                                                                    GGS_uint inIndex,
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

GGS_lstring GGS_lexicalSendSearchListAST::getter_mAttributeNameAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSendSearchListAST * p = (cCollectionElement_lexicalSendSearchListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
    result = p->mObject.mProperty_mAttributeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSendSearchListAST::setter_setMSearchListNameAtIndex (GGS_lstring inOperand,
                                                                     GGS_uint inIndex,
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

GGS_lstring GGS_lexicalSendSearchListAST::getter_mSearchListNameAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSendSearchListAST * p = (cCollectionElement_lexicalSendSearchListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
    result = p->mObject.mProperty_mSearchListName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @lexicalSendSearchListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalSendSearchListAST::DownEnumerator_lexicalSendSearchListAST (const GGS_lexicalSendSearchListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendSearchListAST_2E_element DownEnumerator_lexicalSendSearchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSendSearchListAST * p = (const cCollectionElement_lexicalSendSearchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalSendSearchListAST::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSendSearchListAST * p = (const cCollectionElement_lexicalSendSearchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
  return p->mObject.mProperty_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalSendSearchListAST::current_mSearchListName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSendSearchListAST * p = (const cCollectionElement_lexicalSendSearchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
  return p->mObject.mProperty_mSearchListName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @lexicalSendSearchListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalSendSearchListAST::UpEnumerator_lexicalSendSearchListAST (const GGS_lexicalSendSearchListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendSearchListAST_2E_element UpEnumerator_lexicalSendSearchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSendSearchListAST * p = (const cCollectionElement_lexicalSendSearchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalSendSearchListAST::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSendSearchListAST * p = (const cCollectionElement_lexicalSendSearchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
  return p->mObject.mProperty_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalSendSearchListAST::current_mSearchListName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSendSearchListAST * p = (const cCollectionElement_lexicalSendSearchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
  return p->mObject.mProperty_mSearchListName ;
}




//--------------------------------------------------------------------------------------------------
//     @lexicalSendSearchListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSendSearchListAST ("lexicalSendSearchListAST",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalSendSearchListAST::staticTypeDescriptor (void) const {
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
// @lexicalSendDefaultActionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalSendDefaultActionAST::objectCompare (const GGS_lexicalSendDefaultActionAST & inOperand) const {
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

GGS_lexicalSendDefaultActionAST::GGS_lexicalSendDefaultActionAST (void) :
AC_GALGAS_reference_class () {
}


void cPtr_lexicalSendDefaultActionAST::
lexicalSendDefaultActionAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendDefaultActionAST::GGS_lexicalSendDefaultActionAST (const cPtr_lexicalSendDefaultActionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalSendDefaultActionAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalSendDefaultActionAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_lexicalSendDefaultActionAST::cPtr_lexicalSendDefaultActionAST (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalSendDefaultActionAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalSendDefaultActionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST ("lexicalSendDefaultActionAST",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalSendDefaultActionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalSendDefaultActionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalSendDefaultActionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendDefaultActionAST GGS_lexicalSendDefaultActionAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalSendDefaultActionAST result ;
  const GGS_lexicalSendDefaultActionAST * p = (const GGS_lexicalSendDefaultActionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalSendDefaultActionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSendDefaultActionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalSendDefaultActionAST_2E_weak::objectCompare (const GGS_lexicalSendDefaultActionAST_2E_weak & inOperand) const {
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

GGS_lexicalSendDefaultActionAST_2E_weak::GGS_lexicalSendDefaultActionAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendDefaultActionAST_2E_weak & GGS_lexicalSendDefaultActionAST_2E_weak::operator = (const GGS_lexicalSendDefaultActionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendDefaultActionAST_2E_weak::GGS_lexicalSendDefaultActionAST_2E_weak (const GGS_lexicalSendDefaultActionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalSendDefaultActionAST_2E_weak GGS_lexicalSendDefaultActionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalSendDefaultActionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendDefaultActionAST GGS_lexicalSendDefaultActionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalSendDefaultActionAST result ;
  if (isValid ()) {
    const cPtr_lexicalSendDefaultActionAST * p = (cPtr_lexicalSendDefaultActionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalSendDefaultActionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendDefaultActionAST GGS_lexicalSendDefaultActionAST_2E_weak::bang_lexicalSendDefaultActionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalSendDefaultActionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalSendDefaultActionAST) ;
      result = GGS_lexicalSendDefaultActionAST ((cPtr_lexicalSendDefaultActionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalSendDefaultActionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST_2E_weak ("lexicalSendDefaultActionAST.weak",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalSendDefaultActionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalSendDefaultActionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalSendDefaultActionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendDefaultActionAST_2E_weak GGS_lexicalSendDefaultActionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalSendDefaultActionAST_2E_weak result ;
  const GGS_lexicalSendDefaultActionAST_2E_weak * p = (const GGS_lexicalSendDefaultActionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalSendDefaultActionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSendDefaultActionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalSendTerminalByDefaultAST_2E_weak::objectCompare (const GGS_lexicalSendTerminalByDefaultAST_2E_weak & inOperand) const {
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

GGS_lexicalSendTerminalByDefaultAST_2E_weak::GGS_lexicalSendTerminalByDefaultAST_2E_weak (void) :
GGS_lexicalSendDefaultActionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendTerminalByDefaultAST_2E_weak & GGS_lexicalSendTerminalByDefaultAST_2E_weak::operator = (const GGS_lexicalSendTerminalByDefaultAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendTerminalByDefaultAST_2E_weak::GGS_lexicalSendTerminalByDefaultAST_2E_weak (const GGS_lexicalSendTerminalByDefaultAST & inSource) :
GGS_lexicalSendDefaultActionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalSendTerminalByDefaultAST_2E_weak GGS_lexicalSendTerminalByDefaultAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalSendTerminalByDefaultAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendTerminalByDefaultAST GGS_lexicalSendTerminalByDefaultAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalSendTerminalByDefaultAST result ;
  if (isValid ()) {
    const cPtr_lexicalSendTerminalByDefaultAST * p = (cPtr_lexicalSendTerminalByDefaultAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalSendTerminalByDefaultAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendTerminalByDefaultAST GGS_lexicalSendTerminalByDefaultAST_2E_weak::bang_lexicalSendTerminalByDefaultAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalSendTerminalByDefaultAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalSendTerminalByDefaultAST) ;
      result = GGS_lexicalSendTerminalByDefaultAST ((cPtr_lexicalSendTerminalByDefaultAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalSendTerminalByDefaultAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST_2E_weak ("lexicalSendTerminalByDefaultAST.weak",
                                                                                               & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalSendTerminalByDefaultAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalSendTerminalByDefaultAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalSendTerminalByDefaultAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendTerminalByDefaultAST_2E_weak GGS_lexicalSendTerminalByDefaultAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_lexicalSendTerminalByDefaultAST_2E_weak result ;
  const GGS_lexicalSendTerminalByDefaultAST_2E_weak * p = (const GGS_lexicalSendTerminalByDefaultAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalSendTerminalByDefaultAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSendTerminalByDefaultAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalErrorByDefaultAST_2E_weak::objectCompare (const GGS_lexicalErrorByDefaultAST_2E_weak & inOperand) const {
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

GGS_lexicalErrorByDefaultAST_2E_weak::GGS_lexicalErrorByDefaultAST_2E_weak (void) :
GGS_lexicalSendDefaultActionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorByDefaultAST_2E_weak & GGS_lexicalErrorByDefaultAST_2E_weak::operator = (const GGS_lexicalErrorByDefaultAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorByDefaultAST_2E_weak::GGS_lexicalErrorByDefaultAST_2E_weak (const GGS_lexicalErrorByDefaultAST & inSource) :
GGS_lexicalSendDefaultActionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorByDefaultAST_2E_weak GGS_lexicalErrorByDefaultAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalErrorByDefaultAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorByDefaultAST GGS_lexicalErrorByDefaultAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalErrorByDefaultAST result ;
  if (isValid ()) {
    const cPtr_lexicalErrorByDefaultAST * p = (cPtr_lexicalErrorByDefaultAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalErrorByDefaultAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorByDefaultAST GGS_lexicalErrorByDefaultAST_2E_weak::bang_lexicalErrorByDefaultAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalErrorByDefaultAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalErrorByDefaultAST) ;
      result = GGS_lexicalErrorByDefaultAST ((cPtr_lexicalErrorByDefaultAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalErrorByDefaultAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST_2E_weak ("lexicalErrorByDefaultAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalErrorByDefaultAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalErrorByDefaultAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalErrorByDefaultAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorByDefaultAST_2E_weak GGS_lexicalErrorByDefaultAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalErrorByDefaultAST_2E_weak result ;
  const GGS_lexicalErrorByDefaultAST_2E_weak * p = (const GGS_lexicalErrorByDefaultAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalErrorByDefaultAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalErrorByDefaultAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@lexicalWhileBranchListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalWhileBranchListAST : public cCollectionElement {
  public: GGS_lexicalWhileBranchListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_lexicalWhileBranchListAST (const GGS_lexicalExpressionAST & in_mWhileExpression,
                                                        const GGS_lexicalInstructionListAST & in_mWhileInstructionList
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalWhileBranchListAST (const GGS_lexicalWhileBranchListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalWhileBranchListAST::cCollectionElement_lexicalWhileBranchListAST (const GGS_lexicalExpressionAST & in_mWhileExpression,
                                                                                            const GGS_lexicalInstructionListAST & in_mWhileInstructionList
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mWhileExpression, in_mWhileInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalWhileBranchListAST::cCollectionElement_lexicalWhileBranchListAST (const GGS_lexicalWhileBranchListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mWhileExpression" ":") ;
  mObject.mProperty_mWhileExpression.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mWhileInstructionList" ":") ;
  mObject.mProperty_mWhileInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST::GGS_lexicalWhileBranchListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST::GGS_lexicalWhileBranchListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST GGS_lexicalWhileBranchListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_lexicalWhileBranchListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST GGS_lexicalWhileBranchListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_lexicalWhileBranchListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchListAST::plusPlusAssignOperation (const GGS_lexicalWhileBranchListAST_2E_element & inValue
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalWhileBranchListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST GGS_lexicalWhileBranchListAST::class_func_listWithValue (const GGS_lexicalExpressionAST & inOperand0,
                                                                                       const GGS_lexicalInstructionListAST & inOperand1
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_lexicalWhileBranchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_lexicalWhileBranchListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_lexicalWhileBranchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GGS_lexicalExpressionAST & in_mWhileExpression,
                                                               const GGS_lexicalInstructionListAST & in_mWhileInstructionList
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalWhileBranchListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalWhileBranchListAST (in_mWhileExpression,
                                                               in_mWhileInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchListAST::addAssignOperation (const GGS_lexicalExpressionAST & inOperand0,
                                                        const GGS_lexicalInstructionListAST & inOperand1
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

void GGS_lexicalWhileBranchListAST::setter_append (const GGS_lexicalExpressionAST inOperand0,
                                                   const GGS_lexicalInstructionListAST inOperand1,
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

void GGS_lexicalWhileBranchListAST::setter_insertAtIndex (const GGS_lexicalExpressionAST inOperand0,
                                                          const GGS_lexicalInstructionListAST inOperand1,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalWhileBranchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchListAST::setter_removeAtIndex (GGS_lexicalExpressionAST & outOperand0,
                                                          GGS_lexicalInstructionListAST & outOperand1,
                                                          const GGS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalWhileBranchListAST * p = (cCollectionElement_lexicalWhileBranchListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
      outOperand0 = p->mObject.mProperty_mWhileExpression ;
      outOperand1 = p->mObject.mProperty_mWhileInstructionList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchListAST::setter_popFirst (GGS_lexicalExpressionAST & outOperand0,
                                                     GGS_lexicalInstructionListAST & outOperand1,
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

void GGS_lexicalWhileBranchListAST::setter_popLast (GGS_lexicalExpressionAST & outOperand0,
                                                    GGS_lexicalInstructionListAST & outOperand1,
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

void GGS_lexicalWhileBranchListAST::method_first (GGS_lexicalExpressionAST & outOperand0,
                                                  GGS_lexicalInstructionListAST & outOperand1,
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

void GGS_lexicalWhileBranchListAST::method_last (GGS_lexicalExpressionAST & outOperand0,
                                                 GGS_lexicalInstructionListAST & outOperand1,
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

GGS_lexicalWhileBranchListAST GGS_lexicalWhileBranchListAST::add_operation (const GGS_lexicalWhileBranchListAST & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalWhileBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST GGS_lexicalWhileBranchListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lexicalWhileBranchListAST result = GGS_lexicalWhileBranchListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST GGS_lexicalWhileBranchListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lexicalWhileBranchListAST result = GGS_lexicalWhileBranchListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST GGS_lexicalWhileBranchListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lexicalWhileBranchListAST result = GGS_lexicalWhileBranchListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchListAST::plusAssignOperation (const GGS_lexicalWhileBranchListAST inOperand,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchListAST::setter_setMWhileExpressionAtIndex (GGS_lexicalExpressionAST inOperand,
                                                                       GGS_uint inIndex,
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

GGS_lexicalExpressionAST GGS_lexicalWhileBranchListAST::getter_mWhileExpressionAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalWhileBranchListAST * p = (cCollectionElement_lexicalWhileBranchListAST *) attributes.ptr () ;
  GGS_lexicalExpressionAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
    result = p->mObject.mProperty_mWhileExpression ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchListAST::setter_setMWhileInstructionListAtIndex (GGS_lexicalInstructionListAST inOperand,
                                                                            GGS_uint inIndex,
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

GGS_lexicalInstructionListAST GGS_lexicalWhileBranchListAST::getter_mWhileInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalWhileBranchListAST * p = (cCollectionElement_lexicalWhileBranchListAST *) attributes.ptr () ;
  GGS_lexicalInstructionListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
    result = p->mObject.mProperty_mWhileInstructionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @lexicalWhileBranchListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalWhileBranchListAST::DownEnumerator_lexicalWhileBranchListAST (const GGS_lexicalWhileBranchListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST_2E_element DownEnumerator_lexicalWhileBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalWhileBranchListAST * p = (const cCollectionElement_lexicalWhileBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalExpressionAST DownEnumerator_lexicalWhileBranchListAST::current_mWhileExpression (LOCATION_ARGS) const {
  const cCollectionElement_lexicalWhileBranchListAST * p = (const cCollectionElement_lexicalWhileBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
  return p->mObject.mProperty_mWhileExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST DownEnumerator_lexicalWhileBranchListAST::current_mWhileInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalWhileBranchListAST * p = (const cCollectionElement_lexicalWhileBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
  return p->mObject.mProperty_mWhileInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @lexicalWhileBranchListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalWhileBranchListAST::UpEnumerator_lexicalWhileBranchListAST (const GGS_lexicalWhileBranchListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST_2E_element UpEnumerator_lexicalWhileBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalWhileBranchListAST * p = (const cCollectionElement_lexicalWhileBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalExpressionAST UpEnumerator_lexicalWhileBranchListAST::current_mWhileExpression (LOCATION_ARGS) const {
  const cCollectionElement_lexicalWhileBranchListAST * p = (const cCollectionElement_lexicalWhileBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
  return p->mObject.mProperty_mWhileExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST UpEnumerator_lexicalWhileBranchListAST::current_mWhileInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalWhileBranchListAST * p = (const cCollectionElement_lexicalWhileBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
  return p->mObject.mProperty_mWhileInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//     @lexicalWhileBranchListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalWhileBranchListAST ("lexicalWhileBranchListAST",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalWhileBranchListAST::staticTypeDescriptor (void) const {
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
//Class for element of '@lexicalSelectBranchListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalSelectBranchListAST : public cCollectionElement {
  public: GGS_lexicalSelectBranchListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_lexicalSelectBranchListAST (const GGS_lexicalExpressionAST & in_mSelectExpression,
                                                         const GGS_lexicalInstructionListAST & in_mSelectInstructionList
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalSelectBranchListAST (const GGS_lexicalSelectBranchListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalSelectBranchListAST::cCollectionElement_lexicalSelectBranchListAST (const GGS_lexicalExpressionAST & in_mSelectExpression,
                                                                                              const GGS_lexicalInstructionListAST & in_mSelectInstructionList
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSelectExpression, in_mSelectInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalSelectBranchListAST::cCollectionElement_lexicalSelectBranchListAST (const GGS_lexicalSelectBranchListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSelectExpression" ":") ;
  mObject.mProperty_mSelectExpression.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSelectInstructionList" ":") ;
  mObject.mProperty_mSelectInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST::GGS_lexicalSelectBranchListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST::GGS_lexicalSelectBranchListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST GGS_lexicalSelectBranchListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_lexicalSelectBranchListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST GGS_lexicalSelectBranchListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_lexicalSelectBranchListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSelectBranchListAST::plusPlusAssignOperation (const GGS_lexicalSelectBranchListAST_2E_element & inValue
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalSelectBranchListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST GGS_lexicalSelectBranchListAST::class_func_listWithValue (const GGS_lexicalExpressionAST & inOperand0,
                                                                                         const GGS_lexicalInstructionListAST & inOperand1
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_lexicalSelectBranchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_lexicalSelectBranchListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_lexicalSelectBranchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSelectBranchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GGS_lexicalExpressionAST & in_mSelectExpression,
                                                                const GGS_lexicalInstructionListAST & in_mSelectInstructionList
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalSelectBranchListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalSelectBranchListAST (in_mSelectExpression,
                                                                in_mSelectInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSelectBranchListAST::addAssignOperation (const GGS_lexicalExpressionAST & inOperand0,
                                                         const GGS_lexicalInstructionListAST & inOperand1
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

void GGS_lexicalSelectBranchListAST::setter_append (const GGS_lexicalExpressionAST inOperand0,
                                                    const GGS_lexicalInstructionListAST inOperand1,
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

void GGS_lexicalSelectBranchListAST::setter_insertAtIndex (const GGS_lexicalExpressionAST inOperand0,
                                                           const GGS_lexicalInstructionListAST inOperand1,
                                                           const GGS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalSelectBranchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSelectBranchListAST::setter_removeAtIndex (GGS_lexicalExpressionAST & outOperand0,
                                                           GGS_lexicalInstructionListAST & outOperand1,
                                                           const GGS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalSelectBranchListAST * p = (cCollectionElement_lexicalSelectBranchListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
      outOperand0 = p->mObject.mProperty_mSelectExpression ;
      outOperand1 = p->mObject.mProperty_mSelectInstructionList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSelectBranchListAST::setter_popFirst (GGS_lexicalExpressionAST & outOperand0,
                                                      GGS_lexicalInstructionListAST & outOperand1,
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

void GGS_lexicalSelectBranchListAST::setter_popLast (GGS_lexicalExpressionAST & outOperand0,
                                                     GGS_lexicalInstructionListAST & outOperand1,
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

void GGS_lexicalSelectBranchListAST::method_first (GGS_lexicalExpressionAST & outOperand0,
                                                   GGS_lexicalInstructionListAST & outOperand1,
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

void GGS_lexicalSelectBranchListAST::method_last (GGS_lexicalExpressionAST & outOperand0,
                                                  GGS_lexicalInstructionListAST & outOperand1,
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

GGS_lexicalSelectBranchListAST GGS_lexicalSelectBranchListAST::add_operation (const GGS_lexicalSelectBranchListAST & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalSelectBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST GGS_lexicalSelectBranchListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_lexicalSelectBranchListAST result = GGS_lexicalSelectBranchListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST GGS_lexicalSelectBranchListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_lexicalSelectBranchListAST result = GGS_lexicalSelectBranchListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST GGS_lexicalSelectBranchListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lexicalSelectBranchListAST result = GGS_lexicalSelectBranchListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSelectBranchListAST::plusAssignOperation (const GGS_lexicalSelectBranchListAST inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSelectBranchListAST::setter_setMSelectExpressionAtIndex (GGS_lexicalExpressionAST inOperand,
                                                                         GGS_uint inIndex,
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

GGS_lexicalExpressionAST GGS_lexicalSelectBranchListAST::getter_mSelectExpressionAtIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSelectBranchListAST * p = (cCollectionElement_lexicalSelectBranchListAST *) attributes.ptr () ;
  GGS_lexicalExpressionAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
    result = p->mObject.mProperty_mSelectExpression ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSelectBranchListAST::setter_setMSelectInstructionListAtIndex (GGS_lexicalInstructionListAST inOperand,
                                                                              GGS_uint inIndex,
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

GGS_lexicalInstructionListAST GGS_lexicalSelectBranchListAST::getter_mSelectInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSelectBranchListAST * p = (cCollectionElement_lexicalSelectBranchListAST *) attributes.ptr () ;
  GGS_lexicalInstructionListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
    result = p->mObject.mProperty_mSelectInstructionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @lexicalSelectBranchListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalSelectBranchListAST::DownEnumerator_lexicalSelectBranchListAST (const GGS_lexicalSelectBranchListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST_2E_element DownEnumerator_lexicalSelectBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSelectBranchListAST * p = (const cCollectionElement_lexicalSelectBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalExpressionAST DownEnumerator_lexicalSelectBranchListAST::current_mSelectExpression (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSelectBranchListAST * p = (const cCollectionElement_lexicalSelectBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
  return p->mObject.mProperty_mSelectExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST DownEnumerator_lexicalSelectBranchListAST::current_mSelectInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSelectBranchListAST * p = (const cCollectionElement_lexicalSelectBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
  return p->mObject.mProperty_mSelectInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @lexicalSelectBranchListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalSelectBranchListAST::UpEnumerator_lexicalSelectBranchListAST (const GGS_lexicalSelectBranchListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST_2E_element UpEnumerator_lexicalSelectBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSelectBranchListAST * p = (const cCollectionElement_lexicalSelectBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalExpressionAST UpEnumerator_lexicalSelectBranchListAST::current_mSelectExpression (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSelectBranchListAST * p = (const cCollectionElement_lexicalSelectBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
  return p->mObject.mProperty_mSelectExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST UpEnumerator_lexicalSelectBranchListAST::current_mSelectInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSelectBranchListAST * p = (const cCollectionElement_lexicalSelectBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
  return p->mObject.mProperty_mSelectInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//     @lexicalSelectBranchListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSelectBranchListAST ("lexicalSelectBranchListAST",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalSelectBranchListAST::staticTypeDescriptor (void) const {
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
// @lexicalRoutineOrFunctionFormalInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalRoutineOrFunctionFormalInputArgumentAST::objectCompare (const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand) const {
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

GGS_lexicalRoutineOrFunctionFormalInputArgumentAST::GGS_lexicalRoutineOrFunctionFormalInputArgumentAST (void) :
AC_GALGAS_reference_class () {
}


void cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST::
lexicalRoutineOrFunctionFormalInputArgumentAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineOrFunctionFormalInputArgumentAST::GGS_lexicalRoutineOrFunctionFormalInputArgumentAST (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalRoutineOrFunctionFormalInputArgumentAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST::cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalRoutineOrFunctionFormalInputArgumentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST ("lexicalRoutineOrFunctionFormalInputArgumentAST",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalRoutineOrFunctionFormalInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRoutineOrFunctionFormalInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRoutineOrFunctionFormalInputArgumentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineOrFunctionFormalInputArgumentAST GGS_lexicalRoutineOrFunctionFormalInputArgumentAST::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_lexicalRoutineOrFunctionFormalInputArgumentAST result ;
  const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST * p = (const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineOrFunctionFormalInputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak::objectCompare (const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak & inOperand) const {
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

GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak::GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak & GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak::operator = (const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak::GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak (const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineOrFunctionFormalInputArgumentAST GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalRoutineOrFunctionFormalInputArgumentAST result ;
  if (isValid ()) {
    const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * p = (cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalRoutineOrFunctionFormalInputArgumentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineOrFunctionFormalInputArgumentAST GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak::bang_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalRoutineOrFunctionFormalInputArgumentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST) ;
      result = GGS_lexicalRoutineOrFunctionFormalInputArgumentAST ((cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalRoutineOrFunctionFormalInputArgumentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak ("lexicalRoutineOrFunctionFormalInputArgumentAST.weak",
                                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak result ;
  const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak * p = (const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineOrFunctionFormalInputArgumentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@lexicalFunctionCallActualArgumentListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalFunctionCallActualArgumentListAST : public cCollectionElement {
  public: GGS_lexicalFunctionCallActualArgumentListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_lexicalFunctionCallActualArgumentListAST (const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument
                                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalFunctionCallActualArgumentListAST (const GGS_lexicalFunctionCallActualArgumentListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalFunctionCallActualArgumentListAST::cCollectionElement_lexicalFunctionCallActualArgumentListAST (const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument
                                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalActualInputArgument) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalFunctionCallActualArgumentListAST::cCollectionElement_lexicalFunctionCallActualArgumentListAST (const GGS_lexicalFunctionCallActualArgumentListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexicalActualInputArgument" ":") ;
  mObject.mProperty_mLexicalActualInputArgument.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST::GGS_lexicalFunctionCallActualArgumentListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST::GGS_lexicalFunctionCallActualArgumentListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST GGS_lexicalFunctionCallActualArgumentListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_lexicalFunctionCallActualArgumentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST GGS_lexicalFunctionCallActualArgumentListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_lexicalFunctionCallActualArgumentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionCallActualArgumentListAST::plusPlusAssignOperation (const GGS_lexicalFunctionCallActualArgumentListAST_2E_element & inValue
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST GGS_lexicalFunctionCallActualArgumentListAST::class_func_listWithValue (const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0
                                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_lexicalFunctionCallActualArgumentListAST result ;
  if (inOperand0.isValid ()) {
    result = GGS_lexicalFunctionCallActualArgumentListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_lexicalFunctionCallActualArgumentListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionCallActualArgumentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                              const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST (in_mLexicalActualInputArgument COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionCallActualArgumentListAST::addAssignOperation (const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0
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

void GGS_lexicalFunctionCallActualArgumentListAST::setter_append (const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST inOperand0,
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

void GGS_lexicalFunctionCallActualArgumentListAST::setter_insertAtIndex (const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST inOperand0,
                                                                         const GGS_uint inInsertionIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionCallActualArgumentListAST::setter_removeAtIndex (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outOperand0,
                                                                         const GGS_uint inRemoveIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (cCollectionElement_lexicalFunctionCallActualArgumentListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
      outOperand0 = p->mObject.mProperty_mLexicalActualInputArgument ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionCallActualArgumentListAST::setter_popFirst (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outOperand0,
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

void GGS_lexicalFunctionCallActualArgumentListAST::setter_popLast (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outOperand0,
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

void GGS_lexicalFunctionCallActualArgumentListAST::method_first (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outOperand0,
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

void GGS_lexicalFunctionCallActualArgumentListAST::method_last (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outOperand0,
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

GGS_lexicalFunctionCallActualArgumentListAST GGS_lexicalFunctionCallActualArgumentListAST::add_operation (const GGS_lexicalFunctionCallActualArgumentListAST & inOperand,
                                                                                                          Compiler * /* inCompiler */
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalFunctionCallActualArgumentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST GGS_lexicalFunctionCallActualArgumentListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lexicalFunctionCallActualArgumentListAST result = GGS_lexicalFunctionCallActualArgumentListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST GGS_lexicalFunctionCallActualArgumentListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lexicalFunctionCallActualArgumentListAST result = GGS_lexicalFunctionCallActualArgumentListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST GGS_lexicalFunctionCallActualArgumentListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lexicalFunctionCallActualArgumentListAST result = GGS_lexicalFunctionCallActualArgumentListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionCallActualArgumentListAST::plusAssignOperation (const GGS_lexicalFunctionCallActualArgumentListAST inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionCallActualArgumentListAST::setter_setMLexicalActualInputArgumentAtIndex (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST inOperand,
                                                                                                 GGS_uint inIndex,
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

GGS_lexicalRoutineOrFunctionFormalInputArgumentAST GGS_lexicalFunctionCallActualArgumentListAST::getter_mLexicalActualInputArgumentAtIndex (const GGS_uint & inIndex,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (cCollectionElement_lexicalFunctionCallActualArgumentListAST *) attributes.ptr () ;
  GGS_lexicalRoutineOrFunctionFormalInputArgumentAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
    result = p->mObject.mProperty_mLexicalActualInputArgument ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @lexicalFunctionCallActualArgumentListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalFunctionCallActualArgumentListAST::DownEnumerator_lexicalFunctionCallActualArgumentListAST (const GGS_lexicalFunctionCallActualArgumentListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST_2E_element DownEnumerator_lexicalFunctionCallActualArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (const cCollectionElement_lexicalFunctionCallActualArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineOrFunctionFormalInputArgumentAST DownEnumerator_lexicalFunctionCallActualArgumentListAST::current_mLexicalActualInputArgument (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (const cCollectionElement_lexicalFunctionCallActualArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
  return p->mObject.mProperty_mLexicalActualInputArgument ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @lexicalFunctionCallActualArgumentListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalFunctionCallActualArgumentListAST::UpEnumerator_lexicalFunctionCallActualArgumentListAST (const GGS_lexicalFunctionCallActualArgumentListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST_2E_element UpEnumerator_lexicalFunctionCallActualArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (const cCollectionElement_lexicalFunctionCallActualArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineOrFunctionFormalInputArgumentAST UpEnumerator_lexicalFunctionCallActualArgumentListAST::current_mLexicalActualInputArgument (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (const cCollectionElement_lexicalFunctionCallActualArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
  return p->mObject.mProperty_mLexicalActualInputArgument ;
}




//--------------------------------------------------------------------------------------------------
//     @lexicalFunctionCallActualArgumentListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST ("lexicalFunctionCallActualArgumentListAST",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalFunctionCallActualArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalFunctionCallActualArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalFunctionCallActualArgumentListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST GGS_lexicalFunctionCallActualArgumentListAST::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalFunctionCallActualArgumentListAST result ;
  const GGS_lexicalFunctionCallActualArgumentListAST * p = (const GGS_lexicalFunctionCallActualArgumentListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalFunctionCallActualArgumentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionCallActualArgumentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalAttributeInputArgumentAST_2E_weak::objectCompare (const GGS_lexicalAttributeInputArgumentAST_2E_weak & inOperand) const {
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

GGS_lexicalAttributeInputArgumentAST_2E_weak::GGS_lexicalAttributeInputArgumentAST_2E_weak (void) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputArgumentAST_2E_weak & GGS_lexicalAttributeInputArgumentAST_2E_weak::operator = (const GGS_lexicalAttributeInputArgumentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputArgumentAST_2E_weak::GGS_lexicalAttributeInputArgumentAST_2E_weak (const GGS_lexicalAttributeInputArgumentAST & inSource) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputArgumentAST_2E_weak GGS_lexicalAttributeInputArgumentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalAttributeInputArgumentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputArgumentAST GGS_lexicalAttributeInputArgumentAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalAttributeInputArgumentAST result ;
  if (isValid ()) {
    const cPtr_lexicalAttributeInputArgumentAST * p = (cPtr_lexicalAttributeInputArgumentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalAttributeInputArgumentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputArgumentAST GGS_lexicalAttributeInputArgumentAST_2E_weak::bang_lexicalAttributeInputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalAttributeInputArgumentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalAttributeInputArgumentAST) ;
      result = GGS_lexicalAttributeInputArgumentAST ((cPtr_lexicalAttributeInputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalAttributeInputArgumentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST_2E_weak ("lexicalAttributeInputArgumentAST.weak",
                                                                                                & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalAttributeInputArgumentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalAttributeInputArgumentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalAttributeInputArgumentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputArgumentAST_2E_weak GGS_lexicalAttributeInputArgumentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalAttributeInputArgumentAST_2E_weak result ;
  const GGS_lexicalAttributeInputArgumentAST_2E_weak * p = (const GGS_lexicalAttributeInputArgumentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalAttributeInputArgumentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeInputArgumentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalCharacterInputArgumentAST_2E_weak::objectCompare (const GGS_lexicalCharacterInputArgumentAST_2E_weak & inOperand) const {
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

GGS_lexicalCharacterInputArgumentAST_2E_weak::GGS_lexicalCharacterInputArgumentAST_2E_weak (void) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterInputArgumentAST_2E_weak & GGS_lexicalCharacterInputArgumentAST_2E_weak::operator = (const GGS_lexicalCharacterInputArgumentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterInputArgumentAST_2E_weak::GGS_lexicalCharacterInputArgumentAST_2E_weak (const GGS_lexicalCharacterInputArgumentAST & inSource) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterInputArgumentAST_2E_weak GGS_lexicalCharacterInputArgumentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalCharacterInputArgumentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterInputArgumentAST GGS_lexicalCharacterInputArgumentAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalCharacterInputArgumentAST result ;
  if (isValid ()) {
    const cPtr_lexicalCharacterInputArgumentAST * p = (cPtr_lexicalCharacterInputArgumentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalCharacterInputArgumentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterInputArgumentAST GGS_lexicalCharacterInputArgumentAST_2E_weak::bang_lexicalCharacterInputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalCharacterInputArgumentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalCharacterInputArgumentAST) ;
      result = GGS_lexicalCharacterInputArgumentAST ((cPtr_lexicalCharacterInputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalCharacterInputArgumentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST_2E_weak ("lexicalCharacterInputArgumentAST.weak",
                                                                                                & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalCharacterInputArgumentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalCharacterInputArgumentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalCharacterInputArgumentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterInputArgumentAST_2E_weak GGS_lexicalCharacterInputArgumentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalCharacterInputArgumentAST_2E_weak result ;
  const GGS_lexicalCharacterInputArgumentAST_2E_weak * p = (const GGS_lexicalCharacterInputArgumentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalCharacterInputArgumentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterInputArgumentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalUnsignedInputArgumentAST_2E_weak::objectCompare (const GGS_lexicalUnsignedInputArgumentAST_2E_weak & inOperand) const {
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

GGS_lexicalUnsignedInputArgumentAST_2E_weak::GGS_lexicalUnsignedInputArgumentAST_2E_weak (void) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalUnsignedInputArgumentAST_2E_weak & GGS_lexicalUnsignedInputArgumentAST_2E_weak::operator = (const GGS_lexicalUnsignedInputArgumentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalUnsignedInputArgumentAST_2E_weak::GGS_lexicalUnsignedInputArgumentAST_2E_weak (const GGS_lexicalUnsignedInputArgumentAST & inSource) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalUnsignedInputArgumentAST_2E_weak GGS_lexicalUnsignedInputArgumentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalUnsignedInputArgumentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalUnsignedInputArgumentAST GGS_lexicalUnsignedInputArgumentAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalUnsignedInputArgumentAST result ;
  if (isValid ()) {
    const cPtr_lexicalUnsignedInputArgumentAST * p = (cPtr_lexicalUnsignedInputArgumentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalUnsignedInputArgumentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalUnsignedInputArgumentAST GGS_lexicalUnsignedInputArgumentAST_2E_weak::bang_lexicalUnsignedInputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalUnsignedInputArgumentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalUnsignedInputArgumentAST) ;
      result = GGS_lexicalUnsignedInputArgumentAST ((cPtr_lexicalUnsignedInputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalUnsignedInputArgumentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST_2E_weak ("lexicalUnsignedInputArgumentAST.weak",
                                                                                               & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalUnsignedInputArgumentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalUnsignedInputArgumentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalUnsignedInputArgumentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalUnsignedInputArgumentAST_2E_weak GGS_lexicalUnsignedInputArgumentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_lexicalUnsignedInputArgumentAST_2E_weak result ;
  const GGS_lexicalUnsignedInputArgumentAST_2E_weak * p = (const GGS_lexicalUnsignedInputArgumentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalUnsignedInputArgumentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalUnsignedInputArgumentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalCurrentCharacterInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalCurrentCharacterInputArgumentAST::objectCompare (const GGS_lexicalCurrentCharacterInputArgumentAST & inOperand) const {
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

GGS_lexicalCurrentCharacterInputArgumentAST::GGS_lexicalCurrentCharacterInputArgumentAST (void) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalCurrentCharacterInputArgumentAST GGS_lexicalCurrentCharacterInputArgumentAST::
init_21_ (const GGS_location & in_mLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalCurrentCharacterInputArgumentAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalCurrentCharacterInputArgumentAST (inCompiler COMMA_THERE)) ;
  object->lexicalCurrentCharacterInputArgumentAST_init_21_ (in_mLocation, inCompiler) ;
  const GGS_lexicalCurrentCharacterInputArgumentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCurrentCharacterInputArgumentAST::
lexicalCurrentCharacterInputArgumentAST_init_21_ (const GGS_location & in_mLocation,
                                                  Compiler * /* inCompiler */) {
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCurrentCharacterInputArgumentAST::GGS_lexicalCurrentCharacterInputArgumentAST (const cPtr_lexicalCurrentCharacterInputArgumentAST * inSourcePtr) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCurrentCharacterInputArgumentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalCurrentCharacterInputArgumentAST GGS_lexicalCurrentCharacterInputArgumentAST::class_func_new (const GGS_location & in_mLocation,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) {
  GGS_lexicalCurrentCharacterInputArgumentAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalCurrentCharacterInputArgumentAST (in_mLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_lexicalCurrentCharacterInputArgumentAST::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_lexicalCurrentCharacterInputArgumentAST * p = (cPtr_lexicalCurrentCharacterInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCurrentCharacterInputArgumentAST) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalCurrentCharacterInputArgumentAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalCurrentCharacterInputArgumentAST::cPtr_lexicalCurrentCharacterInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (inCompiler COMMA_THERE),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalCurrentCharacterInputArgumentAST::cPtr_lexicalCurrentCharacterInputArgumentAST (const GGS_location & in_mLocation,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (inCompiler COMMA_THERE),
mProperty_mLocation () {
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalCurrentCharacterInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST ;
}

void cPtr_lexicalCurrentCharacterInputArgumentAST::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalCurrentCharacterInputArgumentAST:") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalCurrentCharacterInputArgumentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalCurrentCharacterInputArgumentAST (mProperty_mLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalCurrentCharacterInputArgumentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST::printNonNullClassInstanceProperties () ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalCurrentCharacterInputArgumentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST ("lexicalCurrentCharacterInputArgumentAST",
                                                                                               & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalCurrentCharacterInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalCurrentCharacterInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalCurrentCharacterInputArgumentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCurrentCharacterInputArgumentAST GGS_lexicalCurrentCharacterInputArgumentAST::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_lexicalCurrentCharacterInputArgumentAST result ;
  const GGS_lexicalCurrentCharacterInputArgumentAST * p = (const GGS_lexicalCurrentCharacterInputArgumentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalCurrentCharacterInputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCurrentCharacterInputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak::objectCompare (const GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak & inOperand) const {
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

GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak::GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak (void) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak & GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak::operator = (const GGS_lexicalCurrentCharacterInputArgumentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak::GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak (const GGS_lexicalCurrentCharacterInputArgumentAST & inSource) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCurrentCharacterInputArgumentAST GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalCurrentCharacterInputArgumentAST result ;
  if (isValid ()) {
    const cPtr_lexicalCurrentCharacterInputArgumentAST * p = (cPtr_lexicalCurrentCharacterInputArgumentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalCurrentCharacterInputArgumentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCurrentCharacterInputArgumentAST GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak::bang_lexicalCurrentCharacterInputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalCurrentCharacterInputArgumentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalCurrentCharacterInputArgumentAST) ;
      result = GGS_lexicalCurrentCharacterInputArgumentAST ((cPtr_lexicalCurrentCharacterInputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalCurrentCharacterInputArgumentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST_2E_weak ("lexicalCurrentCharacterInputArgumentAST.weak",
                                                                                                       & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak result ;
  const GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak * p = (const GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCurrentCharacterInputArgumentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalFunctionInputArgumentAST_2E_weak::objectCompare (const GGS_lexicalFunctionInputArgumentAST_2E_weak & inOperand) const {
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

GGS_lexicalFunctionInputArgumentAST_2E_weak::GGS_lexicalFunctionInputArgumentAST_2E_weak (void) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionInputArgumentAST_2E_weak & GGS_lexicalFunctionInputArgumentAST_2E_weak::operator = (const GGS_lexicalFunctionInputArgumentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionInputArgumentAST_2E_weak::GGS_lexicalFunctionInputArgumentAST_2E_weak (const GGS_lexicalFunctionInputArgumentAST & inSource) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionInputArgumentAST_2E_weak GGS_lexicalFunctionInputArgumentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalFunctionInputArgumentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionInputArgumentAST GGS_lexicalFunctionInputArgumentAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalFunctionInputArgumentAST result ;
  if (isValid ()) {
    const cPtr_lexicalFunctionInputArgumentAST * p = (cPtr_lexicalFunctionInputArgumentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalFunctionInputArgumentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionInputArgumentAST GGS_lexicalFunctionInputArgumentAST_2E_weak::bang_lexicalFunctionInputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalFunctionInputArgumentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalFunctionInputArgumentAST) ;
      result = GGS_lexicalFunctionInputArgumentAST ((cPtr_lexicalFunctionInputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalFunctionInputArgumentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST_2E_weak ("lexicalFunctionInputArgumentAST.weak",
                                                                                               & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalFunctionInputArgumentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalFunctionInputArgumentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalFunctionInputArgumentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionInputArgumentAST_2E_weak GGS_lexicalFunctionInputArgumentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_lexicalFunctionInputArgumentAST_2E_weak result ;
  const GGS_lexicalFunctionInputArgumentAST_2E_weak * p = (const GGS_lexicalFunctionInputArgumentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalFunctionInputArgumentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionInputArgumentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalArgumentModeAST ("lexicalArgumentModeAST",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalArgumentModeAST::staticTypeDescriptor (void) const {
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
//  Extension Getter '@lexicalArgumentModeAST lexicalFormalModeName'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_lexicalFormalModeName (const GGS_lexicalArgumentModeAST & inObject,
                                                  Compiler *
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalArgumentModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalArgumentModeAST::Enumeration::invalid:
    break ;
  case GGS_lexicalArgumentModeAST::Enumeration::enum_lexicalInputMode:
    {
      result_result = GGS_string ("!") ;
    }
    break ;
  case GGS_lexicalArgumentModeAST::Enumeration::enum_lexicalInputOutputMode:
    {
      result_result = GGS_string ("\?!") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalArgumentModeAST cppConstInFormalArgument'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_cppConstInFormalArgument (const GGS_lexicalArgumentModeAST & inObject,
                                                     Compiler *
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalArgumentModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalArgumentModeAST::Enumeration::invalid:
    break ;
  case GGS_lexicalArgumentModeAST::Enumeration::enum_lexicalInputMode:
    {
      result_result = GGS_string ("const ") ;
    }
    break ;
  case GGS_lexicalArgumentModeAST::Enumeration::enum_lexicalInputOutputMode:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalArgumentModeAST cppReferenceInFormalArgument'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_cppReferenceInFormalArgument (const GGS_lexicalArgumentModeAST & inObject,
                                                         Compiler *
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalArgumentModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalArgumentModeAST::Enumeration::invalid:
    break ;
  case GGS_lexicalArgumentModeAST::Enumeration::enum_lexicalInputMode:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalArgumentModeAST::Enumeration::enum_lexicalInputOutputMode:
    {
      result_result = GGS_string (" &") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalArgumentModeAST cocoaPointerInFormalArgument'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_cocoaPointerInFormalArgument (const GGS_lexicalArgumentModeAST & inObject,
                                                         Compiler *
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalArgumentModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalArgumentModeAST::Enumeration::invalid:
    break ;
  case GGS_lexicalArgumentModeAST::Enumeration::enum_lexicalInputMode:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalArgumentModeAST::Enumeration::enum_lexicalInputOutputMode:
    {
      result_result = GGS_string (" *") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Enum lexicalTypeEnum
//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum::GGS_lexicalTypeEnum (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeEnum result ;
  result.mEnum = Enumeration::enum_lexicalType_5F_string ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeEnum result ;
  result.mEnum = Enumeration::enum_lexicalType_5F_char ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeEnum result ;
  result.mEnum = Enumeration::enum_lexicalType_5F_uint ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeEnum result ;
  result.mEnum = Enumeration::enum_lexicalType_5F_uint_36__34_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint (UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeEnum result ;
  result.mEnum = Enumeration::enum_lexicalType_5F_sint ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeEnum result ;
  result.mEnum = Enumeration::enum_lexicalType_5F_sint_36__34_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum GGS_lexicalTypeEnum::class_func_lexicalType_5F_double (UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeEnum result ;
  result.mEnum = Enumeration::enum_lexicalType_5F_double ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeEnum result ;
  result.mEnum = Enumeration::enum_lexicalType_5F_bigint ;
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

GGS_bool GGS_lexicalTypeEnum::getter_isLexicalType_5F_string (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lexicalType_5F_string == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalTypeEnum::getter_isLexicalType_5F_char (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lexicalType_5F_char == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalTypeEnum::getter_isLexicalType_5F_uint (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lexicalType_5F_uint == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalTypeEnum::getter_isLexicalType_5F_uint_36__34_ (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lexicalType_5F_uint_36__34_ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalTypeEnum::getter_isLexicalType_5F_sint (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lexicalType_5F_sint == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalTypeEnum::getter_isLexicalType_5F_sint_36__34_ (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lexicalType_5F_sint_36__34_ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalTypeEnum::getter_isLexicalType_5F_double (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lexicalType_5F_double == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalTypeEnum::getter_isLexicalType_5F_bigint (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lexicalType_5F_bigint == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTypeEnum::description (String & ioString,
                                       const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @lexicalTypeEnum: ") ;
  ioString.appendCString (gEnumNameArrayFor_lexicalTypeEnum [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalTypeEnum::objectCompare (const GGS_lexicalTypeEnum & inOperand) const {
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
//     @lexicalTypeEnum generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTypeEnum ("lexicalTypeEnum",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalTypeEnum::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTypeEnum ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalTypeEnum::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalTypeEnum (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum GGS_lexicalTypeEnum::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_lexicalTypeEnum result ;
  const GGS_lexicalTypeEnum * p = (const GGS_lexicalTypeEnum *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalTypeEnum *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTypeEnum", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@lexicalSentValueList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalSentValueList : public cCollectionElement {
  public: GGS_lexicalSentValueList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_lexicalSentValueList (const GGS_lstring & in_mLexicalFormalSelector,
                                                   const GGS_string & in_mLexicalAttributeName,
                                                   const GGS_lexicalTypeEnum & in_mLexicalType
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalSentValueList (const GGS_lexicalSentValueList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalSentValueList::cCollectionElement_lexicalSentValueList (const GGS_lstring & in_mLexicalFormalSelector,
                                                                                  const GGS_string & in_mLexicalAttributeName,
                                                                                  const GGS_lexicalTypeEnum & in_mLexicalType
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalFormalSelector, in_mLexicalAttributeName, in_mLexicalType) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalSentValueList::cCollectionElement_lexicalSentValueList (const GGS_lexicalSentValueList_2E_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexicalFormalSelector" ":") ;
  mObject.mProperty_mLexicalFormalSelector.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexicalAttributeName" ":") ;
  mObject.mProperty_mLexicalAttributeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexicalType" ":") ;
  mObject.mProperty_mLexicalType.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList::GGS_lexicalSentValueList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList::GGS_lexicalSentValueList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList GGS_lexicalSentValueList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_lexicalSentValueList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList GGS_lexicalSentValueList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_lexicalSentValueList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSentValueList::plusPlusAssignOperation (const GGS_lexicalSentValueList_2E_element & inValue
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalSentValueList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList GGS_lexicalSentValueList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                             const GGS_string & inOperand1,
                                                                             const GGS_lexicalTypeEnum & inOperand2
                                                                             COMMA_LOCATION_ARGS) {
  GGS_lexicalSentValueList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_lexicalSentValueList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_lexicalSentValueList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSentValueList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GGS_lstring & in_mLexicalFormalSelector,
                                                          const GGS_string & in_mLexicalAttributeName,
                                                          const GGS_lexicalTypeEnum & in_mLexicalType
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalSentValueList * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalSentValueList (in_mLexicalFormalSelector,
                                                          in_mLexicalAttributeName,
                                                          in_mLexicalType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSentValueList::addAssignOperation (const GGS_lstring & inOperand0,
                                                   const GGS_string & inOperand1,
                                                   const GGS_lexicalTypeEnum & inOperand2
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

void GGS_lexicalSentValueList::setter_append (const GGS_lstring inOperand0,
                                              const GGS_string inOperand1,
                                              const GGS_lexicalTypeEnum inOperand2,
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

void GGS_lexicalSentValueList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                     const GGS_string inOperand1,
                                                     const GGS_lexicalTypeEnum inOperand2,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalSentValueList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSentValueList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                     GGS_string & outOperand1,
                                                     GGS_lexicalTypeEnum & outOperand2,
                                                     const GGS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
      outOperand0 = p->mObject.mProperty_mLexicalFormalSelector ;
      outOperand1 = p->mObject.mProperty_mLexicalAttributeName ;
      outOperand2 = p->mObject.mProperty_mLexicalType ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSentValueList::setter_popFirst (GGS_lstring & outOperand0,
                                                GGS_string & outOperand1,
                                                GGS_lexicalTypeEnum & outOperand2,
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

void GGS_lexicalSentValueList::setter_popLast (GGS_lstring & outOperand0,
                                               GGS_string & outOperand1,
                                               GGS_lexicalTypeEnum & outOperand2,
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

void GGS_lexicalSentValueList::method_first (GGS_lstring & outOperand0,
                                             GGS_string & outOperand1,
                                             GGS_lexicalTypeEnum & outOperand2,
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

void GGS_lexicalSentValueList::method_last (GGS_lstring & outOperand0,
                                            GGS_string & outOperand1,
                                            GGS_lexicalTypeEnum & outOperand2,
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

GGS_lexicalSentValueList GGS_lexicalSentValueList::add_operation (const GGS_lexicalSentValueList & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalSentValueList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList GGS_lexicalSentValueList::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_lexicalSentValueList result = GGS_lexicalSentValueList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList GGS_lexicalSentValueList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_lexicalSentValueList result = GGS_lexicalSentValueList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList GGS_lexicalSentValueList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_lexicalSentValueList result = GGS_lexicalSentValueList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSentValueList::plusAssignOperation (const GGS_lexicalSentValueList inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSentValueList::setter_setMLexicalFormalSelectorAtIndex (GGS_lstring inOperand,
                                                                        GGS_uint inIndex,
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

GGS_lstring GGS_lexicalSentValueList::getter_mLexicalFormalSelectorAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    result = p->mObject.mProperty_mLexicalFormalSelector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSentValueList::setter_setMLexicalAttributeNameAtIndex (GGS_string inOperand,
                                                                       GGS_uint inIndex,
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

GGS_string GGS_lexicalSentValueList::getter_mLexicalAttributeNameAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    result = p->mObject.mProperty_mLexicalAttributeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSentValueList::setter_setMLexicalTypeAtIndex (GGS_lexicalTypeEnum inOperand,
                                                              GGS_uint inIndex,
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

GGS_lexicalTypeEnum GGS_lexicalSentValueList::getter_mLexicalTypeAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) attributes.ptr () ;
  GGS_lexicalTypeEnum result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    result = p->mObject.mProperty_mLexicalType ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @lexicalSentValueList
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalSentValueList::DownEnumerator_lexicalSentValueList (const GGS_lexicalSentValueList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList_2E_element DownEnumerator_lexicalSentValueList::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSentValueList * p = (const cCollectionElement_lexicalSentValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalSentValueList::current_mLexicalFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSentValueList * p = (const cCollectionElement_lexicalSentValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
  return p->mObject.mProperty_mLexicalFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_lexicalSentValueList::current_mLexicalAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSentValueList * p = (const cCollectionElement_lexicalSentValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
  return p->mObject.mProperty_mLexicalAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum DownEnumerator_lexicalSentValueList::current_mLexicalType (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSentValueList * p = (const cCollectionElement_lexicalSentValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
  return p->mObject.mProperty_mLexicalType ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @lexicalSentValueList
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalSentValueList::UpEnumerator_lexicalSentValueList (const GGS_lexicalSentValueList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList_2E_element UpEnumerator_lexicalSentValueList::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSentValueList * p = (const cCollectionElement_lexicalSentValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalSentValueList::current_mLexicalFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSentValueList * p = (const cCollectionElement_lexicalSentValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
  return p->mObject.mProperty_mLexicalFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_lexicalSentValueList::current_mLexicalAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSentValueList * p = (const cCollectionElement_lexicalSentValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
  return p->mObject.mProperty_mLexicalAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum UpEnumerator_lexicalSentValueList::current_mLexicalType (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSentValueList * p = (const cCollectionElement_lexicalSentValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
  return p->mObject.mProperty_mLexicalType ;
}




//--------------------------------------------------------------------------------------------------
//     @lexicalSentValueList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSentValueList ("lexicalSentValueList",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalSentValueList::staticTypeDescriptor (void) const {
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
//  Map type @terminalMap
//--------------------------------------------------------------------------------------------------

#include "GGS_GenericMapRoot.h"

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

GGS_terminalMap GGS_terminalMap::class_func_emptyMap (LOCATION_ARGS) {
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
  mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_terminalMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <GGS_GenericMapRoot <GGS_terminalMap_2E_element>>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalMap::performInsert (const GGS_terminalMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_terminalMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_terminalMap_2E_element>
GGS_terminalMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <GGS_GenericMapNode <GGS_terminalMap_2E_element>> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_terminalMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_terminalMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <GGS_GenericMapNode <GGS_terminalMap_2E_element>>
GGS_terminalMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <GGS_GenericMapNode <GGS_terminalMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_terminalMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_terminalMap_2E_element>>
GGS_terminalMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_terminalMap_2E_element>> () ;
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
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
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
    result.mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_terminalMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
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
      TC_UniqueArray <String> nearestKeyArray ;
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
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_terminalMap_2E_element>> node = nodeForKey (key) ;
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

static void GGS_terminalMap_internalDescription (const TC_Array <SharedGenericPtrWithValueSemantics <GGS_terminalMap_2E_element>> & inArray,
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
    const TC_Array <SharedGenericPtrWithValueSemantics <GGS_terminalMap_2E_element>> array = sortedInfoArray () ;
    GGS_terminalMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GGS_GenericMapRoot <GGS_terminalMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalMap ("terminalMap",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_terminalMap::staticTypeDescriptor (void) const {
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
//  Map type @lexicalTypeMap
//--------------------------------------------------------------------------------------------------

#include "GGS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeMap::GGS_lexicalTypeMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeMap::~ GGS_lexicalTypeMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeMap::GGS_lexicalTypeMap (const GGS_lexicalTypeMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeMap & GGS_lexicalTypeMap::operator = (const GGS_lexicalTypeMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeMap GGS_lexicalTypeMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_lexicalTypeMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeMap GGS_lexicalTypeMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_lexicalTypeMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalTypeMap::getter_hasKey (const GGS_string & inKey
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexicalTypeMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                   const GGS_uint & inLevel
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalTypeMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexicalTypeMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_lexicalTypeMap::getter_locationForKey (const GGS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_lexicalTypeMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_lexicalTypeMap::getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalTypeMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTypeMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTypeMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_lexicalTypeMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTypeMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <GGS_GenericMapRoot <GGS_lexicalTypeMap_2E_element>>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTypeMap::performInsert (const GGS_lexicalTypeMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalTypeMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_lexicalTypeMap_2E_element>
GGS_lexicalTypeMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalTypeMap_2E_element>> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_lexicalTypeMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_lexicalTypeMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalTypeMap_2E_element>>
GGS_lexicalTypeMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalTypeMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_lexicalTypeMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalTypeMap_2E_element>>
GGS_lexicalTypeMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalTypeMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_lexicalTypeMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTypeMap::findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeMap_2E_element_3F_ GGS_lexicalTypeMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalTypeMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_lexicalTypeMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_lexicalTypeMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_lexicalTypeMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mLexicalType = info->mProperty_mLexicalType ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeMap GGS_lexicalTypeMap::class_func_mapWithMapToOverride (const GGS_lexicalTypeMap & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GGS_lexicalTypeMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_lexicalTypeMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeMap GGS_lexicalTypeMap::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_lexicalTypeMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTypeMap::setter_insertKey (GGS_lstring inLKey,
                                           GGS_lexicalTypeEnum inArgument0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  const GGS_lexicalTypeMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '@%K' lexical type is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTypeMap::method_searchKey (GGS_lstring inLKey,
                                           GGS_lexicalTypeEnum & outArgument0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_lexicalTypeMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      TC_UniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '@%K' lexical type" ;
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

GGS_lexicalTypeEnum GGS_lexicalTypeMap::getter_mLexicalTypeForKey (const GGS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_lexicalTypeEnum result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexicalTypeMap_2E_element> info = infoForKey (key) ;
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

void GGS_lexicalTypeMap::setter_setMLexicalTypeForKey (GGS_lexicalTypeEnum inValue,
                                                       GGS_string inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalTypeMap_2E_element>> node = nodeForKey (key) ;
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

static void GGS_lexicalTypeMap_internalDescription (const TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalTypeMap_2E_element>> & inArray,
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
    ioString.appendString ("mLexicalType:") ;
    inArray (i COMMA_HERE)->mProperty_mLexicalType.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTypeMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalTypeMap_2E_element>> array = sortedInfoArray () ;
    GGS_lexicalTypeMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GGS_GenericMapRoot <GGS_lexicalTypeMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_lexicalTypeMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @lexicalTypeMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalTypeMap::DownEnumerator_lexicalTypeMap (const GGS_lexicalTypeMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeMap_2E_element DownEnumerator_lexicalTypeMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalTypeMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum DownEnumerator_lexicalTypeMap::current_mLexicalType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLexicalType ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @lexicalTypeMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalTypeMap::UpEnumerator_lexicalTypeMap (const GGS_lexicalTypeMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeMap_2E_element UpEnumerator_lexicalTypeMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalTypeMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum UpEnumerator_lexicalTypeMap::current_mLexicalType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLexicalType ;
}


//--------------------------------------------------------------------------------------------------
//     @lexicalTypeMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTypeMap ("lexicalTypeMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalTypeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTypeMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalTypeMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalTypeMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeMap GGS_lexicalTypeMap::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_lexicalTypeMap result ;
  const GGS_lexicalTypeMap * p = (const GGS_lexicalTypeMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalTypeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTypeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @lexicalAttributeMap
//--------------------------------------------------------------------------------------------------

#include "GGS_GenericMapRoot.h"

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

GGS_lexicalAttributeMap GGS_lexicalAttributeMap::class_func_emptyMap (LOCATION_ARGS) {
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
  mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_lexicalAttributeMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <GGS_GenericMapRoot <GGS_lexicalAttributeMap_2E_element>>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeMap::performInsert (const GGS_lexicalAttributeMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalAttributeMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_lexicalAttributeMap_2E_element>
GGS_lexicalAttributeMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalAttributeMap_2E_element>> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_lexicalAttributeMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_lexicalAttributeMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalAttributeMap_2E_element>>
GGS_lexicalAttributeMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalAttributeMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_lexicalAttributeMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalAttributeMap_2E_element>>
GGS_lexicalAttributeMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalAttributeMap_2E_element>> () ;
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
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
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
    result.mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_lexicalAttributeMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
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
      TC_UniqueArray <String> nearestKeyArray ;
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
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalAttributeMap_2E_element>> node = nodeForKey (key) ;
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

static void GGS_lexicalAttributeMap_internalDescription (const TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalAttributeMap_2E_element>> & inArray,
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
    const TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalAttributeMap_2E_element>> array = sortedInfoArray () ;
    GGS_lexicalAttributeMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GGS_GenericMapRoot <GGS_lexicalAttributeMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeMap ("lexicalAttributeMap",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalAttributeMap::staticTypeDescriptor (void) const {
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
//Class for element of '@terminalList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_terminalList : public cCollectionElement {
  public: GGS_terminalList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_terminalList (const GGS_lstring & in_mTerminalName,
                                           const GGS_lexicalSentValueList & in_mSentAttributeList,
                                           const GGS_string & in_mSyntaxErrorMessage,
                                           const GGS_bool & in_isEndOfTemplateMark,
                                           const GGS_bool & in_atomicSelection,
                                           const GGS_uint & in_mStyleIndex
                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_terminalList (const GGS_terminalList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_terminalList::cCollectionElement_terminalList (const GGS_lstring & in_mTerminalName,
                                                                  const GGS_lexicalSentValueList & in_mSentAttributeList,
                                                                  const GGS_string & in_mSyntaxErrorMessage,
                                                                  const GGS_bool & in_isEndOfTemplateMark,
                                                                  const GGS_bool & in_atomicSelection,
                                                                  const GGS_uint & in_mStyleIndex
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTerminalName, in_mSentAttributeList, in_mSyntaxErrorMessage, in_isEndOfTemplateMark, in_atomicSelection, in_mStyleIndex) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_terminalList::cCollectionElement_terminalList (const GGS_terminalList_2E_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTerminalName" ":") ;
  mObject.mProperty_mTerminalName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSentAttributeList" ":") ;
  mObject.mProperty_mSentAttributeList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSyntaxErrorMessage" ":") ;
  mObject.mProperty_mSyntaxErrorMessage.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("isEndOfTemplateMark" ":") ;
  mObject.mProperty_isEndOfTemplateMark.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("atomicSelection" ":") ;
  mObject.mProperty_atomicSelection.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mStyleIndex" ":") ;
  mObject.mProperty_mStyleIndex.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalList::GGS_terminalList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalList::GGS_terminalList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalList GGS_terminalList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_terminalList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalList GGS_terminalList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_terminalList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalList::plusPlusAssignOperation (const GGS_terminalList_2E_element & inValue
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_terminalList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalList GGS_terminalList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                             const GGS_lexicalSentValueList & inOperand1,
                                                             const GGS_string & inOperand2,
                                                             const GGS_bool & inOperand3,
                                                             const GGS_bool & inOperand4,
                                                             const GGS_uint & inOperand5
                                                             COMMA_LOCATION_ARGS) {
  GGS_terminalList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GGS_terminalList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_terminalList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const GGS_lstring & in_mTerminalName,
                                                  const GGS_lexicalSentValueList & in_mSentAttributeList,
                                                  const GGS_string & in_mSyntaxErrorMessage,
                                                  const GGS_bool & in_isEndOfTemplateMark,
                                                  const GGS_bool & in_atomicSelection,
                                                  const GGS_uint & in_mStyleIndex
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

void GGS_terminalList::addAssignOperation (const GGS_lstring & inOperand0,
                                           const GGS_lexicalSentValueList & inOperand1,
                                           const GGS_string & inOperand2,
                                           const GGS_bool & inOperand3,
                                           const GGS_bool & inOperand4,
                                           const GGS_uint & inOperand5
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

void GGS_terminalList::setter_append (const GGS_lstring inOperand0,
                                      const GGS_lexicalSentValueList inOperand1,
                                      const GGS_string inOperand2,
                                      const GGS_bool inOperand3,
                                      const GGS_bool inOperand4,
                                      const GGS_uint inOperand5,
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

void GGS_terminalList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                             const GGS_lexicalSentValueList inOperand1,
                                             const GGS_string inOperand2,
                                             const GGS_bool inOperand3,
                                             const GGS_bool inOperand4,
                                             const GGS_uint inOperand5,
                                             const GGS_uint inInsertionIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_terminalList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
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
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;
  outOperand5.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
    if (nullptr == p) {
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
    drop () ;    
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

void GGS_terminalList::setter_popLast (GGS_lstring & outOperand0,
                                       GGS_lexicalSentValueList & outOperand1,
                                       GGS_string & outOperand2,
                                       GGS_bool & outOperand3,
                                       GGS_bool & outOperand4,
                                       GGS_uint & outOperand5,
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

void GGS_terminalList::method_first (GGS_lstring & outOperand0,
                                     GGS_lexicalSentValueList & outOperand1,
                                     GGS_string & outOperand2,
                                     GGS_bool & outOperand3,
                                     GGS_bool & outOperand4,
                                     GGS_uint & outOperand5,
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

void GGS_terminalList::method_last (GGS_lstring & outOperand0,
                                    GGS_lexicalSentValueList & outOperand1,
                                    GGS_string & outOperand2,
                                    GGS_bool & outOperand3,
                                    GGS_bool & outOperand4,
                                    GGS_uint & outOperand5,
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

GGS_terminalList GGS_terminalList::add_operation (const GGS_terminalList & inOperand,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_terminalList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalList GGS_terminalList::getter_subListWithRange (const GGS_range & inRange,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_terminalList result = GGS_terminalList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalList GGS_terminalList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_terminalList result = GGS_terminalList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalList GGS_terminalList::getter_subListToIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_terminalList result = GGS_terminalList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalList::plusAssignOperation (const GGS_terminalList inOperand,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalList::setter_setMTerminalNameAtIndex (GGS_lstring inOperand,
                                                       GGS_uint inIndex,
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

GGS_lstring GGS_terminalList::getter_mTerminalNameAtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    result = p->mObject.mProperty_mTerminalName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalList::setter_setMSentAttributeListAtIndex (GGS_lexicalSentValueList inOperand,
                                                            GGS_uint inIndex,
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

GGS_lexicalSentValueList GGS_terminalList::getter_mSentAttributeListAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  GGS_lexicalSentValueList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    result = p->mObject.mProperty_mSentAttributeList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalList::setter_setMSyntaxErrorMessageAtIndex (GGS_string inOperand,
                                                             GGS_uint inIndex,
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

GGS_string GGS_terminalList::getter_mSyntaxErrorMessageAtIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    result = p->mObject.mProperty_mSyntaxErrorMessage ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalList::setter_setIsEndOfTemplateMarkAtIndex (GGS_bool inOperand,
                                                             GGS_uint inIndex,
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

GGS_bool GGS_terminalList::getter_isEndOfTemplateMarkAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    result = p->mObject.mProperty_isEndOfTemplateMark ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalList::setter_setAtomicSelectionAtIndex (GGS_bool inOperand,
                                                         GGS_uint inIndex,
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

GGS_bool GGS_terminalList::getter_atomicSelectionAtIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    result = p->mObject.mProperty_atomicSelection ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalList::setter_setMStyleIndexAtIndex (GGS_uint inOperand,
                                                     GGS_uint inIndex,
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

GGS_uint GGS_terminalList::getter_mStyleIndexAtIndex (const GGS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    result = p->mObject.mProperty_mStyleIndex ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @terminalList
//--------------------------------------------------------------------------------------------------

DownEnumerator_terminalList::DownEnumerator_terminalList (const GGS_terminalList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalList_2E_element DownEnumerator_terminalList::current (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_terminalList::current_mTerminalName (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mProperty_mTerminalName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList DownEnumerator_terminalList::current_mSentAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mProperty_mSentAttributeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_terminalList::current_mSyntaxErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mProperty_mSyntaxErrorMessage ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_terminalList::current_isEndOfTemplateMark (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mProperty_isEndOfTemplateMark ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_terminalList::current_atomicSelection (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mProperty_atomicSelection ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_terminalList::current_mStyleIndex (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mProperty_mStyleIndex ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @terminalList
//--------------------------------------------------------------------------------------------------

UpEnumerator_terminalList::UpEnumerator_terminalList (const GGS_terminalList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalList_2E_element UpEnumerator_terminalList::current (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_terminalList::current_mTerminalName (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mProperty_mTerminalName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList UpEnumerator_terminalList::current_mSentAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mProperty_mSentAttributeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_terminalList::current_mSyntaxErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mProperty_mSyntaxErrorMessage ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_terminalList::current_isEndOfTemplateMark (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mProperty_isEndOfTemplateMark ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_terminalList::current_atomicSelection (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mProperty_atomicSelection ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_terminalList::current_mStyleIndex (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mProperty_mStyleIndex ;
}




//--------------------------------------------------------------------------------------------------
//     @terminalList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalList ("terminalList",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_terminalList::staticTypeDescriptor (void) const {
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
//  Map type @lexicalExplicitTokenListMap
//--------------------------------------------------------------------------------------------------

#include "GGS_GenericMapRoot.h"

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

GGS_lexicalExplicitTokenListMap GGS_lexicalExplicitTokenListMap::class_func_emptyMap (LOCATION_ARGS) {
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
  mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_lexicalExplicitTokenListMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <GGS_GenericMapRoot <GGS_lexicalExplicitTokenListMap_2E_element>>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMap::performInsert (const GGS_lexicalExplicitTokenListMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalExplicitTokenListMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMap_2E_element>
GGS_lexicalExplicitTokenListMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalExplicitTokenListMap_2E_element>> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalExplicitTokenListMap_2E_element>>
GGS_lexicalExplicitTokenListMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalExplicitTokenListMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_lexicalExplicitTokenListMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMap_2E_element>>
GGS_lexicalExplicitTokenListMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMap_2E_element>> () ;
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
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
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
    result.mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_lexicalExplicitTokenListMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
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
      TC_UniqueArray <String> nearestKeyArray ;
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
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalExplicitTokenListMap_2E_element>> node = nodeForKey (key) ;
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
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalExplicitTokenListMap_2E_element>> node = nodeForKey (key) ;
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
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalExplicitTokenListMap_2E_element>> node = nodeForKey (key) ;
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

static void GGS_lexicalExplicitTokenListMap_internalDescription (const TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMap_2E_element>> & inArray,
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
    const TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMap_2E_element>> array = sortedInfoArray () ;
    GGS_lexicalExplicitTokenListMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GGS_GenericMapRoot <GGS_lexicalExplicitTokenListMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap ("lexicalExplicitTokenListMap",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalExplicitTokenListMap::staticTypeDescriptor (void) const {
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
GGS_GenericSortedList <GGS_tokenSortedlist_2E_element> () {
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

void GGS_tokenSortedlist::plusPlusAssignOperation (const GGS_tokenSortedlist_2E_element & inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  insertObject (inValue, compareForSorting_tokenSortedlist) ;
}

//--------------------------------------------------------------------------------------------------

GGS_tokenSortedlist GGS_tokenSortedlist::class_func_emptySortedList (UNUSED_LOCATION_ARGS) {
  GGS_tokenSortedlist result ;
  result.build () ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tokenSortedlist GGS_tokenSortedlist::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_tokenSortedlist result ;
  result.build () ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tokenSortedlist GGS_tokenSortedlist::class_func_sortedListWithValue (const GGS_uint & inOperand0,
                                                                         const GGS_string & inOperand1,
                                                                         const GGS_string & inOperand2
                                                                         COMMA_LOCATION_ARGS) {
  GGS_tokenSortedlist result = class_func_emptySortedList (THERE) ;
  const GGS_tokenSortedlist_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  result.insertObject (newElement, compareForSorting_tokenSortedlist) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tokenSortedlist::addAssignOperation (const GGS_uint & inOperand0,
                                              const GGS_string & inOperand1,
                                              const GGS_string & inOperand2
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_tokenSortedlist_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  insertObject (newElement, compareForSorting_tokenSortedlist) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tokenSortedlist::setter_insert (const GGS_uint inOperand0,
                                         const GGS_string inOperand1,
                                         const GGS_string inOperand2,
                                         Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_tokenSortedlist_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  insertObject (newElement, compareForSorting_tokenSortedlist) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tokenSortedlist::plusAssignOperation (const GGS_tokenSortedlist inOperand,
                                               Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendSortedList (inOperand, compareForSorting_tokenSortedlist) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tokenSortedlist::setter_popSmallest (GGS_uint & outOperand0,
                                              GGS_string & outOperand1,
                                              GGS_string & outOperand2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_tokenSortedlist_2E_element removedElement ;
  removeFirst (removedElement, inCompiler COMMA_THERE) ;
  if (removedElement.isValid ()) {
    outOperand0 = removedElement.mProperty_mLength ;
    outOperand1 = removedElement.mProperty_mName ;
    outOperand2 = removedElement.mProperty_mTerminalName ;
  }else{
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
  GGS_tokenSortedlist_2E_element removedElement ;
  removeLast (removedElement, inCompiler COMMA_THERE) ;
  if (removedElement.isValid ()) {
    outOperand0 = removedElement.mProperty_mLength ;
    outOperand1 = removedElement.mProperty_mName ;
    outOperand2 = removedElement.mProperty_mTerminalName ;
  }else{
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
  GGS_tokenSortedlist_2E_element removedElement ;
  getFirst (removedElement, inCompiler COMMA_THERE) ;
  if (removedElement.isValid ()) {
    outOperand0 = removedElement.mProperty_mLength ;
    outOperand1 = removedElement.mProperty_mName ;
    outOperand2 = removedElement.mProperty_mTerminalName ;
  }else{
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
  GGS_tokenSortedlist_2E_element removedElement ;
  getLast (removedElement, inCompiler COMMA_THERE) ;
  if (removedElement.isValid ()) {
    outOperand0 = removedElement.mProperty_mLength ;
    outOperand1 = removedElement.mProperty_mName ;
    outOperand2 = removedElement.mProperty_mTerminalName ;
  }else{
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tokenSortedlist ("tokenSortedlist",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_tokenSortedlist::staticTypeDescriptor (void) const {
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

#include "GGS_GenericMapRoot.h"

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

GGS_lexicalExplicitTokenListMapMap GGS_lexicalExplicitTokenListMapMap::class_func_emptyMap (LOCATION_ARGS) {
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
  mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_lexicalExplicitTokenListMapMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMapMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <GGS_GenericMapRoot <GGS_lexicalExplicitTokenListMapMap_2E_element>>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMapMap::performInsert (const GGS_lexicalExplicitTokenListMapMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalExplicitTokenListMapMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element>
GGS_lexicalExplicitTokenListMapMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalExplicitTokenListMapMap_2E_element>> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalExplicitTokenListMapMap_2E_element>>
GGS_lexicalExplicitTokenListMapMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalExplicitTokenListMapMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_lexicalExplicitTokenListMapMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element>>
GGS_lexicalExplicitTokenListMapMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element>> () ;
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
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
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
    result.mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_lexicalExplicitTokenListMapMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
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
      TC_UniqueArray <String> nearestKeyArray ;
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
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalExplicitTokenListMapMap_2E_element>> node = nodeForKey (key) ;
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
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalExplicitTokenListMapMap_2E_element>> node = nodeForKey (key) ;
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
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalExplicitTokenListMapMap_2E_element>> node = nodeForKey (key) ;
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

static void GGS_lexicalExplicitTokenListMapMap_internalDescription (const TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element>> & inArray,
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
    const TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element>> array = sortedInfoArray () ;
    GGS_lexicalExplicitTokenListMapMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GGS_GenericMapRoot <GGS_lexicalExplicitTokenListMapMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap ("lexicalExplicitTokenListMapMap",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalExplicitTokenListMapMap::staticTypeDescriptor (void) const {
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

#include "GGS_GenericMapRoot.h"

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

GGS_lexicalMessageMap GGS_lexicalMessageMap::class_func_emptyMap (LOCATION_ARGS) {
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
  mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_lexicalMessageMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <GGS_GenericMapRoot <GGS_lexicalMessageMap_2E_element>>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageMap::performInsert (const GGS_lexicalMessageMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalMessageMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element>
GGS_lexicalMessageMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalMessageMap_2E_element>> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalMessageMap_2E_element>>
GGS_lexicalMessageMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalMessageMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_lexicalMessageMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element>>
GGS_lexicalMessageMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element>> () ;
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
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
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
    if (info.isNil ()) {
      const char * kErrorMessage = "the '%K' message is not declared" ;
      TC_UniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kErrorMessage COMMA_THERE) ;
    }else{
      result = info.value () ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap GGS_lexicalMessageMap::class_func_mapWithMapToOverride (const GGS_lexicalMessageMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GGS_lexicalMessageMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_lexicalMessageMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
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
      TC_UniqueArray <String> nearestKeyArray ;
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
    OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalMessageMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      TC_UniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (inElement.mProperty_lkey, nearestKeyArray, kReplaceErrorMessage COMMA_THERE) ;
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
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalMessageMap_2E_element>> node = nodeForKey (key) ;
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
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalMessageMap_2E_element>> node = nodeForKey (key) ;
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

static void GGS_lexicalMessageMap_internalDescription (const TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element>> & inArray,
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
    const TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element>> array = sortedInfoArray () ;
    GGS_lexicalMessageMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GGS_GenericMapRoot <GGS_lexicalMessageMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalMessageMap ("lexicalMessageMap",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalMessageMap::staticTypeDescriptor (void) const {
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

class cCollectionElement_lexicalRoutineFormalArgumentList : public cCollectionElement {
  public: GGS_lexicalRoutineFormalArgumentList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_lexicalRoutineFormalArgumentList (const GGS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                               const GGS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                               const GGS_string & in_mArgumentNameForComment
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalRoutineFormalArgumentList (const GGS_lexicalRoutineFormalArgumentList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalRoutineFormalArgumentList::cCollectionElement_lexicalRoutineFormalArgumentList (const GGS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                                                                          const GGS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                                                                          const GGS_string & in_mArgumentNameForComment
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalFormalArgumentMode, in_mLexicalFormalArgumentType, in_mArgumentNameForComment) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalRoutineFormalArgumentList::cCollectionElement_lexicalRoutineFormalArgumentList (const GGS_lexicalRoutineFormalArgumentList_2E_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexicalFormalArgumentMode" ":") ;
  mObject.mProperty_mLexicalFormalArgumentMode.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexicalFormalArgumentType" ":") ;
  mObject.mProperty_mLexicalFormalArgumentType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mArgumentNameForComment" ":") ;
  mObject.mProperty_mArgumentNameForComment.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList::GGS_lexicalRoutineFormalArgumentList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList::GGS_lexicalRoutineFormalArgumentList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList GGS_lexicalRoutineFormalArgumentList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_lexicalRoutineFormalArgumentList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList GGS_lexicalRoutineFormalArgumentList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_lexicalRoutineFormalArgumentList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList::plusPlusAssignOperation (const GGS_lexicalRoutineFormalArgumentList_2E_element & inValue
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalRoutineFormalArgumentList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList GGS_lexicalRoutineFormalArgumentList::class_func_listWithValue (const GGS_lexicalArgumentModeAST & inOperand0,
                                                                                                     const GGS_lexicalTypeEnum & inOperand1,
                                                                                                     const GGS_string & inOperand2
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_lexicalRoutineFormalArgumentList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_lexicalRoutineFormalArgumentList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_lexicalRoutineFormalArgumentList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GGS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                                      const GGS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                                      const GGS_string & in_mArgumentNameForComment
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalRoutineFormalArgumentList * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalRoutineFormalArgumentList (in_mLexicalFormalArgumentMode,
                                                                      in_mLexicalFormalArgumentType,
                                                                      in_mArgumentNameForComment COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList::addAssignOperation (const GGS_lexicalArgumentModeAST & inOperand0,
                                                               const GGS_lexicalTypeEnum & inOperand1,
                                                               const GGS_string & inOperand2
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

void GGS_lexicalRoutineFormalArgumentList::setter_append (const GGS_lexicalArgumentModeAST inOperand0,
                                                          const GGS_lexicalTypeEnum inOperand1,
                                                          const GGS_string inOperand2,
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

void GGS_lexicalRoutineFormalArgumentList::setter_insertAtIndex (const GGS_lexicalArgumentModeAST inOperand0,
                                                                 const GGS_lexicalTypeEnum inOperand1,
                                                                 const GGS_string inOperand2,
                                                                 const GGS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalRoutineFormalArgumentList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList::setter_removeAtIndex (GGS_lexicalArgumentModeAST & outOperand0,
                                                                 GGS_lexicalTypeEnum & outOperand1,
                                                                 GGS_string & outOperand2,
                                                                 const GGS_uint inRemoveIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
      outOperand0 = p->mObject.mProperty_mLexicalFormalArgumentMode ;
      outOperand1 = p->mObject.mProperty_mLexicalFormalArgumentType ;
      outOperand2 = p->mObject.mProperty_mArgumentNameForComment ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList::setter_popFirst (GGS_lexicalArgumentModeAST & outOperand0,
                                                            GGS_lexicalTypeEnum & outOperand1,
                                                            GGS_string & outOperand2,
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

void GGS_lexicalRoutineFormalArgumentList::setter_popLast (GGS_lexicalArgumentModeAST & outOperand0,
                                                           GGS_lexicalTypeEnum & outOperand1,
                                                           GGS_string & outOperand2,
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

void GGS_lexicalRoutineFormalArgumentList::method_first (GGS_lexicalArgumentModeAST & outOperand0,
                                                         GGS_lexicalTypeEnum & outOperand1,
                                                         GGS_string & outOperand2,
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

void GGS_lexicalRoutineFormalArgumentList::method_last (GGS_lexicalArgumentModeAST & outOperand0,
                                                        GGS_lexicalTypeEnum & outOperand1,
                                                        GGS_string & outOperand2,
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

GGS_lexicalRoutineFormalArgumentList GGS_lexicalRoutineFormalArgumentList::add_operation (const GGS_lexicalRoutineFormalArgumentList & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalRoutineFormalArgumentList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList GGS_lexicalRoutineFormalArgumentList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lexicalRoutineFormalArgumentList result = GGS_lexicalRoutineFormalArgumentList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList GGS_lexicalRoutineFormalArgumentList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lexicalRoutineFormalArgumentList result = GGS_lexicalRoutineFormalArgumentList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList GGS_lexicalRoutineFormalArgumentList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lexicalRoutineFormalArgumentList result = GGS_lexicalRoutineFormalArgumentList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList::plusAssignOperation (const GGS_lexicalRoutineFormalArgumentList inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList::setter_setMLexicalFormalArgumentModeAtIndex (GGS_lexicalArgumentModeAST inOperand,
                                                                                        GGS_uint inIndex,
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

GGS_lexicalArgumentModeAST GGS_lexicalRoutineFormalArgumentList::getter_mLexicalFormalArgumentModeAtIndex (const GGS_uint & inIndex,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) attributes.ptr () ;
  GGS_lexicalArgumentModeAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    result = p->mObject.mProperty_mLexicalFormalArgumentMode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList::setter_setMLexicalFormalArgumentTypeAtIndex (GGS_lexicalTypeEnum inOperand,
                                                                                        GGS_uint inIndex,
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

GGS_lexicalTypeEnum GGS_lexicalRoutineFormalArgumentList::getter_mLexicalFormalArgumentTypeAtIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) attributes.ptr () ;
  GGS_lexicalTypeEnum result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    result = p->mObject.mProperty_mLexicalFormalArgumentType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList::setter_setMArgumentNameForCommentAtIndex (GGS_string inOperand,
                                                                                     GGS_uint inIndex,
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

GGS_string GGS_lexicalRoutineFormalArgumentList::getter_mArgumentNameForCommentAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    result = p->mObject.mProperty_mArgumentNameForComment ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @lexicalRoutineFormalArgumentList
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalRoutineFormalArgumentList::DownEnumerator_lexicalRoutineFormalArgumentList (const GGS_lexicalRoutineFormalArgumentList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList_2E_element DownEnumerator_lexicalRoutineFormalArgumentList::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineFormalArgumentList * p = (const cCollectionElement_lexicalRoutineFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalArgumentModeAST DownEnumerator_lexicalRoutineFormalArgumentList::current_mLexicalFormalArgumentMode (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineFormalArgumentList * p = (const cCollectionElement_lexicalRoutineFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
  return p->mObject.mProperty_mLexicalFormalArgumentMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum DownEnumerator_lexicalRoutineFormalArgumentList::current_mLexicalFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineFormalArgumentList * p = (const cCollectionElement_lexicalRoutineFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
  return p->mObject.mProperty_mLexicalFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_lexicalRoutineFormalArgumentList::current_mArgumentNameForComment (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineFormalArgumentList * p = (const cCollectionElement_lexicalRoutineFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
  return p->mObject.mProperty_mArgumentNameForComment ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @lexicalRoutineFormalArgumentList
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalRoutineFormalArgumentList::UpEnumerator_lexicalRoutineFormalArgumentList (const GGS_lexicalRoutineFormalArgumentList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList_2E_element UpEnumerator_lexicalRoutineFormalArgumentList::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineFormalArgumentList * p = (const cCollectionElement_lexicalRoutineFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalArgumentModeAST UpEnumerator_lexicalRoutineFormalArgumentList::current_mLexicalFormalArgumentMode (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineFormalArgumentList * p = (const cCollectionElement_lexicalRoutineFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
  return p->mObject.mProperty_mLexicalFormalArgumentMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum UpEnumerator_lexicalRoutineFormalArgumentList::current_mLexicalFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineFormalArgumentList * p = (const cCollectionElement_lexicalRoutineFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
  return p->mObject.mProperty_mLexicalFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_lexicalRoutineFormalArgumentList::current_mArgumentNameForComment (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineFormalArgumentList * p = (const cCollectionElement_lexicalRoutineFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
  return p->mObject.mProperty_mArgumentNameForComment ;
}




//--------------------------------------------------------------------------------------------------
//     @lexicalRoutineFormalArgumentList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList ("lexicalRoutineFormalArgumentList",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalRoutineFormalArgumentList::staticTypeDescriptor (void) const {
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
//  Map type @lexicalRoutineMap
//--------------------------------------------------------------------------------------------------

#include "GGS_GenericMapRoot.h"

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

GGS_lexicalRoutineMap GGS_lexicalRoutineMap::class_func_emptyMap (LOCATION_ARGS) {
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
  mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_lexicalRoutineMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <GGS_GenericMapRoot <GGS_lexicalRoutineMap_2E_element>>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineMap::performInsert (const GGS_lexicalRoutineMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalRoutineMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_lexicalRoutineMap_2E_element>
GGS_lexicalRoutineMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalRoutineMap_2E_element>> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_lexicalRoutineMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_lexicalRoutineMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalRoutineMap_2E_element>>
GGS_lexicalRoutineMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalRoutineMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_lexicalRoutineMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalRoutineMap_2E_element>>
GGS_lexicalRoutineMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalRoutineMap_2E_element>> () ;
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
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
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
    result.mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_lexicalRoutineMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
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
      TC_UniqueArray <String> nearestKeyArray ;
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
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalRoutineMap_2E_element>> node = nodeForKey (key) ;
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
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalRoutineMap_2E_element>> node = nodeForKey (key) ;
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
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalRoutineMap_2E_element>> node = nodeForKey (key) ;
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

static void GGS_lexicalRoutineMap_internalDescription (const TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalRoutineMap_2E_element>> & inArray,
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
    const TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalRoutineMap_2E_element>> array = sortedInfoArray () ;
    GGS_lexicalRoutineMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GGS_GenericMapRoot <GGS_lexicalRoutineMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineMap ("lexicalRoutineMap",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalRoutineMap::staticTypeDescriptor (void) const {
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

class cCollectionElement_lexicalFunctionFormalArgumentList : public cCollectionElement {
  public: GGS_lexicalFunctionFormalArgumentList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_lexicalFunctionFormalArgumentList (const GGS_lexicalTypeEnum & in_mLexicalType,
                                                                const GGS_string & in_mArgumentNameForComment
                                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalFunctionFormalArgumentList (const GGS_lexicalFunctionFormalArgumentList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalFunctionFormalArgumentList::cCollectionElement_lexicalFunctionFormalArgumentList (const GGS_lexicalTypeEnum & in_mLexicalType,
                                                                                                            const GGS_string & in_mArgumentNameForComment
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalType, in_mArgumentNameForComment) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalFunctionFormalArgumentList::cCollectionElement_lexicalFunctionFormalArgumentList (const GGS_lexicalFunctionFormalArgumentList_2E_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexicalType" ":") ;
  mObject.mProperty_mLexicalType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mArgumentNameForComment" ":") ;
  mObject.mProperty_mArgumentNameForComment.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList::GGS_lexicalFunctionFormalArgumentList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList::GGS_lexicalFunctionFormalArgumentList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList GGS_lexicalFunctionFormalArgumentList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_lexicalFunctionFormalArgumentList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList GGS_lexicalFunctionFormalArgumentList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_lexicalFunctionFormalArgumentList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::plusPlusAssignOperation (const GGS_lexicalFunctionFormalArgumentList_2E_element & inValue
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalFunctionFormalArgumentList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList GGS_lexicalFunctionFormalArgumentList::class_func_listWithValue (const GGS_lexicalTypeEnum & inOperand0,
                                                                                                       const GGS_string & inOperand1
                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_lexicalFunctionFormalArgumentList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_lexicalFunctionFormalArgumentList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_lexicalFunctionFormalArgumentList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                       const GGS_lexicalTypeEnum & in_mLexicalType,
                                                                       const GGS_string & in_mArgumentNameForComment
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalFunctionFormalArgumentList * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalFunctionFormalArgumentList (in_mLexicalType,
                                                                       in_mArgumentNameForComment COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::addAssignOperation (const GGS_lexicalTypeEnum & inOperand0,
                                                                const GGS_string & inOperand1
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

void GGS_lexicalFunctionFormalArgumentList::setter_append (const GGS_lexicalTypeEnum inOperand0,
                                                           const GGS_string inOperand1,
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

void GGS_lexicalFunctionFormalArgumentList::setter_insertAtIndex (const GGS_lexicalTypeEnum inOperand0,
                                                                  const GGS_string inOperand1,
                                                                  const GGS_uint inInsertionIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalFunctionFormalArgumentList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::setter_removeAtIndex (GGS_lexicalTypeEnum & outOperand0,
                                                                  GGS_string & outOperand1,
                                                                  const GGS_uint inRemoveIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
      outOperand0 = p->mObject.mProperty_mLexicalType ;
      outOperand1 = p->mObject.mProperty_mArgumentNameForComment ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::setter_popFirst (GGS_lexicalTypeEnum & outOperand0,
                                                             GGS_string & outOperand1,
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

void GGS_lexicalFunctionFormalArgumentList::setter_popLast (GGS_lexicalTypeEnum & outOperand0,
                                                            GGS_string & outOperand1,
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

void GGS_lexicalFunctionFormalArgumentList::method_first (GGS_lexicalTypeEnum & outOperand0,
                                                          GGS_string & outOperand1,
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

void GGS_lexicalFunctionFormalArgumentList::method_last (GGS_lexicalTypeEnum & outOperand0,
                                                         GGS_string & outOperand1,
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

GGS_lexicalFunctionFormalArgumentList GGS_lexicalFunctionFormalArgumentList::add_operation (const GGS_lexicalFunctionFormalArgumentList & inOperand,
                                                                                            Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalFunctionFormalArgumentList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList GGS_lexicalFunctionFormalArgumentList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lexicalFunctionFormalArgumentList result = GGS_lexicalFunctionFormalArgumentList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList GGS_lexicalFunctionFormalArgumentList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lexicalFunctionFormalArgumentList result = GGS_lexicalFunctionFormalArgumentList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList GGS_lexicalFunctionFormalArgumentList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lexicalFunctionFormalArgumentList result = GGS_lexicalFunctionFormalArgumentList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::plusAssignOperation (const GGS_lexicalFunctionFormalArgumentList inOperand,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::setter_setMLexicalTypeAtIndex (GGS_lexicalTypeEnum inOperand,
                                                                           GGS_uint inIndex,
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

GGS_lexicalTypeEnum GGS_lexicalFunctionFormalArgumentList::getter_mLexicalTypeAtIndex (const GGS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
  GGS_lexicalTypeEnum result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    result = p->mObject.mProperty_mLexicalType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList::setter_setMArgumentNameForCommentAtIndex (GGS_string inOperand,
                                                                                      GGS_uint inIndex,
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

GGS_string GGS_lexicalFunctionFormalArgumentList::getter_mArgumentNameForCommentAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    result = p->mObject.mProperty_mArgumentNameForComment ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @lexicalFunctionFormalArgumentList
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalFunctionFormalArgumentList::DownEnumerator_lexicalFunctionFormalArgumentList (const GGS_lexicalFunctionFormalArgumentList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList_2E_element DownEnumerator_lexicalFunctionFormalArgumentList::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionFormalArgumentList * p = (const cCollectionElement_lexicalFunctionFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum DownEnumerator_lexicalFunctionFormalArgumentList::current_mLexicalType (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionFormalArgumentList * p = (const cCollectionElement_lexicalFunctionFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
  return p->mObject.mProperty_mLexicalType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_lexicalFunctionFormalArgumentList::current_mArgumentNameForComment (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionFormalArgumentList * p = (const cCollectionElement_lexicalFunctionFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
  return p->mObject.mProperty_mArgumentNameForComment ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @lexicalFunctionFormalArgumentList
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalFunctionFormalArgumentList::UpEnumerator_lexicalFunctionFormalArgumentList (const GGS_lexicalFunctionFormalArgumentList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList_2E_element UpEnumerator_lexicalFunctionFormalArgumentList::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionFormalArgumentList * p = (const cCollectionElement_lexicalFunctionFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeEnum UpEnumerator_lexicalFunctionFormalArgumentList::current_mLexicalType (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionFormalArgumentList * p = (const cCollectionElement_lexicalFunctionFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
  return p->mObject.mProperty_mLexicalType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_lexicalFunctionFormalArgumentList::current_mArgumentNameForComment (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionFormalArgumentList * p = (const cCollectionElement_lexicalFunctionFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
  return p->mObject.mProperty_mArgumentNameForComment ;
}




//--------------------------------------------------------------------------------------------------
//     @lexicalFunctionFormalArgumentList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList ("lexicalFunctionFormalArgumentList",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalFunctionFormalArgumentList::staticTypeDescriptor (void) const {
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

#include "GGS_GenericMapRoot.h"

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

GGS_lexicalFunctionMap GGS_lexicalFunctionMap::class_func_emptyMap (LOCATION_ARGS) {
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
  mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_lexicalFunctionMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <GGS_GenericMapRoot <GGS_lexicalFunctionMap_2E_element>>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap::performInsert (const GGS_lexicalFunctionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalFunctionMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element>
GGS_lexicalFunctionMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalFunctionMap_2E_element>> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalFunctionMap_2E_element>>
GGS_lexicalFunctionMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalFunctionMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_lexicalFunctionMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element>>
GGS_lexicalFunctionMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element>> () ;
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
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
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
    result.mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_lexicalFunctionMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
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
      TC_UniqueArray <String> nearestKeyArray ;
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
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalFunctionMap_2E_element>> node = nodeForKey (key) ;
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
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalFunctionMap_2E_element>> node = nodeForKey (key) ;
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
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalFunctionMap_2E_element>> node = nodeForKey (key) ;
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
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalFunctionMap_2E_element>> node = nodeForKey (key) ;
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

static void GGS_lexicalFunctionMap_internalDescription (const TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element>> & inArray,
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
    const TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element>> array = sortedInfoArray () ;
    GGS_lexicalFunctionMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GGS_GenericMapRoot <GGS_lexicalFunctionMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionMap ("lexicalFunctionMap",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalFunctionMap::staticTypeDescriptor (void) const {
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

class cCollectionElement_templateDelimitorList : public cCollectionElement {
  public: GGS_templateDelimitorList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_templateDelimitorList (const GGS_lstring & in_mStartString,
                                                    const GGS_lstring & in_mEndString,
                                                    const GGS_bool & in_mPreservesStartDelimiter
                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_templateDelimitorList (const GGS_templateDelimitorList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_templateDelimitorList::cCollectionElement_templateDelimitorList (const GGS_lstring & in_mStartString,
                                                                                    const GGS_lstring & in_mEndString,
                                                                                    const GGS_bool & in_mPreservesStartDelimiter
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mStartString, in_mEndString, in_mPreservesStartDelimiter) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_templateDelimitorList::cCollectionElement_templateDelimitorList (const GGS_templateDelimitorList_2E_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mStartString" ":") ;
  mObject.mProperty_mStartString.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndString" ":") ;
  mObject.mProperty_mEndString.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPreservesStartDelimiter" ":") ;
  mObject.mProperty_mPreservesStartDelimiter.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList::GGS_templateDelimitorList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList::GGS_templateDelimitorList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList GGS_templateDelimitorList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_templateDelimitorList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList GGS_templateDelimitorList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_templateDelimitorList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::plusPlusAssignOperation (const GGS_templateDelimitorList_2E_element & inValue
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_templateDelimitorList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList GGS_templateDelimitorList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                               const GGS_lstring & inOperand1,
                                                                               const GGS_bool & inOperand2
                                                                               COMMA_LOCATION_ARGS) {
  GGS_templateDelimitorList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_templateDelimitorList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_templateDelimitorList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GGS_lstring & in_mStartString,
                                                           const GGS_lstring & in_mEndString,
                                                           const GGS_bool & in_mPreservesStartDelimiter
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_templateDelimitorList * p = nullptr ;
  macroMyNew (p, cCollectionElement_templateDelimitorList (in_mStartString,
                                                           in_mEndString,
                                                           in_mPreservesStartDelimiter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::addAssignOperation (const GGS_lstring & inOperand0,
                                                    const GGS_lstring & inOperand1,
                                                    const GGS_bool & inOperand2
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

void GGS_templateDelimitorList::setter_append (const GGS_lstring inOperand0,
                                               const GGS_lstring inOperand1,
                                               const GGS_bool inOperand2,
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

void GGS_templateDelimitorList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                      const GGS_lstring inOperand1,
                                                      const GGS_bool inOperand2,
                                                      const GGS_uint inInsertionIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_templateDelimitorList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                      GGS_lstring & outOperand1,
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
    cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
      outOperand0 = p->mObject.mProperty_mStartString ;
      outOperand1 = p->mObject.mProperty_mEndString ;
      outOperand2 = p->mObject.mProperty_mPreservesStartDelimiter ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::setter_popFirst (GGS_lstring & outOperand0,
                                                 GGS_lstring & outOperand1,
                                                 GGS_bool & outOperand2,
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

void GGS_templateDelimitorList::setter_popLast (GGS_lstring & outOperand0,
                                                GGS_lstring & outOperand1,
                                                GGS_bool & outOperand2,
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

void GGS_templateDelimitorList::method_first (GGS_lstring & outOperand0,
                                              GGS_lstring & outOperand1,
                                              GGS_bool & outOperand2,
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

void GGS_templateDelimitorList::method_last (GGS_lstring & outOperand0,
                                             GGS_lstring & outOperand1,
                                             GGS_bool & outOperand2,
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

GGS_templateDelimitorList GGS_templateDelimitorList::add_operation (const GGS_templateDelimitorList & inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_templateDelimitorList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList GGS_templateDelimitorList::getter_subListWithRange (const GGS_range & inRange,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_templateDelimitorList result = GGS_templateDelimitorList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList GGS_templateDelimitorList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_templateDelimitorList result = GGS_templateDelimitorList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList GGS_templateDelimitorList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_templateDelimitorList result = GGS_templateDelimitorList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::plusAssignOperation (const GGS_templateDelimitorList inOperand,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::setter_setMStartStringAtIndex (GGS_lstring inOperand,
                                                               GGS_uint inIndex,
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

GGS_lstring GGS_templateDelimitorList::getter_mStartStringAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    result = p->mObject.mProperty_mStartString ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::setter_setMEndStringAtIndex (GGS_lstring inOperand,
                                                             GGS_uint inIndex,
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

GGS_lstring GGS_templateDelimitorList::getter_mEndStringAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    result = p->mObject.mProperty_mEndString ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList::setter_setMPreservesStartDelimiterAtIndex (GGS_bool inOperand,
                                                                           GGS_uint inIndex,
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

GGS_bool GGS_templateDelimitorList::getter_mPreservesStartDelimiterAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    result = p->mObject.mProperty_mPreservesStartDelimiter ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @templateDelimitorList
//--------------------------------------------------------------------------------------------------

DownEnumerator_templateDelimitorList::DownEnumerator_templateDelimitorList (const GGS_templateDelimitorList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList_2E_element DownEnumerator_templateDelimitorList::current (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorList * p = (const cCollectionElement_templateDelimitorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_templateDelimitorList::current_mStartString (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorList * p = (const cCollectionElement_templateDelimitorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
  return p->mObject.mProperty_mStartString ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_templateDelimitorList::current_mEndString (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorList * p = (const cCollectionElement_templateDelimitorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
  return p->mObject.mProperty_mEndString ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_templateDelimitorList::current_mPreservesStartDelimiter (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorList * p = (const cCollectionElement_templateDelimitorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
  return p->mObject.mProperty_mPreservesStartDelimiter ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @templateDelimitorList
//--------------------------------------------------------------------------------------------------

UpEnumerator_templateDelimitorList::UpEnumerator_templateDelimitorList (const GGS_templateDelimitorList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList_2E_element UpEnumerator_templateDelimitorList::current (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorList * p = (const cCollectionElement_templateDelimitorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_templateDelimitorList::current_mStartString (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorList * p = (const cCollectionElement_templateDelimitorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
  return p->mObject.mProperty_mStartString ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_templateDelimitorList::current_mEndString (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorList * p = (const cCollectionElement_templateDelimitorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
  return p->mObject.mProperty_mEndString ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_templateDelimitorList::current_mPreservesStartDelimiter (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorList * p = (const cCollectionElement_templateDelimitorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
  return p->mObject.mProperty_mPreservesStartDelimiter ;
}




//--------------------------------------------------------------------------------------------------
//     @templateDelimitorList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateDelimitorList ("templateDelimitorList",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateDelimitorList::staticTypeDescriptor (void) const {
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

#include "GGS_GenericMapRoot.h"

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

GGS_styleMap GGS_styleMap::class_func_emptyMap (LOCATION_ARGS) {
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
  mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_styleMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_styleMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <GGS_GenericMapRoot <GGS_styleMap_2E_element>>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_styleMap::performInsert (const GGS_styleMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_styleMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element>
GGS_styleMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <GGS_GenericMapNode <GGS_styleMap_2E_element>> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <GGS_GenericMapNode <GGS_styleMap_2E_element>>
GGS_styleMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <GGS_GenericMapNode <GGS_styleMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_styleMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element>>
GGS_styleMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element>> () ;
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
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
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
    result.mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_styleMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
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
      TC_UniqueArray <String> nearestKeyArray ;
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
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_styleMap_2E_element>> node = nodeForKey (key) ;
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
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_styleMap_2E_element>> node = nodeForKey (key) ;
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

static void GGS_styleMap_internalDescription (const TC_Array <SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element>> & inArray,
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
    const TC_Array <SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element>> array = sortedInfoArray () ;
    GGS_styleMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GGS_GenericMapRoot <GGS_styleMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_styleMap ("styleMap",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_styleMap::staticTypeDescriptor (void) const {
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

#include "GGS_GenericMapRoot.h"

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

GGS_lexicalTagMap GGS_lexicalTagMap::class_func_emptyMap (LOCATION_ARGS) {
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
  mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_lexicalTagMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTagMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <GGS_GenericMapRoot <GGS_lexicalTagMap_2E_element>>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTagMap::performInsert (const GGS_lexicalTagMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalTagMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>
GGS_lexicalTagMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalTagMap_2E_element>> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalTagMap_2E_element>>
GGS_lexicalTagMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <GGS_GenericMapNode <GGS_lexicalTagMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_lexicalTagMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>>
GGS_lexicalTagMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>> () ;
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
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
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
    result.mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_lexicalTagMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
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
      TC_UniqueArray <String> nearestKeyArray ;
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

static void GGS_lexicalTagMap_internalDescription (const TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>> & inArray,
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

void GGS_lexicalTagMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>> array = sortedInfoArray () ;
    GGS_lexicalTagMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GGS_GenericMapRoot <GGS_lexicalTagMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTagMap ("lexicalTagMap",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalTagMap::staticTypeDescriptor (void) const {
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
//  Extension Getter '@lexicalTypeEnum lexicalTypeBaseName'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_lexicalTypeBaseName (const GGS_lexicalTypeEnum & inObject,
                                                Compiler *
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string ("string") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string ("char") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string ("uint") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string ("uint64") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string ("sint") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string ("sint64") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string ("double") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string ("bigint") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalExpressionAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                      const GGS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateConditionCode (in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalRoutineOrFunctionFormalInputArgumentAST generateRoutineOrFunctionArgument'
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
//Abstract extension getter '@lexicalSendDefaultActionAST generateDefaultSendCode'
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
//Abstract extension getter '@lexicalInstructionAST generateLexicalInstructionCode'
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
//Abstract extension getter '@lexicalInstructionAST lexicalInstructionUsesLoopLocalVariable'
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
//Abstract extension getter '@abstractLexicalRuleAST generateLexicalRuleCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateLexicalRuleCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                        const GGS_string in_inScannerClassName,
                                                        const GGS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateLexicalRuleCode (in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRuleAST lexicalRuleUsesLoopLocalVar'
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
//
//Abstract extension getter '@lexicalExpressionAST generateObjcCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateObjcCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                               const GGS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateObjcCocoaConditionCode (in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalExpressionAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateSwiftCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                const GGS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateSwiftCocoaConditionCode (in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalRoutineOrFunctionFormalInputArgumentAST generateObjcCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateObjcCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateObjcCocoaRoutineOrFunctionArgument (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalRoutineOrFunctionFormalInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateSwiftCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateSwiftCocoaRoutineOrFunctionArgument (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalSendDefaultActionAST generateObjcCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateObjcCocoaDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                 const GGS_string in_inScannerClassName,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateObjcCocoaDefaultSendCode (in_inScannerClassName, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalSendDefaultActionAST generateSwiftCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateSwiftCocoaDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                  const GGS_string in_inScannerClassName,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateSwiftCocoaDefaultSendCode (in_inScannerClassName, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateObjcCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                 const GGS_string in_inScannerClassName,
                                                                 const GGS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateObjcCocoaInstructionCode (in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateSwiftCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                  const GGS_string in_inScannerClassName,
                                                                  const GGS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateSwiftCocoaInstructionCode (in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRuleAST generateObjcCocoaCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateObjcCocoaCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                      const GGS_string in_inScannerClassName,
                                                      const GGS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateObjcCocoaCode (in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRuleAST generateSwiftCocoaCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateSwiftCocoaCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                       const GGS_string in_inScannerClassName,
                                                       const GGS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateSwiftCocoaCode (in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum cppTypeName'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_cppTypeName (const GGS_lexicalTypeEnum & inObject,
                                        Compiler *
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string ("String") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string ("utf32") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string ("uint32_t") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string ("uint64_t") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string ("int32_t") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string ("int64_t") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string ("double") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string ("BigSigned") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum appendMethodName'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_appendMethodName (const GGS_lexicalTypeEnum & inObject,
                                             Compiler *
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string ("appendStringAsCLiteralStringConstant") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string ("appendChar") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string ("appendUnsigned") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string ("appendUnsigned") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string ("appendSigned") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string ("appendSigned") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string ("appendDouble") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string ("appendStringAsCLiteralStringConstant") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum appendArgumentOfMethod'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_appendArgumentOfMethod (const GGS_lexicalTypeEnum & inObject,
                                                   Compiler *
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string (".decimalString ()") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum initialization'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_initialization (const GGS_lexicalTypeEnum & inObject,
                                           Compiler *
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string (".removeAllKeepingCapacity ()") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string (" = TO_UNICODE (0)") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string (" = 0.0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string (" = BigSigned ()") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum cocoaTypeName'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_cocoaTypeName (const GGS_lexicalTypeEnum & inObject,
                                          Compiler *
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string ("NSMutableString *") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string ("UInt32") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string ("UInt32") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string ("UInt64") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string ("SInt32") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string ("SInt64") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string ("double") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string ("NSMutableString *") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum swiftTypeName'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_swiftTypeName (const GGS_lexicalTypeEnum & inObject,
                                          Compiler *
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string ("String") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string ("UInt32") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string ("UInt32") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string ("UInt64") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string ("Int32") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string ("Int64") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string ("Double") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string ("String") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum needsReferenceInInputOutputInCocoa'
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_needsReferenceInInputOutputInCocoa (const GGS_lexicalTypeEnum & inObject,
                                                             Compiler *
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_bool (false) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum cocoaInitializationCode'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_cocoaInitializationCode (const GGS_lexicalTypeEnum & inObject,
                                                    Compiler *
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string ("[[NSMutableString alloc] init]") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string ("0.0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string ("[[NSMutableString alloc] init]") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum swiftInitializationCode'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_swiftInitializationCode (const GGS_lexicalTypeEnum & inObject,
                                                    Compiler *
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string ("\"\"") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string ("0.0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string ("\"\"") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum cocoaResetPrefix'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_cocoaResetPrefix (const GGS_lexicalTypeEnum & inObject,
                                             Compiler *
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string ("[") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string ("[") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum cocoaReset'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_cocoaReset (const GGS_lexicalTypeEnum & inObject,
                                       Compiler *
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string (" setString:@\"\"]") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string (" = 0.0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string (" setString:@\"\"]") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalSendDefaultActionAST checkLexicalDefaultAction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalDefaultAction (cPtr_lexicalSendDefaultActionAST * inObject,
                                                    GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalSendDefaultActionAST) ;
    inObject->method_checkLexicalDefaultAction (io_ioLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalExpressionAST checkLexicalExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalExpression (cPtr_lexicalExpressionAST * inObject,
                                                 GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalExpressionAST) ;
    inObject->method_checkLexicalExpression (io_ioLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalRoutineOrFunctionFormalInputArgumentAST checkLexicalFunctionCallArgument'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalFunctionCallArgument (cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                           GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                           const GGS_lexicalTypeEnum constin_inLexicalRoutineFormalArgumentType,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST) ;
    inObject->method_checkLexicalFunctionCallArgument (io_ioLexiqueAnalysisContext, constin_inLexicalRoutineFormalArgumentType, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalRoutineOrFunctionFormalInputArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalRoutineCallArgument (cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                          GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                          const GGS_lexicalTypeEnum constin_inLexicalRoutineFormalArgumentType,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST) ;
    inObject->method_checkLexicalRoutineCallArgument (io_ioLexiqueAnalysisContext, constin_inLexicalRoutineFormalArgumentType, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalInstruction (cPtr_lexicalInstructionAST * inObject,
                                                  GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                  GGS_lexicalTagMap & io_ioTagMap,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalInstructionAST) ;
    inObject->method_checkLexicalInstruction (io_ioLexiqueAnalysisContext, io_ioTagMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractLexicalRuleAST checkLexicalRule'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalRule (cPtr_abstractLexicalRuleAST * inObject,
                                           GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLexicalRuleAST) ;
    inObject->method_checkLexicalRule (io_ioLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @lexicalStructuredSendInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalStructuredSendInstructionAST::objectCompare (const GGS_lexicalStructuredSendInstructionAST & inOperand) const {
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

GGS_lexicalStructuredSendInstructionAST::GGS_lexicalStructuredSendInstructionAST (void) :
GGS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST GGS_lexicalStructuredSendInstructionAST::
init_21__21_ (const GGS_lexicalSendSearchListAST & in_mLexicalSendSearchList,
              const GGS_lexicalSendDefaultActionAST & in_mLexicalSendDefaultAction,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalStructuredSendInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalStructuredSendInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalStructuredSendInstructionAST_init_21__21_ (in_mLexicalSendSearchList, in_mLexicalSendDefaultAction, inCompiler) ;
  const GGS_lexicalStructuredSendInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStructuredSendInstructionAST::
lexicalStructuredSendInstructionAST_init_21__21_ (const GGS_lexicalSendSearchListAST & in_mLexicalSendSearchList,
                                                  const GGS_lexicalSendDefaultActionAST & in_mLexicalSendDefaultAction,
                                                  Compiler * /* inCompiler */) {
  mProperty_mLexicalSendSearchList = in_mLexicalSendSearchList ;
  mProperty_mLexicalSendDefaultAction = in_mLexicalSendDefaultAction ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST::GGS_lexicalStructuredSendInstructionAST (const cPtr_lexicalStructuredSendInstructionAST * inSourcePtr) :
GGS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalStructuredSendInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST GGS_lexicalStructuredSendInstructionAST::class_func_new (const GGS_lexicalSendSearchListAST & in_mLexicalSendSearchList,
                                                                                                 const GGS_lexicalSendDefaultActionAST & in_mLexicalSendDefaultAction,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_lexicalStructuredSendInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalStructuredSendInstructionAST (in_mLexicalSendSearchList, in_mLexicalSendDefaultAction,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendSearchListAST GGS_lexicalStructuredSendInstructionAST::readProperty_mLexicalSendSearchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalSendSearchListAST () ;
  }else{
    cPtr_lexicalStructuredSendInstructionAST * p = (cPtr_lexicalStructuredSendInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStructuredSendInstructionAST) ;
    return p->mProperty_mLexicalSendSearchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendDefaultActionAST GGS_lexicalStructuredSendInstructionAST::readProperty_mLexicalSendDefaultAction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalSendDefaultActionAST () ;
  }else{
    cPtr_lexicalStructuredSendInstructionAST * p = (cPtr_lexicalStructuredSendInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStructuredSendInstructionAST) ;
    return p->mProperty_mLexicalSendDefaultAction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalStructuredSendInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalStructuredSendInstructionAST::cPtr_lexicalStructuredSendInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mLexicalSendSearchList (),
mProperty_mLexicalSendDefaultAction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalStructuredSendInstructionAST::cPtr_lexicalStructuredSendInstructionAST (const GGS_lexicalSendSearchListAST & in_mLexicalSendSearchList,
                                                                                    const GGS_lexicalSendDefaultActionAST & in_mLexicalSendDefaultAction,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mLexicalSendSearchList (),
mProperty_mLexicalSendDefaultAction () {
  mProperty_mLexicalSendSearchList = in_mLexicalSendSearchList ;
  mProperty_mLexicalSendDefaultAction = in_mLexicalSendDefaultAction ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalStructuredSendInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST ;
}

void cPtr_lexicalStructuredSendInstructionAST::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalStructuredSendInstructionAST:") ;
  mProperty_mLexicalSendSearchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexicalSendDefaultAction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalStructuredSendInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalStructuredSendInstructionAST (mProperty_mLexicalSendSearchList, mProperty_mLexicalSendDefaultAction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalStructuredSendInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLexicalSendSearchList.printNonNullClassInstanceProperties ("mLexicalSendSearchList") ;
    mProperty_mLexicalSendDefaultAction.printNonNullClassInstanceProperties ("mLexicalSendDefaultAction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalStructuredSendInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST ("lexicalStructuredSendInstructionAST",
                                                                                           & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalStructuredSendInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalStructuredSendInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalStructuredSendInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST GGS_lexicalStructuredSendInstructionAST::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalStructuredSendInstructionAST result ;
  const GGS_lexicalStructuredSendInstructionAST * p = (const GGS_lexicalStructuredSendInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalStructuredSendInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStructuredSendInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalStructuredSendInstructionAST_2E_weak::objectCompare (const GGS_lexicalStructuredSendInstructionAST_2E_weak & inOperand) const {
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

GGS_lexicalStructuredSendInstructionAST_2E_weak::GGS_lexicalStructuredSendInstructionAST_2E_weak (void) :
GGS_lexicalInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST_2E_weak & GGS_lexicalStructuredSendInstructionAST_2E_weak::operator = (const GGS_lexicalStructuredSendInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST_2E_weak::GGS_lexicalStructuredSendInstructionAST_2E_weak (const GGS_lexicalStructuredSendInstructionAST & inSource) :
GGS_lexicalInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST_2E_weak GGS_lexicalStructuredSendInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalStructuredSendInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST GGS_lexicalStructuredSendInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalStructuredSendInstructionAST result ;
  if (isValid ()) {
    const cPtr_lexicalStructuredSendInstructionAST * p = (cPtr_lexicalStructuredSendInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalStructuredSendInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST GGS_lexicalStructuredSendInstructionAST_2E_weak::bang_lexicalStructuredSendInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalStructuredSendInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalStructuredSendInstructionAST) ;
      result = GGS_lexicalStructuredSendInstructionAST ((cPtr_lexicalStructuredSendInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalStructuredSendInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST_2E_weak ("lexicalStructuredSendInstructionAST.weak",
                                                                                                   & kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalStructuredSendInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalStructuredSendInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalStructuredSendInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST_2E_weak GGS_lexicalStructuredSendInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalStructuredSendInstructionAST_2E_weak result ;
  const GGS_lexicalStructuredSendInstructionAST_2E_weak * p = (const GGS_lexicalStructuredSendInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalStructuredSendInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStructuredSendInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalDropInstructionAST_2E_weak::objectCompare (const GGS_lexicalDropInstructionAST_2E_weak & inOperand) const {
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

GGS_lexicalDropInstructionAST_2E_weak::GGS_lexicalDropInstructionAST_2E_weak (void) :
GGS_lexicalInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalDropInstructionAST_2E_weak & GGS_lexicalDropInstructionAST_2E_weak::operator = (const GGS_lexicalDropInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalDropInstructionAST_2E_weak ("lexicalDropInstructionAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalDropInstructionAST_2E_weak::staticTypeDescriptor (void) const {
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

ComparisonResult GGS_lexicalErrorInstructionAST_2E_weak::objectCompare (const GGS_lexicalErrorInstructionAST_2E_weak & inOperand) const {
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

GGS_lexicalErrorInstructionAST_2E_weak::GGS_lexicalErrorInstructionAST_2E_weak (void) :
GGS_lexicalInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorInstructionAST_2E_weak & GGS_lexicalErrorInstructionAST_2E_weak::operator = (const GGS_lexicalErrorInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalErrorInstructionAST_2E_weak ("lexicalErrorInstructionAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalErrorInstructionAST_2E_weak::staticTypeDescriptor (void) const {
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

GGS_lexicalLogInstructionAST GGS_lexicalLogInstructionAST::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_lexicalLogInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalLogInstructionAST (inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_lexicalLogInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalLogInstructionAST ;
}

void cPtr_lexicalLogInstructionAST::description (String & ioString,
                                                 const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@lexicalLogInstructionAST]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalLogInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalLogInstructionAST ("lexicalLogInstructionAST",
                                                                                & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalLogInstructionAST::staticTypeDescriptor (void) const {
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

GGS_lexicalLogInstructionAST_2E_weak::GGS_lexicalLogInstructionAST_2E_weak (void) :
GGS_lexicalInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalLogInstructionAST_2E_weak & GGS_lexicalLogInstructionAST_2E_weak::operator = (const GGS_lexicalLogInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalLogInstructionAST_2E_weak ("lexicalLogInstructionAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalLogInstructionAST_2E_weak::staticTypeDescriptor (void) const {
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
// @lexicalRepeatInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalRepeatInstructionAST::objectCompare (const GGS_lexicalRepeatInstructionAST & inOperand) const {
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

GGS_lexicalRepeatInstructionAST::GGS_lexicalRepeatInstructionAST (void) :
GGS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalRepeatInstructionAST GGS_lexicalRepeatInstructionAST::
init_21__21__21_ (const GGS_lexicalInstructionListAST & in_mRepeatedInstructionList,
                  const GGS_lexicalWhileBranchListAST & in_mLexicalWhileBranchList,
                  const GGS_location & in_mLocation,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_lexicalRepeatInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalRepeatInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalRepeatInstructionAST_init_21__21__21_ (in_mRepeatedInstructionList, in_mLexicalWhileBranchList, in_mLocation, inCompiler) ;
  const GGS_lexicalRepeatInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRepeatInstructionAST::
lexicalRepeatInstructionAST_init_21__21__21_ (const GGS_lexicalInstructionListAST & in_mRepeatedInstructionList,
                                              const GGS_lexicalWhileBranchListAST & in_mLexicalWhileBranchList,
                                              const GGS_location & in_mLocation,
                                              Compiler * /* inCompiler */) {
  mProperty_mRepeatedInstructionList = in_mRepeatedInstructionList ;
  mProperty_mLexicalWhileBranchList = in_mLexicalWhileBranchList ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRepeatInstructionAST::GGS_lexicalRepeatInstructionAST (const cPtr_lexicalRepeatInstructionAST * inSourcePtr) :
GGS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalRepeatInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalRepeatInstructionAST GGS_lexicalRepeatInstructionAST::class_func_new (const GGS_lexicalInstructionListAST & in_mRepeatedInstructionList,
                                                                                 const GGS_lexicalWhileBranchListAST & in_mLexicalWhileBranchList,
                                                                                 const GGS_location & in_mLocation,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_lexicalRepeatInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalRepeatInstructionAST (in_mRepeatedInstructionList, in_mLexicalWhileBranchList, in_mLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST GGS_lexicalRepeatInstructionAST::readProperty_mRepeatedInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalInstructionListAST () ;
  }else{
    cPtr_lexicalRepeatInstructionAST * p = (cPtr_lexicalRepeatInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRepeatInstructionAST) ;
    return p->mProperty_mRepeatedInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST GGS_lexicalRepeatInstructionAST::readProperty_mLexicalWhileBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalWhileBranchListAST () ;
  }else{
    cPtr_lexicalRepeatInstructionAST * p = (cPtr_lexicalRepeatInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRepeatInstructionAST) ;
    return p->mProperty_mLexicalWhileBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_lexicalRepeatInstructionAST::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_lexicalRepeatInstructionAST * p = (cPtr_lexicalRepeatInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRepeatInstructionAST) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalRepeatInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalRepeatInstructionAST::cPtr_lexicalRepeatInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mRepeatedInstructionList (),
mProperty_mLexicalWhileBranchList (),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalRepeatInstructionAST::cPtr_lexicalRepeatInstructionAST (const GGS_lexicalInstructionListAST & in_mRepeatedInstructionList,
                                                                    const GGS_lexicalWhileBranchListAST & in_mLexicalWhileBranchList,
                                                                    const GGS_location & in_mLocation,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mRepeatedInstructionList (),
mProperty_mLexicalWhileBranchList (),
mProperty_mLocation () {
  mProperty_mRepeatedInstructionList = in_mRepeatedInstructionList ;
  mProperty_mLexicalWhileBranchList = in_mLexicalWhileBranchList ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalRepeatInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST ;
}

void cPtr_lexicalRepeatInstructionAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalRepeatInstructionAST:") ;
  mProperty_mRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexicalWhileBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalRepeatInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalRepeatInstructionAST (mProperty_mRepeatedInstructionList, mProperty_mLexicalWhileBranchList, mProperty_mLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalRepeatInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mRepeatedInstructionList.printNonNullClassInstanceProperties ("mRepeatedInstructionList") ;
    mProperty_mLexicalWhileBranchList.printNonNullClassInstanceProperties ("mLexicalWhileBranchList") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalRepeatInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST ("lexicalRepeatInstructionAST",
                                                                                   & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalRepeatInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRepeatInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRepeatInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRepeatInstructionAST GGS_lexicalRepeatInstructionAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalRepeatInstructionAST result ;
  const GGS_lexicalRepeatInstructionAST * p = (const GGS_lexicalRepeatInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRepeatInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRepeatInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

