#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-5.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Class for element of '@semanticDeclarationSortedListForGeneration' sorted list                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cSortedListElement_semanticDeclarationSortedListForGeneration : public cSortedListElement {
  public : GALGAS_semanticDeclarationSortedListForGeneration_2D_element mObject ;

//--- Constructor
  public : cSortedListElement_semanticDeclarationSortedListForGeneration (const GALGAS_string & in_mMessage,
                                                                          const GALGAS_semanticDeclarationForGeneration & in_mDeclaration,
                                                                          const GALGAS_string & in_mSortKey
                                                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public : virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cSortedListElement_semanticDeclarationSortedListForGeneration::cSortedListElement_semanticDeclarationSortedListForGeneration (const GALGAS_string & in_mMessage,
                                                                                                                              const GALGAS_semanticDeclarationForGeneration & in_mDeclaration,
                                                                                                                              const GALGAS_string & in_mSortKey
                                                                                                                              COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mMessage, in_mDeclaration, in_mSortKey) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cSortedListElement_semanticDeclarationSortedListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cSortedListElement * cSortedListElement_semanticDeclarationSortedListForGeneration::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_semanticDeclarationSortedListForGeneration (mObject.mAttribute_mMessage, mObject.mAttribute_mDeclaration, mObject.mAttribute_mSortKey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cSortedListElement_semanticDeclarationSortedListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMessage" ":" ;
  mObject.mAttribute_mMessage.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDeclaration" ":" ;
  mObject.mAttribute_mDeclaration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSortKey" ":" ;
  mObject.mAttribute_mSortKey.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_semanticDeclarationSortedListForGeneration::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_semanticDeclarationSortedListForGeneration * operand = (cSortedListElement_semanticDeclarationSortedListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_semanticDeclarationSortedListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationSortedListForGeneration::GALGAS_semanticDeclarationSortedListForGeneration (void) :
AC_GALGAS_sortedlist () {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_semanticDeclarationSortedListForGeneration::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_semanticDeclarationSortedListForGeneration * operand = (const cSortedListElement_semanticDeclarationSortedListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_semanticDeclarationSortedListForGeneration) ;
  if (result == kOperandEqual) {
    result = mObject.mAttribute_mSortKey.objectCompare (operand->mObject.mAttribute_mSortKey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationSortedListForGeneration GALGAS_semanticDeclarationSortedListForGeneration::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_semanticDeclarationSortedListForGeneration result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationSortedListForGeneration GALGAS_semanticDeclarationSortedListForGeneration::constructor_sortedListWithValue (const GALGAS_string & inOperand0,
                                                                                                                                      const GALGAS_semanticDeclarationForGeneration & inOperand1,
                                                                                                                                      const GALGAS_string & inOperand2
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationSortedListForGeneration result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_semanticDeclarationSortedListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.addObject (attributes) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticDeclarationSortedListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                             const GALGAS_semanticDeclarationForGeneration & inOperand1,
                                                                             const GALGAS_string & inOperand2
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_semanticDeclarationSortedListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticDeclarationSortedListForGeneration::dotAssign_operation (const GALGAS_semanticDeclarationSortedListForGeneration inOperand
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationSortedListForGeneration GALGAS_semanticDeclarationSortedListForGeneration::operator_concat (const GALGAS_semanticDeclarationSortedListForGeneration & inOperand
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_semanticDeclarationSortedListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = constructor_emptySortedList (THERE) ;
    result = *this ;
    result.appendSortedList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticDeclarationSortedListForGeneration::modifier_popSmallest (GALGAS_string & outOperand0,
                                                                              GALGAS_semanticDeclarationForGeneration & outOperand1,
                                                                              GALGAS_string & outOperand2,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_semanticDeclarationSortedListForGeneration * p = (cSortedListElement_semanticDeclarationSortedListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_semanticDeclarationSortedListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mMessage ;
    outOperand1 = p->mObject.mAttribute_mDeclaration ;
    outOperand2 = p->mObject.mAttribute_mSortKey ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticDeclarationSortedListForGeneration::modifier_popGreatest (GALGAS_string & outOperand0,
                                                                              GALGAS_semanticDeclarationForGeneration & outOperand1,
                                                                              GALGAS_string & outOperand2,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_semanticDeclarationSortedListForGeneration * p = (cSortedListElement_semanticDeclarationSortedListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_semanticDeclarationSortedListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mMessage ;
    outOperand1 = p->mObject.mAttribute_mDeclaration ;
    outOperand2 = p->mObject.mAttribute_mSortKey ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticDeclarationSortedListForGeneration::method_smallest (GALGAS_string & outOperand0,
                                                                         GALGAS_semanticDeclarationForGeneration & outOperand1,
                                                                         GALGAS_string & outOperand2,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_semanticDeclarationSortedListForGeneration * p = (cSortedListElement_semanticDeclarationSortedListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_semanticDeclarationSortedListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mMessage ;
    outOperand1 = p->mObject.mAttribute_mDeclaration ;
    outOperand2 = p->mObject.mAttribute_mSortKey ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticDeclarationSortedListForGeneration::method_greatest (GALGAS_string & outOperand0,
                                                                         GALGAS_semanticDeclarationForGeneration & outOperand1,
                                                                         GALGAS_string & outOperand2,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_semanticDeclarationSortedListForGeneration * p = (cSortedListElement_semanticDeclarationSortedListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_semanticDeclarationSortedListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mMessage ;
    outOperand1 = p->mObject.mAttribute_mDeclaration ;
    outOperand2 = p->mObject.mAttribute_mSortKey ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_semanticDeclarationSortedListForGeneration::cEnumerator_semanticDeclarationSortedListForGeneration (const GALGAS_semanticDeclarationSortedListForGeneration & inEnumeratedObject,
                                                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationSortedListForGeneration_2D_element cEnumerator_semanticDeclarationSortedListForGeneration::current (LOCATION_ARGS) const {
  const cSortedListElement_semanticDeclarationSortedListForGeneration * p = (const cSortedListElement_semanticDeclarationSortedListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_semanticDeclarationSortedListForGeneration) ;
  return p->mObject ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_semanticDeclarationSortedListForGeneration::current_mMessage (LOCATION_ARGS) const {
  const cSortedListElement_semanticDeclarationSortedListForGeneration * p = (const cSortedListElement_semanticDeclarationSortedListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_semanticDeclarationSortedListForGeneration) ;
  return p->mObject.mAttribute_mMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationForGeneration cEnumerator_semanticDeclarationSortedListForGeneration::current_mDeclaration (LOCATION_ARGS) const {
  const cSortedListElement_semanticDeclarationSortedListForGeneration * p = (const cSortedListElement_semanticDeclarationSortedListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_semanticDeclarationSortedListForGeneration) ;
  return p->mObject.mAttribute_mDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_semanticDeclarationSortedListForGeneration::current_mSortKey (LOCATION_ARGS) const {
  const cSortedListElement_semanticDeclarationSortedListForGeneration * p = (const cSortedListElement_semanticDeclarationSortedListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_semanticDeclarationSortedListForGeneration) ;
  return p->mObject.mAttribute_mSortKey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @semanticDeclarationSortedListForGeneration type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticDeclarationSortedListForGeneration ("semanticDeclarationSortedListForGeneration",
                                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticDeclarationSortedListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationSortedListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticDeclarationSortedListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticDeclarationSortedListForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationSortedListForGeneration GALGAS_semanticDeclarationSortedListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationSortedListForGeneration result ;
  const GALGAS_semanticDeclarationSortedListForGeneration * p = (const GALGAS_semanticDeclarationSortedListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticDeclarationSortedListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationSortedListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@signatureForGrammarAnalysis' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_signatureForGrammarAnalysis : public cCollectionElement {
  public : GALGAS_signatureForGrammarAnalysis_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_signatureForGrammarAnalysis (const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingModeForGrammarAnalysis,
                                                           const GALGAS_lstring & in_mGalgasTypeNameForGrammarAnalysis
                                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_signatureForGrammarAnalysis::cCollectionElement_signatureForGrammarAnalysis (const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingModeForGrammarAnalysis,
                                                                                                const GALGAS_lstring & in_mGalgasTypeNameForGrammarAnalysis
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalArgumentPassingModeForGrammarAnalysis, in_mGalgasTypeNameForGrammarAnalysis) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_signatureForGrammarAnalysis::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_signatureForGrammarAnalysis::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_signatureForGrammarAnalysis (mObject.mAttribute_mFormalArgumentPassingModeForGrammarAnalysis, mObject.mAttribute_mGalgasTypeNameForGrammarAnalysis COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_signatureForGrammarAnalysis::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentPassingModeForGrammarAnalysis" ":" ;
  mObject.mAttribute_mFormalArgumentPassingModeForGrammarAnalysis.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGalgasTypeNameForGrammarAnalysis" ":" ;
  mObject.mAttribute_mGalgasTypeNameForGrammarAnalysis.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_signatureForGrammarAnalysis::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_signatureForGrammarAnalysis * operand = (cCollectionElement_signatureForGrammarAnalysis *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_signatureForGrammarAnalysis) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_signatureForGrammarAnalysis::GALGAS_signatureForGrammarAnalysis (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_signatureForGrammarAnalysis::GALGAS_signatureForGrammarAnalysis (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_signatureForGrammarAnalysis GALGAS_signatureForGrammarAnalysis::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_signatureForGrammarAnalysis result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_signatureForGrammarAnalysis GALGAS_signatureForGrammarAnalysis::constructor_listWithValue (const GALGAS_formalArgumentPassingModeAST & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_signatureForGrammarAnalysis result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_signatureForGrammarAnalysis::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_signatureForGrammarAnalysis::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingModeForGrammarAnalysis,
                                                                    const GALGAS_lstring & in_mGalgasTypeNameForGrammarAnalysis
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_signatureForGrammarAnalysis * p = NULL ;
  macroMyNew (p, cCollectionElement_signatureForGrammarAnalysis (in_mFormalArgumentPassingModeForGrammarAnalysis,
                                                                 in_mGalgasTypeNameForGrammarAnalysis COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_signatureForGrammarAnalysis::addAssign_operation (const GALGAS_formalArgumentPassingModeAST & inOperand0,
                                                              const GALGAS_lstring & inOperand1
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_signatureForGrammarAnalysis (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_signatureForGrammarAnalysis::modifier_insertAtIndex (const GALGAS_formalArgumentPassingModeAST inOperand0,
                                                                 const GALGAS_lstring inOperand1,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_signatureForGrammarAnalysis (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_signatureForGrammarAnalysis::modifier_removeAtIndex (GALGAS_formalArgumentPassingModeAST & outOperand0,
                                                                 GALGAS_lstring & outOperand1,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
      outOperand0 = p->mObject.mAttribute_mFormalArgumentPassingModeForGrammarAnalysis ;
      outOperand1 = p->mObject.mAttribute_mGalgasTypeNameForGrammarAnalysis ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_signatureForGrammarAnalysis::modifier_popFirst (GALGAS_formalArgumentPassingModeAST & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    outOperand0 = p->mObject.mAttribute_mFormalArgumentPassingModeForGrammarAnalysis ;
    outOperand1 = p->mObject.mAttribute_mGalgasTypeNameForGrammarAnalysis ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_signatureForGrammarAnalysis::modifier_popLast (GALGAS_formalArgumentPassingModeAST & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    outOperand0 = p->mObject.mAttribute_mFormalArgumentPassingModeForGrammarAnalysis ;
    outOperand1 = p->mObject.mAttribute_mGalgasTypeNameForGrammarAnalysis ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_signatureForGrammarAnalysis::method_first (GALGAS_formalArgumentPassingModeAST & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    outOperand0 = p->mObject.mAttribute_mFormalArgumentPassingModeForGrammarAnalysis ;
    outOperand1 = p->mObject.mAttribute_mGalgasTypeNameForGrammarAnalysis ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_signatureForGrammarAnalysis::method_last (GALGAS_formalArgumentPassingModeAST & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    outOperand0 = p->mObject.mAttribute_mFormalArgumentPassingModeForGrammarAnalysis ;
    outOperand1 = p->mObject.mAttribute_mGalgasTypeNameForGrammarAnalysis ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_signatureForGrammarAnalysis GALGAS_signatureForGrammarAnalysis::operator_concat (const GALGAS_signatureForGrammarAnalysis & inOperand
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_signatureForGrammarAnalysis result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_signatureForGrammarAnalysis GALGAS_signatureForGrammarAnalysis::add_operation (const GALGAS_signatureForGrammarAnalysis & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_signatureForGrammarAnalysis result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_signatureForGrammarAnalysis GALGAS_signatureForGrammarAnalysis::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_signatureForGrammarAnalysis result = GALGAS_signatureForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_signatureForGrammarAnalysis GALGAS_signatureForGrammarAnalysis::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_signatureForGrammarAnalysis result = GALGAS_signatureForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_signatureForGrammarAnalysis::dotAssign_operation (const GALGAS_signatureForGrammarAnalysis inOperand
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalArgumentPassingModeAST GALGAS_signatureForGrammarAnalysis::reader_mFormalArgumentPassingModeForGrammarAnalysisAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
  GALGAS_formalArgumentPassingModeAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    result = p->mObject.mAttribute_mFormalArgumentPassingModeForGrammarAnalysis ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_signatureForGrammarAnalysis::reader_mGalgasTypeNameForGrammarAnalysisAtIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    result = p->mObject.mAttribute_mGalgasTypeNameForGrammarAnalysis ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_signatureForGrammarAnalysis::cEnumerator_signatureForGrammarAnalysis (const GALGAS_signatureForGrammarAnalysis & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_signatureForGrammarAnalysis_2D_element cEnumerator_signatureForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cCollectionElement_signatureForGrammarAnalysis * p = (const cCollectionElement_signatureForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalArgumentPassingModeAST cEnumerator_signatureForGrammarAnalysis::current_mFormalArgumentPassingModeForGrammarAnalysis (LOCATION_ARGS) const {
  const cCollectionElement_signatureForGrammarAnalysis * p = (const cCollectionElement_signatureForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
  return p->mObject.mAttribute_mFormalArgumentPassingModeForGrammarAnalysis ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_signatureForGrammarAnalysis::current_mGalgasTypeNameForGrammarAnalysis (LOCATION_ARGS) const {
  const cCollectionElement_signatureForGrammarAnalysis * p = (const cCollectionElement_signatureForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
  return p->mObject.mAttribute_mGalgasTypeNameForGrammarAnalysis ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @signatureForGrammarAnalysis type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_signatureForGrammarAnalysis ("signatureForGrammarAnalysis",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_signatureForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_signatureForGrammarAnalysis ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_signatureForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_signatureForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_signatureForGrammarAnalysis GALGAS_signatureForGrammarAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_signatureForGrammarAnalysis result ;
  const GALGAS_signatureForGrammarAnalysis * p = (const GALGAS_signatureForGrammarAnalysis *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_signatureForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("signatureForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis::cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis (const GALGAS_lstring & inKey,
                                                                                                                  const GALGAS_signatureForGrammarAnalysis & in_mFormalParametersList
                                                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mFormalParametersList (in_mFormalParametersList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFormalParametersList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis (mAttribute_lkey, mAttribute_mFormalParametersList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalParametersList" ":" ;
  mAttribute_mFormalParametersList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis::compare (const cCollectionElement * inOperand) const {
  cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * operand = (cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFormalParametersList.objectCompare (operand->mAttribute_mFormalParametersList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::operator = (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::constructor_mapWithMapToOverride (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inMapToOverride
                                                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::reader_overriddenMap (C_Compiler * inCompiler
                                                                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::addAssign_operation (const GALGAS_lstring & inKey,
                                                                              const GALGAS_signatureForGrammarAnalysis & inArgument0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = NULL ;
  macroMyNew (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@nonterminalSymbolLabelMapForGrammarAnalysis insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::modifier_insertKey (GALGAS_lstring inKey,
                                                                             GALGAS_signatureForGrammarAnalysis inArgument0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = NULL ;
  macroMyNew (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the rule label '%K' has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_nonterminalSymbolLabelMapForGrammarAnalysis_searchKey = "the rule label '%K' is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::method_searchKey (GALGAS_lstring inKey,
                                                                           GALGAS_signatureForGrammarAnalysis & outArgument0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = (const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis *) performSearch (inKey,
                                                                                                                                                         inCompiler,
                                                                                                                                                         kSearchErrorMessage_nonterminalSymbolLabelMapForGrammarAnalysis_searchKey
                                                                                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis) ;
    outArgument0 = p->mAttribute_mFormalParametersList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_signatureForGrammarAnalysis GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::reader_mFormalParametersListForKey (const GALGAS_string & inKey,
                                                                                                                           C_Compiler * inCompiler
                                                                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = (const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis *) attributes ;
  GALGAS_signatureForGrammarAnalysis result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis) ;
    result = p->mAttribute_mFormalParametersList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::modifier_setMFormalParametersListForKey (GALGAS_signatureForGrammarAnalysis inAttributeValue,
                                                                                                  GALGAS_string inKey,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = (cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis) ;
    p->mAttribute_mFormalParametersList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                                 const GALGAS_string & inKey
                                                                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * result = (cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inEnumeratedObject,
                                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = (const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis) ;
  return GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (p->mAttribute_lkey, p->mAttribute_mFormalParametersList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_signatureForGrammarAnalysis cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::current_mFormalParametersList (LOCATION_ARGS) const {
  const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = (const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis) ;
  return p->mAttribute_mFormalParametersList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @nonterminalSymbolLabelMapForGrammarAnalysis type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis ("nonterminalSymbolLabelMapForGrammarAnalysis",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis result ;
  const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis * p = (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalSymbolLabelMapForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_nonTerminalSymbolMapForGrammarAnalysis::cMapElement_nonTerminalSymbolMapForGrammarAnalysis (const GALGAS_lstring & inKey,
                                                                                                        const GALGAS_uint & in_mNonTerminalIndex,
                                                                                                        const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap
                                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mNonTerminalIndex (in_mNonTerminalIndex),
mAttribute_mNonterminalSymbolParametersMap (in_mNonterminalSymbolParametersMap) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_nonTerminalSymbolMapForGrammarAnalysis::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mNonTerminalIndex.isValid () && mAttribute_mNonterminalSymbolParametersMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_nonTerminalSymbolMapForGrammarAnalysis::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_nonTerminalSymbolMapForGrammarAnalysis (mAttribute_lkey, mAttribute_mNonTerminalIndex, mAttribute_mNonterminalSymbolParametersMap COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_nonTerminalSymbolMapForGrammarAnalysis::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNonTerminalIndex" ":" ;
  mAttribute_mNonTerminalIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNonterminalSymbolParametersMap" ":" ;
  mAttribute_mNonterminalSymbolParametersMap.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_nonTerminalSymbolMapForGrammarAnalysis::compare (const cCollectionElement * inOperand) const {
  cMapElement_nonTerminalSymbolMapForGrammarAnalysis * operand = (cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mNonTerminalIndex.objectCompare (operand->mAttribute_mNonTerminalIndex) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mNonterminalSymbolParametersMap.objectCompare (operand->mAttribute_mNonterminalSymbolParametersMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolMapForGrammarAnalysis::GALGAS_nonTerminalSymbolMapForGrammarAnalysis (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolMapForGrammarAnalysis::GALGAS_nonTerminalSymbolMapForGrammarAnalysis (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolMapForGrammarAnalysis & GALGAS_nonTerminalSymbolMapForGrammarAnalysis::operator = (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolMapForGrammarAnalysis GALGAS_nonTerminalSymbolMapForGrammarAnalysis::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolMapForGrammarAnalysis GALGAS_nonTerminalSymbolMapForGrammarAnalysis::constructor_mapWithMapToOverride (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & inMapToOverride
                                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolMapForGrammarAnalysis GALGAS_nonTerminalSymbolMapForGrammarAnalysis::reader_overriddenMap (C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalSymbolMapForGrammarAnalysis::addAssign_operation (const GALGAS_lstring & inKey,
                                                                         const GALGAS_uint & inArgument0,
                                                                         const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = NULL ;
  macroMyNew (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@nonTerminalSymbolMapForGrammarAnalysis insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalSymbolMapForGrammarAnalysis::modifier_insertKey (GALGAS_lstring inKey,
                                                                        GALGAS_uint inArgument0,
                                                                        GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis inArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = NULL ;
  macroMyNew (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '<%K>' non terminal symbol has already been declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_nonTerminalSymbolMapForGrammarAnalysis_searchKey = "the '<%K>' non terminal symbol is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalSymbolMapForGrammarAnalysis::method_searchKey (GALGAS_lstring inKey,
                                                                      GALGAS_uint & outArgument0,
                                                                      GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) performSearch (inKey,
                                                                                                                                               inCompiler,
                                                                                                                                               kSearchErrorMessage_nonTerminalSymbolMapForGrammarAnalysis_searchKey
                                                                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
    outArgument0 = p->mAttribute_mNonTerminalIndex ;
    outArgument1 = p->mAttribute_mNonterminalSymbolParametersMap ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_nonTerminalSymbolMapForGrammarAnalysis::reader_mNonTerminalIndexForKey (const GALGAS_string & inKey,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
    result = p->mAttribute_mNonTerminalIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis GALGAS_nonTerminalSymbolMapForGrammarAnalysis::reader_mNonterminalSymbolParametersMapForKey (const GALGAS_string & inKey,
                                                                                                                                                C_Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) attributes ;
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
    result = p->mAttribute_mNonterminalSymbolParametersMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalSymbolMapForGrammarAnalysis::modifier_setMNonTerminalIndexForKey (GALGAS_uint inAttributeValue,
                                                                                         GALGAS_string inKey,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
    p->mAttribute_mNonTerminalIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalSymbolMapForGrammarAnalysis::modifier_setMNonterminalSymbolParametersMapForKey (GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis inAttributeValue,
                                                                                                       GALGAS_string inKey,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
    p->mAttribute_mNonterminalSymbolParametersMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_nonTerminalSymbolMapForGrammarAnalysis * GALGAS_nonTerminalSymbolMapForGrammarAnalysis::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                       const GALGAS_string & inKey
                                                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_nonTerminalSymbolMapForGrammarAnalysis * result = (cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_nonTerminalSymbolMapForGrammarAnalysis::cEnumerator_nonTerminalSymbolMapForGrammarAnalysis (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & inEnumeratedObject,
                                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element cEnumerator_nonTerminalSymbolMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
  return GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (p->mAttribute_lkey, p->mAttribute_mNonTerminalIndex, p->mAttribute_mNonterminalSymbolParametersMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_nonTerminalSymbolMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_nonTerminalSymbolMapForGrammarAnalysis::current_mNonTerminalIndex (LOCATION_ARGS) const {
  const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
  return p->mAttribute_mNonTerminalIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis cEnumerator_nonTerminalSymbolMapForGrammarAnalysis::current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const {
  const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
  return p->mAttribute_mNonterminalSymbolParametersMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @nonTerminalSymbolMapForGrammarAnalysis type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis ("nonTerminalSymbolMapForGrammarAnalysis",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_nonTerminalSymbolMapForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_nonTerminalSymbolMapForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonTerminalSymbolMapForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolMapForGrammarAnalysis GALGAS_nonTerminalSymbolMapForGrammarAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis result ;
  const GALGAS_nonTerminalSymbolMapForGrammarAnalysis * p = (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_nonTerminalSymbolMapForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalSymbolMapForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@nonTerminalToAddList' list                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_nonTerminalToAddList : public cCollectionElement {
  public : GALGAS_nonTerminalToAddList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_nonTerminalToAddList (const GALGAS_string & in_mSyntaxComponentName,
                                                    const GALGAS_uint & in_mNonTerminalToAddCount
                                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_nonTerminalToAddList::cCollectionElement_nonTerminalToAddList (const GALGAS_string & in_mSyntaxComponentName,
                                                                                  const GALGAS_uint & in_mNonTerminalToAddCount
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSyntaxComponentName, in_mNonTerminalToAddCount) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_nonTerminalToAddList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_nonTerminalToAddList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_nonTerminalToAddList (mObject.mAttribute_mSyntaxComponentName, mObject.mAttribute_mNonTerminalToAddCount COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_nonTerminalToAddList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSyntaxComponentName" ":" ;
  mObject.mAttribute_mSyntaxComponentName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNonTerminalToAddCount" ":" ;
  mObject.mAttribute_mNonTerminalToAddCount.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_nonTerminalToAddList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_nonTerminalToAddList * operand = (cCollectionElement_nonTerminalToAddList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_nonTerminalToAddList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalToAddList::GALGAS_nonTerminalToAddList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalToAddList::GALGAS_nonTerminalToAddList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalToAddList GALGAS_nonTerminalToAddList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_nonTerminalToAddList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalToAddList GALGAS_nonTerminalToAddList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                    const GALGAS_uint & inOperand1
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_nonTerminalToAddList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_nonTerminalToAddList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalToAddList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_string & in_mSyntaxComponentName,
                                                             const GALGAS_uint & in_mNonTerminalToAddCount
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_nonTerminalToAddList * p = NULL ;
  macroMyNew (p, cCollectionElement_nonTerminalToAddList (in_mSyntaxComponentName,
                                                          in_mNonTerminalToAddCount COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalToAddList::addAssign_operation (const GALGAS_string & inOperand0,
                                                       const GALGAS_uint & inOperand1
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_nonTerminalToAddList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalToAddList::modifier_insertAtIndex (const GALGAS_string inOperand0,
                                                          const GALGAS_uint inOperand1,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_nonTerminalToAddList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalToAddList::modifier_removeAtIndex (GALGAS_string & outOperand0,
                                                          GALGAS_uint & outOperand1,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
      outOperand0 = p->mObject.mAttribute_mSyntaxComponentName ;
      outOperand1 = p->mObject.mAttribute_mNonTerminalToAddCount ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalToAddList::modifier_popFirst (GALGAS_string & outOperand0,
                                                     GALGAS_uint & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    outOperand0 = p->mObject.mAttribute_mSyntaxComponentName ;
    outOperand1 = p->mObject.mAttribute_mNonTerminalToAddCount ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalToAddList::modifier_popLast (GALGAS_string & outOperand0,
                                                    GALGAS_uint & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    outOperand0 = p->mObject.mAttribute_mSyntaxComponentName ;
    outOperand1 = p->mObject.mAttribute_mNonTerminalToAddCount ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalToAddList::method_first (GALGAS_string & outOperand0,
                                                GALGAS_uint & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    outOperand0 = p->mObject.mAttribute_mSyntaxComponentName ;
    outOperand1 = p->mObject.mAttribute_mNonTerminalToAddCount ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalToAddList::method_last (GALGAS_string & outOperand0,
                                               GALGAS_uint & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    outOperand0 = p->mObject.mAttribute_mSyntaxComponentName ;
    outOperand1 = p->mObject.mAttribute_mNonTerminalToAddCount ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalToAddList GALGAS_nonTerminalToAddList::operator_concat (const GALGAS_nonTerminalToAddList & inOperand
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_nonTerminalToAddList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalToAddList GALGAS_nonTerminalToAddList::add_operation (const GALGAS_nonTerminalToAddList & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_nonTerminalToAddList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalToAddList GALGAS_nonTerminalToAddList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_nonTerminalToAddList result = GALGAS_nonTerminalToAddList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalToAddList GALGAS_nonTerminalToAddList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_nonTerminalToAddList result = GALGAS_nonTerminalToAddList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalToAddList::dotAssign_operation (const GALGAS_nonTerminalToAddList inOperand
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_nonTerminalToAddList::reader_mSyntaxComponentNameAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    result = p->mObject.mAttribute_mSyntaxComponentName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_nonTerminalToAddList::reader_mNonTerminalToAddCountAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    result = p->mObject.mAttribute_mNonTerminalToAddCount ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_nonTerminalToAddList::cEnumerator_nonTerminalToAddList (const GALGAS_nonTerminalToAddList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalToAddList_2D_element cEnumerator_nonTerminalToAddList::current (LOCATION_ARGS) const {
  const cCollectionElement_nonTerminalToAddList * p = (const cCollectionElement_nonTerminalToAddList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_nonTerminalToAddList::current_mSyntaxComponentName (LOCATION_ARGS) const {
  const cCollectionElement_nonTerminalToAddList * p = (const cCollectionElement_nonTerminalToAddList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
  return p->mObject.mAttribute_mSyntaxComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_nonTerminalToAddList::current_mNonTerminalToAddCount (LOCATION_ARGS) const {
  const cCollectionElement_nonTerminalToAddList * p = (const cCollectionElement_nonTerminalToAddList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
  return p->mObject.mAttribute_mNonTerminalToAddCount ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @nonTerminalToAddList type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonTerminalToAddList ("nonTerminalToAddList",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_nonTerminalToAddList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalToAddList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_nonTerminalToAddList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonTerminalToAddList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalToAddList GALGAS_nonTerminalToAddList::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_nonTerminalToAddList result ;
  const GALGAS_nonTerminalToAddList * p = (const GALGAS_nonTerminalToAddList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_nonTerminalToAddList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalToAddList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@terminalCheckAssignementList' list                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_terminalCheckAssignementList : public cCollectionElement {
  public : GALGAS_terminalCheckAssignementList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_terminalCheckAssignementList (const GALGAS_string & in_mTypeName,
                                                            const GALGAS_string & in_mTargetVarCppName,
                                                            const GALGAS_string & in_mSourceLexicalAttributeName
                                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_terminalCheckAssignementList::cCollectionElement_terminalCheckAssignementList (const GALGAS_string & in_mTypeName,
                                                                                                  const GALGAS_string & in_mTargetVarCppName,
                                                                                                  const GALGAS_string & in_mSourceLexicalAttributeName
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeName, in_mTargetVarCppName, in_mSourceLexicalAttributeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_terminalCheckAssignementList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_terminalCheckAssignementList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_terminalCheckAssignementList (mObject.mAttribute_mTypeName, mObject.mAttribute_mTargetVarCppName, mObject.mAttribute_mSourceLexicalAttributeName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_terminalCheckAssignementList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeName" ":" ;
  mObject.mAttribute_mTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetVarCppName" ":" ;
  mObject.mAttribute_mTargetVarCppName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSourceLexicalAttributeName" ":" ;
  mObject.mAttribute_mSourceLexicalAttributeName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_terminalCheckAssignementList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_terminalCheckAssignementList * operand = (cCollectionElement_terminalCheckAssignementList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_terminalCheckAssignementList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalCheckAssignementList::GALGAS_terminalCheckAssignementList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalCheckAssignementList::GALGAS_terminalCheckAssignementList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalCheckAssignementList GALGAS_terminalCheckAssignementList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_terminalCheckAssignementList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalCheckAssignementList GALGAS_terminalCheckAssignementList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                    const GALGAS_string & inOperand1,
                                                                                                    const GALGAS_string & inOperand2
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_terminalCheckAssignementList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_terminalCheckAssignementList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalCheckAssignementList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_string & in_mTypeName,
                                                                     const GALGAS_string & in_mTargetVarCppName,
                                                                     const GALGAS_string & in_mSourceLexicalAttributeName
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalCheckAssignementList * p = NULL ;
  macroMyNew (p, cCollectionElement_terminalCheckAssignementList (in_mTypeName,
                                                                  in_mTargetVarCppName,
                                                                  in_mSourceLexicalAttributeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalCheckAssignementList::addAssign_operation (const GALGAS_string & inOperand0,
                                                               const GALGAS_string & inOperand1,
                                                               const GALGAS_string & inOperand2
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_terminalCheckAssignementList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalCheckAssignementList::modifier_insertAtIndex (const GALGAS_string inOperand0,
                                                                  const GALGAS_string inOperand1,
                                                                  const GALGAS_string inOperand2,
                                                                  const GALGAS_uint inInsertionIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_terminalCheckAssignementList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalCheckAssignementList::modifier_removeAtIndex (GALGAS_string & outOperand0,
                                                                  GALGAS_string & outOperand1,
                                                                  GALGAS_string & outOperand2,
                                                                  const GALGAS_uint inRemoveIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
      outOperand0 = p->mObject.mAttribute_mTypeName ;
      outOperand1 = p->mObject.mAttribute_mTargetVarCppName ;
      outOperand2 = p->mObject.mAttribute_mSourceLexicalAttributeName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalCheckAssignementList::modifier_popFirst (GALGAS_string & outOperand0,
                                                             GALGAS_string & outOperand1,
                                                             GALGAS_string & outOperand2,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    outOperand0 = p->mObject.mAttribute_mTypeName ;
    outOperand1 = p->mObject.mAttribute_mTargetVarCppName ;
    outOperand2 = p->mObject.mAttribute_mSourceLexicalAttributeName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalCheckAssignementList::modifier_popLast (GALGAS_string & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            GALGAS_string & outOperand2,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    outOperand0 = p->mObject.mAttribute_mTypeName ;
    outOperand1 = p->mObject.mAttribute_mTargetVarCppName ;
    outOperand2 = p->mObject.mAttribute_mSourceLexicalAttributeName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalCheckAssignementList::method_first (GALGAS_string & outOperand0,
                                                        GALGAS_string & outOperand1,
                                                        GALGAS_string & outOperand2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    outOperand0 = p->mObject.mAttribute_mTypeName ;
    outOperand1 = p->mObject.mAttribute_mTargetVarCppName ;
    outOperand2 = p->mObject.mAttribute_mSourceLexicalAttributeName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalCheckAssignementList::method_last (GALGAS_string & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       GALGAS_string & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    outOperand0 = p->mObject.mAttribute_mTypeName ;
    outOperand1 = p->mObject.mAttribute_mTargetVarCppName ;
    outOperand2 = p->mObject.mAttribute_mSourceLexicalAttributeName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalCheckAssignementList GALGAS_terminalCheckAssignementList::operator_concat (const GALGAS_terminalCheckAssignementList & inOperand
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_terminalCheckAssignementList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalCheckAssignementList GALGAS_terminalCheckAssignementList::add_operation (const GALGAS_terminalCheckAssignementList & inOperand,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_terminalCheckAssignementList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalCheckAssignementList GALGAS_terminalCheckAssignementList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_terminalCheckAssignementList result = GALGAS_terminalCheckAssignementList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalCheckAssignementList GALGAS_terminalCheckAssignementList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_terminalCheckAssignementList result = GALGAS_terminalCheckAssignementList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalCheckAssignementList::dotAssign_operation (const GALGAS_terminalCheckAssignementList inOperand
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_terminalCheckAssignementList::reader_mTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    result = p->mObject.mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_terminalCheckAssignementList::reader_mTargetVarCppNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    result = p->mObject.mAttribute_mTargetVarCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_terminalCheckAssignementList::reader_mSourceLexicalAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    result = p->mObject.mAttribute_mSourceLexicalAttributeName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_terminalCheckAssignementList::cEnumerator_terminalCheckAssignementList (const GALGAS_terminalCheckAssignementList & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalCheckAssignementList_2D_element cEnumerator_terminalCheckAssignementList::current (LOCATION_ARGS) const {
  const cCollectionElement_terminalCheckAssignementList * p = (const cCollectionElement_terminalCheckAssignementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_terminalCheckAssignementList::current_mTypeName (LOCATION_ARGS) const {
  const cCollectionElement_terminalCheckAssignementList * p = (const cCollectionElement_terminalCheckAssignementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
  return p->mObject.mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_terminalCheckAssignementList::current_mTargetVarCppName (LOCATION_ARGS) const {
  const cCollectionElement_terminalCheckAssignementList * p = (const cCollectionElement_terminalCheckAssignementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
  return p->mObject.mAttribute_mTargetVarCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_terminalCheckAssignementList::current_mSourceLexicalAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_terminalCheckAssignementList * p = (const cCollectionElement_terminalCheckAssignementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
  return p->mObject.mAttribute_mSourceLexicalAttributeName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @terminalCheckAssignementList type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalCheckAssignementList ("terminalCheckAssignementList",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_terminalCheckAssignementList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckAssignementList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_terminalCheckAssignementList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalCheckAssignementList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalCheckAssignementList GALGAS_terminalCheckAssignementList::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_terminalCheckAssignementList result ;
  const GALGAS_terminalCheckAssignementList * p = (const GALGAS_terminalCheckAssignementList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_terminalCheckAssignementList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalCheckAssignementList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Class for element of '@abstractMethodDefinitionListForGeneration' list                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_abstractMethodDefinitionListForGeneration : public cCollectionElement {
  public : GALGAS_abstractMethodDefinitionListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_abstractMethodDefinitionListForGeneration (const GALGAS_bool & in_mIsOverriding,
                                                                         const GALGAS_lstring & in_mMethodName,
                                                                         const GALGAS_formalParameterListForGeneration & in_mSignature
                                                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_abstractMethodDefinitionListForGeneration::cCollectionElement_abstractMethodDefinitionListForGeneration (const GALGAS_bool & in_mIsOverriding,
                                                                                                                            const GALGAS_lstring & in_mMethodName,
                                                                                                                            const GALGAS_formalParameterListForGeneration & in_mSignature
                                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mIsOverriding, in_mMethodName, in_mSignature) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_abstractMethodDefinitionListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_abstractMethodDefinitionListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_abstractMethodDefinitionListForGeneration (mObject.mAttribute_mIsOverriding, mObject.mAttribute_mMethodName, mObject.mAttribute_mSignature COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_abstractMethodDefinitionListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsOverriding" ":" ;
  mObject.mAttribute_mIsOverriding.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMethodName" ":" ;
  mObject.mAttribute_mMethodName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSignature" ":" ;
  mObject.mAttribute_mSignature.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_abstractMethodDefinitionListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_abstractMethodDefinitionListForGeneration * operand = (cCollectionElement_abstractMethodDefinitionListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_abstractMethodDefinitionListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractMethodDefinitionListForGeneration::GALGAS_abstractMethodDefinitionListForGeneration (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractMethodDefinitionListForGeneration::GALGAS_abstractMethodDefinitionListForGeneration (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractMethodDefinitionListForGeneration GALGAS_abstractMethodDefinitionListForGeneration::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_abstractMethodDefinitionListForGeneration result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractMethodDefinitionListForGeneration GALGAS_abstractMethodDefinitionListForGeneration::constructor_listWithValue (const GALGAS_bool & inOperand0,
                                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                                              const GALGAS_formalParameterListForGeneration & inOperand2
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_abstractMethodDefinitionListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_abstractMethodDefinitionListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_abstractMethodDefinitionListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                  const GALGAS_bool & in_mIsOverriding,
                                                                                  const GALGAS_lstring & in_mMethodName,
                                                                                  const GALGAS_formalParameterListForGeneration & in_mSignature
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_abstractMethodDefinitionListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_abstractMethodDefinitionListForGeneration (in_mIsOverriding,
                                                                               in_mMethodName,
                                                                               in_mSignature COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_abstractMethodDefinitionListForGeneration::addAssign_operation (const GALGAS_bool & inOperand0,
                                                                            const GALGAS_lstring & inOperand1,
                                                                            const GALGAS_formalParameterListForGeneration & inOperand2
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_abstractMethodDefinitionListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_abstractMethodDefinitionListForGeneration::modifier_insertAtIndex (const GALGAS_bool inOperand0,
                                                                               const GALGAS_lstring inOperand1,
                                                                               const GALGAS_formalParameterListForGeneration inOperand2,
                                                                               const GALGAS_uint inInsertionIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_abstractMethodDefinitionListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_abstractMethodDefinitionListForGeneration::modifier_removeAtIndex (GALGAS_bool & outOperand0,
                                                                               GALGAS_lstring & outOperand1,
                                                                               GALGAS_formalParameterListForGeneration & outOperand2,
                                                                               const GALGAS_uint inRemoveIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_abstractMethodDefinitionListForGeneration * p = (cCollectionElement_abstractMethodDefinitionListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_abstractMethodDefinitionListForGeneration) ;
      outOperand0 = p->mObject.mAttribute_mIsOverriding ;
      outOperand1 = p->mObject.mAttribute_mMethodName ;
      outOperand2 = p->mObject.mAttribute_mSignature ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_abstractMethodDefinitionListForGeneration::modifier_popFirst (GALGAS_bool & outOperand0,
                                                                          GALGAS_lstring & outOperand1,
                                                                          GALGAS_formalParameterListForGeneration & outOperand2,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_abstractMethodDefinitionListForGeneration * p = (cCollectionElement_abstractMethodDefinitionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_abstractMethodDefinitionListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mIsOverriding ;
    outOperand1 = p->mObject.mAttribute_mMethodName ;
    outOperand2 = p->mObject.mAttribute_mSignature ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_abstractMethodDefinitionListForGeneration::modifier_popLast (GALGAS_bool & outOperand0,
                                                                         GALGAS_lstring & outOperand1,
                                                                         GALGAS_formalParameterListForGeneration & outOperand2,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_abstractMethodDefinitionListForGeneration * p = (cCollectionElement_abstractMethodDefinitionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_abstractMethodDefinitionListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mIsOverriding ;
    outOperand1 = p->mObject.mAttribute_mMethodName ;
    outOperand2 = p->mObject.mAttribute_mSignature ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_abstractMethodDefinitionListForGeneration::method_first (GALGAS_bool & outOperand0,
                                                                     GALGAS_lstring & outOperand1,
                                                                     GALGAS_formalParameterListForGeneration & outOperand2,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_abstractMethodDefinitionListForGeneration * p = (cCollectionElement_abstractMethodDefinitionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_abstractMethodDefinitionListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mIsOverriding ;
    outOperand1 = p->mObject.mAttribute_mMethodName ;
    outOperand2 = p->mObject.mAttribute_mSignature ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_abstractMethodDefinitionListForGeneration::method_last (GALGAS_bool & outOperand0,
                                                                    GALGAS_lstring & outOperand1,
                                                                    GALGAS_formalParameterListForGeneration & outOperand2,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_abstractMethodDefinitionListForGeneration * p = (cCollectionElement_abstractMethodDefinitionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_abstractMethodDefinitionListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mIsOverriding ;
    outOperand1 = p->mObject.mAttribute_mMethodName ;
    outOperand2 = p->mObject.mAttribute_mSignature ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractMethodDefinitionListForGeneration GALGAS_abstractMethodDefinitionListForGeneration::operator_concat (const GALGAS_abstractMethodDefinitionListForGeneration & inOperand
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractMethodDefinitionListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractMethodDefinitionListForGeneration GALGAS_abstractMethodDefinitionListForGeneration::add_operation (const GALGAS_abstractMethodDefinitionListForGeneration & inOperand,
                                                                                                                  C_Compiler * /* inCompiler */
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractMethodDefinitionListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractMethodDefinitionListForGeneration GALGAS_abstractMethodDefinitionListForGeneration::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_abstractMethodDefinitionListForGeneration result = GALGAS_abstractMethodDefinitionListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractMethodDefinitionListForGeneration GALGAS_abstractMethodDefinitionListForGeneration::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_abstractMethodDefinitionListForGeneration result = GALGAS_abstractMethodDefinitionListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_abstractMethodDefinitionListForGeneration::dotAssign_operation (const GALGAS_abstractMethodDefinitionListForGeneration inOperand
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_abstractMethodDefinitionListForGeneration::reader_mIsOverridingAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_abstractMethodDefinitionListForGeneration * p = (cCollectionElement_abstractMethodDefinitionListForGeneration *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_abstractMethodDefinitionListForGeneration) ;
    result = p->mObject.mAttribute_mIsOverriding ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_abstractMethodDefinitionListForGeneration::reader_mMethodNameAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_abstractMethodDefinitionListForGeneration * p = (cCollectionElement_abstractMethodDefinitionListForGeneration *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_abstractMethodDefinitionListForGeneration) ;
    result = p->mObject.mAttribute_mMethodName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration GALGAS_abstractMethodDefinitionListForGeneration::reader_mSignatureAtIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_abstractMethodDefinitionListForGeneration * p = (cCollectionElement_abstractMethodDefinitionListForGeneration *) attributes.ptr () ;
  GALGAS_formalParameterListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_abstractMethodDefinitionListForGeneration) ;
    result = p->mObject.mAttribute_mSignature ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_abstractMethodDefinitionListForGeneration::cEnumerator_abstractMethodDefinitionListForGeneration (const GALGAS_abstractMethodDefinitionListForGeneration & inEnumeratedObject,
                                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractMethodDefinitionListForGeneration_2D_element cEnumerator_abstractMethodDefinitionListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_abstractMethodDefinitionListForGeneration * p = (const cCollectionElement_abstractMethodDefinitionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_abstractMethodDefinitionListForGeneration) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_abstractMethodDefinitionListForGeneration::current_mIsOverriding (LOCATION_ARGS) const {
  const cCollectionElement_abstractMethodDefinitionListForGeneration * p = (const cCollectionElement_abstractMethodDefinitionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_abstractMethodDefinitionListForGeneration) ;
  return p->mObject.mAttribute_mIsOverriding ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_abstractMethodDefinitionListForGeneration::current_mMethodName (LOCATION_ARGS) const {
  const cCollectionElement_abstractMethodDefinitionListForGeneration * p = (const cCollectionElement_abstractMethodDefinitionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_abstractMethodDefinitionListForGeneration) ;
  return p->mObject.mAttribute_mMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration cEnumerator_abstractMethodDefinitionListForGeneration::current_mSignature (LOCATION_ARGS) const {
  const cCollectionElement_abstractMethodDefinitionListForGeneration * p = (const cCollectionElement_abstractMethodDefinitionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_abstractMethodDefinitionListForGeneration) ;
  return p->mObject.mAttribute_mSignature ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @abstractMethodDefinitionListForGeneration type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractMethodDefinitionListForGeneration ("abstractMethodDefinitionListForGeneration",
                                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractMethodDefinitionListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractMethodDefinitionListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractMethodDefinitionListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractMethodDefinitionListForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractMethodDefinitionListForGeneration GALGAS_abstractMethodDefinitionListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_abstractMethodDefinitionListForGeneration result ;
  const GALGAS_abstractMethodDefinitionListForGeneration * p = (const GALGAS_abstractMethodDefinitionListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractMethodDefinitionListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractMethodDefinitionListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Class for element of '@methodDefinitionListForGeneration' list                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_methodDefinitionListForGeneration : public cCollectionElement {
  public : GALGAS_methodDefinitionListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_methodDefinitionListForGeneration (const GALGAS_bool & in_mIsOverriding,
                                                                 const GALGAS_lstring & in_mMethodName,
                                                                 const GALGAS_formalParameterListForGeneration & in_mSignature,
                                                                 const GALGAS_semanticInstructionListForGeneration & in_mInstructionList
                                                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_methodDefinitionListForGeneration::cCollectionElement_methodDefinitionListForGeneration (const GALGAS_bool & in_mIsOverriding,
                                                                                                            const GALGAS_lstring & in_mMethodName,
                                                                                                            const GALGAS_formalParameterListForGeneration & in_mSignature,
                                                                                                            const GALGAS_semanticInstructionListForGeneration & in_mInstructionList
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mIsOverriding, in_mMethodName, in_mSignature, in_mInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_methodDefinitionListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_methodDefinitionListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_methodDefinitionListForGeneration (mObject.mAttribute_mIsOverriding, mObject.mAttribute_mMethodName, mObject.mAttribute_mSignature, mObject.mAttribute_mInstructionList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_methodDefinitionListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsOverriding" ":" ;
  mObject.mAttribute_mIsOverriding.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMethodName" ":" ;
  mObject.mAttribute_mMethodName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSignature" ":" ;
  mObject.mAttribute_mSignature.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mAttribute_mInstructionList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_methodDefinitionListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_methodDefinitionListForGeneration * operand = (cCollectionElement_methodDefinitionListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_methodDefinitionListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodDefinitionListForGeneration::GALGAS_methodDefinitionListForGeneration (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodDefinitionListForGeneration::GALGAS_methodDefinitionListForGeneration (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodDefinitionListForGeneration GALGAS_methodDefinitionListForGeneration::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_methodDefinitionListForGeneration result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodDefinitionListForGeneration GALGAS_methodDefinitionListForGeneration::constructor_listWithValue (const GALGAS_bool & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                              const GALGAS_formalParameterListForGeneration & inOperand2,
                                                                                                              const GALGAS_semanticInstructionListForGeneration & inOperand3
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_methodDefinitionListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_methodDefinitionListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_methodDefinitionListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GALGAS_bool & in_mIsOverriding,
                                                                          const GALGAS_lstring & in_mMethodName,
                                                                          const GALGAS_formalParameterListForGeneration & in_mSignature,
                                                                          const GALGAS_semanticInstructionListForGeneration & in_mInstructionList
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_methodDefinitionListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_methodDefinitionListForGeneration (in_mIsOverriding,
                                                                       in_mMethodName,
                                                                       in_mSignature,
                                                                       in_mInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_methodDefinitionListForGeneration::addAssign_operation (const GALGAS_bool & inOperand0,
                                                                    const GALGAS_lstring & inOperand1,
                                                                    const GALGAS_formalParameterListForGeneration & inOperand2,
                                                                    const GALGAS_semanticInstructionListForGeneration & inOperand3
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_methodDefinitionListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_methodDefinitionListForGeneration::modifier_insertAtIndex (const GALGAS_bool inOperand0,
                                                                       const GALGAS_lstring inOperand1,
                                                                       const GALGAS_formalParameterListForGeneration inOperand2,
                                                                       const GALGAS_semanticInstructionListForGeneration inOperand3,
                                                                       const GALGAS_uint inInsertionIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_methodDefinitionListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_methodDefinitionListForGeneration::modifier_removeAtIndex (GALGAS_bool & outOperand0,
                                                                       GALGAS_lstring & outOperand1,
                                                                       GALGAS_formalParameterListForGeneration & outOperand2,
                                                                       GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                                       const GALGAS_uint inRemoveIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_methodDefinitionListForGeneration * p = (cCollectionElement_methodDefinitionListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_methodDefinitionListForGeneration) ;
      outOperand0 = p->mObject.mAttribute_mIsOverriding ;
      outOperand1 = p->mObject.mAttribute_mMethodName ;
      outOperand2 = p->mObject.mAttribute_mSignature ;
      outOperand3 = p->mObject.mAttribute_mInstructionList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_methodDefinitionListForGeneration::modifier_popFirst (GALGAS_bool & outOperand0,
                                                                  GALGAS_lstring & outOperand1,
                                                                  GALGAS_formalParameterListForGeneration & outOperand2,
                                                                  GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_methodDefinitionListForGeneration * p = (cCollectionElement_methodDefinitionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_methodDefinitionListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mIsOverriding ;
    outOperand1 = p->mObject.mAttribute_mMethodName ;
    outOperand2 = p->mObject.mAttribute_mSignature ;
    outOperand3 = p->mObject.mAttribute_mInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_methodDefinitionListForGeneration::modifier_popLast (GALGAS_bool & outOperand0,
                                                                 GALGAS_lstring & outOperand1,
                                                                 GALGAS_formalParameterListForGeneration & outOperand2,
                                                                 GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_methodDefinitionListForGeneration * p = (cCollectionElement_methodDefinitionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_methodDefinitionListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mIsOverriding ;
    outOperand1 = p->mObject.mAttribute_mMethodName ;
    outOperand2 = p->mObject.mAttribute_mSignature ;
    outOperand3 = p->mObject.mAttribute_mInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_methodDefinitionListForGeneration::method_first (GALGAS_bool & outOperand0,
                                                             GALGAS_lstring & outOperand1,
                                                             GALGAS_formalParameterListForGeneration & outOperand2,
                                                             GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_methodDefinitionListForGeneration * p = (cCollectionElement_methodDefinitionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_methodDefinitionListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mIsOverriding ;
    outOperand1 = p->mObject.mAttribute_mMethodName ;
    outOperand2 = p->mObject.mAttribute_mSignature ;
    outOperand3 = p->mObject.mAttribute_mInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_methodDefinitionListForGeneration::method_last (GALGAS_bool & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            GALGAS_formalParameterListForGeneration & outOperand2,
                                                            GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_methodDefinitionListForGeneration * p = (cCollectionElement_methodDefinitionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_methodDefinitionListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mIsOverriding ;
    outOperand1 = p->mObject.mAttribute_mMethodName ;
    outOperand2 = p->mObject.mAttribute_mSignature ;
    outOperand3 = p->mObject.mAttribute_mInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodDefinitionListForGeneration GALGAS_methodDefinitionListForGeneration::operator_concat (const GALGAS_methodDefinitionListForGeneration & inOperand
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_methodDefinitionListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodDefinitionListForGeneration GALGAS_methodDefinitionListForGeneration::add_operation (const GALGAS_methodDefinitionListForGeneration & inOperand,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_methodDefinitionListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodDefinitionListForGeneration GALGAS_methodDefinitionListForGeneration::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_methodDefinitionListForGeneration result = GALGAS_methodDefinitionListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodDefinitionListForGeneration GALGAS_methodDefinitionListForGeneration::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_methodDefinitionListForGeneration result = GALGAS_methodDefinitionListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_methodDefinitionListForGeneration::dotAssign_operation (const GALGAS_methodDefinitionListForGeneration inOperand
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_methodDefinitionListForGeneration::reader_mIsOverridingAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_methodDefinitionListForGeneration * p = (cCollectionElement_methodDefinitionListForGeneration *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_methodDefinitionListForGeneration) ;
    result = p->mObject.mAttribute_mIsOverriding ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_methodDefinitionListForGeneration::reader_mMethodNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_methodDefinitionListForGeneration * p = (cCollectionElement_methodDefinitionListForGeneration *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_methodDefinitionListForGeneration) ;
    result = p->mObject.mAttribute_mMethodName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration GALGAS_methodDefinitionListForGeneration::reader_mSignatureAtIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_methodDefinitionListForGeneration * p = (cCollectionElement_methodDefinitionListForGeneration *) attributes.ptr () ;
  GALGAS_formalParameterListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_methodDefinitionListForGeneration) ;
    result = p->mObject.mAttribute_mSignature ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_methodDefinitionListForGeneration::reader_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_methodDefinitionListForGeneration * p = (cCollectionElement_methodDefinitionListForGeneration *) attributes.ptr () ;
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_methodDefinitionListForGeneration) ;
    result = p->mObject.mAttribute_mInstructionList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_methodDefinitionListForGeneration::cEnumerator_methodDefinitionListForGeneration (const GALGAS_methodDefinitionListForGeneration & inEnumeratedObject,
                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodDefinitionListForGeneration_2D_element cEnumerator_methodDefinitionListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_methodDefinitionListForGeneration * p = (const cCollectionElement_methodDefinitionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_methodDefinitionListForGeneration) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_methodDefinitionListForGeneration::current_mIsOverriding (LOCATION_ARGS) const {
  const cCollectionElement_methodDefinitionListForGeneration * p = (const cCollectionElement_methodDefinitionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_methodDefinitionListForGeneration) ;
  return p->mObject.mAttribute_mIsOverriding ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_methodDefinitionListForGeneration::current_mMethodName (LOCATION_ARGS) const {
  const cCollectionElement_methodDefinitionListForGeneration * p = (const cCollectionElement_methodDefinitionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_methodDefinitionListForGeneration) ;
  return p->mObject.mAttribute_mMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration cEnumerator_methodDefinitionListForGeneration::current_mSignature (LOCATION_ARGS) const {
  const cCollectionElement_methodDefinitionListForGeneration * p = (const cCollectionElement_methodDefinitionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_methodDefinitionListForGeneration) ;
  return p->mObject.mAttribute_mSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cEnumerator_methodDefinitionListForGeneration::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_methodDefinitionListForGeneration * p = (const cCollectionElement_methodDefinitionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_methodDefinitionListForGeneration) ;
  return p->mObject.mAttribute_mInstructionList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @methodDefinitionListForGeneration type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_methodDefinitionListForGeneration ("methodDefinitionListForGeneration",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_methodDefinitionListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodDefinitionListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_methodDefinitionListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_methodDefinitionListForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodDefinitionListForGeneration GALGAS_methodDefinitionListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_methodDefinitionListForGeneration result ;
  const GALGAS_methodDefinitionListForGeneration * p = (const GALGAS_methodDefinitionListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_methodDefinitionListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("methodDefinitionListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Class for element of '@filewrapperTemplateListForGeneration' list                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_filewrapperTemplateListForGeneration : public cCollectionElement {
  public : GALGAS_filewrapperTemplateListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_filewrapperTemplateListForGeneration (const GALGAS_string & in_mFilewrapperTemplateName,
                                                                    const GALGAS_formalInputParameterListForGeneration & in_mFilewrapperTemplateFormalInputParameters,
                                                                    const GALGAS_templateInstructionListForGeneration & in_mTemplateInstructionListForGeneration
                                                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_filewrapperTemplateListForGeneration::cCollectionElement_filewrapperTemplateListForGeneration (const GALGAS_string & in_mFilewrapperTemplateName,
                                                                                                                  const GALGAS_formalInputParameterListForGeneration & in_mFilewrapperTemplateFormalInputParameters,
                                                                                                                  const GALGAS_templateInstructionListForGeneration & in_mTemplateInstructionListForGeneration
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFilewrapperTemplateName, in_mFilewrapperTemplateFormalInputParameters, in_mTemplateInstructionListForGeneration) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_filewrapperTemplateListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_filewrapperTemplateListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_filewrapperTemplateListForGeneration (mObject.mAttribute_mFilewrapperTemplateName, mObject.mAttribute_mFilewrapperTemplateFormalInputParameters, mObject.mAttribute_mTemplateInstructionListForGeneration COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_filewrapperTemplateListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilewrapperTemplateName" ":" ;
  mObject.mAttribute_mFilewrapperTemplateName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilewrapperTemplateFormalInputParameters" ":" ;
  mObject.mAttribute_mFilewrapperTemplateFormalInputParameters.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTemplateInstructionListForGeneration" ":" ;
  mObject.mAttribute_mTemplateInstructionListForGeneration.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_filewrapperTemplateListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_filewrapperTemplateListForGeneration * operand = (cCollectionElement_filewrapperTemplateListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_filewrapperTemplateListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListForGeneration::GALGAS_filewrapperTemplateListForGeneration (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListForGeneration::GALGAS_filewrapperTemplateListForGeneration (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListForGeneration GALGAS_filewrapperTemplateListForGeneration::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_filewrapperTemplateListForGeneration result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListForGeneration GALGAS_filewrapperTemplateListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                    const GALGAS_formalInputParameterListForGeneration & inOperand1,
                                                                                                                    const GALGAS_templateInstructionListForGeneration & inOperand2
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_filewrapperTemplateListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                             const GALGAS_string & in_mFilewrapperTemplateName,
                                                                             const GALGAS_formalInputParameterListForGeneration & in_mFilewrapperTemplateFormalInputParameters,
                                                                             const GALGAS_templateInstructionListForGeneration & in_mTemplateInstructionListForGeneration
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_filewrapperTemplateListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_filewrapperTemplateListForGeneration (in_mFilewrapperTemplateName,
                                                                          in_mFilewrapperTemplateFormalInputParameters,
                                                                          in_mTemplateInstructionListForGeneration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                       const GALGAS_formalInputParameterListForGeneration & inOperand1,
                                                                       const GALGAS_templateInstructionListForGeneration & inOperand2
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_filewrapperTemplateListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateListForGeneration::modifier_insertAtIndex (const GALGAS_string inOperand0,
                                                                          const GALGAS_formalInputParameterListForGeneration inOperand1,
                                                                          const GALGAS_templateInstructionListForGeneration inOperand2,
                                                                          const GALGAS_uint inInsertionIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_filewrapperTemplateListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateListForGeneration::modifier_removeAtIndex (GALGAS_string & outOperand0,
                                                                          GALGAS_formalInputParameterListForGeneration & outOperand1,
                                                                          GALGAS_templateInstructionListForGeneration & outOperand2,
                                                                          const GALGAS_uint inRemoveIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
      outOperand0 = p->mObject.mAttribute_mFilewrapperTemplateName ;
      outOperand1 = p->mObject.mAttribute_mFilewrapperTemplateFormalInputParameters ;
      outOperand2 = p->mObject.mAttribute_mTemplateInstructionListForGeneration ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateListForGeneration::modifier_popFirst (GALGAS_string & outOperand0,
                                                                     GALGAS_formalInputParameterListForGeneration & outOperand1,
                                                                     GALGAS_templateInstructionListForGeneration & outOperand2,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mFilewrapperTemplateName ;
    outOperand1 = p->mObject.mAttribute_mFilewrapperTemplateFormalInputParameters ;
    outOperand2 = p->mObject.mAttribute_mTemplateInstructionListForGeneration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateListForGeneration::modifier_popLast (GALGAS_string & outOperand0,
                                                                    GALGAS_formalInputParameterListForGeneration & outOperand1,
                                                                    GALGAS_templateInstructionListForGeneration & outOperand2,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mFilewrapperTemplateName ;
    outOperand1 = p->mObject.mAttribute_mFilewrapperTemplateFormalInputParameters ;
    outOperand2 = p->mObject.mAttribute_mTemplateInstructionListForGeneration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                GALGAS_formalInputParameterListForGeneration & outOperand1,
                                                                GALGAS_templateInstructionListForGeneration & outOperand2,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mFilewrapperTemplateName ;
    outOperand1 = p->mObject.mAttribute_mFilewrapperTemplateFormalInputParameters ;
    outOperand2 = p->mObject.mAttribute_mTemplateInstructionListForGeneration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateListForGeneration::method_last (GALGAS_string & outOperand0,
                                                               GALGAS_formalInputParameterListForGeneration & outOperand1,
                                                               GALGAS_templateInstructionListForGeneration & outOperand2,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mFilewrapperTemplateName ;
    outOperand1 = p->mObject.mAttribute_mFilewrapperTemplateFormalInputParameters ;
    outOperand2 = p->mObject.mAttribute_mTemplateInstructionListForGeneration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListForGeneration GALGAS_filewrapperTemplateListForGeneration::operator_concat (const GALGAS_filewrapperTemplateListForGeneration & inOperand
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListForGeneration GALGAS_filewrapperTemplateListForGeneration::add_operation (const GALGAS_filewrapperTemplateListForGeneration & inOperand,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListForGeneration GALGAS_filewrapperTemplateListForGeneration::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateListForGeneration result = GALGAS_filewrapperTemplateListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListForGeneration GALGAS_filewrapperTemplateListForGeneration::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateListForGeneration result = GALGAS_filewrapperTemplateListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateListForGeneration::dotAssign_operation (const GALGAS_filewrapperTemplateListForGeneration inOperand
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_filewrapperTemplateListForGeneration::reader_mFilewrapperTemplateNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    result = p->mObject.mAttribute_mFilewrapperTemplateName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration GALGAS_filewrapperTemplateListForGeneration::reader_mFilewrapperTemplateFormalInputParametersAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                                   C_Compiler * inCompiler
                                                                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  GALGAS_formalInputParameterListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    result = p->mObject.mAttribute_mFilewrapperTemplateFormalInputParameters ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration GALGAS_filewrapperTemplateListForGeneration::reader_mTemplateInstructionListForGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                              C_Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  GALGAS_templateInstructionListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    result = p->mObject.mAttribute_mTemplateInstructionListForGeneration ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_filewrapperTemplateListForGeneration::cEnumerator_filewrapperTemplateListForGeneration (const GALGAS_filewrapperTemplateListForGeneration & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListForGeneration_2D_element cEnumerator_filewrapperTemplateListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListForGeneration * p = (const cCollectionElement_filewrapperTemplateListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_filewrapperTemplateListForGeneration::current_mFilewrapperTemplateName (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListForGeneration * p = (const cCollectionElement_filewrapperTemplateListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
  return p->mObject.mAttribute_mFilewrapperTemplateName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration cEnumerator_filewrapperTemplateListForGeneration::current_mFilewrapperTemplateFormalInputParameters (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListForGeneration * p = (const cCollectionElement_filewrapperTemplateListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
  return p->mObject.mAttribute_mFilewrapperTemplateFormalInputParameters ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration cEnumerator_filewrapperTemplateListForGeneration::current_mTemplateInstructionListForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListForGeneration * p = (const cCollectionElement_filewrapperTemplateListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
  return p->mObject.mAttribute_mTemplateInstructionListForGeneration ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @filewrapperTemplateListForGeneration type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperTemplateListForGeneration ("filewrapperTemplateListForGeneration",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_filewrapperTemplateListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_filewrapperTemplateListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperTemplateListForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListForGeneration GALGAS_filewrapperTemplateListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateListForGeneration result ;
  const GALGAS_filewrapperTemplateListForGeneration * p = (const GALGAS_filewrapperTemplateListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperTemplateListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_variableMap::cMapElement_variableMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                                  const GALGAS_string & in_mCppName,
                                                  const GALGAS_string & in_mNameForCheckingFormalParameterUsing
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mTypeProxy (in_mTypeProxy),
mAttribute_mCppName (in_mCppName),
mAttribute_mNameForCheckingFormalParameterUsing (in_mNameForCheckingFormalParameterUsing) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_variableMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mTypeProxy.isValid () && mAttribute_mCppName.isValid () && mAttribute_mNameForCheckingFormalParameterUsing.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_variableMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_variableMap (mAttribute_lkey, mAttribute_mTypeProxy, mAttribute_mCppName, mAttribute_mNameForCheckingFormalParameterUsing COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_variableMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeProxy" ":" ;
  mAttribute_mTypeProxy.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCppName" ":" ;
  mAttribute_mCppName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNameForCheckingFormalParameterUsing" ":" ;
  mAttribute_mNameForCheckingFormalParameterUsing.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_variableMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_variableMap * operand = (cMapElement_variableMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTypeProxy.objectCompare (operand->mAttribute_mTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCppName.objectCompare (operand->mAttribute_mCppName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mNameForCheckingFormalParameterUsing.objectCompare (operand->mAttribute_mNameForCheckingFormalParameterUsing) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap::GALGAS_variableMap (void) :
AC_GALGAS_uniqueMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap::GALGAS_variableMap (const GALGAS_variableMap & inSource) :
AC_GALGAS_uniqueMap (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap & GALGAS_variableMap::operator = (const GALGAS_variableMap & inSource) {
  * ((AC_GALGAS_uniqueMap *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap GALGAS_variableMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_variableMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton states                                                       *
//---------------------------------------------------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  static const uint32_t kMapStateCount_variableMap = 23 ;
#endif
static const uint32_t kMapState_variableMap_constantInputFormalArgument = 13 ;
static const uint32_t kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused = 15 ;
static const uint32_t kMapState_variableMap_currentInstanceAttribute = 20 ;
static const uint32_t kMapState_variableMap_currentInstanceAttributeInModifier = 21 ;
static const uint32_t kMapState_variableMap_currentInstanceDroppedAttributeInModifier = 22 ;
static const uint32_t kMapState_variableMap_definedLocalVariable = 4 ;
static const uint32_t kMapState_variableMap_definedOutputFormalArgument = 8 ;
static const uint32_t kMapState_variableMap_droppedInputFormalArgument = 18 ;
static const uint32_t kMapState_variableMap_droppedInputOutputFormalArgument = 11 ;
static const uint32_t kMapState_variableMap_droppedLocalVariable = 6 ;
static const uint32_t kMapState_variableMap_inputFormalArgumentDeclaredAsUnused = 19 ;
static const uint32_t kMapState_variableMap_inputFormalParameter = 16 ;
static const uint32_t kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused = 12 ;
static const uint32_t kMapState_variableMap_localConstant = 1 ;
static const uint32_t kMapState_variableMap_undefinedLocalConstant = 2 ;
static const uint32_t kMapState_variableMap_undefinedLocalVariable = 3 ;
static const uint32_t kMapState_variableMap_undefinedOutputFormalArgument = 7 ;
static const uint32_t kMapState_variableMap_unusedInputOutputFormalArgument = 9 ;
static const uint32_t kMapState_variableMap_usedConstantInputFormalArgument = 14 ;
static const uint32_t kMapState_variableMap_usedInputFormalArgument = 17 ;
static const uint32_t kMapState_variableMap_usedInputOutputFormalArgument = 10 ;
static const uint32_t kMapState_variableMap_usedLocalConstant = 0 ;
static const uint32_t kMapState_variableMap_usedLocalVariable = 5 ;

//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton state names                                                  *
//---------------------------------------------------------------------------------------------------------------------*

static const char * kMapStateNames_variableMap [23] = {
  "usedLocalConstant",
  "localConstant",
  "undefinedLocalConstant",
  "undefinedLocalVariable",
  "definedLocalVariable",
  "usedLocalVariable",
  "droppedLocalVariable",
  "undefinedOutputFormalArgument",
  "definedOutputFormalArgument",
  "unusedInputOutputFormalArgument",
  "usedInputOutputFormalArgument",
  "droppedInputOutputFormalArgument",
  "inputOutputFormalArgumentDeclaredAsUnused",
  "constantInputFormalArgument",
  "usedConstantInputFormalArgument",
  "constantInputFormalArgumentDeclaredAsUnused",
  "inputFormalParameter",
  "usedInputFormalArgument",
  "droppedInputFormalArgument",
  "inputFormalArgumentDeclaredAsUnused",
  "currentInstanceAttribute",
  "currentInstanceAttributeInModifier",
  "currentInstanceDroppedAttributeInModifier"
} ;

//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton actions                                                    *
//---------------------------------------------------------------------------------------------------------------------*

static const uint32_t kMapActionCount_variableMap = 5 ;
static const uint32_t kMapAction_variableMap_dropAccess = 3 ;
static const uint32_t kMapAction_variableMap_neutralAccess = 4 ;
static const uint32_t kMapAction_variableMap_readAccess = 0 ;
static const uint32_t kMapAction_variableMap_readWriteAccess = 2 ;
static const uint32_t kMapAction_variableMap_writeAccess = 1 ;

//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton action names                                                 *
//---------------------------------------------------------------------------------------------------------------------*

static const char * kMapActionNames_variableMap [5] = {
  "dropAccess",
  "neutralAccess",
  "readAccess",
  "readWriteAccess",
  "writeAccess"
} ;

//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton transitions                                                  *
//---------------------------------------------------------------------------------------------------------------------*

static const cMapAutomatonTransition kMapTransitions_variableMap [23 * 5] = {
// State 'usedLocalConstant', index 0 
  {kMapState_variableMap_usedLocalConstant /* 0 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedLocalConstant /* 0 */, kMapAutomatonIssueError, "a constant cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedLocalConstant /* 0 */, kMapAutomatonIssueError, "a constant cannot be written"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_usedLocalConstant /* 0 */, kMapAutomatonIssueError, "a constant cannot be drop"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_usedLocalConstant /* 0 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'localConstant', index 1 
  {kMapState_variableMap_usedLocalConstant /* 0 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedLocalConstant /* 0 */, kMapAutomatonIssueError, "a constant cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedLocalConstant /* 0 */, kMapAutomatonIssueError, "a constant cannot be written"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_usedLocalConstant /* 0 */, kMapAutomatonIssueError, "a constant cannot be drop"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_localConstant /* 1 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'undefinedLocalConstant', index 2 
  {kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapAutomatonIssueError, "the constant is undefined"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_localConstant /* 1 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapAutomatonIssueError, "the constant is undefined"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapAutomatonIssueError, "the constant is undefined"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'undefinedLocalVariable', index 3 
  {kMapState_variableMap_undefinedLocalVariable /* 3 */, kMapAutomatonIssueError, "an undefined local variable cannot be read"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_definedLocalVariable /* 4 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_undefinedLocalVariable /* 3 */, kMapAutomatonIssueError, "an undefined local variable cannot be read"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_undefinedLocalVariable /* 3 */, kMapAutomatonIssueWarning, "the local variable has no value"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_undefinedLocalVariable /* 3 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'definedLocalVariable', index 4 
  {kMapState_variableMap_usedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_definedLocalVariable /* 4 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedLocalVariable /* 6 */, kMapAutomatonIssueWarning, "the local variable has been dropped without any read"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_definedLocalVariable /* 4 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'usedLocalVariable', index 5 
  {kMapState_variableMap_usedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_definedLocalVariable /* 4 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_definedLocalVariable /* 4 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_usedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'droppedLocalVariable', index 6 
  {kMapState_variableMap_droppedLocalVariable /* 6 */, kMapAutomatonIssueError, "a dropped local variable cannot be read"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_definedLocalVariable /* 4 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_definedLocalVariable /* 4 */, kMapAutomatonIssueError, "a dropped local variable cannot be read"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedLocalVariable /* 6 */, kMapAutomatonIssueWarning, "the local variable is already dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_droppedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'undefinedOutputFormalArgument', index 7 
  {kMapState_variableMap_undefinedOutputFormalArgument /* 7 */, kMapAutomatonIssueError, "an undefined output formal parameter cannot be read"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_definedOutputFormalArgument /* 8 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_undefinedOutputFormalArgument /* 7 */, kMapAutomatonIssueError, "an undefined output formal parameter cannot be read"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_undefinedOutputFormalArgument /* 7 */, kMapAutomatonIssueWarning, "the output formal parameter has no value"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_undefinedOutputFormalArgument /* 7 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'definedOutputFormalArgument', index 8 
  {kMapState_variableMap_definedOutputFormalArgument /* 8 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_definedOutputFormalArgument /* 8 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_definedOutputFormalArgument /* 8 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_undefinedOutputFormalArgument /* 7 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_definedOutputFormalArgument /* 8 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'unusedInputOutputFormalArgument', index 9 
  {kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_unusedInputOutputFormalArgument /* 9 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'usedInputOutputFormalArgument', index 10 
  {kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'droppedInputOutputFormalArgument', index 11 
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 11 */, kMapAutomatonIssueError, "a dropped input/output formal argument cannot be read"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 11 */, kMapAutomatonIssueError, "a dropped input/output formal argument cannot be read"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 11 */, kMapAutomatonIssueWarning, "the input/output formal argument is already dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'inputOutputFormalArgumentDeclaredAsUnused', index 12 
  {kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapAutomatonIssueWarning, "the input/output formal parameter has been declared as unused"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapAutomatonIssueWarning, "the input/output formal parameter has been declared as unused"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapAutomatonIssueWarning, "the input/output formal parameter has been declared as unused"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 11 */, kMapAutomatonIssueWarning, "the input/output formal parameter has been declared as unused"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'constantInputFormalArgument', index 13 
  {kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be written"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_constantInputFormalArgument /* 13 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'usedConstantInputFormalArgument', index 14 
  {kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be written"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'constantInputFormalArgumentDeclaredAsUnused', index 15 
  {kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapAutomatonIssueWarning, "the constant input formal parameter is declared as unused"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be written"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused /* 15 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'inputFormalParameter', index 16 
  {kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_inputFormalParameter /* 16 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'usedInputFormalArgument', index 17 
  {kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'droppedInputFormalArgument', index 18 
  {kMapState_variableMap_droppedInputFormalArgument /* 18 */, kMapAutomatonIssueError, "a dropped input formal parameter cannot be read"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_droppedInputFormalArgument /* 18 */, kMapAutomatonIssueError, "a dropped input formal parameter cannot be read"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedInputFormalArgument /* 18 */, kMapAutomatonIssueWarning, "the input formal parameter is already dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_droppedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'inputFormalArgumentDeclaredAsUnused', index 19 
  {kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapAutomatonIssueWarning, "the input formal parameter is declared as unused"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapAutomatonIssueWarning, "the input formal parameter is declared as unused"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapAutomatonIssueWarning, "the input formal parameter is declared as unused"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedInputFormalArgument /* 18 */, kMapAutomatonIssueWarning, "the input formal parameter is declared as unused"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'currentInstanceAttribute', index 20 
  {kMapState_variableMap_currentInstanceAttribute /* 20 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_currentInstanceAttribute /* 20 */, kMapAutomatonIssueError, "an attribute cannot be written within a method or a getter"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_currentInstanceAttribute /* 20 */, kMapAutomatonIssueError, "an attribute cannot be modified within a method or a getter"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_currentInstanceAttribute /* 20 */, kMapAutomatonIssueError, "an attribute cannot be dropped within a method or a getter"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_currentInstanceAttribute /* 20 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'currentInstanceAttributeInModifier', index 21 
  {kMapState_variableMap_currentInstanceAttributeInModifier /* 21 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_currentInstanceAttributeInModifier /* 21 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_currentInstanceAttributeInModifier /* 21 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 22 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_currentInstanceAttributeInModifier /* 21 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'currentInstanceDroppedAttributeInModifier', index 22 
  {kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 22 */, kMapAutomatonIssueError, "the attribute cannot be read, it has been dropped"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_currentInstanceAttributeInModifier /* 21 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 22 */, kMapAutomatonIssueError, "the attribute cannot be read/written, it has been dropped"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 22 */, kMapAutomatonIssueWarning, "the attribute is already dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 22 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
} ;

//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton final state issues                                           *
//---------------------------------------------------------------------------------------------------------------------*

static const cMapAutomatonFinalIssue kMapAutomatonFinalIssue_variableMap [23] = {
  {kMapAutomatonNoIssue, ""},// state 'usedLocalConstant' (index 0)
  {kMapAutomatonIssueWarning, "the '%K' constant value is unused"},// state 'localConstant' (index 1)
  {kMapAutomatonIssueWarning, "the '%K' constant value is unused"},// state 'undefinedLocalConstant' (index 2)
  {kMapAutomatonIssueWarning, "the '%K' local variable is unused"},// state 'undefinedLocalVariable' (index 3)
  {kMapAutomatonNoIssue, ""},// state 'definedLocalVariable' (index 4)
  {kMapAutomatonNoIssue, ""},// state 'usedLocalVariable' (index 5)
  {kMapAutomatonNoIssue, ""},// state 'droppedLocalVariable' (index 6)
  {kMapAutomatonIssueError, "the '%K' output formal parameter is undefined"},// state 'undefinedOutputFormalArgument' (index 7)
  {kMapAutomatonNoIssue, ""},// state 'definedOutputFormalArgument' (index 8)
  {kMapAutomatonIssueWarning, "the '%K' input/output formal parameter is unused"},// state 'unusedInputOutputFormalArgument' (index 9)
  {kMapAutomatonNoIssue, ""},// state 'usedInputOutputFormalArgument' (index 10)
  {kMapAutomatonIssueError, "the '%K' input/ouput formal argument should be valuated at the end of the routine"},// state 'droppedInputOutputFormalArgument' (index 11)
  {kMapAutomatonNoIssue, ""},// state 'inputOutputFormalArgumentDeclaredAsUnused' (index 12)
  {kMapAutomatonIssueWarning, "the constant '%K' input formal parameter is not used and is not declared as unused"},// state 'constantInputFormalArgument' (index 13)
  {kMapAutomatonNoIssue, ""},// state 'usedConstantInputFormalArgument' (index 14)
  {kMapAutomatonNoIssue, ""},// state 'constantInputFormalArgumentDeclaredAsUnused' (index 15)
  {kMapAutomatonIssueWarning, "the '%K' input formal parameter is not used and is not declared as unused"},// state 'inputFormalParameter' (index 16)
  {kMapAutomatonNoIssue, ""},// state 'usedInputFormalArgument' (index 17)
  {kMapAutomatonNoIssue, ""},// state 'droppedInputFormalArgument' (index 18)
  {kMapAutomatonNoIssue, ""},// state 'inputFormalArgumentDeclaredAsUnused' (index 19)
  {kMapAutomatonNoIssue, ""},// state 'currentInstanceAttribute' (index 20)
  {kMapAutomatonNoIssue, ""},// state 'currentInstanceAttributeInModifier' (index 21)
  {kMapAutomatonIssueWarning, "the '%K' attribute is in the dropped state at the end of the setter"},// state 'currentInstanceDroppedAttributeInModifier' (index 22)
} ;
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_closeBranch (GALGAS_location inErrorLocation,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  closeBranch (inErrorLocation,
               kMapAutomatonFinalIssue_variableMap,
               #ifndef DO_NOT_GENERATE_CHECKINGS
                 kMapStateCount_variableMap,
               #endif
               inCompiler COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::method_checkAutomatonStates (GALGAS_location inErrorLocation,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  checkAutomatonStates (inErrorLocation, kMapAutomatonFinalIssue_variableMap, inCompiler COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                             map override 'selectBlock'                                              *
//---------------------------------------------------------------------------------------------------------------------*

static const cBranchOverrideTransformationDescriptor kBranchBehaviourForOverride_variableMap_selectBlock [30] = {
  {kMapState_variableMap_localConstant /* 1 */, kMapState_variableMap_usedLocalConstant /* 0 */, kMapState_variableMap_usedLocalConstant /* 0 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapState_variableMap_usedLocalConstant /* 0 */, kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones let it undefined"},
  {kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapState_variableMap_localConstant /* 1 */, kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones let it undefined"},
  {kMapState_variableMap_undefinedLocalVariable /* 3 */, kMapState_variableMap_definedLocalVariable /* 4 */, kMapState_variableMap_definedLocalVariable /* 4 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_undefinedLocalVariable /* 3 */, kMapState_variableMap_usedLocalVariable /* 5 */, kMapState_variableMap_usedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_undefinedLocalVariable /* 3 */, kMapState_variableMap_droppedLocalVariable /* 6 */, kMapState_variableMap_droppedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_definedLocalVariable /* 4 */, kMapState_variableMap_usedLocalVariable /* 5 */, kMapState_variableMap_usedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_definedLocalVariable /* 4 */, kMapState_variableMap_droppedLocalVariable /* 6 */, kMapState_variableMap_droppedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedLocalVariable /* 5 */, kMapState_variableMap_definedLocalVariable /* 4 */, kMapState_variableMap_definedLocalVariable /* 4 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedLocalVariable /* 5 */, kMapState_variableMap_droppedLocalVariable /* 6 */, kMapState_variableMap_droppedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedLocalVariable /* 6 */, kMapState_variableMap_definedLocalVariable /* 4 */, kMapState_variableMap_definedLocalVariable /* 4 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedLocalVariable /* 6 */, kMapState_variableMap_usedLocalVariable /* 5 */, kMapState_variableMap_usedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_undefinedOutputFormalArgument /* 7 */, kMapState_variableMap_definedOutputFormalArgument /* 8 */, kMapState_variableMap_definedOutputFormalArgument /* 8 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_definedOutputFormalArgument /* 8 */, kMapState_variableMap_undefinedOutputFormalArgument /* 7 */, kMapState_variableMap_undefinedOutputFormalArgument /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_unusedInputOutputFormalArgument /* 9 */, kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_unusedInputOutputFormalArgument /* 9 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 11 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 11 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 11 */, kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 12 */, kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 12 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 11 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_constantInputFormalArgument /* 13 */, kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused /* 15 */, kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalParameter /* 16 */, kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalParameter /* 16 */, kMapState_variableMap_droppedInputFormalArgument /* 18 */, kMapState_variableMap_droppedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapState_variableMap_droppedInputFormalArgument /* 18 */, kMapState_variableMap_droppedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedInputFormalArgument /* 18 */, kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 19 */, kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 19 */, kMapState_variableMap_droppedInputFormalArgument /* 18 */, kMapState_variableMap_droppedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_currentInstanceAttributeInModifier /* 21 */, kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 22 */, kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 22 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 22 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 21 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 21 */, kMapAutomatonNoIssue, ""},
} ;

//---------------------------------------------------------------------------------------------------------------------*

static const cBranchOverrideCompatibilityDescriptor kBranchCombinationForOverride_variableMap_selectBlock [42] = {
  {kMapState_variableMap_usedLocalConstant /* 0 */, kMapState_variableMap_localConstant /* 1 */, kMapState_variableMap_usedLocalConstant /* 0 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_localConstant /* 1 */, kMapState_variableMap_usedLocalConstant /* 0 */, kMapState_variableMap_usedLocalConstant /* 0 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_undefinedLocalVariable /* 3 */, kMapState_variableMap_definedLocalVariable /* 4 */, kMapState_variableMap_definedLocalVariable /* 4 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones let it undefined"},
  {kMapState_variableMap_undefinedLocalVariable /* 3 */, kMapState_variableMap_usedLocalVariable /* 5 */, kMapState_variableMap_undefinedLocalVariable /* 3 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones let it undefined"},
  {kMapState_variableMap_undefinedLocalVariable /* 3 */, kMapState_variableMap_droppedLocalVariable /* 6 */, kMapState_variableMap_droppedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_definedLocalVariable /* 4 */, kMapState_variableMap_undefinedLocalVariable /* 3 */, kMapState_variableMap_definedLocalVariable /* 4 */, kMapAutomatonIssueError, "this branch lets the '%K' variable undefined, while previous ones define it"},
  {kMapState_variableMap_definedLocalVariable /* 4 */, kMapState_variableMap_usedLocalVariable /* 5 */, kMapState_variableMap_usedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_definedLocalVariable /* 4 */, kMapState_variableMap_droppedLocalVariable /* 6 */, kMapState_variableMap_definedLocalVariable /* 4 */, kMapAutomatonIssueError, "this branch drops the '%K' variable, while previous ones let it defined"},
  {kMapState_variableMap_usedLocalVariable /* 5 */, kMapState_variableMap_undefinedLocalVariable /* 3 */, kMapState_variableMap_usedLocalVariable /* 5 */, kMapAutomatonIssueError, "this branch lets the '%K' variable undefined, while previous defines let it"},
  {kMapState_variableMap_usedLocalVariable /* 5 */, kMapState_variableMap_definedLocalVariable /* 4 */, kMapState_variableMap_usedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedLocalVariable /* 5 */, kMapState_variableMap_droppedLocalVariable /* 6 */, kMapState_variableMap_usedLocalVariable /* 5 */, kMapAutomatonIssueError, "this branch drops the '%K' variable, while previous ones let it defined"},
  {kMapState_variableMap_droppedLocalVariable /* 6 */, kMapState_variableMap_undefinedLocalVariable /* 3 */, kMapState_variableMap_droppedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedLocalVariable /* 6 */, kMapState_variableMap_definedLocalVariable /* 4 */, kMapState_variableMap_droppedLocalVariable /* 6 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones drop it"},
  {kMapState_variableMap_droppedLocalVariable /* 6 */, kMapState_variableMap_usedLocalVariable /* 5 */, kMapState_variableMap_droppedLocalVariable /* 6 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones drop it"},
  {kMapState_variableMap_undefinedOutputFormalArgument /* 7 */, kMapState_variableMap_definedOutputFormalArgument /* 8 */, kMapState_variableMap_definedOutputFormalArgument /* 8 */, kMapAutomatonIssueError, "this branch defines the '%K' output formal argument, while previous ones let it undefined"},
  {kMapState_variableMap_definedOutputFormalArgument /* 8 */, kMapState_variableMap_undefinedOutputFormalArgument /* 7 */, kMapState_variableMap_definedOutputFormalArgument /* 8 */, kMapAutomatonIssueError, "this branch lets the '%K' variable undefined, while previous ones define it"},
  {kMapState_variableMap_unusedInputOutputFormalArgument /* 9 */, kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_unusedInputOutputFormalArgument /* 9 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 11 */, kMapState_variableMap_unusedInputOutputFormalArgument /* 9 */, kMapAutomatonIssueError, "this branch drops the '%K' input/output formal argument, while previous ones let it undefined"},
  {kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapState_variableMap_unusedInputOutputFormalArgument /* 9 */, kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 11 */, kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapAutomatonIssueError, "this branch drops the '%K' input/output formal argument, while previous ones let it defined"},
  {kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 12 */, kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 11 */, kMapState_variableMap_unusedInputOutputFormalArgument /* 9 */, kMapState_variableMap_unusedInputOutputFormalArgument /* 9 */, kMapAutomatonIssueError, "this branch lets the '%K' input/output formal argument defined, while previous ones drop it"},
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 11 */, kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapAutomatonIssueError, "this branch lets the '%K' input/output formal argument defined, while previous ones drop it"},
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 11 */, kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 12 */, kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 12 */, kMapAutomatonIssueError, "this branch lets the '%K' input formal argument defined, while previous ones drop it"},
  {kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 12 */, kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 12 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 11 */, kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 12 */, kMapAutomatonIssueError, "this branch drops the '%K' input formal argument defined, while previous ones let it defined"},
  {kMapState_variableMap_constantInputFormalArgument /* 13 */, kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapState_variableMap_constantInputFormalArgument /* 13 */, kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused /* 15 */, kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused /* 15 */, kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalParameter /* 16 */, kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalParameter /* 16 */, kMapState_variableMap_droppedInputFormalArgument /* 18 */, kMapState_variableMap_inputFormalParameter /* 16 */, kMapAutomatonIssueError, "this branch drops the '%K' input formal argument, while previous let it defined"},
  {kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapState_variableMap_inputFormalParameter /* 16 */, kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapState_variableMap_droppedInputFormalArgument /* 18 */, kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapAutomatonIssueError, "this branch drops the '%K' input formal argument, while previous ones let it defined"},
  {kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 19 */, kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedInputFormalArgument /* 18 */, kMapState_variableMap_inputFormalParameter /* 16 */, kMapState_variableMap_droppedInputFormalArgument /* 18 */, kMapAutomatonIssueError, "this branch drops the '%K' input formal argument, while previous ones let it defined"},
  {kMapState_variableMap_droppedInputFormalArgument /* 18 */, kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapAutomatonIssueError, "this branch defines the '%K' input formal argument, while previous ones let it dropped"},
  {kMapState_variableMap_droppedInputFormalArgument /* 18 */, kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 19 */, kMapState_variableMap_droppedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 19 */, kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 19 */, kMapState_variableMap_droppedInputFormalArgument /* 18 */, kMapState_variableMap_droppedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_currentInstanceAttributeInModifier /* 21 */, kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 22 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 21 */, kMapAutomatonIssueError, "this branch drops the '%K' attribute, while previous ones let it defined"},
  {kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 22 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 21 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 21 */, kMapAutomatonIssueError, "this branch lets the '%K' attribute defined, while previous ones drop it"},
} ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_openOverrideForSelectBlock (C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  openOverride (kBranchBehaviourForOverride_variableMap_selectBlock, 30,
                kBranchCombinationForOverride_variableMap_selectBlock, 42,
                "selectBlock",
                inCompiler
                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                             map override 'repeatBlock'                                              *
//---------------------------------------------------------------------------------------------------------------------*

static const cBranchOverrideTransformationDescriptor kBranchBehaviourForOverride_variableMap_repeatBlock [30] = {
  {kMapState_variableMap_localConstant /* 1 */, kMapState_variableMap_usedLocalConstant /* 0 */, kMapState_variableMap_usedLocalConstant /* 0 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapState_variableMap_usedLocalConstant /* 0 */, kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapAutomatonIssueError, "the repeated branch should not define the '%K' variable"},
  {kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapState_variableMap_localConstant /* 1 */, kMapState_variableMap_undefinedLocalConstant /* 2 */, kMapAutomatonIssueError, "the repeated branch should not define the '%K' variable"},
  {kMapState_variableMap_undefinedLocalVariable /* 3 */, kMapState_variableMap_definedLocalVariable /* 4 */, kMapState_variableMap_undefinedLocalVariable /* 3 */, kMapAutomatonIssueError, "the repeated branch should not define the '%K' variable"},
  {kMapState_variableMap_undefinedLocalVariable /* 3 */, kMapState_variableMap_usedLocalVariable /* 5 */, kMapState_variableMap_undefinedLocalVariable /* 3 */, kMapAutomatonIssueError, "the repeated branch should not define the '%K' variable"},
  {kMapState_variableMap_undefinedLocalVariable /* 3 */, kMapState_variableMap_droppedLocalVariable /* 6 */, kMapState_variableMap_droppedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_definedLocalVariable /* 4 */, kMapState_variableMap_usedLocalVariable /* 5 */, kMapState_variableMap_usedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_definedLocalVariable /* 4 */, kMapState_variableMap_droppedLocalVariable /* 6 */, kMapState_variableMap_definedLocalVariable /* 4 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' variable"},
  {kMapState_variableMap_usedLocalVariable /* 5 */, kMapState_variableMap_definedLocalVariable /* 4 */, kMapState_variableMap_definedLocalVariable /* 4 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedLocalVariable /* 5 */, kMapState_variableMap_droppedLocalVariable /* 6 */, kMapState_variableMap_usedLocalVariable /* 5 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' variable"},
  {kMapState_variableMap_droppedLocalVariable /* 6 */, kMapState_variableMap_definedLocalVariable /* 4 */, kMapState_variableMap_droppedLocalVariable /* 6 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' variable"},
  {kMapState_variableMap_droppedLocalVariable /* 6 */, kMapState_variableMap_usedLocalVariable /* 5 */, kMapState_variableMap_droppedLocalVariable /* 6 */, kMapAutomatonIssueError, "the repeated branch should not define the dropped '%K' variable"},
  {kMapState_variableMap_undefinedOutputFormalArgument /* 7 */, kMapState_variableMap_definedOutputFormalArgument /* 8 */, kMapState_variableMap_undefinedOutputFormalArgument /* 7 */, kMapAutomatonIssueError, "the repeated branch should not define the '%K' output formal argument"},
  {kMapState_variableMap_definedOutputFormalArgument /* 8 */, kMapState_variableMap_undefinedOutputFormalArgument /* 7 */, kMapState_variableMap_definedOutputFormalArgument /* 8 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' output formal argument"},
  {kMapState_variableMap_unusedInputOutputFormalArgument /* 9 */, kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_unusedInputOutputFormalArgument /* 9 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 11 */, kMapState_variableMap_unusedInputOutputFormalArgument /* 9 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input/output formal argument"},
  {kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 11 */, kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input/output formal argument"},
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 11 */, kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 11 */, kMapAutomatonIssueError, "the repeated branch should define the '%K' input formal argument"},
  {kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 12 */, kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 12 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 11 */, kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 12 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input/output formal argument"},
  {kMapState_variableMap_constantInputFormalArgument /* 13 */, kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused /* 15 */, kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalParameter /* 16 */, kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalParameter /* 16 */, kMapState_variableMap_droppedInputFormalArgument /* 18 */, kMapState_variableMap_inputFormalParameter /* 16 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input formal argument"},
  {kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapState_variableMap_droppedInputFormalArgument /* 18 */, kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input formal argument"},
  {kMapState_variableMap_droppedInputFormalArgument /* 18 */, kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapState_variableMap_droppedInputFormalArgument /* 18 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input formal argument"},
  {kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 19 */, kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 19 */, kMapState_variableMap_droppedInputFormalArgument /* 18 */, kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 19 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input formal argument"},
  {kMapState_variableMap_currentInstanceAttributeInModifier /* 21 */, kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 22 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 21 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' attribute"},
  {kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 22 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 21 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 21 */, kMapAutomatonNoIssue, ""},
} ;

//---------------------------------------------------------------------------------------------------------------------*

static const cBranchOverrideCompatibilityDescriptor kBranchCombinationForOverride_variableMap_repeatBlock [20] = {
  {kMapState_variableMap_usedLocalConstant /* 0 */, kMapState_variableMap_localConstant /* 1 */, kMapState_variableMap_usedLocalConstant /* 0 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_localConstant /* 1 */, kMapState_variableMap_usedLocalConstant /* 0 */, kMapState_variableMap_usedLocalConstant /* 0 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_undefinedLocalVariable /* 3 */, kMapState_variableMap_droppedLocalVariable /* 6 */, kMapState_variableMap_droppedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_definedLocalVariable /* 4 */, kMapState_variableMap_usedLocalVariable /* 5 */, kMapState_variableMap_usedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedLocalVariable /* 5 */, kMapState_variableMap_definedLocalVariable /* 4 */, kMapState_variableMap_usedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedLocalVariable /* 6 */, kMapState_variableMap_undefinedLocalVariable /* 3 */, kMapState_variableMap_droppedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_unusedInputOutputFormalArgument /* 9 */, kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapState_variableMap_unusedInputOutputFormalArgument /* 9 */, kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 12 */, kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 12 */, kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapState_variableMap_usedInputOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_constantInputFormalArgument /* 13 */, kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapState_variableMap_constantInputFormalArgument /* 13 */, kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused /* 15 */, kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused /* 15 */, kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapState_variableMap_usedConstantInputFormalArgument /* 14 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalParameter /* 16 */, kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapState_variableMap_inputFormalParameter /* 16 */, kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 19 */, kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 19 */, kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapState_variableMap_usedInputFormalArgument /* 17 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_currentInstanceAttributeInModifier /* 21 */, kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 22 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 21 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 22 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 21 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 21 */, kMapAutomatonNoIssue, ""},
} ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_openOverrideForRepeatBlock (C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  openOverride (kBranchBehaviourForOverride_variableMap_repeatBlock, 30,
                kBranchCombinationForOverride_variableMap_repeatBlock, 20,
                "repeatBlock",
                inCompiler
                COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_insertMutableAttribute (GALGAS_lstring inKey,
                                                          GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                          GALGAS_string inArgument1,
                                                          GALGAS_string inArgument2,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' attribute (previous declaration was in %L)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        kMapState_variableMap_currentInstanceAttributeInModifier,
                        kMapStateNames_variableMap [kMapState_variableMap_currentInstanceAttributeInModifier],
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_insertNonMutableAttribute (GALGAS_lstring inKey,
                                                             GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                             GALGAS_string inArgument1,
                                                             GALGAS_string inArgument2,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' attribute (previous declaration was in %L)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        kMapState_variableMap_currentInstanceAttribute,
                        kMapStateNames_variableMap [kMapState_variableMap_currentInstanceAttribute],
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_insertUndefinedLocalVariable (GALGAS_lstring inKey,
                                                                GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                                GALGAS_string inArgument1,
                                                                GALGAS_string inArgument2,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        kMapState_variableMap_undefinedLocalVariable,
                        kMapStateNames_variableMap [kMapState_variableMap_undefinedLocalVariable],
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_insertDefinedLocalVariable (GALGAS_lstring inKey,
                                                              GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                              GALGAS_string inArgument1,
                                                              GALGAS_string inArgument2,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        kMapState_variableMap_definedLocalVariable,
                        kMapStateNames_variableMap [kMapState_variableMap_definedLocalVariable],
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_insertUndefinedLocalConstant (GALGAS_lstring inKey,
                                                                GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                                GALGAS_string inArgument1,
                                                                GALGAS_string inArgument2,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        kMapState_variableMap_undefinedLocalConstant,
                        kMapStateNames_variableMap [kMapState_variableMap_undefinedLocalConstant],
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_insertLocalConstant (GALGAS_lstring inKey,
                                                       GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                       GALGAS_string inArgument1,
                                                       GALGAS_string inArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        kMapState_variableMap_localConstant,
                        kMapStateNames_variableMap [kMapState_variableMap_localConstant],
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_insertUsedLocalConstant (GALGAS_lstring inKey,
                                                           GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                           GALGAS_string inArgument1,
                                                           GALGAS_string inArgument2,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        kMapState_variableMap_usedLocalConstant,
                        kMapStateNames_variableMap [kMapState_variableMap_usedLocalConstant],
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_insertInputFormalArgument (GALGAS_lstring inKey,
                                                             GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                             GALGAS_string inArgument1,
                                                             GALGAS_string inArgument2,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        kMapState_variableMap_inputFormalParameter,
                        kMapStateNames_variableMap [kMapState_variableMap_inputFormalParameter],
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_insertInputFormalArgumentDeclaredAsUnused (GALGAS_lstring inKey,
                                                                             GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                                             GALGAS_string inArgument1,
                                                                             GALGAS_string inArgument2,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        kMapState_variableMap_inputFormalArgumentDeclaredAsUnused,
                        kMapStateNames_variableMap [kMapState_variableMap_inputFormalArgumentDeclaredAsUnused],
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_insertConstantInputFormalArgument (GALGAS_lstring inKey,
                                                                     GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                                     GALGAS_string inArgument1,
                                                                     GALGAS_string inArgument2,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        kMapState_variableMap_constantInputFormalArgument,
                        kMapStateNames_variableMap [kMapState_variableMap_constantInputFormalArgument],
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_insertConstantInputFormalArgumentDeclaredAsUnused (GALGAS_lstring inKey,
                                                                                     GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                                                     GALGAS_string inArgument1,
                                                                                     GALGAS_string inArgument2,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused,
                        kMapStateNames_variableMap [kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused],
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_insertOutputFormalArgument (GALGAS_lstring inKey,
                                                              GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                              GALGAS_string inArgument1,
                                                              GALGAS_string inArgument2,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        kMapState_variableMap_undefinedOutputFormalArgument,
                        kMapStateNames_variableMap [kMapState_variableMap_undefinedOutputFormalArgument],
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_insertInputOutputFormalArgument (GALGAS_lstring inKey,
                                                                   GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                                   GALGAS_string inArgument1,
                                                                   GALGAS_string inArgument2,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        kMapState_variableMap_unusedInputOutputFormalArgument,
                        kMapStateNames_variableMap [kMapState_variableMap_unusedInputOutputFormalArgument],
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_insertInputOutputFormalArgumentDeclaredAsUnused (GALGAS_lstring inKey,
                                                                                   GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                                                   GALGAS_string inArgument1,
                                                                                   GALGAS_string inArgument2,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused,
                        kMapStateNames_variableMap [kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused],
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_variableMap_searchForReadAccess = "the '%K' variable is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_searchForReadAccess (GALGAS_lstring inKey,
                                                       GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                       GALGAS_string & outArgument1,
                                                       GALGAS_string & outArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kMapAction_variableMap_readAccess,
                                                                                         kMapTransitions_variableMap,
                                                                                         kMapActionCount_variableMap,
                                                                                         kMapStateNames_variableMap,
                                                                                         kMapActionNames_variableMap,
                                                                                         #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                           kMapStateCount_variableMap,
                                                                                         #endif
                                                                                         kSearchErrorMessage_variableMap_searchForReadAccess
                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_variableMap) ;
    outArgument0 = p->mAttribute_mTypeProxy ;
    outArgument1 = p->mAttribute_mCppName ;
    outArgument2 = p->mAttribute_mNameForCheckingFormalParameterUsing ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_variableMap_searchForWriteAccess = "the '%K' variable is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_searchForWriteAccess (GALGAS_lstring inKey,
                                                        GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                        GALGAS_string & outArgument1,
                                                        GALGAS_string & outArgument2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kMapAction_variableMap_writeAccess,
                                                                                         kMapTransitions_variableMap,
                                                                                         kMapActionCount_variableMap,
                                                                                         kMapStateNames_variableMap,
                                                                                         kMapActionNames_variableMap,
                                                                                         #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                           kMapStateCount_variableMap,
                                                                                         #endif
                                                                                         kSearchErrorMessage_variableMap_searchForWriteAccess
                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_variableMap) ;
    outArgument0 = p->mAttribute_mTypeProxy ;
    outArgument1 = p->mAttribute_mCppName ;
    outArgument2 = p->mAttribute_mNameForCheckingFormalParameterUsing ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_variableMap_searchForReadWriteAccess = "the '%K' variable is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_searchForReadWriteAccess (GALGAS_lstring inKey,
                                                            GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                            GALGAS_string & outArgument1,
                                                            GALGAS_string & outArgument2,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kMapAction_variableMap_readWriteAccess,
                                                                                         kMapTransitions_variableMap,
                                                                                         kMapActionCount_variableMap,
                                                                                         kMapStateNames_variableMap,
                                                                                         kMapActionNames_variableMap,
                                                                                         #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                           kMapStateCount_variableMap,
                                                                                         #endif
                                                                                         kSearchErrorMessage_variableMap_searchForReadWriteAccess
                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_variableMap) ;
    outArgument0 = p->mAttribute_mTypeProxy ;
    outArgument1 = p->mAttribute_mCppName ;
    outArgument2 = p->mAttribute_mNameForCheckingFormalParameterUsing ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_variableMap_searchForDropAccess = "the '%K' variable is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_searchForDropAccess (GALGAS_lstring inKey,
                                                       GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                       GALGAS_string & outArgument1,
                                                       GALGAS_string & outArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kMapAction_variableMap_dropAccess,
                                                                                         kMapTransitions_variableMap,
                                                                                         kMapActionCount_variableMap,
                                                                                         kMapStateNames_variableMap,
                                                                                         kMapActionNames_variableMap,
                                                                                         #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                           kMapStateCount_variableMap,
                                                                                         #endif
                                                                                         kSearchErrorMessage_variableMap_searchForDropAccess
                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_variableMap) ;
    outArgument0 = p->mAttribute_mTypeProxy ;
    outArgument1 = p->mAttribute_mCppName ;
    outArgument2 = p->mAttribute_mNameForCheckingFormalParameterUsing ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_variableMap_neutralAccess = "the '%K' variable is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_neutralAccess (GALGAS_lstring inKey,
                                                 GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                 GALGAS_string & outArgument1,
                                                 GALGAS_string & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kMapAction_variableMap_neutralAccess,
                                                                                         kMapTransitions_variableMap,
                                                                                         kMapActionCount_variableMap,
                                                                                         kMapStateNames_variableMap,
                                                                                         kMapActionNames_variableMap,
                                                                                         #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                           kMapStateCount_variableMap,
                                                                                         #endif
                                                                                         kSearchErrorMessage_variableMap_neutralAccess
                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_variableMap) ;
    outArgument0 = p->mAttribute_mTypeProxy ;
    outArgument1 = p->mAttribute_mCppName ;
    outArgument2 = p->mAttribute_mNameForCheckingFormalParameterUsing ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_variableMap::reader_mTypeProxyForKey (const GALGAS_string & inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mAttribute_mTypeProxy ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_variableMap::reader_mCppNameForKey (const GALGAS_string & inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mAttribute_mCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_variableMap::reader_mNameForCheckingFormalParameterUsingForKey (const GALGAS_string & inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mAttribute_mNameForCheckingFormalParameterUsing ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_setMTypeProxyForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_variableMap * p = (cMapElement_variableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    p->mAttribute_mTypeProxy = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_setMCppNameForKey (GALGAS_string inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_variableMap * p = (cMapElement_variableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    p->mAttribute_mCppName = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_setMNameForCheckingFormalParameterUsingForKey (GALGAS_string inAttributeValue,
                                                                                 GALGAS_string inKey,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_variableMap * p = (cMapElement_variableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    p->mAttribute_mNameForCheckingFormalParameterUsing = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_variableMap * GALGAS_variableMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                 const GALGAS_string & inKey
                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * result = (cMapElement_variableMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_variableMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_variableMap::cEnumerator_variableMap (const GALGAS_variableMap & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_variableMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_variableMap::current_mTypeProxy (LOCATION_ARGS) const {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_variableMap) ;
  return p->mAttribute_mTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_variableMap::current_mCppName (LOCATION_ARGS) const {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_variableMap) ;
  return p->mAttribute_mCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_variableMap::current_mNameForCheckingFormalParameterUsing (LOCATION_ARGS) const {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_variableMap) ;
  return p->mAttribute_mNameForCheckingFormalParameterUsing ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @variableMap type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_variableMap ("variableMap",
                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_variableMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_variableMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_variableMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_variableMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap GALGAS_variableMap::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_variableMap result ;
  const GALGAS_variableMap * p = (const GALGAS_variableMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_variableMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("variableMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap_2D_proxy::GALGAS_variableMap_2D_proxy (void) :
AC_GALGAS_uniqueMapProxy () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap_2D_proxy GALGAS_variableMap_2D_proxy::constructor_null (LOCATION_ARGS) {
  GALGAS_variableMap_2D_proxy result ;
  result.makeNullProxy (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap_2D_proxy::class_method_makeProxy (GALGAS_variableMap & ioMap,
                                                          GALGAS_lstring inKey,
                                                          GALGAS_variableMap_2D_proxy & outProxy
                                                          COMMA_LOCATION_ARGS) {
  outProxy.internalMakeProxy (ioMap, inKey COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap_2D_proxy::class_method_makeProxyFromString (GALGAS_variableMap & ioMap,
                                                                    GALGAS_string inKey,
                                                                    GALGAS_variableMap_2D_proxy & outProxy
                                                                    COMMA_LOCATION_ARGS) {
  outProxy.internalMakeProxyFromString (ioMap, inKey COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_variableMap_2D_proxy::reader_mTypeProxy (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) getAttributeListPointer (inCompiler, "mTypeProxy" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mAttribute_mTypeProxy;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_variableMap_2D_proxy::reader_mCppName (C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) getAttributeListPointer (inCompiler, "mCppName" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mAttribute_mCppName;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_variableMap_2D_proxy::reader_mNameForCheckingFormalParameterUsing (C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) getAttributeListPointer (inCompiler, "mNameForCheckingFormalParameterUsing" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mAttribute_mNameForCheckingFormalParameterUsing;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap_2D_proxy GALGAS_variableMap_2D_proxy::constructor_searchForReadAccess (const GALGAS_variableMap & inMap,
                                                                                          const GALGAS_lstring & inKey,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_variableMap_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_variableMap_searchForReadAccess, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap_2D_proxy GALGAS_variableMap_2D_proxy::constructor_searchForWriteAccess (const GALGAS_variableMap & inMap,
                                                                                           const GALGAS_lstring & inKey,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_variableMap_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_variableMap_searchForWriteAccess, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap_2D_proxy GALGAS_variableMap_2D_proxy::constructor_searchForReadWriteAccess (const GALGAS_variableMap & inMap,
                                                                                               const GALGAS_lstring & inKey,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_variableMap_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_variableMap_searchForReadWriteAccess, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap_2D_proxy GALGAS_variableMap_2D_proxy::constructor_searchForDropAccess (const GALGAS_variableMap & inMap,
                                                                                          const GALGAS_lstring & inKey,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_variableMap_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_variableMap_searchForDropAccess, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap_2D_proxy GALGAS_variableMap_2D_proxy::constructor_neutralAccess (const GALGAS_variableMap & inMap,
                                                                                    const GALGAS_lstring & inKey,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_variableMap_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_variableMap_neutralAccess, inCompiler COMMA_THERE) ;
  return result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @variableMap-proxy type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_variableMap_2D_proxy ("variableMap-proxy",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_variableMap_2D_proxy::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_variableMap_2D_proxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_variableMap_2D_proxy::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_variableMap_2D_proxy (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap_2D_proxy GALGAS_variableMap_2D_proxy::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_variableMap_2D_proxy result ;
  const GALGAS_variableMap_2D_proxy * p = (const GALGAS_variableMap_2D_proxy *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_variableMap_2D_proxy *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("variableMap-proxy", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Class for element of '@collectionValueElementListForGeneration' list                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_collectionValueElementListForGeneration : public cCollectionElement {
  public : GALGAS_collectionValueElementListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_collectionValueElementListForGeneration (const GALGAS_abstractCollectionValueElementForGeneration & in_mElement
                                                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_collectionValueElementListForGeneration::cCollectionElement_collectionValueElementListForGeneration (const GALGAS_abstractCollectionValueElementForGeneration & in_mElement
                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_collectionValueElementListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_collectionValueElementListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_collectionValueElementListForGeneration (mObject.mAttribute_mElement COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_collectionValueElementListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mElement" ":" ;
  mObject.mAttribute_mElement.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_collectionValueElementListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_collectionValueElementListForGeneration * operand = (cCollectionElement_collectionValueElementListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_collectionValueElementListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementListForGeneration::GALGAS_collectionValueElementListForGeneration (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementListForGeneration::GALGAS_collectionValueElementListForGeneration (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementListForGeneration GALGAS_collectionValueElementListForGeneration::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_collectionValueElementListForGeneration result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementListForGeneration GALGAS_collectionValueElementListForGeneration::constructor_listWithValue (const GALGAS_abstractCollectionValueElementForGeneration & inOperand0
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_collectionValueElementListForGeneration result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_collectionValueElementListForGeneration::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_collectionValueElementListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                const GALGAS_abstractCollectionValueElementForGeneration & in_mElement
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_collectionValueElementListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_collectionValueElementListForGeneration (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_collectionValueElementListForGeneration::addAssign_operation (const GALGAS_abstractCollectionValueElementForGeneration & inOperand0
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_collectionValueElementListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_collectionValueElementListForGeneration::modifier_insertAtIndex (const GALGAS_abstractCollectionValueElementForGeneration inOperand0,
                                                                             const GALGAS_uint inInsertionIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_collectionValueElementListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_collectionValueElementListForGeneration::modifier_removeAtIndex (GALGAS_abstractCollectionValueElementForGeneration & outOperand0,
                                                                             const GALGAS_uint inRemoveIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_collectionValueElementListForGeneration * p = (cCollectionElement_collectionValueElementListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_collectionValueElementListForGeneration) ;
      outOperand0 = p->mObject.mAttribute_mElement ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_collectionValueElementListForGeneration::modifier_popFirst (GALGAS_abstractCollectionValueElementForGeneration & outOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementListForGeneration * p = (cCollectionElement_collectionValueElementListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_collectionValueElementListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mElement ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_collectionValueElementListForGeneration::modifier_popLast (GALGAS_abstractCollectionValueElementForGeneration & outOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementListForGeneration * p = (cCollectionElement_collectionValueElementListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_collectionValueElementListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mElement ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_collectionValueElementListForGeneration::method_first (GALGAS_abstractCollectionValueElementForGeneration & outOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementListForGeneration * p = (cCollectionElement_collectionValueElementListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_collectionValueElementListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mElement ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_collectionValueElementListForGeneration::method_last (GALGAS_abstractCollectionValueElementForGeneration & outOperand0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementListForGeneration * p = (cCollectionElement_collectionValueElementListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_collectionValueElementListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mElement ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementListForGeneration GALGAS_collectionValueElementListForGeneration::operator_concat (const GALGAS_collectionValueElementListForGeneration & inOperand
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_collectionValueElementListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementListForGeneration GALGAS_collectionValueElementListForGeneration::add_operation (const GALGAS_collectionValueElementListForGeneration & inOperand,
                                                                                                              C_Compiler * /* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_collectionValueElementListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementListForGeneration GALGAS_collectionValueElementListForGeneration::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_collectionValueElementListForGeneration result = GALGAS_collectionValueElementListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementListForGeneration GALGAS_collectionValueElementListForGeneration::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_collectionValueElementListForGeneration result = GALGAS_collectionValueElementListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_collectionValueElementListForGeneration::dotAssign_operation (const GALGAS_collectionValueElementListForGeneration inOperand
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractCollectionValueElementForGeneration GALGAS_collectionValueElementListForGeneration::reader_mElementAtIndex (const GALGAS_uint & inIndex,
                                                                                                                           C_Compiler * inCompiler
                                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementListForGeneration * p = (cCollectionElement_collectionValueElementListForGeneration *) attributes.ptr () ;
  GALGAS_abstractCollectionValueElementForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_collectionValueElementListForGeneration) ;
    result = p->mObject.mAttribute_mElement ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_collectionValueElementListForGeneration::cEnumerator_collectionValueElementListForGeneration (const GALGAS_collectionValueElementListForGeneration & inEnumeratedObject,
                                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementListForGeneration_2D_element cEnumerator_collectionValueElementListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_collectionValueElementListForGeneration * p = (const cCollectionElement_collectionValueElementListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_collectionValueElementListForGeneration) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractCollectionValueElementForGeneration cEnumerator_collectionValueElementListForGeneration::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_collectionValueElementListForGeneration * p = (const cCollectionElement_collectionValueElementListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_collectionValueElementListForGeneration) ;
  return p->mObject.mAttribute_mElement ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @collectionValueElementListForGeneration type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_collectionValueElementListForGeneration ("collectionValueElementListForGeneration",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_collectionValueElementListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueElementListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_collectionValueElementListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_collectionValueElementListForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementListForGeneration GALGAS_collectionValueElementListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_collectionValueElementListForGeneration result ;
  const GALGAS_collectionValueElementListForGeneration * p = (const GALGAS_collectionValueElementListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_collectionValueElementListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("collectionValueElementListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@localConstantList' list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_localConstantList : public cCollectionElement {
  public : GALGAS_localConstantList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_localConstantList (const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                 const GALGAS_lstring & in_mName,
                                                 const GALGAS_bool & in_mNoWarningIfUnused,
                                                 const GALGAS_string & in_mCppName
                                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_localConstantList::cCollectionElement_localConstantList (const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                                            const GALGAS_lstring & in_mName,
                                                                            const GALGAS_bool & in_mNoWarningIfUnused,
                                                                            const GALGAS_string & in_mCppName
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType, in_mName, in_mNoWarningIfUnused, in_mCppName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_localConstantList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_localConstantList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_localConstantList (mObject.mAttribute_mType, mObject.mAttribute_mName, mObject.mAttribute_mNoWarningIfUnused, mObject.mAttribute_mCppName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_localConstantList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mAttribute_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mAttribute_mName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNoWarningIfUnused" ":" ;
  mObject.mAttribute_mNoWarningIfUnused.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCppName" ":" ;
  mObject.mAttribute_mCppName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_localConstantList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_localConstantList * operand = (cCollectionElement_localConstantList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_localConstantList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localConstantList::GALGAS_localConstantList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localConstantList::GALGAS_localConstantList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localConstantList GALGAS_localConstantList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_localConstantList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localConstantList GALGAS_localConstantList::constructor_listWithValue (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                              const GALGAS_lstring & inOperand1,
                                                                              const GALGAS_bool & inOperand2,
                                                                              const GALGAS_string & inOperand3
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_localConstantList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_localConstantList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_localConstantList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                          const GALGAS_lstring & in_mName,
                                                          const GALGAS_bool & in_mNoWarningIfUnused,
                                                          const GALGAS_string & in_mCppName
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_localConstantList * p = NULL ;
  macroMyNew (p, cCollectionElement_localConstantList (in_mType,
                                                       in_mName,
                                                       in_mNoWarningIfUnused,
                                                       in_mCppName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_localConstantList::addAssign_operation (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                    const GALGAS_lstring & inOperand1,
                                                    const GALGAS_bool & inOperand2,
                                                    const GALGAS_string & inOperand3
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_localConstantList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_localConstantList::modifier_insertAtIndex (const GALGAS_unifiedTypeMap_2D_proxy inOperand0,
                                                       const GALGAS_lstring inOperand1,
                                                       const GALGAS_bool inOperand2,
                                                       const GALGAS_string inOperand3,
                                                       const GALGAS_uint inInsertionIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_localConstantList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_localConstantList::modifier_removeAtIndex (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_bool & outOperand2,
                                                       GALGAS_string & outOperand3,
                                                       const GALGAS_uint inRemoveIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_localConstantList) ;
      outOperand0 = p->mObject.mAttribute_mType ;
      outOperand1 = p->mObject.mAttribute_mName ;
      outOperand2 = p->mObject.mAttribute_mNoWarningIfUnused ;
      outOperand3 = p->mObject.mAttribute_mCppName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_localConstantList::modifier_popFirst (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  GALGAS_bool & outOperand2,
                                                  GALGAS_string & outOperand3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
    outOperand1 = p->mObject.mAttribute_mName ;
    outOperand2 = p->mObject.mAttribute_mNoWarningIfUnused ;
    outOperand3 = p->mObject.mAttribute_mCppName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_localConstantList::modifier_popLast (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_bool & outOperand2,
                                                 GALGAS_string & outOperand3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
    outOperand1 = p->mObject.mAttribute_mName ;
    outOperand2 = p->mObject.mAttribute_mNoWarningIfUnused ;
    outOperand3 = p->mObject.mAttribute_mCppName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_localConstantList::method_first (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                             GALGAS_lstring & outOperand1,
                                             GALGAS_bool & outOperand2,
                                             GALGAS_string & outOperand3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
    outOperand1 = p->mObject.mAttribute_mName ;
    outOperand2 = p->mObject.mAttribute_mNoWarningIfUnused ;
    outOperand3 = p->mObject.mAttribute_mCppName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_localConstantList::method_last (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                            GALGAS_lstring & outOperand1,
                                            GALGAS_bool & outOperand2,
                                            GALGAS_string & outOperand3,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
    outOperand1 = p->mObject.mAttribute_mName ;
    outOperand2 = p->mObject.mAttribute_mNoWarningIfUnused ;
    outOperand3 = p->mObject.mAttribute_mCppName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localConstantList GALGAS_localConstantList::operator_concat (const GALGAS_localConstantList & inOperand
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_localConstantList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localConstantList GALGAS_localConstantList::add_operation (const GALGAS_localConstantList & inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_localConstantList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localConstantList GALGAS_localConstantList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_localConstantList result = GALGAS_localConstantList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localConstantList GALGAS_localConstantList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_localConstantList result = GALGAS_localConstantList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_localConstantList::dotAssign_operation (const GALGAS_localConstantList inOperand
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_localConstantList::reader_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    result = p->mObject.mAttribute_mType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_localConstantList::reader_mNameAtIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    result = p->mObject.mAttribute_mName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_localConstantList::reader_mNoWarningIfUnusedAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    result = p->mObject.mAttribute_mNoWarningIfUnused ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_localConstantList::reader_mCppNameAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    result = p->mObject.mAttribute_mCppName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_localConstantList::cEnumerator_localConstantList (const GALGAS_localConstantList & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localConstantList_2D_element cEnumerator_localConstantList::current (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_localConstantList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject.mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_localConstantList::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject.mAttribute_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_localConstantList::current_mNoWarningIfUnused (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject.mAttribute_mNoWarningIfUnused ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_localConstantList::current_mCppName (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject.mAttribute_mCppName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @localConstantList type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localConstantList ("localConstantList",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_localConstantList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localConstantList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_localConstantList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localConstantList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localConstantList GALGAS_localConstantList::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_localConstantList result ;
  const GALGAS_localConstantList * p = (const GALGAS_localConstantList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localConstantList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localConstantList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@localInitializedVariableList' list                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_localInitializedVariableList : public cCollectionElement {
  public : GALGAS_localInitializedVariableList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_localInitializedVariableList (const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                            const GALGAS_lstring & in_mName,
                                                            const GALGAS_string & in_mCppName
                                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_localInitializedVariableList::cCollectionElement_localInitializedVariableList (const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                                                                  const GALGAS_lstring & in_mName,
                                                                                                  const GALGAS_string & in_mCppName
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType, in_mName, in_mCppName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_localInitializedVariableList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_localInitializedVariableList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_localInitializedVariableList (mObject.mAttribute_mType, mObject.mAttribute_mName, mObject.mAttribute_mCppName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_localInitializedVariableList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mAttribute_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mAttribute_mName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCppName" ":" ;
  mObject.mAttribute_mCppName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_localInitializedVariableList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_localInitializedVariableList * operand = (cCollectionElement_localInitializedVariableList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_localInitializedVariableList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localInitializedVariableList::GALGAS_localInitializedVariableList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localInitializedVariableList::GALGAS_localInitializedVariableList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localInitializedVariableList GALGAS_localInitializedVariableList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_localInitializedVariableList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localInitializedVariableList GALGAS_localInitializedVariableList::constructor_listWithValue (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1,
                                                                                                    const GALGAS_string & inOperand2
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_localInitializedVariableList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_localInitializedVariableList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_localInitializedVariableList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                                     const GALGAS_lstring & in_mName,
                                                                     const GALGAS_string & in_mCppName
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_localInitializedVariableList * p = NULL ;
  macroMyNew (p, cCollectionElement_localInitializedVariableList (in_mType,
                                                                  in_mName,
                                                                  in_mCppName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_localInitializedVariableList::addAssign_operation (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                               const GALGAS_lstring & inOperand1,
                                                               const GALGAS_string & inOperand2
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_localInitializedVariableList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_localInitializedVariableList::modifier_insertAtIndex (const GALGAS_unifiedTypeMap_2D_proxy inOperand0,
                                                                  const GALGAS_lstring inOperand1,
                                                                  const GALGAS_string inOperand2,
                                                                  const GALGAS_uint inInsertionIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_localInitializedVariableList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_localInitializedVariableList::modifier_removeAtIndex (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                                  GALGAS_lstring & outOperand1,
                                                                  GALGAS_string & outOperand2,
                                                                  const GALGAS_uint inRemoveIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
      outOperand0 = p->mObject.mAttribute_mType ;
      outOperand1 = p->mObject.mAttribute_mName ;
      outOperand2 = p->mObject.mAttribute_mCppName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_localInitializedVariableList::modifier_popFirst (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                             GALGAS_lstring & outOperand1,
                                                             GALGAS_string & outOperand2,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
    outOperand1 = p->mObject.mAttribute_mName ;
    outOperand2 = p->mObject.mAttribute_mCppName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_localInitializedVariableList::modifier_popLast (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            GALGAS_string & outOperand2,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
    outOperand1 = p->mObject.mAttribute_mName ;
    outOperand2 = p->mObject.mAttribute_mCppName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_localInitializedVariableList::method_first (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_string & outOperand2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
    outOperand1 = p->mObject.mAttribute_mName ;
    outOperand2 = p->mObject.mAttribute_mCppName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_localInitializedVariableList::method_last (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_string & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
    outOperand1 = p->mObject.mAttribute_mName ;
    outOperand2 = p->mObject.mAttribute_mCppName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localInitializedVariableList GALGAS_localInitializedVariableList::operator_concat (const GALGAS_localInitializedVariableList & inOperand
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_localInitializedVariableList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localInitializedVariableList GALGAS_localInitializedVariableList::add_operation (const GALGAS_localInitializedVariableList & inOperand,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_localInitializedVariableList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localInitializedVariableList GALGAS_localInitializedVariableList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_localInitializedVariableList result = GALGAS_localInitializedVariableList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localInitializedVariableList GALGAS_localInitializedVariableList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_localInitializedVariableList result = GALGAS_localInitializedVariableList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_localInitializedVariableList::dotAssign_operation (const GALGAS_localInitializedVariableList inOperand
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_localInitializedVariableList::reader_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    result = p->mObject.mAttribute_mType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_localInitializedVariableList::reader_mNameAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    result = p->mObject.mAttribute_mName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_localInitializedVariableList::reader_mCppNameAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    result = p->mObject.mAttribute_mCppName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_localInitializedVariableList::cEnumerator_localInitializedVariableList (const GALGAS_localInitializedVariableList & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localInitializedVariableList_2D_element cEnumerator_localInitializedVariableList::current (LOCATION_ARGS) const {
  const cCollectionElement_localInitializedVariableList * p = (const cCollectionElement_localInitializedVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_localInitializedVariableList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_localInitializedVariableList * p = (const cCollectionElement_localInitializedVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
  return p->mObject.mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_localInitializedVariableList::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_localInitializedVariableList * p = (const cCollectionElement_localInitializedVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
  return p->mObject.mAttribute_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_localInitializedVariableList::current_mCppName (LOCATION_ARGS) const {
  const cCollectionElement_localInitializedVariableList * p = (const cCollectionElement_localInitializedVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
  return p->mObject.mAttribute_mCppName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @localInitializedVariableList type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localInitializedVariableList ("localInitializedVariableList",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_localInitializedVariableList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localInitializedVariableList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_localInitializedVariableList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localInitializedVariableList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localInitializedVariableList GALGAS_localInitializedVariableList::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_localInitializedVariableList result ;
  const GALGAS_localInitializedVariableList * p = (const GALGAS_localInitializedVariableList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localInitializedVariableList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localInitializedVariableList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_attributeIndexMap::cMapElement_attributeIndexMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_unifiedTypeMap_2D_proxy & in_mAttributeTypeIndex
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mAttributeTypeIndex (in_mAttributeTypeIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_attributeIndexMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mAttributeTypeIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_attributeIndexMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_attributeIndexMap (mAttribute_lkey, mAttribute_mAttributeTypeIndex COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_attributeIndexMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeTypeIndex" ":" ;
  mAttribute_mAttributeTypeIndex.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_attributeIndexMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_attributeIndexMap * operand = (cMapElement_attributeIndexMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mAttributeTypeIndex.objectCompare (operand->mAttribute_mAttributeTypeIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeIndexMap::GALGAS_attributeIndexMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeIndexMap::GALGAS_attributeIndexMap (const GALGAS_attributeIndexMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeIndexMap & GALGAS_attributeIndexMap::operator = (const GALGAS_attributeIndexMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeIndexMap GALGAS_attributeIndexMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_attributeIndexMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeIndexMap GALGAS_attributeIndexMap::constructor_mapWithMapToOverride (const GALGAS_attributeIndexMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_attributeIndexMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeIndexMap GALGAS_attributeIndexMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_attributeIndexMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_attributeIndexMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    const GALGAS_unifiedTypeMap_2D_proxy & inArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_attributeIndexMap * p = NULL ;
  macroMyNew (p, cMapElement_attributeIndexMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@attributeIndexMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_attributeIndexMap::modifier_insertKey (GALGAS_lstring inKey,
                                                   GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_attributeIndexMap * p = NULL ;
  macroMyNew (p, cMapElement_attributeIndexMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' attribute is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_attributeIndexMap_searchKey = "the '%K' attribute is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_attributeIndexMap::method_searchKey (GALGAS_lstring inKey,
                                                 GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_attributeIndexMap * p = (const cMapElement_attributeIndexMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_attributeIndexMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_attributeIndexMap) ;
    outArgument0 = p->mAttribute_mAttributeTypeIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_attributeIndexMap::reader_mAttributeTypeIndexForKey (const GALGAS_string & inKey,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_attributeIndexMap * p = (const cMapElement_attributeIndexMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_attributeIndexMap) ;
    result = p->mAttribute_mAttributeTypeIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_attributeIndexMap::modifier_setMAttributeTypeIndexForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                                      GALGAS_string inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_attributeIndexMap * p = (cMapElement_attributeIndexMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_attributeIndexMap) ;
    p->mAttribute_mAttributeTypeIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_attributeIndexMap * GALGAS_attributeIndexMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_attributeIndexMap * result = (cMapElement_attributeIndexMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_attributeIndexMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_attributeIndexMap::cEnumerator_attributeIndexMap (const GALGAS_attributeIndexMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeIndexMap_2D_element cEnumerator_attributeIndexMap::current (LOCATION_ARGS) const {
  const cMapElement_attributeIndexMap * p = (const cMapElement_attributeIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_attributeIndexMap) ;
  return GALGAS_attributeIndexMap_2D_element (p->mAttribute_lkey, p->mAttribute_mAttributeTypeIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_attributeIndexMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_attributeIndexMap::current_mAttributeTypeIndex (LOCATION_ARGS) const {
  const cMapElement_attributeIndexMap * p = (const cMapElement_attributeIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_attributeIndexMap) ;
  return p->mAttribute_mAttributeTypeIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @attributeIndexMap type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_attributeIndexMap ("attributeIndexMap",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_attributeIndexMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_attributeIndexMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_attributeIndexMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_attributeIndexMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeIndexMap GALGAS_attributeIndexMap::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_attributeIndexMap result ;
  const GALGAS_attributeIndexMap * p = (const GALGAS_attributeIndexMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_attributeIndexMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("attributeIndexMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_insertMethodMap::cMapElement_insertMethodMap (const GALGAS_lstring & inKey
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_insertMethodMap::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_insertMethodMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_insertMethodMap (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_insertMethodMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_insertMethodMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_insertMethodMap * operand = (cMapElement_insertMethodMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodMap::GALGAS_insertMethodMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodMap::GALGAS_insertMethodMap (const GALGAS_insertMethodMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodMap & GALGAS_insertMethodMap::operator = (const GALGAS_insertMethodMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodMap GALGAS_insertMethodMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_insertMethodMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodMap GALGAS_insertMethodMap::constructor_mapWithMapToOverride (const GALGAS_insertMethodMap & inMapToOverride
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_insertMethodMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodMap GALGAS_insertMethodMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_insertMethodMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertMethodMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_insertMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_insertMethodMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@insertMethodMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertMethodMap::modifier_insertKey (GALGAS_lstring inKey,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_insertMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_insertMethodMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' insert setter is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_insertMethodMap * GALGAS_insertMethodMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_insertMethodMap * result = (cMapElement_insertMethodMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_insertMethodMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_insertMethodMap::cEnumerator_insertMethodMap (const GALGAS_insertMethodMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodMap_2D_element cEnumerator_insertMethodMap::current (LOCATION_ARGS) const {
  const cMapElement_insertMethodMap * p = (const cMapElement_insertMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_insertMethodMap) ;
  return GALGAS_insertMethodMap_2D_element (p->mAttribute_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_insertMethodMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @insertMethodMap type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_insertMethodMap ("insertMethodMap",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_insertMethodMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertMethodMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_insertMethodMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_insertMethodMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodMap GALGAS_insertMethodMap::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_insertMethodMap result ;
  const GALGAS_insertMethodMap * p = (const GALGAS_insertMethodMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_insertMethodMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("insertMethodMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_searchMethodMap::cMapElement_searchMethodMap (const GALGAS_lstring & inKey
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_searchMethodMap::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_searchMethodMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_searchMethodMap (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_searchMethodMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_searchMethodMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_searchMethodMap * operand = (cMapElement_searchMethodMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_searchMethodMap::GALGAS_searchMethodMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_searchMethodMap::GALGAS_searchMethodMap (const GALGAS_searchMethodMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_searchMethodMap & GALGAS_searchMethodMap::operator = (const GALGAS_searchMethodMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_searchMethodMap GALGAS_searchMethodMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_searchMethodMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_searchMethodMap GALGAS_searchMethodMap::constructor_mapWithMapToOverride (const GALGAS_searchMethodMap & inMapToOverride
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_searchMethodMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_searchMethodMap GALGAS_searchMethodMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_searchMethodMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_searchMethodMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_searchMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_searchMethodMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@searchMethodMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_searchMethodMap::modifier_insertKey (GALGAS_lstring inKey,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_searchMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_searchMethodMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' search method is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_searchMethodMap * GALGAS_searchMethodMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_searchMethodMap * result = (cMapElement_searchMethodMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_searchMethodMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_searchMethodMap::cEnumerator_searchMethodMap (const GALGAS_searchMethodMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_searchMethodMap_2D_element cEnumerator_searchMethodMap::current (LOCATION_ARGS) const {
  const cMapElement_searchMethodMap * p = (const cMapElement_searchMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_searchMethodMap) ;
  return GALGAS_searchMethodMap_2D_element (p->mAttribute_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_searchMethodMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @searchMethodMap type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_searchMethodMap ("searchMethodMap",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_searchMethodMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_searchMethodMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_searchMethodMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_searchMethodMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_searchMethodMap GALGAS_searchMethodMap::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_searchMethodMap result ;
  const GALGAS_searchMethodMap * p = (const GALGAS_searchMethodMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_searchMethodMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("searchMethodMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_declaredMethodMap::cMapElement_declaredMethodMap (const GALGAS_lstring & inKey
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_declaredMethodMap::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_declaredMethodMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_declaredMethodMap (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_declaredMethodMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_declaredMethodMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_declaredMethodMap * operand = (cMapElement_declaredMethodMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredMethodMap::GALGAS_declaredMethodMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredMethodMap::GALGAS_declaredMethodMap (const GALGAS_declaredMethodMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredMethodMap & GALGAS_declaredMethodMap::operator = (const GALGAS_declaredMethodMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredMethodMap GALGAS_declaredMethodMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_declaredMethodMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredMethodMap GALGAS_declaredMethodMap::constructor_mapWithMapToOverride (const GALGAS_declaredMethodMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_declaredMethodMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredMethodMap GALGAS_declaredMethodMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_declaredMethodMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declaredMethodMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_declaredMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_declaredMethodMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@declaredMethodMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declaredMethodMap::modifier_insertKey (GALGAS_lstring inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_declaredMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_declaredMethodMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' method is already declared in %L for this class" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_declaredMethodMap * GALGAS_declaredMethodMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_declaredMethodMap * result = (cMapElement_declaredMethodMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_declaredMethodMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_declaredMethodMap::cEnumerator_declaredMethodMap (const GALGAS_declaredMethodMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredMethodMap_2D_element cEnumerator_declaredMethodMap::current (LOCATION_ARGS) const {
  const cMapElement_declaredMethodMap * p = (const cMapElement_declaredMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_declaredMethodMap) ;
  return GALGAS_declaredMethodMap_2D_element (p->mAttribute_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_declaredMethodMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @declaredMethodMap type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declaredMethodMap ("declaredMethodMap",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_declaredMethodMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declaredMethodMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_declaredMethodMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declaredMethodMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredMethodMap GALGAS_declaredMethodMap::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_declaredMethodMap result ;
  const GALGAS_declaredMethodMap * p = (const GALGAS_declaredMethodMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_declaredMethodMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declaredMethodMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_nonterminalLabelMap::cMapElement_nonterminalLabelMap (const GALGAS_lstring & inKey,
                                                                  const GALGAS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                                  const GALGAS_formalParameterSignature & in_mSignature,
                                                                  const GALGAS_location & in_mEndOfArgumentLocation
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mSignatureForGeneration (in_mSignatureForGeneration),
mAttribute_mSignature (in_mSignature),
mAttribute_mEndOfArgumentLocation (in_mEndOfArgumentLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_nonterminalLabelMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mSignatureForGeneration.isValid () && mAttribute_mSignature.isValid () && mAttribute_mEndOfArgumentLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_nonterminalLabelMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_nonterminalLabelMap (mAttribute_lkey, mAttribute_mSignatureForGeneration, mAttribute_mSignature, mAttribute_mEndOfArgumentLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_nonterminalLabelMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSignatureForGeneration" ":" ;
  mAttribute_mSignatureForGeneration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSignature" ":" ;
  mAttribute_mSignature.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfArgumentLocation" ":" ;
  mAttribute_mEndOfArgumentLocation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_nonterminalLabelMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_nonterminalLabelMap * operand = (cMapElement_nonterminalLabelMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSignatureForGeneration.objectCompare (operand->mAttribute_mSignatureForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSignature.objectCompare (operand->mAttribute_mSignature) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfArgumentLocation.objectCompare (operand->mAttribute_mEndOfArgumentLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalLabelMap::GALGAS_nonterminalLabelMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalLabelMap::GALGAS_nonterminalLabelMap (const GALGAS_nonterminalLabelMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalLabelMap & GALGAS_nonterminalLabelMap::operator = (const GALGAS_nonterminalLabelMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalLabelMap GALGAS_nonterminalLabelMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_nonterminalLabelMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalLabelMap GALGAS_nonterminalLabelMap::constructor_mapWithMapToOverride (const GALGAS_nonterminalLabelMap & inMapToOverride
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalLabelMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalLabelMap GALGAS_nonterminalLabelMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_nonterminalLabelMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalLabelMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                      const GALGAS_formalParameterListForGeneration & inArgument0,
                                                      const GALGAS_formalParameterSignature & inArgument1,
                                                      const GALGAS_location & inArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalLabelMap * p = NULL ;
  macroMyNew (p, cMapElement_nonterminalLabelMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@nonterminalLabelMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalLabelMap::modifier_insertKey (GALGAS_lstring inKey,
                                                     GALGAS_formalParameterListForGeneration inArgument0,
                                                     GALGAS_formalParameterSignature inArgument1,
                                                     GALGAS_location inArgument2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalLabelMap * p = NULL ;
  macroMyNew (p, cMapElement_nonterminalLabelMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' nonterminal label has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_nonterminalLabelMap_searchKey = "the '%K' nonterminal label is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalLabelMap::method_searchKey (GALGAS_lstring inKey,
                                                   GALGAS_formalParameterListForGeneration & outArgument0,
                                                   GALGAS_formalParameterSignature & outArgument1,
                                                   GALGAS_location & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) performSearch (inKey,
                                                                                                         inCompiler,
                                                                                                         kSearchErrorMessage_nonterminalLabelMap_searchKey
                                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
    outArgument0 = p->mAttribute_mSignatureForGeneration ;
    outArgument1 = p->mAttribute_mSignature ;
    outArgument2 = p->mAttribute_mEndOfArgumentLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration GALGAS_nonterminalLabelMap::reader_mSignatureForGenerationForKey (const GALGAS_string & inKey,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) attributes ;
  GALGAS_formalParameterListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
    result = p->mAttribute_mSignatureForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_nonterminalLabelMap::reader_mSignatureForKey (const GALGAS_string & inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) attributes ;
  GALGAS_formalParameterSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
    result = p->mAttribute_mSignature ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_nonterminalLabelMap::reader_mEndOfArgumentLocationForKey (const GALGAS_string & inKey,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) attributes ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
    result = p->mAttribute_mEndOfArgumentLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalLabelMap::modifier_setMSignatureForGenerationForKey (GALGAS_formalParameterListForGeneration inAttributeValue,
                                                                            GALGAS_string inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_nonterminalLabelMap * p = (cMapElement_nonterminalLabelMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
    p->mAttribute_mSignatureForGeneration = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalLabelMap::modifier_setMSignatureForKey (GALGAS_formalParameterSignature inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_nonterminalLabelMap * p = (cMapElement_nonterminalLabelMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
    p->mAttribute_mSignature = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalLabelMap::modifier_setMEndOfArgumentLocationForKey (GALGAS_location inAttributeValue,
                                                                           GALGAS_string inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_nonterminalLabelMap * p = (cMapElement_nonterminalLabelMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
    p->mAttribute_mEndOfArgumentLocation = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_nonterminalLabelMap * GALGAS_nonterminalLabelMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalLabelMap * result = (cMapElement_nonterminalLabelMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_nonterminalLabelMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_nonterminalLabelMap::cEnumerator_nonterminalLabelMap (const GALGAS_nonterminalLabelMap & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalLabelMap_2D_element cEnumerator_nonterminalLabelMap::current (LOCATION_ARGS) const {
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
  return GALGAS_nonterminalLabelMap_2D_element (p->mAttribute_lkey, p->mAttribute_mSignatureForGeneration, p->mAttribute_mSignature, p->mAttribute_mEndOfArgumentLocation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_nonterminalLabelMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration cEnumerator_nonterminalLabelMap::current_mSignatureForGeneration (LOCATION_ARGS) const {
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
  return p->mAttribute_mSignatureForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature cEnumerator_nonterminalLabelMap::current_mSignature (LOCATION_ARGS) const {
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
  return p->mAttribute_mSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_nonterminalLabelMap::current_mEndOfArgumentLocation (LOCATION_ARGS) const {
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
  return p->mAttribute_mEndOfArgumentLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @nonterminalLabelMap type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonterminalLabelMap ("nonterminalLabelMap",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_nonterminalLabelMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalLabelMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_nonterminalLabelMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonterminalLabelMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalLabelMap GALGAS_nonterminalLabelMap::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalLabelMap result ;
  const GALGAS_nonterminalLabelMap * p = (const GALGAS_nonterminalLabelMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_nonterminalLabelMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalLabelMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_nonterminalMap::cMapElement_nonterminalMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_nonterminalLabelMap & in_mLabelMap
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mLabelMap (in_mLabelMap) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_nonterminalMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLabelMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_nonterminalMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_nonterminalMap (mAttribute_lkey, mAttribute_mLabelMap COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_nonterminalMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLabelMap" ":" ;
  mAttribute_mLabelMap.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_nonterminalMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_nonterminalMap * operand = (cMapElement_nonterminalMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLabelMap.objectCompare (operand->mAttribute_mLabelMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalMap::GALGAS_nonterminalMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalMap::GALGAS_nonterminalMap (const GALGAS_nonterminalMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalMap & GALGAS_nonterminalMap::operator = (const GALGAS_nonterminalMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalMap GALGAS_nonterminalMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_nonterminalMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalMap GALGAS_nonterminalMap::constructor_mapWithMapToOverride (const GALGAS_nonterminalMap & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalMap GALGAS_nonterminalMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_nonterminalMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_nonterminalLabelMap & inArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalMap * p = NULL ;
  macroMyNew (p, cMapElement_nonterminalMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@nonterminalMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalMap::modifier_insertKey (GALGAS_lstring inKey,
                                                GALGAS_nonterminalLabelMap inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalMap * p = NULL ;
  macroMyNew (p, cMapElement_nonterminalMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' nonterminal has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_nonterminalMap_searchKey = "the '%K' nonterminal is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_nonterminalLabelMap & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_nonterminalMap * p = (const cMapElement_nonterminalMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_nonterminalMap_searchKey
                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_nonterminalMap) ;
    outArgument0 = p->mAttribute_mLabelMap ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalLabelMap GALGAS_nonterminalMap::reader_mLabelMapForKey (const GALGAS_string & inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_nonterminalMap * p = (const cMapElement_nonterminalMap *) attributes ;
  GALGAS_nonterminalLabelMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_nonterminalMap) ;
    result = p->mAttribute_mLabelMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalMap::modifier_setMLabelMapForKey (GALGAS_nonterminalLabelMap inAttributeValue,
                                                         GALGAS_string inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_nonterminalMap * p = (cMapElement_nonterminalMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_nonterminalMap) ;
    p->mAttribute_mLabelMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_nonterminalMap * GALGAS_nonterminalMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalMap * result = (cMapElement_nonterminalMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_nonterminalMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_nonterminalMap::cEnumerator_nonterminalMap (const GALGAS_nonterminalMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalMap_2D_element cEnumerator_nonterminalMap::current (LOCATION_ARGS) const {
  const cMapElement_nonterminalMap * p = (const cMapElement_nonterminalMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalMap) ;
  return GALGAS_nonterminalMap_2D_element (p->mAttribute_lkey, p->mAttribute_mLabelMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_nonterminalMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalLabelMap cEnumerator_nonterminalMap::current_mLabelMap (LOCATION_ARGS) const {
  const cMapElement_nonterminalMap * p = (const cMapElement_nonterminalMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalMap) ;
  return p->mAttribute_mLabelMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @nonterminalMap type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonterminalMap ("nonterminalMap",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_nonterminalMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_nonterminalMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonterminalMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalMap GALGAS_nonterminalMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalMap result ;
  const GALGAS_nonterminalMap * p = (const GALGAS_nonterminalMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_nonterminalMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@ruleLabelImplementationList' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_ruleLabelImplementationList : public cCollectionElement {
  public : GALGAS_ruleLabelImplementationList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_ruleLabelImplementationList (const GALGAS_lstring & in_mLabelName,
                                                           const GALGAS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                           const GALGAS_formalParameterSignature & in_mSignature,
                                                           const GALGAS_location & in_mEndOfArgumentLocation,
                                                           const GALGAS_semanticInstructionListForGeneration & in_mInstructionListForGeneration
                                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_ruleLabelImplementationList::cCollectionElement_ruleLabelImplementationList (const GALGAS_lstring & in_mLabelName,
                                                                                                const GALGAS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                                                                const GALGAS_formalParameterSignature & in_mSignature,
                                                                                                const GALGAS_location & in_mEndOfArgumentLocation,
                                                                                                const GALGAS_semanticInstructionListForGeneration & in_mInstructionListForGeneration
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLabelName, in_mSignatureForGeneration, in_mSignature, in_mEndOfArgumentLocation, in_mInstructionListForGeneration) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_ruleLabelImplementationList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_ruleLabelImplementationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_ruleLabelImplementationList (mObject.mAttribute_mLabelName, mObject.mAttribute_mSignatureForGeneration, mObject.mAttribute_mSignature, mObject.mAttribute_mEndOfArgumentLocation, mObject.mAttribute_mInstructionListForGeneration COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_ruleLabelImplementationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLabelName" ":" ;
  mObject.mAttribute_mLabelName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSignatureForGeneration" ":" ;
  mObject.mAttribute_mSignatureForGeneration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSignature" ":" ;
  mObject.mAttribute_mSignature.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfArgumentLocation" ":" ;
  mObject.mAttribute_mEndOfArgumentLocation.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionListForGeneration" ":" ;
  mObject.mAttribute_mInstructionListForGeneration.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_ruleLabelImplementationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_ruleLabelImplementationList * operand = (cCollectionElement_ruleLabelImplementationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_ruleLabelImplementationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleLabelImplementationList::GALGAS_ruleLabelImplementationList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleLabelImplementationList::GALGAS_ruleLabelImplementationList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleLabelImplementationList GALGAS_ruleLabelImplementationList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_ruleLabelImplementationList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleLabelImplementationList GALGAS_ruleLabelImplementationList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_formalParameterListForGeneration & inOperand1,
                                                                                                  const GALGAS_formalParameterSignature & inOperand2,
                                                                                                  const GALGAS_location & inOperand3,
                                                                                                  const GALGAS_semanticInstructionListForGeneration & inOperand4
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ruleLabelImplementationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_ruleLabelImplementationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ruleLabelImplementationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_lstring & in_mLabelName,
                                                                    const GALGAS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                                    const GALGAS_formalParameterSignature & in_mSignature,
                                                                    const GALGAS_location & in_mEndOfArgumentLocation,
                                                                    const GALGAS_semanticInstructionListForGeneration & in_mInstructionListForGeneration
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleLabelImplementationList * p = NULL ;
  macroMyNew (p, cCollectionElement_ruleLabelImplementationList (in_mLabelName,
                                                                 in_mSignatureForGeneration,
                                                                 in_mSignature,
                                                                 in_mEndOfArgumentLocation,
                                                                 in_mInstructionListForGeneration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ruleLabelImplementationList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_formalParameterListForGeneration & inOperand1,
                                                              const GALGAS_formalParameterSignature & inOperand2,
                                                              const GALGAS_location & inOperand3,
                                                              const GALGAS_semanticInstructionListForGeneration & inOperand4
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_ruleLabelImplementationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ruleLabelImplementationList::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                 const GALGAS_formalParameterListForGeneration inOperand1,
                                                                 const GALGAS_formalParameterSignature inOperand2,
                                                                 const GALGAS_location inOperand3,
                                                                 const GALGAS_semanticInstructionListForGeneration inOperand4,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_ruleLabelImplementationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ruleLabelImplementationList::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                 GALGAS_formalParameterListForGeneration & outOperand1,
                                                                 GALGAS_formalParameterSignature & outOperand2,
                                                                 GALGAS_location & outOperand3,
                                                                 GALGAS_semanticInstructionListForGeneration & outOperand4,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
      outOperand0 = p->mObject.mAttribute_mLabelName ;
      outOperand1 = p->mObject.mAttribute_mSignatureForGeneration ;
      outOperand2 = p->mObject.mAttribute_mSignature ;
      outOperand3 = p->mObject.mAttribute_mEndOfArgumentLocation ;
      outOperand4 = p->mObject.mAttribute_mInstructionListForGeneration ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ruleLabelImplementationList::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                            GALGAS_formalParameterListForGeneration & outOperand1,
                                                            GALGAS_formalParameterSignature & outOperand2,
                                                            GALGAS_location & outOperand3,
                                                            GALGAS_semanticInstructionListForGeneration & outOperand4,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    outOperand0 = p->mObject.mAttribute_mLabelName ;
    outOperand1 = p->mObject.mAttribute_mSignatureForGeneration ;
    outOperand2 = p->mObject.mAttribute_mSignature ;
    outOperand3 = p->mObject.mAttribute_mEndOfArgumentLocation ;
    outOperand4 = p->mObject.mAttribute_mInstructionListForGeneration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ruleLabelImplementationList::modifier_popLast (GALGAS_lstring & outOperand0,
                                                           GALGAS_formalParameterListForGeneration & outOperand1,
                                                           GALGAS_formalParameterSignature & outOperand2,
                                                           GALGAS_location & outOperand3,
                                                           GALGAS_semanticInstructionListForGeneration & outOperand4,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    outOperand0 = p->mObject.mAttribute_mLabelName ;
    outOperand1 = p->mObject.mAttribute_mSignatureForGeneration ;
    outOperand2 = p->mObject.mAttribute_mSignature ;
    outOperand3 = p->mObject.mAttribute_mEndOfArgumentLocation ;
    outOperand4 = p->mObject.mAttribute_mInstructionListForGeneration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ruleLabelImplementationList::method_first (GALGAS_lstring & outOperand0,
                                                       GALGAS_formalParameterListForGeneration & outOperand1,
                                                       GALGAS_formalParameterSignature & outOperand2,
                                                       GALGAS_location & outOperand3,
                                                       GALGAS_semanticInstructionListForGeneration & outOperand4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    outOperand0 = p->mObject.mAttribute_mLabelName ;
    outOperand1 = p->mObject.mAttribute_mSignatureForGeneration ;
    outOperand2 = p->mObject.mAttribute_mSignature ;
    outOperand3 = p->mObject.mAttribute_mEndOfArgumentLocation ;
    outOperand4 = p->mObject.mAttribute_mInstructionListForGeneration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ruleLabelImplementationList::method_last (GALGAS_lstring & outOperand0,
                                                      GALGAS_formalParameterListForGeneration & outOperand1,
                                                      GALGAS_formalParameterSignature & outOperand2,
                                                      GALGAS_location & outOperand3,
                                                      GALGAS_semanticInstructionListForGeneration & outOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    outOperand0 = p->mObject.mAttribute_mLabelName ;
    outOperand1 = p->mObject.mAttribute_mSignatureForGeneration ;
    outOperand2 = p->mObject.mAttribute_mSignature ;
    outOperand3 = p->mObject.mAttribute_mEndOfArgumentLocation ;
    outOperand4 = p->mObject.mAttribute_mInstructionListForGeneration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleLabelImplementationList GALGAS_ruleLabelImplementationList::operator_concat (const GALGAS_ruleLabelImplementationList & inOperand
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_ruleLabelImplementationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleLabelImplementationList GALGAS_ruleLabelImplementationList::add_operation (const GALGAS_ruleLabelImplementationList & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_ruleLabelImplementationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleLabelImplementationList GALGAS_ruleLabelImplementationList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_ruleLabelImplementationList result = GALGAS_ruleLabelImplementationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleLabelImplementationList GALGAS_ruleLabelImplementationList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_ruleLabelImplementationList result = GALGAS_ruleLabelImplementationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ruleLabelImplementationList::dotAssign_operation (const GALGAS_ruleLabelImplementationList inOperand
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_ruleLabelImplementationList::reader_mLabelNameAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    result = p->mObject.mAttribute_mLabelName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration GALGAS_ruleLabelImplementationList::reader_mSignatureForGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  GALGAS_formalParameterListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    result = p->mObject.mAttribute_mSignatureForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_ruleLabelImplementationList::reader_mSignatureAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  GALGAS_formalParameterSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    result = p->mObject.mAttribute_mSignature ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ruleLabelImplementationList::reader_mEndOfArgumentLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    result = p->mObject.mAttribute_mEndOfArgumentLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_ruleLabelImplementationList::reader_mInstructionListForGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                                                             C_Compiler * inCompiler
                                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    result = p->mObject.mAttribute_mInstructionListForGeneration ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_ruleLabelImplementationList::cEnumerator_ruleLabelImplementationList (const GALGAS_ruleLabelImplementationList & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleLabelImplementationList_2D_element cEnumerator_ruleLabelImplementationList::current (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_ruleLabelImplementationList::current_mLabelName (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mAttribute_mLabelName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration cEnumerator_ruleLabelImplementationList::current_mSignatureForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mAttribute_mSignatureForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature cEnumerator_ruleLabelImplementationList::current_mSignature (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mAttribute_mSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_ruleLabelImplementationList::current_mEndOfArgumentLocation (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mAttribute_mEndOfArgumentLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cEnumerator_ruleLabelImplementationList::current_mInstructionListForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mAttribute_mInstructionListForGeneration ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @ruleLabelImplementationList type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ruleLabelImplementationList ("ruleLabelImplementationList",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ruleLabelImplementationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ruleLabelImplementationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ruleLabelImplementationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ruleLabelImplementationList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleLabelImplementationList GALGAS_ruleLabelImplementationList::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ruleLabelImplementationList result ;
  const GALGAS_ruleLabelImplementationList * p = (const GALGAS_ruleLabelImplementationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ruleLabelImplementationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ruleLabelImplementationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@ruleDeclarationList' list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_ruleDeclarationList : public cCollectionElement {
  public : GALGAS_ruleDeclarationList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_ruleDeclarationList (const GALGAS_string & in_mNonterminalName,
                                                   const GALGAS_uint & in_mRuleIndex,
                                                   const GALGAS_ruleLabelImplementationList & in_mLabelImplementationList
                                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_ruleDeclarationList::cCollectionElement_ruleDeclarationList (const GALGAS_string & in_mNonterminalName,
                                                                                const GALGAS_uint & in_mRuleIndex,
                                                                                const GALGAS_ruleLabelImplementationList & in_mLabelImplementationList
                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mNonterminalName, in_mRuleIndex, in_mLabelImplementationList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_ruleDeclarationList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_ruleDeclarationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_ruleDeclarationList (mObject.mAttribute_mNonterminalName, mObject.mAttribute_mRuleIndex, mObject.mAttribute_mLabelImplementationList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_ruleDeclarationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNonterminalName" ":" ;
  mObject.mAttribute_mNonterminalName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRuleIndex" ":" ;
  mObject.mAttribute_mRuleIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLabelImplementationList" ":" ;
  mObject.mAttribute_mLabelImplementationList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_ruleDeclarationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_ruleDeclarationList * operand = (cCollectionElement_ruleDeclarationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_ruleDeclarationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleDeclarationList::GALGAS_ruleDeclarationList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleDeclarationList::GALGAS_ruleDeclarationList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleDeclarationList GALGAS_ruleDeclarationList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_ruleDeclarationList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleDeclarationList GALGAS_ruleDeclarationList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                  const GALGAS_uint & inOperand1,
                                                                                  const GALGAS_ruleLabelImplementationList & inOperand2
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ruleDeclarationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_ruleDeclarationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ruleDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GALGAS_string & in_mNonterminalName,
                                                            const GALGAS_uint & in_mRuleIndex,
                                                            const GALGAS_ruleLabelImplementationList & in_mLabelImplementationList
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleDeclarationList * p = NULL ;
  macroMyNew (p, cCollectionElement_ruleDeclarationList (in_mNonterminalName,
                                                         in_mRuleIndex,
                                                         in_mLabelImplementationList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ruleDeclarationList::addAssign_operation (const GALGAS_string & inOperand0,
                                                      const GALGAS_uint & inOperand1,
                                                      const GALGAS_ruleLabelImplementationList & inOperand2
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_ruleDeclarationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ruleDeclarationList::modifier_insertAtIndex (const GALGAS_string inOperand0,
                                                         const GALGAS_uint inOperand1,
                                                         const GALGAS_ruleLabelImplementationList inOperand2,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_ruleDeclarationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ruleDeclarationList::modifier_removeAtIndex (GALGAS_string & outOperand0,
                                                         GALGAS_uint & outOperand1,
                                                         GALGAS_ruleLabelImplementationList & outOperand2,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
      outOperand0 = p->mObject.mAttribute_mNonterminalName ;
      outOperand1 = p->mObject.mAttribute_mRuleIndex ;
      outOperand2 = p->mObject.mAttribute_mLabelImplementationList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ruleDeclarationList::modifier_popFirst (GALGAS_string & outOperand0,
                                                    GALGAS_uint & outOperand1,
                                                    GALGAS_ruleLabelImplementationList & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    outOperand0 = p->mObject.mAttribute_mNonterminalName ;
    outOperand1 = p->mObject.mAttribute_mRuleIndex ;
    outOperand2 = p->mObject.mAttribute_mLabelImplementationList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ruleDeclarationList::modifier_popLast (GALGAS_string & outOperand0,
                                                   GALGAS_uint & outOperand1,
                                                   GALGAS_ruleLabelImplementationList & outOperand2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    outOperand0 = p->mObject.mAttribute_mNonterminalName ;
    outOperand1 = p->mObject.mAttribute_mRuleIndex ;
    outOperand2 = p->mObject.mAttribute_mLabelImplementationList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ruleDeclarationList::method_first (GALGAS_string & outOperand0,
                                               GALGAS_uint & outOperand1,
                                               GALGAS_ruleLabelImplementationList & outOperand2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    outOperand0 = p->mObject.mAttribute_mNonterminalName ;
    outOperand1 = p->mObject.mAttribute_mRuleIndex ;
    outOperand2 = p->mObject.mAttribute_mLabelImplementationList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ruleDeclarationList::method_last (GALGAS_string & outOperand0,
                                              GALGAS_uint & outOperand1,
                                              GALGAS_ruleLabelImplementationList & outOperand2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    outOperand0 = p->mObject.mAttribute_mNonterminalName ;
    outOperand1 = p->mObject.mAttribute_mRuleIndex ;
    outOperand2 = p->mObject.mAttribute_mLabelImplementationList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleDeclarationList GALGAS_ruleDeclarationList::operator_concat (const GALGAS_ruleDeclarationList & inOperand
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_ruleDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleDeclarationList GALGAS_ruleDeclarationList::add_operation (const GALGAS_ruleDeclarationList & inOperand,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_ruleDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleDeclarationList GALGAS_ruleDeclarationList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_ruleDeclarationList result = GALGAS_ruleDeclarationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleDeclarationList GALGAS_ruleDeclarationList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_ruleDeclarationList result = GALGAS_ruleDeclarationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ruleDeclarationList::dotAssign_operation (const GALGAS_ruleDeclarationList inOperand
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_ruleDeclarationList::reader_mNonterminalNameAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    result = p->mObject.mAttribute_mNonterminalName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_ruleDeclarationList::reader_mRuleIndexAtIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    result = p->mObject.mAttribute_mRuleIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleLabelImplementationList GALGAS_ruleDeclarationList::reader_mLabelImplementationListAtIndex (const GALGAS_uint & inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  GALGAS_ruleLabelImplementationList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    result = p->mObject.mAttribute_mLabelImplementationList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_ruleDeclarationList::cEnumerator_ruleDeclarationList (const GALGAS_ruleDeclarationList & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleDeclarationList_2D_element cEnumerator_ruleDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_ruleDeclarationList * p = (const cCollectionElement_ruleDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_ruleDeclarationList::current_mNonterminalName (LOCATION_ARGS) const {
  const cCollectionElement_ruleDeclarationList * p = (const cCollectionElement_ruleDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
  return p->mObject.mAttribute_mNonterminalName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_ruleDeclarationList::current_mRuleIndex (LOCATION_ARGS) const {
  const cCollectionElement_ruleDeclarationList * p = (const cCollectionElement_ruleDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
  return p->mObject.mAttribute_mRuleIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleLabelImplementationList cEnumerator_ruleDeclarationList::current_mLabelImplementationList (LOCATION_ARGS) const {
  const cCollectionElement_ruleDeclarationList * p = (const cCollectionElement_ruleDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
  return p->mObject.mAttribute_mLabelImplementationList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @ruleDeclarationList type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ruleDeclarationList ("ruleDeclarationList",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ruleDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ruleDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ruleDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ruleDeclarationList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleDeclarationList GALGAS_ruleDeclarationList::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ruleDeclarationList result ;
  const GALGAS_ruleDeclarationList * p = (const GALGAS_ruleDeclarationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ruleDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ruleDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@syntaxListForGeneration' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_syntaxListForGeneration : public cCollectionElement {
  public : GALGAS_syntaxListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_syntaxListForGeneration (const GALGAS_galgas_33_SyntaxComponentListAST_2D_element & in_mSyntaxComponentRoot,
                                                       const GALGAS_syntaxDeclarationForGeneration & in_mSyntaxGeneration,
                                                       const GALGAS_bool & in_mHasIndexing
                                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_syntaxListForGeneration::cCollectionElement_syntaxListForGeneration (const GALGAS_galgas_33_SyntaxComponentListAST_2D_element & in_mSyntaxComponentRoot,
                                                                                        const GALGAS_syntaxDeclarationForGeneration & in_mSyntaxGeneration,
                                                                                        const GALGAS_bool & in_mHasIndexing
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSyntaxComponentRoot, in_mSyntaxGeneration, in_mHasIndexing) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_syntaxListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_syntaxListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_syntaxListForGeneration (mObject.mAttribute_mSyntaxComponentRoot, mObject.mAttribute_mSyntaxGeneration, mObject.mAttribute_mHasIndexing COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_syntaxListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSyntaxComponentRoot" ":" ;
  mObject.mAttribute_mSyntaxComponentRoot.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSyntaxGeneration" ":" ;
  mObject.mAttribute_mSyntaxGeneration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasIndexing" ":" ;
  mObject.mAttribute_mHasIndexing.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_syntaxListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_syntaxListForGeneration * operand = (cCollectionElement_syntaxListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_syntaxListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxListForGeneration::GALGAS_syntaxListForGeneration (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxListForGeneration::GALGAS_syntaxListForGeneration (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxListForGeneration GALGAS_syntaxListForGeneration::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_syntaxListForGeneration result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxListForGeneration GALGAS_syntaxListForGeneration::constructor_listWithValue (const GALGAS_galgas_33_SyntaxComponentListAST_2D_element & inOperand0,
                                                                                          const GALGAS_syntaxDeclarationForGeneration & inOperand1,
                                                                                          const GALGAS_bool & inOperand2
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_syntaxListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_syntaxListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_galgas_33_SyntaxComponentListAST_2D_element & in_mSyntaxComponentRoot,
                                                                const GALGAS_syntaxDeclarationForGeneration & in_mSyntaxGeneration,
                                                                const GALGAS_bool & in_mHasIndexing
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_syntaxListForGeneration (in_mSyntaxComponentRoot,
                                                             in_mSyntaxGeneration,
                                                             in_mHasIndexing COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxListForGeneration::addAssign_operation (const GALGAS_galgas_33_SyntaxComponentListAST_2D_element & inOperand0,
                                                          const GALGAS_syntaxDeclarationForGeneration & inOperand1,
                                                          const GALGAS_bool & inOperand2
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_syntaxListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxListForGeneration::modifier_insertAtIndex (const GALGAS_galgas_33_SyntaxComponentListAST_2D_element inOperand0,
                                                             const GALGAS_syntaxDeclarationForGeneration inOperand1,
                                                             const GALGAS_bool inOperand2,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_syntaxListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxListForGeneration::modifier_removeAtIndex (GALGAS_galgas_33_SyntaxComponentListAST_2D_element & outOperand0,
                                                             GALGAS_syntaxDeclarationForGeneration & outOperand1,
                                                             GALGAS_bool & outOperand2,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_syntaxListForGeneration * p = (cCollectionElement_syntaxListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_syntaxListForGeneration) ;
      outOperand0 = p->mObject.mAttribute_mSyntaxComponentRoot ;
      outOperand1 = p->mObject.mAttribute_mSyntaxGeneration ;
      outOperand2 = p->mObject.mAttribute_mHasIndexing ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxListForGeneration::modifier_popFirst (GALGAS_galgas_33_SyntaxComponentListAST_2D_element & outOperand0,
                                                        GALGAS_syntaxDeclarationForGeneration & outOperand1,
                                                        GALGAS_bool & outOperand2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxListForGeneration * p = (cCollectionElement_syntaxListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mSyntaxComponentRoot ;
    outOperand1 = p->mObject.mAttribute_mSyntaxGeneration ;
    outOperand2 = p->mObject.mAttribute_mHasIndexing ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxListForGeneration::modifier_popLast (GALGAS_galgas_33_SyntaxComponentListAST_2D_element & outOperand0,
                                                       GALGAS_syntaxDeclarationForGeneration & outOperand1,
                                                       GALGAS_bool & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxListForGeneration * p = (cCollectionElement_syntaxListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mSyntaxComponentRoot ;
    outOperand1 = p->mObject.mAttribute_mSyntaxGeneration ;
    outOperand2 = p->mObject.mAttribute_mHasIndexing ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxListForGeneration::method_first (GALGAS_galgas_33_SyntaxComponentListAST_2D_element & outOperand0,
                                                   GALGAS_syntaxDeclarationForGeneration & outOperand1,
                                                   GALGAS_bool & outOperand2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxListForGeneration * p = (cCollectionElement_syntaxListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mSyntaxComponentRoot ;
    outOperand1 = p->mObject.mAttribute_mSyntaxGeneration ;
    outOperand2 = p->mObject.mAttribute_mHasIndexing ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxListForGeneration::method_last (GALGAS_galgas_33_SyntaxComponentListAST_2D_element & outOperand0,
                                                  GALGAS_syntaxDeclarationForGeneration & outOperand1,
                                                  GALGAS_bool & outOperand2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxListForGeneration * p = (cCollectionElement_syntaxListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mSyntaxComponentRoot ;
    outOperand1 = p->mObject.mAttribute_mSyntaxGeneration ;
    outOperand2 = p->mObject.mAttribute_mHasIndexing ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxListForGeneration GALGAS_syntaxListForGeneration::operator_concat (const GALGAS_syntaxListForGeneration & inOperand
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_syntaxListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxListForGeneration GALGAS_syntaxListForGeneration::add_operation (const GALGAS_syntaxListForGeneration & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_syntaxListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxListForGeneration GALGAS_syntaxListForGeneration::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxListForGeneration result = GALGAS_syntaxListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxListForGeneration GALGAS_syntaxListForGeneration::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxListForGeneration result = GALGAS_syntaxListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxListForGeneration::dotAssign_operation (const GALGAS_syntaxListForGeneration inOperand
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxComponentListAST_2D_element GALGAS_syntaxListForGeneration::reader_mSyntaxComponentRootAtIndex (const GALGAS_uint & inIndex,
                                                                                                                       C_Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxListForGeneration * p = (cCollectionElement_syntaxListForGeneration *) attributes.ptr () ;
  GALGAS_galgas_33_SyntaxComponentListAST_2D_element result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxListForGeneration) ;
    result = p->mObject.mAttribute_mSyntaxComponentRoot ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxDeclarationForGeneration GALGAS_syntaxListForGeneration::reader_mSyntaxGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxListForGeneration * p = (cCollectionElement_syntaxListForGeneration *) attributes.ptr () ;
  GALGAS_syntaxDeclarationForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxListForGeneration) ;
    result = p->mObject.mAttribute_mSyntaxGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_syntaxListForGeneration::reader_mHasIndexingAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxListForGeneration * p = (cCollectionElement_syntaxListForGeneration *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxListForGeneration) ;
    result = p->mObject.mAttribute_mHasIndexing ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_syntaxListForGeneration::cEnumerator_syntaxListForGeneration (const GALGAS_syntaxListForGeneration & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxListForGeneration_2D_element cEnumerator_syntaxListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_syntaxListForGeneration * p = (const cCollectionElement_syntaxListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxListForGeneration) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxComponentListAST_2D_element cEnumerator_syntaxListForGeneration::current_mSyntaxComponentRoot (LOCATION_ARGS) const {
  const cCollectionElement_syntaxListForGeneration * p = (const cCollectionElement_syntaxListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxListForGeneration) ;
  return p->mObject.mAttribute_mSyntaxComponentRoot ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxDeclarationForGeneration cEnumerator_syntaxListForGeneration::current_mSyntaxGeneration (LOCATION_ARGS) const {
  const cCollectionElement_syntaxListForGeneration * p = (const cCollectionElement_syntaxListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxListForGeneration) ;
  return p->mObject.mAttribute_mSyntaxGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_syntaxListForGeneration::current_mHasIndexing (LOCATION_ARGS) const {
  const cCollectionElement_syntaxListForGeneration * p = (const cCollectionElement_syntaxListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxListForGeneration) ;
  return p->mObject.mAttribute_mHasIndexing ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @syntaxListForGeneration type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxListForGeneration ("syntaxListForGeneration",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syntaxListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syntaxListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxListForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxListForGeneration GALGAS_syntaxListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_syntaxListForGeneration result ;
  const GALGAS_syntaxListForGeneration * p = (const GALGAS_syntaxListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@keySortedList' sorted list                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cSortedListElement_keySortedList : public cSortedListElement {
  public : GALGAS_keySortedList_2D_element mObject ;

//--- Constructor
  public : cSortedListElement_keySortedList (const GALGAS_string & in_mKey,
                                             const GALGAS_uint & in_mOrder
                                             COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public : virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cSortedListElement_keySortedList::cSortedListElement_keySortedList (const GALGAS_string & in_mKey,
                                                                    const GALGAS_uint & in_mOrder
                                                                    COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mKey, in_mOrder) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cSortedListElement_keySortedList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cSortedListElement * cSortedListElement_keySortedList::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_keySortedList (mObject.mAttribute_mKey, mObject.mAttribute_mOrder COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cSortedListElement_keySortedList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mKey" ":" ;
  mObject.mAttribute_mKey.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOrder" ":" ;
  mObject.mAttribute_mOrder.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_keySortedList::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_keySortedList * operand = (cSortedListElement_keySortedList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_keySortedList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_keySortedList::GALGAS_keySortedList (void) :
AC_GALGAS_sortedlist () {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_keySortedList::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_keySortedList * operand = (const cSortedListElement_keySortedList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_keySortedList) ;
  if (result == kOperandEqual) {
    result = mObject.mAttribute_mOrder.objectCompare (operand->mObject.mAttribute_mOrder) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_keySortedList GALGAS_keySortedList::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_keySortedList result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_keySortedList GALGAS_keySortedList::constructor_sortedListWithValue (const GALGAS_string & inOperand0,
                                                                            const GALGAS_uint & inOperand1
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_keySortedList result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_keySortedList (inOperand0, inOperand1 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.addObject (attributes) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_keySortedList::addAssign_operation (const GALGAS_string & inOperand0,
                                                const GALGAS_uint & inOperand1
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_keySortedList (inOperand0, inOperand1 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_keySortedList::dotAssign_operation (const GALGAS_keySortedList inOperand
                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_keySortedList GALGAS_keySortedList::operator_concat (const GALGAS_keySortedList & inOperand
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_keySortedList result ;
  if (isValid () && inOperand.isValid ()) {
    result = constructor_emptySortedList (THERE) ;
    result = *this ;
    result.appendSortedList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_keySortedList::modifier_popSmallest (GALGAS_string & outOperand0,
                                                 GALGAS_uint & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_keySortedList * p = (cSortedListElement_keySortedList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_keySortedList) ;
    outOperand0 = p->mObject.mAttribute_mKey ;
    outOperand1 = p->mObject.mAttribute_mOrder ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_keySortedList::modifier_popGreatest (GALGAS_string & outOperand0,
                                                 GALGAS_uint & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_keySortedList * p = (cSortedListElement_keySortedList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_keySortedList) ;
    outOperand0 = p->mObject.mAttribute_mKey ;
    outOperand1 = p->mObject.mAttribute_mOrder ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_keySortedList::method_smallest (GALGAS_string & outOperand0,
                                            GALGAS_uint & outOperand1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_keySortedList * p = (cSortedListElement_keySortedList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_keySortedList) ;
    outOperand0 = p->mObject.mAttribute_mKey ;
    outOperand1 = p->mObject.mAttribute_mOrder ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_keySortedList::method_greatest (GALGAS_string & outOperand0,
                                            GALGAS_uint & outOperand1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_keySortedList * p = (cSortedListElement_keySortedList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_keySortedList) ;
    outOperand0 = p->mObject.mAttribute_mKey ;
    outOperand1 = p->mObject.mAttribute_mOrder ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_keySortedList::cEnumerator_keySortedList (const GALGAS_keySortedList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_keySortedList_2D_element cEnumerator_keySortedList::current (LOCATION_ARGS) const {
  const cSortedListElement_keySortedList * p = (const cSortedListElement_keySortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_keySortedList) ;
  return p->mObject ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_keySortedList::current_mKey (LOCATION_ARGS) const {
  const cSortedListElement_keySortedList * p = (const cSortedListElement_keySortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_keySortedList) ;
  return p->mObject.mAttribute_mKey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_keySortedList::current_mOrder (LOCATION_ARGS) const {
  const cSortedListElement_keySortedList * p = (const cSortedListElement_keySortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_keySortedList) ;
  return p->mObject.mAttribute_mOrder ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @keySortedList type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_keySortedList ("keySortedList",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_keySortedList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_keySortedList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_keySortedList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_keySortedList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_keySortedList GALGAS_keySortedList::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_keySortedList result ;
  const GALGAS_keySortedList * p = (const GALGAS_keySortedList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_keySortedList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("keySortedList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       '@semanticImportDependenceGraph' graph                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticImportDependenceGraph::GALGAS_semanticImportDependenceGraph (void) :
AC_GALGAS_graph () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticImportDependenceGraph GALGAS_semanticImportDependenceGraph::constructor_emptyGraph (LOCATION_ARGS) {
  GALGAS_semanticImportDependenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticImportDependenceGraph::modifier_insertNode (GALGAS_lstring inKey,
                                                                GALGAS_string inArgument_0,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  GALGAS_stringlist::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "-- INTERNAL ERROR --" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticImportDependenceGraph::method_topologicalSort (GALGAS_stringlist & outSortedList,
                                                                   GALGAS_lstringlist & outSortedKeyList,
                                                                   GALGAS_stringlist & outUnsortedList,
                                                                   GALGAS_lstringlist & outUnsortedKeyList,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  cSharedList * sortedList = NULL ;
  cSharedList * unsortedList = NULL ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_stringlist (sortedList) ;
  outUnsortedList = GALGAS_stringlist (unsortedList) ;
  GALGAS_stringlist::detachSharedList (sortedList) ;
  GALGAS_stringlist::detachSharedList (unsortedList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticImportDependenceGraph::method_depthFirstTopologicalSort (GALGAS_stringlist & outSortedList,
                                                                             GALGAS_lstringlist & outSortedKeyList,
                                                                             GALGAS_stringlist & outUnsortedList,
                                                                             GALGAS_lstringlist & outUnsortedKeyList,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  cSharedList * sortedList = NULL ;
  cSharedList * unsortedList = NULL ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_stringlist (sortedList) ;
  outUnsortedList = GALGAS_stringlist (unsortedList) ;
  GALGAS_stringlist::detachSharedList (sortedList) ;
  GALGAS_stringlist::detachSharedList (unsortedList) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticImportDependenceGraph GALGAS_semanticImportDependenceGraph::reader_reversedGraph (LOCATION_ARGS) const {
  GALGAS_semanticImportDependenceGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticImportDependenceGraph::method_circularities (GALGAS_stringlist & outInfoList,
                                                                 GALGAS_lstringlist & outKeyList
                                                                 COMMA_LOCATION_ARGS) const {
  cSharedList * infoList = NULL ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_stringlist (infoList) ;
  GALGAS_stringlist::detachSharedList (infoList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticImportDependenceGraph::method_nodesWithNoSuccessor (GALGAS_stringlist & outInfoList,
                                                                        GALGAS_lstringlist & outKeyList
                                                                        COMMA_LOCATION_ARGS) const {
  cSharedList * infoList = NULL ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_stringlist (infoList) ;
  GALGAS_stringlist::detachSharedList (infoList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticImportDependenceGraph::method_nodesWithNoPredecessor (GALGAS_stringlist & outInfoList,
                                                                          GALGAS_lstringlist & outKeyList
                                                                          COMMA_LOCATION_ARGS) const {
  cSharedList * infoList = NULL ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_stringlist (infoList) ;
  GALGAS_stringlist::detachSharedList (infoList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticImportDependenceGraph GALGAS_semanticImportDependenceGraph::reader_subgraphFromNodes (const GALGAS_lstringlist & inStartKeyList,
                                                                                                     const GALGAS_stringset & inKeysToExclude,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_semanticImportDependenceGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_semanticImportDependenceGraph::reader_accessibleNodesFromNodes (const GALGAS_lstringlist & inStartKeyList,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  GALGAS_semanticImportDependenceGraph resultingGraph ;
  subGraph (resultingGraph,
            inStartKeyList,
            GALGAS_stringset::constructor_emptySet (HERE),
            inCompiler
            COMMA_THERE) ;
  if (resultingGraph.isValid ()) {
    result = resultingGraph.reader_lkeyList (THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @semanticImportDependenceGraph type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticImportDependenceGraph ("semanticImportDependenceGraph",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticImportDependenceGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticImportDependenceGraph ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticImportDependenceGraph::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticImportDependenceGraph (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticImportDependenceGraph GALGAS_semanticImportDependenceGraph::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_semanticImportDependenceGraph result ;
  const GALGAS_semanticImportDependenceGraph * p = (const GALGAS_semanticImportDependenceGraph *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticImportDependenceGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticImportDependenceGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@castInstructionBranchListAST' list                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_castInstructionBranchListAST : public cCollectionElement {
  public : GALGAS_castInstructionBranchListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_castInstructionBranchListAST (const GALGAS_lstring & in_mTypeName,
                                                            const GALGAS_lstring & in_mConstantVarName,
                                                            const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                            const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                            const GALGAS_location & in_mEndOfInstructions
                                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_castInstructionBranchListAST::cCollectionElement_castInstructionBranchListAST (const GALGAS_lstring & in_mTypeName,
                                                                                                  const GALGAS_lstring & in_mConstantVarName,
                                                                                                  const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                                                                  const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                                  const GALGAS_location & in_mEndOfInstructions
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeName, in_mConstantVarName, in_mInstructionList, in_mTypeComparisonKind, in_mEndOfInstructions) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_castInstructionBranchListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_castInstructionBranchListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_castInstructionBranchListAST (mObject.mAttribute_mTypeName, mObject.mAttribute_mConstantVarName, mObject.mAttribute_mInstructionList, mObject.mAttribute_mTypeComparisonKind, mObject.mAttribute_mEndOfInstructions COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_castInstructionBranchListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeName" ":" ;
  mObject.mAttribute_mTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstantVarName" ":" ;
  mObject.mAttribute_mConstantVarName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mAttribute_mInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeComparisonKind" ":" ;
  mObject.mAttribute_mTypeComparisonKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfInstructions" ":" ;
  mObject.mAttribute_mEndOfInstructions.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_castInstructionBranchListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_castInstructionBranchListAST * operand = (cCollectionElement_castInstructionBranchListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_castInstructionBranchListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListAST::GALGAS_castInstructionBranchListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListAST::GALGAS_castInstructionBranchListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_castInstructionBranchListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1,
                                                                                                    const GALGAS_semanticInstructionListAST & inOperand2,
                                                                                                    const GALGAS_dynamicTypeComparisonKind & inOperand3,
                                                                                                    const GALGAS_location & inOperand4
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_castInstructionBranchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_castInstructionBranchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_lstring & in_mTypeName,
                                                                     const GALGAS_lstring & in_mConstantVarName,
                                                                     const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                                     const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                     const GALGAS_location & in_mEndOfInstructions
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_castInstructionBranchListAST (in_mTypeName,
                                                                  in_mConstantVarName,
                                                                  in_mInstructionList,
                                                                  in_mTypeComparisonKind,
                                                                  in_mEndOfInstructions COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_castInstructionBranchListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                               const GALGAS_lstring & inOperand1,
                                                               const GALGAS_semanticInstructionListAST & inOperand2,
                                                               const GALGAS_dynamicTypeComparisonKind & inOperand3,
                                                               const GALGAS_location & inOperand4
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_castInstructionBranchListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_castInstructionBranchListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                  const GALGAS_lstring inOperand1,
                                                                  const GALGAS_semanticInstructionListAST inOperand2,
                                                                  const GALGAS_dynamicTypeComparisonKind inOperand3,
                                                                  const GALGAS_location inOperand4,
                                                                  const GALGAS_uint inInsertionIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_castInstructionBranchListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_castInstructionBranchListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                  GALGAS_lstring & outOperand1,
                                                                  GALGAS_semanticInstructionListAST & outOperand2,
                                                                  GALGAS_dynamicTypeComparisonKind & outOperand3,
                                                                  GALGAS_location & outOperand4,
                                                                  const GALGAS_uint inRemoveIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
      outOperand0 = p->mObject.mAttribute_mTypeName ;
      outOperand1 = p->mObject.mAttribute_mConstantVarName ;
      outOperand2 = p->mObject.mAttribute_mInstructionList ;
      outOperand3 = p->mObject.mAttribute_mTypeComparisonKind ;
      outOperand4 = p->mObject.mAttribute_mEndOfInstructions ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_castInstructionBranchListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                             GALGAS_lstring & outOperand1,
                                                             GALGAS_semanticInstructionListAST & outOperand2,
                                                             GALGAS_dynamicTypeComparisonKind & outOperand3,
                                                             GALGAS_location & outOperand4,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mTypeName ;
    outOperand1 = p->mObject.mAttribute_mConstantVarName ;
    outOperand2 = p->mObject.mAttribute_mInstructionList ;
    outOperand3 = p->mObject.mAttribute_mTypeComparisonKind ;
    outOperand4 = p->mObject.mAttribute_mEndOfInstructions ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_castInstructionBranchListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            GALGAS_semanticInstructionListAST & outOperand2,
                                                            GALGAS_dynamicTypeComparisonKind & outOperand3,
                                                            GALGAS_location & outOperand4,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mTypeName ;
    outOperand1 = p->mObject.mAttribute_mConstantVarName ;
    outOperand2 = p->mObject.mAttribute_mInstructionList ;
    outOperand3 = p->mObject.mAttribute_mTypeComparisonKind ;
    outOperand4 = p->mObject.mAttribute_mEndOfInstructions ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_castInstructionBranchListAST::method_first (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_semanticInstructionListAST & outOperand2,
                                                        GALGAS_dynamicTypeComparisonKind & outOperand3,
                                                        GALGAS_location & outOperand4,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mTypeName ;
    outOperand1 = p->mObject.mAttribute_mConstantVarName ;
    outOperand2 = p->mObject.mAttribute_mInstructionList ;
    outOperand3 = p->mObject.mAttribute_mTypeComparisonKind ;
    outOperand4 = p->mObject.mAttribute_mEndOfInstructions ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_castInstructionBranchListAST::method_last (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_semanticInstructionListAST & outOperand2,
                                                       GALGAS_dynamicTypeComparisonKind & outOperand3,
                                                       GALGAS_location & outOperand4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mTypeName ;
    outOperand1 = p->mObject.mAttribute_mConstantVarName ;
    outOperand2 = p->mObject.mAttribute_mInstructionList ;
    outOperand3 = p->mObject.mAttribute_mTypeComparisonKind ;
    outOperand4 = p->mObject.mAttribute_mEndOfInstructions ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::operator_concat (const GALGAS_castInstructionBranchListAST & inOperand
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::add_operation (const GALGAS_castInstructionBranchListAST & inOperand,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListAST result = GALGAS_castInstructionBranchListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListAST result = GALGAS_castInstructionBranchListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_castInstructionBranchListAST::dotAssign_operation (const GALGAS_castInstructionBranchListAST inOperand
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_castInstructionBranchListAST::reader_mTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    result = p->mObject.mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_castInstructionBranchListAST::reader_mConstantVarNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    result = p->mObject.mAttribute_mConstantVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_castInstructionBranchListAST::reader_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_semanticInstructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    result = p->mObject.mAttribute_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dynamicTypeComparisonKind GALGAS_castInstructionBranchListAST::reader_mTypeComparisonKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_dynamicTypeComparisonKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    result = p->mObject.mAttribute_mTypeComparisonKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_castInstructionBranchListAST::reader_mEndOfInstructionsAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    result = p->mObject.mAttribute_mEndOfInstructions ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_castInstructionBranchListAST::cEnumerator_castInstructionBranchListAST (const GALGAS_castInstructionBranchListAST & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListAST_2D_element cEnumerator_castInstructionBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_castInstructionBranchListAST::current_mTypeName (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_castInstructionBranchListAST::current_mConstantVarName (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mAttribute_mConstantVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST cEnumerator_castInstructionBranchListAST::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dynamicTypeComparisonKind cEnumerator_castInstructionBranchListAST::current_mTypeComparisonKind (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mAttribute_mTypeComparisonKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_castInstructionBranchListAST::current_mEndOfInstructions (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mAttribute_mEndOfInstructions ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @castInstructionBranchListAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_castInstructionBranchListAST ("castInstructionBranchListAST",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_castInstructionBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInstructionBranchListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_castInstructionBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_castInstructionBranchListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListAST result ;
  const GALGAS_castInstructionBranchListAST * p = (const GALGAS_castInstructionBranchListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_castInstructionBranchListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInstructionBranchListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Class for element of '@castInstructionBranchListForGeneration' list                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_castInstructionBranchListForGeneration : public cCollectionElement {
  public : GALGAS_castInstructionBranchListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_castInstructionBranchListForGeneration (const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                                      const GALGAS_string & in_mCastedVarCppName,
                                                                      const GALGAS_semanticInstructionListForGeneration & in_mInstructionList
                                                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_castInstructionBranchListForGeneration::cCollectionElement_castInstructionBranchListForGeneration (const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                                                                                      const GALGAS_string & in_mCastedVarCppName,
                                                                                                                      const GALGAS_semanticInstructionListForGeneration & in_mInstructionList
                                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeComparisonKind, in_mType, in_mCastedVarCppName, in_mInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_castInstructionBranchListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_castInstructionBranchListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_castInstructionBranchListForGeneration (mObject.mAttribute_mTypeComparisonKind, mObject.mAttribute_mType, mObject.mAttribute_mCastedVarCppName, mObject.mAttribute_mInstructionList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_castInstructionBranchListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeComparisonKind" ":" ;
  mObject.mAttribute_mTypeComparisonKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mAttribute_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCastedVarCppName" ":" ;
  mObject.mAttribute_mCastedVarCppName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mAttribute_mInstructionList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_castInstructionBranchListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_castInstructionBranchListForGeneration * operand = (cCollectionElement_castInstructionBranchListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_castInstructionBranchListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListForGeneration::GALGAS_castInstructionBranchListForGeneration (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListForGeneration::GALGAS_castInstructionBranchListForGeneration (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_castInstructionBranchListForGeneration result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::constructor_listWithValue (const GALGAS_dynamicTypeComparisonKind & inOperand0,
                                                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                                                        const GALGAS_string & inOperand2,
                                                                                                                        const GALGAS_semanticInstructionListForGeneration & inOperand3
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_castInstructionBranchListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_castInstructionBranchListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                               const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                                               const GALGAS_string & in_mCastedVarCppName,
                                                                               const GALGAS_semanticInstructionListForGeneration & in_mInstructionList
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_castInstructionBranchListForGeneration (in_mTypeComparisonKind,
                                                                            in_mType,
                                                                            in_mCastedVarCppName,
                                                                            in_mInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_castInstructionBranchListForGeneration::addAssign_operation (const GALGAS_dynamicTypeComparisonKind & inOperand0,
                                                                         const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                         const GALGAS_string & inOperand2,
                                                                         const GALGAS_semanticInstructionListForGeneration & inOperand3
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_castInstructionBranchListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_castInstructionBranchListForGeneration::modifier_insertAtIndex (const GALGAS_dynamicTypeComparisonKind inOperand0,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy inOperand1,
                                                                            const GALGAS_string inOperand2,
                                                                            const GALGAS_semanticInstructionListForGeneration inOperand3,
                                                                            const GALGAS_uint inInsertionIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_castInstructionBranchListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_castInstructionBranchListForGeneration::modifier_removeAtIndex (GALGAS_dynamicTypeComparisonKind & outOperand0,
                                                                            GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                                            GALGAS_string & outOperand2,
                                                                            GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                                            const GALGAS_uint inRemoveIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
      outOperand0 = p->mObject.mAttribute_mTypeComparisonKind ;
      outOperand1 = p->mObject.mAttribute_mType ;
      outOperand2 = p->mObject.mAttribute_mCastedVarCppName ;
      outOperand3 = p->mObject.mAttribute_mInstructionList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_castInstructionBranchListForGeneration::modifier_popFirst (GALGAS_dynamicTypeComparisonKind & outOperand0,
                                                                       GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                                       GALGAS_string & outOperand2,
                                                                       GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mTypeComparisonKind ;
    outOperand1 = p->mObject.mAttribute_mType ;
    outOperand2 = p->mObject.mAttribute_mCastedVarCppName ;
    outOperand3 = p->mObject.mAttribute_mInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_castInstructionBranchListForGeneration::modifier_popLast (GALGAS_dynamicTypeComparisonKind & outOperand0,
                                                                      GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                                      GALGAS_string & outOperand2,
                                                                      GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mTypeComparisonKind ;
    outOperand1 = p->mObject.mAttribute_mType ;
    outOperand2 = p->mObject.mAttribute_mCastedVarCppName ;
    outOperand3 = p->mObject.mAttribute_mInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_castInstructionBranchListForGeneration::method_first (GALGAS_dynamicTypeComparisonKind & outOperand0,
                                                                  GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                                  GALGAS_string & outOperand2,
                                                                  GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mTypeComparisonKind ;
    outOperand1 = p->mObject.mAttribute_mType ;
    outOperand2 = p->mObject.mAttribute_mCastedVarCppName ;
    outOperand3 = p->mObject.mAttribute_mInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_castInstructionBranchListForGeneration::method_last (GALGAS_dynamicTypeComparisonKind & outOperand0,
                                                                 GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                                 GALGAS_string & outOperand2,
                                                                 GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mTypeComparisonKind ;
    outOperand1 = p->mObject.mAttribute_mType ;
    outOperand2 = p->mObject.mAttribute_mCastedVarCppName ;
    outOperand3 = p->mObject.mAttribute_mInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::operator_concat (const GALGAS_castInstructionBranchListForGeneration & inOperand
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::add_operation (const GALGAS_castInstructionBranchListForGeneration & inOperand,
                                                                                                            C_Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListForGeneration result = GALGAS_castInstructionBranchListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListForGeneration result = GALGAS_castInstructionBranchListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_castInstructionBranchListForGeneration::dotAssign_operation (const GALGAS_castInstructionBranchListForGeneration inOperand
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dynamicTypeComparisonKind GALGAS_castInstructionBranchListForGeneration::reader_mTypeComparisonKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  GALGAS_dynamicTypeComparisonKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    result = p->mObject.mAttribute_mTypeComparisonKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_castInstructionBranchListForGeneration::reader_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    result = p->mObject.mAttribute_mType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_castInstructionBranchListForGeneration::reader_mCastedVarCppNameAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    result = p->mObject.mAttribute_mCastedVarCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_castInstructionBranchListForGeneration::reader_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                           C_Compiler * inCompiler
                                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    result = p->mObject.mAttribute_mInstructionList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_castInstructionBranchListForGeneration::cEnumerator_castInstructionBranchListForGeneration (const GALGAS_castInstructionBranchListForGeneration & inEnumeratedObject,
                                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListForGeneration_2D_element cEnumerator_castInstructionBranchListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dynamicTypeComparisonKind cEnumerator_castInstructionBranchListForGeneration::current_mTypeComparisonKind (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject.mAttribute_mTypeComparisonKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_castInstructionBranchListForGeneration::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject.mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_castInstructionBranchListForGeneration::current_mCastedVarCppName (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject.mAttribute_mCastedVarCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cEnumerator_castInstructionBranchListForGeneration::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject.mAttribute_mInstructionList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @castInstructionBranchListForGeneration type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_castInstructionBranchListForGeneration ("castInstructionBranchListForGeneration",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_castInstructionBranchListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInstructionBranchListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_castInstructionBranchListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_castInstructionBranchListForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListForGeneration result ;
  const GALGAS_castInstructionBranchListForGeneration * p = (const GALGAS_castInstructionBranchListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_castInstructionBranchListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInstructionBranchListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Class for element of '@forInstructionEnumeratedObjectElementListAST' list                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_forInstructionEnumeratedObjectElementListAST : public cCollectionElement {
  public : GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_forInstructionEnumeratedObjectElementListAST (const GALGAS_lstring & in_mOptionalTypeName,
                                                                            const GALGAS_lstring & in_mOptionalConstantName
                                                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_forInstructionEnumeratedObjectElementListAST::cCollectionElement_forInstructionEnumeratedObjectElementListAST (const GALGAS_lstring & in_mOptionalTypeName,
                                                                                                                                  const GALGAS_lstring & in_mOptionalConstantName
                                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOptionalTypeName, in_mOptionalConstantName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_forInstructionEnumeratedObjectElementListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_forInstructionEnumeratedObjectElementListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_forInstructionEnumeratedObjectElementListAST (mObject.mAttribute_mOptionalTypeName, mObject.mAttribute_mOptionalConstantName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_forInstructionEnumeratedObjectElementListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionalTypeName" ":" ;
  mObject.mAttribute_mOptionalTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionalConstantName" ":" ;
  mObject.mAttribute_mOptionalConstantName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_forInstructionEnumeratedObjectElementListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * operand = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectElementListAST::GALGAS_forInstructionEnumeratedObjectElementListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectElementListAST::GALGAS_forInstructionEnumeratedObjectElementListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectElementListAST GALGAS_forInstructionEnumeratedObjectElementListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectElementListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectElementListAST GALGAS_forInstructionEnumeratedObjectElementListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                                    const GALGAS_lstring & inOperand1
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectElementListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_forInstructionEnumeratedObjectElementListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectElementListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                     const GALGAS_lstring & in_mOptionalTypeName,
                                                                                     const GALGAS_lstring & in_mOptionalConstantName
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST (in_mOptionalTypeName,
                                                                                  in_mOptionalConstantName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectElementListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                               const GALGAS_lstring & inOperand1
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectElementListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                                  const GALGAS_lstring inOperand1,
                                                                                  const GALGAS_uint inInsertionIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectElementListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                                  GALGAS_lstring & outOperand1,
                                                                                  const GALGAS_uint inRemoveIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
      outOperand0 = p->mObject.mAttribute_mOptionalTypeName ;
      outOperand1 = p->mObject.mAttribute_mOptionalConstantName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectElementListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                                             GALGAS_lstring & outOperand1,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    outOperand0 = p->mObject.mAttribute_mOptionalTypeName ;
    outOperand1 = p->mObject.mAttribute_mOptionalConstantName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectElementListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                                            GALGAS_lstring & outOperand1,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    outOperand0 = p->mObject.mAttribute_mOptionalTypeName ;
    outOperand1 = p->mObject.mAttribute_mOptionalConstantName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectElementListAST::method_first (GALGAS_lstring & outOperand0,
                                                                        GALGAS_lstring & outOperand1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    outOperand0 = p->mObject.mAttribute_mOptionalTypeName ;
    outOperand1 = p->mObject.mAttribute_mOptionalConstantName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectElementListAST::method_last (GALGAS_lstring & outOperand0,
                                                                       GALGAS_lstring & outOperand1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    outOperand0 = p->mObject.mAttribute_mOptionalTypeName ;
    outOperand1 = p->mObject.mAttribute_mOptionalConstantName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectElementListAST GALGAS_forInstructionEnumeratedObjectElementListAST::operator_concat (const GALGAS_forInstructionEnumeratedObjectElementListAST & inOperand
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectElementListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectElementListAST GALGAS_forInstructionEnumeratedObjectElementListAST::add_operation (const GALGAS_forInstructionEnumeratedObjectElementListAST & inOperand,
                                                                                                                        C_Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectElementListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectElementListAST GALGAS_forInstructionEnumeratedObjectElementListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectElementListAST result = GALGAS_forInstructionEnumeratedObjectElementListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectElementListAST GALGAS_forInstructionEnumeratedObjectElementListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectElementListAST result = GALGAS_forInstructionEnumeratedObjectElementListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectElementListAST::dotAssign_operation (const GALGAS_forInstructionEnumeratedObjectElementListAST inOperand
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_forInstructionEnumeratedObjectElementListAST::cEnumerator_forInstructionEnumeratedObjectElementListAST (const GALGAS_forInstructionEnumeratedObjectElementListAST & inEnumeratedObject,
                                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element cEnumerator_forInstructionEnumeratedObjectElementListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_forInstructionEnumeratedObjectElementListAST::current_mOptionalTypeName (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return p->mObject.mAttribute_mOptionalTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_forInstructionEnumeratedObjectElementListAST::current_mOptionalConstantName (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return p->mObject.mAttribute_mOptionalConstantName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @forInstructionEnumeratedObjectElementListAST type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST ("forInstructionEnumeratedObjectElementListAST",
                                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_forInstructionEnumeratedObjectElementListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_forInstructionEnumeratedObjectElementListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionEnumeratedObjectElementListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectElementListAST GALGAS_forInstructionEnumeratedObjectElementListAST::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectElementListAST result ;
  const GALGAS_forInstructionEnumeratedObjectElementListAST * p = (const GALGAS_forInstructionEnumeratedObjectElementListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forInstructionEnumeratedObjectElementListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectElementListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Class for element of '@forInstructionEnumeratedObjectListAST' list                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_forInstructionEnumeratedObjectListAST : public cCollectionElement {
  public : GALGAS_forInstructionEnumeratedObjectListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_forInstructionEnumeratedObjectListAST (const GALGAS_bool & in_mAscending,
                                                                     const GALGAS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection
                                                                     COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_forInstructionEnumeratedObjectListAST::cCollectionElement_forInstructionEnumeratedObjectListAST (const GALGAS_bool & in_mAscending,
                                                                                                                    const GALGAS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection
                                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAscending, in_mEnumeratedCollection) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_forInstructionEnumeratedObjectListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_forInstructionEnumeratedObjectListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_forInstructionEnumeratedObjectListAST (mObject.mAttribute_mAscending, mObject.mAttribute_mEnumeratedCollection COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_forInstructionEnumeratedObjectListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAscending" ":" ;
  mObject.mAttribute_mAscending.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumeratedCollection" ":" ;
  mObject.mAttribute_mEnumeratedCollection.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_forInstructionEnumeratedObjectListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_forInstructionEnumeratedObjectListAST * operand = (cCollectionElement_forInstructionEnumeratedObjectListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListAST::GALGAS_forInstructionEnumeratedObjectListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListAST::GALGAS_forInstructionEnumeratedObjectListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListAST GALGAS_forInstructionEnumeratedObjectListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListAST GALGAS_forInstructionEnumeratedObjectListAST::constructor_listWithValue (const GALGAS_bool & inOperand0,
                                                                                                                      const GALGAS_abstractEnumeratedCollectionAST & inOperand1
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_forInstructionEnumeratedObjectListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                              const GALGAS_bool & in_mAscending,
                                                                              const GALGAS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListAST (in_mAscending,
                                                                           in_mEnumeratedCollection COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectListAST::addAssign_operation (const GALGAS_bool & inOperand0,
                                                                        const GALGAS_abstractEnumeratedCollectionAST & inOperand1
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectListAST::modifier_insertAtIndex (const GALGAS_bool inOperand0,
                                                                           const GALGAS_abstractEnumeratedCollectionAST inOperand1,
                                                                           const GALGAS_uint inInsertionIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectListAST::modifier_removeAtIndex (GALGAS_bool & outOperand0,
                                                                           GALGAS_abstractEnumeratedCollectionAST & outOperand1,
                                                                           const GALGAS_uint inRemoveIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
      outOperand0 = p->mObject.mAttribute_mAscending ;
      outOperand1 = p->mObject.mAttribute_mEnumeratedCollection ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectListAST::modifier_popFirst (GALGAS_bool & outOperand0,
                                                                      GALGAS_abstractEnumeratedCollectionAST & outOperand1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    outOperand0 = p->mObject.mAttribute_mAscending ;
    outOperand1 = p->mObject.mAttribute_mEnumeratedCollection ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectListAST::modifier_popLast (GALGAS_bool & outOperand0,
                                                                     GALGAS_abstractEnumeratedCollectionAST & outOperand1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    outOperand0 = p->mObject.mAttribute_mAscending ;
    outOperand1 = p->mObject.mAttribute_mEnumeratedCollection ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectListAST::method_first (GALGAS_bool & outOperand0,
                                                                 GALGAS_abstractEnumeratedCollectionAST & outOperand1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    outOperand0 = p->mObject.mAttribute_mAscending ;
    outOperand1 = p->mObject.mAttribute_mEnumeratedCollection ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectListAST::method_last (GALGAS_bool & outOperand0,
                                                                GALGAS_abstractEnumeratedCollectionAST & outOperand1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    outOperand0 = p->mObject.mAttribute_mAscending ;
    outOperand1 = p->mObject.mAttribute_mEnumeratedCollection ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListAST GALGAS_forInstructionEnumeratedObjectListAST::operator_concat (const GALGAS_forInstructionEnumeratedObjectListAST & inOperand
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListAST GALGAS_forInstructionEnumeratedObjectListAST::add_operation (const GALGAS_forInstructionEnumeratedObjectListAST & inOperand,
                                                                                                          C_Compiler * /* inCompiler */
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListAST GALGAS_forInstructionEnumeratedObjectListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectListAST result = GALGAS_forInstructionEnumeratedObjectListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListAST GALGAS_forInstructionEnumeratedObjectListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectListAST result = GALGAS_forInstructionEnumeratedObjectListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectListAST::dotAssign_operation (const GALGAS_forInstructionEnumeratedObjectListAST inOperand
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_forInstructionEnumeratedObjectListAST::reader_mAscendingAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    result = p->mObject.mAttribute_mAscending ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractEnumeratedCollectionAST GALGAS_forInstructionEnumeratedObjectListAST::reader_mEnumeratedCollectionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
  GALGAS_abstractEnumeratedCollectionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    result = p->mObject.mAttribute_mEnumeratedCollection ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_forInstructionEnumeratedObjectListAST::cEnumerator_forInstructionEnumeratedObjectListAST (const GALGAS_forInstructionEnumeratedObjectListAST & inEnumeratedObject,
                                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListAST_2D_element cEnumerator_forInstructionEnumeratedObjectListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_forInstructionEnumeratedObjectListAST::current_mAscending (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
  return p->mObject.mAttribute_mAscending ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractEnumeratedCollectionAST cEnumerator_forInstructionEnumeratedObjectListAST::current_mEnumeratedCollection (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
  return p->mObject.mAttribute_mEnumeratedCollection ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @forInstructionEnumeratedObjectListAST type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST ("forInstructionEnumeratedObjectListAST",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_forInstructionEnumeratedObjectListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_forInstructionEnumeratedObjectListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionEnumeratedObjectListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListAST GALGAS_forInstructionEnumeratedObjectListAST::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectListAST result ;
  const GALGAS_forInstructionEnumeratedObjectListAST * p = (const GALGAS_forInstructionEnumeratedObjectListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forInstructionEnumeratedObjectListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Class for element of '@forInstructionEnumeratedObjectListForGeneration' list                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_forInstructionEnumeratedObjectListForGeneration : public cCollectionElement {
  public : GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_forInstructionEnumeratedObjectListForGeneration (const GALGAS_string & in_mEnumerationOrder,
                                                                               const GALGAS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                                               const GALGAS_string & in_mEnumeratorCppName
                                                                               COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_forInstructionEnumeratedObjectListForGeneration::cCollectionElement_forInstructionEnumeratedObjectListForGeneration (const GALGAS_string & in_mEnumerationOrder,
                                                                                                                                        const GALGAS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                                                                                                        const GALGAS_string & in_mEnumeratorCppName
                                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEnumerationOrder, in_mEnumeratedExpression, in_mEnumeratorCppName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_forInstructionEnumeratedObjectListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_forInstructionEnumeratedObjectListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_forInstructionEnumeratedObjectListForGeneration (mObject.mAttribute_mEnumerationOrder, mObject.mAttribute_mEnumeratedExpression, mObject.mAttribute_mEnumeratorCppName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_forInstructionEnumeratedObjectListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumerationOrder" ":" ;
  mObject.mAttribute_mEnumerationOrder.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumeratedExpression" ":" ;
  mObject.mAttribute_mEnumeratedExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumeratorCppName" ":" ;
  mObject.mAttribute_mEnumeratorCppName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_forInstructionEnumeratedObjectListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * operand = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListForGeneration::GALGAS_forInstructionEnumeratedObjectListForGeneration (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListForGeneration::GALGAS_forInstructionEnumeratedObjectListForGeneration (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListForGeneration GALGAS_forInstructionEnumeratedObjectListForGeneration::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectListForGeneration result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListForGeneration GALGAS_forInstructionEnumeratedObjectListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                                          const GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                                                                          const GALGAS_string & inOperand2
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_forInstructionEnumeratedObjectListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                        const GALGAS_string & in_mEnumerationOrder,
                                                                                        const GALGAS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                                                        const GALGAS_string & in_mEnumeratorCppName
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration (in_mEnumerationOrder,
                                                                                     in_mEnumeratedExpression,
                                                                                     in_mEnumeratorCppName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                                  const GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                  const GALGAS_string & inOperand2
                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectListForGeneration::modifier_insertAtIndex (const GALGAS_string inOperand0,
                                                                                     const GALGAS_semanticExpressionForGeneration inOperand1,
                                                                                     const GALGAS_string inOperand2,
                                                                                     const GALGAS_uint inInsertionIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectListForGeneration::modifier_removeAtIndex (GALGAS_string & outOperand0,
                                                                                     GALGAS_semanticExpressionForGeneration & outOperand1,
                                                                                     GALGAS_string & outOperand2,
                                                                                     const GALGAS_uint inRemoveIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
      outOperand0 = p->mObject.mAttribute_mEnumerationOrder ;
      outOperand1 = p->mObject.mAttribute_mEnumeratedExpression ;
      outOperand2 = p->mObject.mAttribute_mEnumeratorCppName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectListForGeneration::modifier_popFirst (GALGAS_string & outOperand0,
                                                                                GALGAS_semanticExpressionForGeneration & outOperand1,
                                                                                GALGAS_string & outOperand2,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mEnumerationOrder ;
    outOperand1 = p->mObject.mAttribute_mEnumeratedExpression ;
    outOperand2 = p->mObject.mAttribute_mEnumeratorCppName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectListForGeneration::modifier_popLast (GALGAS_string & outOperand0,
                                                                               GALGAS_semanticExpressionForGeneration & outOperand1,
                                                                               GALGAS_string & outOperand2,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mEnumerationOrder ;
    outOperand1 = p->mObject.mAttribute_mEnumeratedExpression ;
    outOperand2 = p->mObject.mAttribute_mEnumeratorCppName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                           GALGAS_semanticExpressionForGeneration & outOperand1,
                                                                           GALGAS_string & outOperand2,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mEnumerationOrder ;
    outOperand1 = p->mObject.mAttribute_mEnumeratedExpression ;
    outOperand2 = p->mObject.mAttribute_mEnumeratorCppName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectListForGeneration::method_last (GALGAS_string & outOperand0,
                                                                          GALGAS_semanticExpressionForGeneration & outOperand1,
                                                                          GALGAS_string & outOperand2,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mEnumerationOrder ;
    outOperand1 = p->mObject.mAttribute_mEnumeratedExpression ;
    outOperand2 = p->mObject.mAttribute_mEnumeratorCppName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListForGeneration GALGAS_forInstructionEnumeratedObjectListForGeneration::operator_concat (const GALGAS_forInstructionEnumeratedObjectListForGeneration & inOperand
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListForGeneration GALGAS_forInstructionEnumeratedObjectListForGeneration::add_operation (const GALGAS_forInstructionEnumeratedObjectListForGeneration & inOperand,
                                                                                                                              C_Compiler * /* inCompiler */
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListForGeneration GALGAS_forInstructionEnumeratedObjectListForGeneration::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectListForGeneration result = GALGAS_forInstructionEnumeratedObjectListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListForGeneration GALGAS_forInstructionEnumeratedObjectListForGeneration::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectListForGeneration result = GALGAS_forInstructionEnumeratedObjectListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectListForGeneration::dotAssign_operation (const GALGAS_forInstructionEnumeratedObjectListForGeneration inOperand
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_forInstructionEnumeratedObjectListForGeneration::reader_mEnumerationOrderAtIndex (const GALGAS_uint & inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    result = p->mObject.mAttribute_mEnumerationOrder ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_forInstructionEnumeratedObjectListForGeneration::reader_mEnumeratedExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    result = p->mObject.mAttribute_mEnumeratedExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_forInstructionEnumeratedObjectListForGeneration::reader_mEnumeratorCppNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    result = p->mObject.mAttribute_mEnumeratorCppName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_forInstructionEnumeratedObjectListForGeneration::cEnumerator_forInstructionEnumeratedObjectListForGeneration (const GALGAS_forInstructionEnumeratedObjectListForGeneration & inEnumeratedObject,
                                                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element cEnumerator_forInstructionEnumeratedObjectListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (const cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_forInstructionEnumeratedObjectListForGeneration::current_mEnumerationOrder (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (const cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
  return p->mObject.mAttribute_mEnumerationOrder ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cEnumerator_forInstructionEnumeratedObjectListForGeneration::current_mEnumeratedExpression (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (const cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
  return p->mObject.mAttribute_mEnumeratedExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_forInstructionEnumeratedObjectListForGeneration::current_mEnumeratorCppName (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (const cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
  return p->mObject.mAttribute_mEnumeratorCppName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @forInstructionEnumeratedObjectListForGeneration type                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration ("forInstructionEnumeratedObjectListForGeneration",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_forInstructionEnumeratedObjectListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_forInstructionEnumeratedObjectListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionEnumeratedObjectListForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListForGeneration GALGAS_forInstructionEnumeratedObjectListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectListForGeneration result ;
  const GALGAS_forInstructionEnumeratedObjectListForGeneration * p = (const GALGAS_forInstructionEnumeratedObjectListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forInstructionEnumeratedObjectListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecKind::GALGAS_incDecKind (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecKind GALGAS_incDecKind::constructor_increment (UNUSED_LOCATION_ARGS) {
  GALGAS_incDecKind result ;
  result.mEnum = kEnum_increment ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecKind GALGAS_incDecKind::constructor_decrement (UNUSED_LOCATION_ARGS) {
  GALGAS_incDecKind result ;
  result.mEnum = kEnum_decrement ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_incDecKind [3] = {
  "(not built)",
  "increment",
  "decrement"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_incDecKind::reader_isIncrement (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_increment == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_incDecKind::reader_isDecrement (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_decrement == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_incDecKind::description (C_String & ioString,
                                     const int32_t /* inIndentation */) const {
  ioString << "<enum @incDecKind: " << gEnumNameArrayFor_incDecKind [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_incDecKind::objectCompare (const GALGAS_incDecKind & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @incDecKind type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_incDecKind ("incDecKind",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_incDecKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_incDecKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecKind (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecKind GALGAS_incDecKind::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_incDecKind result ;
  const GALGAS_incDecKind * p = (const GALGAS_incDecKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_incDecKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@logListAST' list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_logListAST : public cCollectionElement {
  public : GALGAS_logListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_logListAST (const GALGAS_lstring & in_mLogMessage,
                                          const GALGAS_semanticExpressionAST & in_mLogExpression
                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_logListAST::cCollectionElement_logListAST (const GALGAS_lstring & in_mLogMessage,
                                                              const GALGAS_semanticExpressionAST & in_mLogExpression
                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLogMessage, in_mLogExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_logListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_logListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_logListAST (mObject.mAttribute_mLogMessage, mObject.mAttribute_mLogExpression COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_logListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLogMessage" ":" ;
  mObject.mAttribute_mLogMessage.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLogExpression" ":" ;
  mObject.mAttribute_mLogExpression.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_logListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_logListAST * operand = (cCollectionElement_logListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_logListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_logListAST::GALGAS_logListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_logListAST::GALGAS_logListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_logListAST GALGAS_logListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_logListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_logListAST GALGAS_logListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_semanticExpressionAST & inOperand1
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_logListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_logListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_logListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GALGAS_lstring & in_mLogMessage,
                                                   const GALGAS_semanticExpressionAST & in_mLogExpression
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_logListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_logListAST (in_mLogMessage,
                                                in_mLogExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_logListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                             const GALGAS_semanticExpressionAST & inOperand1
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_logListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_logListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                const GALGAS_semanticExpressionAST inOperand1,
                                                const GALGAS_uint inInsertionIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_logListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_logListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                GALGAS_semanticExpressionAST & outOperand1,
                                                const GALGAS_uint inRemoveIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_logListAST) ;
      outOperand0 = p->mObject.mAttribute_mLogMessage ;
      outOperand1 = p->mObject.mAttribute_mLogExpression ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_logListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                           GALGAS_semanticExpressionAST & outOperand1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    outOperand0 = p->mObject.mAttribute_mLogMessage ;
    outOperand1 = p->mObject.mAttribute_mLogExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_logListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                          GALGAS_semanticExpressionAST & outOperand1,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    outOperand0 = p->mObject.mAttribute_mLogMessage ;
    outOperand1 = p->mObject.mAttribute_mLogExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_logListAST::method_first (GALGAS_lstring & outOperand0,
                                      GALGAS_semanticExpressionAST & outOperand1,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    outOperand0 = p->mObject.mAttribute_mLogMessage ;
    outOperand1 = p->mObject.mAttribute_mLogExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_logListAST::method_last (GALGAS_lstring & outOperand0,
                                     GALGAS_semanticExpressionAST & outOperand1,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    outOperand0 = p->mObject.mAttribute_mLogMessage ;
    outOperand1 = p->mObject.mAttribute_mLogExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_logListAST GALGAS_logListAST::operator_concat (const GALGAS_logListAST & inOperand
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_logListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_logListAST GALGAS_logListAST::add_operation (const GALGAS_logListAST & inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_logListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_logListAST GALGAS_logListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_logListAST result = GALGAS_logListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_logListAST GALGAS_logListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_logListAST result = GALGAS_logListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_logListAST::dotAssign_operation (const GALGAS_logListAST inOperand
                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_logListAST::reader_mLogMessageAtIndex (const GALGAS_uint & inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    result = p->mObject.mAttribute_mLogMessage ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_logListAST::reader_mLogExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
  GALGAS_semanticExpressionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    result = p->mObject.mAttribute_mLogExpression ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_logListAST::cEnumerator_logListAST (const GALGAS_logListAST & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_logListAST_2D_element cEnumerator_logListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_logListAST * p = (const cCollectionElement_logListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_logListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_logListAST::current_mLogMessage (LOCATION_ARGS) const {
  const cCollectionElement_logListAST * p = (const cCollectionElement_logListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_logListAST) ;
  return p->mObject.mAttribute_mLogMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cEnumerator_logListAST::current_mLogExpression (LOCATION_ARGS) const {
  const cCollectionElement_logListAST * p = (const cCollectionElement_logListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_logListAST) ;
  return p->mObject.mAttribute_mLogExpression ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @logListAST type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_logListAST ("logListAST",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_logListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_logListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_logListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_logListAST GALGAS_logListAST::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_logListAST result ;
  const GALGAS_logListAST * p = (const GALGAS_logListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_logListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@matchEntryListAST' list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_matchEntryListAST : public cCollectionElement {
  public : GALGAS_matchEntryListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_matchEntryListAST (const GALGAS_bool & in_mIsType,
                                                 const GALGAS_lstring & in_mTypeNameOrEnumerationConstantName,
                                                 const GALGAS_lstring & in_mLocalConstantName
                                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_matchEntryListAST::cCollectionElement_matchEntryListAST (const GALGAS_bool & in_mIsType,
                                                                            const GALGAS_lstring & in_mTypeNameOrEnumerationConstantName,
                                                                            const GALGAS_lstring & in_mLocalConstantName
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mIsType, in_mTypeNameOrEnumerationConstantName, in_mLocalConstantName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_matchEntryListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_matchEntryListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_matchEntryListAST (mObject.mAttribute_mIsType, mObject.mAttribute_mTypeNameOrEnumerationConstantName, mObject.mAttribute_mLocalConstantName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_matchEntryListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsType" ":" ;
  mObject.mAttribute_mIsType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeNameOrEnumerationConstantName" ":" ;
  mObject.mAttribute_mTypeNameOrEnumerationConstantName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLocalConstantName" ":" ;
  mObject.mAttribute_mLocalConstantName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_matchEntryListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_matchEntryListAST * operand = (cCollectionElement_matchEntryListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_matchEntryListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST::GALGAS_matchEntryListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST::GALGAS_matchEntryListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST GALGAS_matchEntryListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_matchEntryListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST GALGAS_matchEntryListAST::constructor_listWithValue (const GALGAS_bool & inOperand0,
                                                                              const GALGAS_lstring & inOperand1,
                                                                              const GALGAS_lstring & inOperand2
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_matchEntryListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_matchEntryListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchEntryListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_bool & in_mIsType,
                                                          const GALGAS_lstring & in_mTypeNameOrEnumerationConstantName,
                                                          const GALGAS_lstring & in_mLocalConstantName
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_matchEntryListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_matchEntryListAST (in_mIsType,
                                                       in_mTypeNameOrEnumerationConstantName,
                                                       in_mLocalConstantName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchEntryListAST::addAssign_operation (const GALGAS_bool & inOperand0,
                                                    const GALGAS_lstring & inOperand1,
                                                    const GALGAS_lstring & inOperand2
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_matchEntryListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchEntryListAST::modifier_insertAtIndex (const GALGAS_bool inOperand0,
                                                       const GALGAS_lstring inOperand1,
                                                       const GALGAS_lstring inOperand2,
                                                       const GALGAS_uint inInsertionIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_matchEntryListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchEntryListAST::modifier_removeAtIndex (GALGAS_bool & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_lstring & outOperand2,
                                                       const GALGAS_uint inRemoveIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_matchEntryListAST * p = (cCollectionElement_matchEntryListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_matchEntryListAST) ;
      outOperand0 = p->mObject.mAttribute_mIsType ;
      outOperand1 = p->mObject.mAttribute_mTypeNameOrEnumerationConstantName ;
      outOperand2 = p->mObject.mAttribute_mLocalConstantName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchEntryListAST::modifier_popFirst (GALGAS_bool & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  GALGAS_lstring & outOperand2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchEntryListAST * p = (cCollectionElement_matchEntryListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchEntryListAST) ;
    outOperand0 = p->mObject.mAttribute_mIsType ;
    outOperand1 = p->mObject.mAttribute_mTypeNameOrEnumerationConstantName ;
    outOperand2 = p->mObject.mAttribute_mLocalConstantName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchEntryListAST::modifier_popLast (GALGAS_bool & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_lstring & outOperand2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchEntryListAST * p = (cCollectionElement_matchEntryListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchEntryListAST) ;
    outOperand0 = p->mObject.mAttribute_mIsType ;
    outOperand1 = p->mObject.mAttribute_mTypeNameOrEnumerationConstantName ;
    outOperand2 = p->mObject.mAttribute_mLocalConstantName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchEntryListAST::method_first (GALGAS_bool & outOperand0,
                                             GALGAS_lstring & outOperand1,
                                             GALGAS_lstring & outOperand2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchEntryListAST * p = (cCollectionElement_matchEntryListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchEntryListAST) ;
    outOperand0 = p->mObject.mAttribute_mIsType ;
    outOperand1 = p->mObject.mAttribute_mTypeNameOrEnumerationConstantName ;
    outOperand2 = p->mObject.mAttribute_mLocalConstantName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchEntryListAST::method_last (GALGAS_bool & outOperand0,
                                            GALGAS_lstring & outOperand1,
                                            GALGAS_lstring & outOperand2,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchEntryListAST * p = (cCollectionElement_matchEntryListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchEntryListAST) ;
    outOperand0 = p->mObject.mAttribute_mIsType ;
    outOperand1 = p->mObject.mAttribute_mTypeNameOrEnumerationConstantName ;
    outOperand2 = p->mObject.mAttribute_mLocalConstantName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST GALGAS_matchEntryListAST::operator_concat (const GALGAS_matchEntryListAST & inOperand
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_matchEntryListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST GALGAS_matchEntryListAST::add_operation (const GALGAS_matchEntryListAST & inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_matchEntryListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST GALGAS_matchEntryListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_matchEntryListAST result = GALGAS_matchEntryListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST GALGAS_matchEntryListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_matchEntryListAST result = GALGAS_matchEntryListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchEntryListAST::dotAssign_operation (const GALGAS_matchEntryListAST inOperand
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_matchEntryListAST::cEnumerator_matchEntryListAST (const GALGAS_matchEntryListAST & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST_2D_element cEnumerator_matchEntryListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_matchEntryListAST * p = (const cCollectionElement_matchEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchEntryListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_matchEntryListAST::current_mIsType (LOCATION_ARGS) const {
  const cCollectionElement_matchEntryListAST * p = (const cCollectionElement_matchEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchEntryListAST) ;
  return p->mObject.mAttribute_mIsType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_matchEntryListAST::current_mTypeNameOrEnumerationConstantName (LOCATION_ARGS) const {
  const cCollectionElement_matchEntryListAST * p = (const cCollectionElement_matchEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchEntryListAST) ;
  return p->mObject.mAttribute_mTypeNameOrEnumerationConstantName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_matchEntryListAST::current_mLocalConstantName (LOCATION_ARGS) const {
  const cCollectionElement_matchEntryListAST * p = (const cCollectionElement_matchEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchEntryListAST) ;
  return p->mObject.mAttribute_mLocalConstantName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @matchEntryListAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_matchEntryListAST ("matchEntryListAST",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_matchEntryListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_matchEntryListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_matchEntryListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_matchEntryListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST GALGAS_matchEntryListAST::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_matchEntryListAST result ;
  const GALGAS_matchEntryListAST * p = (const GALGAS_matchEntryListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_matchEntryListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("matchEntryListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Class for element of '@matchInstructionBranchListAST' list                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_matchInstructionBranchListAST : public cCollectionElement {
  public : GALGAS_matchInstructionBranchListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_matchInstructionBranchListAST (const GALGAS_matchEntryListAST & in_mMatchEntryList,
                                                             const GALGAS_location & in_mEndOfMatchEntryList,
                                                             const GALGAS_semanticInstructionListAST & in_mMatchBranchInstructionList,
                                                             const GALGAS_location & in_mEndOf_5F_instructionList
                                                             COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_matchInstructionBranchListAST::cCollectionElement_matchInstructionBranchListAST (const GALGAS_matchEntryListAST & in_mMatchEntryList,
                                                                                                    const GALGAS_location & in_mEndOfMatchEntryList,
                                                                                                    const GALGAS_semanticInstructionListAST & in_mMatchBranchInstructionList,
                                                                                                    const GALGAS_location & in_mEndOf_5F_instructionList
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMatchEntryList, in_mEndOfMatchEntryList, in_mMatchBranchInstructionList, in_mEndOf_5F_instructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_matchInstructionBranchListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_matchInstructionBranchListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_matchInstructionBranchListAST (mObject.mAttribute_mMatchEntryList, mObject.mAttribute_mEndOfMatchEntryList, mObject.mAttribute_mMatchBranchInstructionList, mObject.mAttribute_mEndOf_5F_instructionList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_matchInstructionBranchListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMatchEntryList" ":" ;
  mObject.mAttribute_mMatchEntryList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfMatchEntryList" ":" ;
  mObject.mAttribute_mEndOfMatchEntryList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMatchBranchInstructionList" ":" ;
  mObject.mAttribute_mMatchBranchInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOf_instructionList" ":" ;
  mObject.mAttribute_mEndOf_5F_instructionList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_matchInstructionBranchListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_matchInstructionBranchListAST * operand = (cCollectionElement_matchInstructionBranchListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_matchInstructionBranchListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListAST::GALGAS_matchInstructionBranchListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListAST::GALGAS_matchInstructionBranchListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListAST GALGAS_matchInstructionBranchListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_matchInstructionBranchListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListAST GALGAS_matchInstructionBranchListAST::constructor_listWithValue (const GALGAS_matchEntryListAST & inOperand0,
                                                                                                      const GALGAS_location & inOperand1,
                                                                                                      const GALGAS_semanticInstructionListAST & inOperand2,
                                                                                                      const GALGAS_location & inOperand3
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_matchInstructionBranchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_matchInstructionBranchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_matchEntryListAST & in_mMatchEntryList,
                                                                      const GALGAS_location & in_mEndOfMatchEntryList,
                                                                      const GALGAS_semanticInstructionListAST & in_mMatchBranchInstructionList,
                                                                      const GALGAS_location & in_mEndOf_5F_instructionList
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_matchInstructionBranchListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_matchInstructionBranchListAST (in_mMatchEntryList,
                                                                   in_mEndOfMatchEntryList,
                                                                   in_mMatchBranchInstructionList,
                                                                   in_mEndOf_5F_instructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListAST::addAssign_operation (const GALGAS_matchEntryListAST & inOperand0,
                                                                const GALGAS_location & inOperand1,
                                                                const GALGAS_semanticInstructionListAST & inOperand2,
                                                                const GALGAS_location & inOperand3
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_matchInstructionBranchListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListAST::modifier_insertAtIndex (const GALGAS_matchEntryListAST inOperand0,
                                                                   const GALGAS_location inOperand1,
                                                                   const GALGAS_semanticInstructionListAST inOperand2,
                                                                   const GALGAS_location inOperand3,
                                                                   const GALGAS_uint inInsertionIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_matchInstructionBranchListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListAST::modifier_removeAtIndex (GALGAS_matchEntryListAST & outOperand0,
                                                                   GALGAS_location & outOperand1,
                                                                   GALGAS_semanticInstructionListAST & outOperand2,
                                                                   GALGAS_location & outOperand3,
                                                                   const GALGAS_uint inRemoveIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_matchInstructionBranchListAST * p = (cCollectionElement_matchInstructionBranchListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListAST) ;
      outOperand0 = p->mObject.mAttribute_mMatchEntryList ;
      outOperand1 = p->mObject.mAttribute_mEndOfMatchEntryList ;
      outOperand2 = p->mObject.mAttribute_mMatchBranchInstructionList ;
      outOperand3 = p->mObject.mAttribute_mEndOf_5F_instructionList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListAST::modifier_popFirst (GALGAS_matchEntryListAST & outOperand0,
                                                              GALGAS_location & outOperand1,
                                                              GALGAS_semanticInstructionListAST & outOperand2,
                                                              GALGAS_location & outOperand3,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchInstructionBranchListAST * p = (cCollectionElement_matchInstructionBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mMatchEntryList ;
    outOperand1 = p->mObject.mAttribute_mEndOfMatchEntryList ;
    outOperand2 = p->mObject.mAttribute_mMatchBranchInstructionList ;
    outOperand3 = p->mObject.mAttribute_mEndOf_5F_instructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListAST::modifier_popLast (GALGAS_matchEntryListAST & outOperand0,
                                                             GALGAS_location & outOperand1,
                                                             GALGAS_semanticInstructionListAST & outOperand2,
                                                             GALGAS_location & outOperand3,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchInstructionBranchListAST * p = (cCollectionElement_matchInstructionBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mMatchEntryList ;
    outOperand1 = p->mObject.mAttribute_mEndOfMatchEntryList ;
    outOperand2 = p->mObject.mAttribute_mMatchBranchInstructionList ;
    outOperand3 = p->mObject.mAttribute_mEndOf_5F_instructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListAST::method_first (GALGAS_matchEntryListAST & outOperand0,
                                                         GALGAS_location & outOperand1,
                                                         GALGAS_semanticInstructionListAST & outOperand2,
                                                         GALGAS_location & outOperand3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchInstructionBranchListAST * p = (cCollectionElement_matchInstructionBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mMatchEntryList ;
    outOperand1 = p->mObject.mAttribute_mEndOfMatchEntryList ;
    outOperand2 = p->mObject.mAttribute_mMatchBranchInstructionList ;
    outOperand3 = p->mObject.mAttribute_mEndOf_5F_instructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListAST::method_last (GALGAS_matchEntryListAST & outOperand0,
                                                        GALGAS_location & outOperand1,
                                                        GALGAS_semanticInstructionListAST & outOperand2,
                                                        GALGAS_location & outOperand3,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_matchInstructionBranchListAST * p = (cCollectionElement_matchInstructionBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mMatchEntryList ;
    outOperand1 = p->mObject.mAttribute_mEndOfMatchEntryList ;
    outOperand2 = p->mObject.mAttribute_mMatchBranchInstructionList ;
    outOperand3 = p->mObject.mAttribute_mEndOf_5F_instructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListAST GALGAS_matchInstructionBranchListAST::operator_concat (const GALGAS_matchInstructionBranchListAST & inOperand
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_matchInstructionBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListAST GALGAS_matchInstructionBranchListAST::add_operation (const GALGAS_matchInstructionBranchListAST & inOperand,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_matchInstructionBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListAST GALGAS_matchInstructionBranchListAST::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_matchInstructionBranchListAST result = GALGAS_matchInstructionBranchListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListAST GALGAS_matchInstructionBranchListAST::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_matchInstructionBranchListAST result = GALGAS_matchInstructionBranchListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListAST::dotAssign_operation (const GALGAS_matchInstructionBranchListAST inOperand
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_matchInstructionBranchListAST::cEnumerator_matchInstructionBranchListAST (const GALGAS_matchInstructionBranchListAST & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListAST_2D_element cEnumerator_matchInstructionBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_matchInstructionBranchListAST * p = (const cCollectionElement_matchInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST cEnumerator_matchInstructionBranchListAST::current_mMatchEntryList (LOCATION_ARGS) const {
  const cCollectionElement_matchInstructionBranchListAST * p = (const cCollectionElement_matchInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListAST) ;
  return p->mObject.mAttribute_mMatchEntryList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_matchInstructionBranchListAST::current_mEndOfMatchEntryList (LOCATION_ARGS) const {
  const cCollectionElement_matchInstructionBranchListAST * p = (const cCollectionElement_matchInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListAST) ;
  return p->mObject.mAttribute_mEndOfMatchEntryList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST cEnumerator_matchInstructionBranchListAST::current_mMatchBranchInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_matchInstructionBranchListAST * p = (const cCollectionElement_matchInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListAST) ;
  return p->mObject.mAttribute_mMatchBranchInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_matchInstructionBranchListAST::current_mEndOf_5F_instructionList (LOCATION_ARGS) const {
  const cCollectionElement_matchInstructionBranchListAST * p = (const cCollectionElement_matchInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_matchInstructionBranchListAST) ;
  return p->mObject.mAttribute_mEndOf_5F_instructionList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @matchInstructionBranchListAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_matchInstructionBranchListAST ("matchInstructionBranchListAST",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_matchInstructionBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_matchInstructionBranchListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_matchInstructionBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_matchInstructionBranchListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListAST GALGAS_matchInstructionBranchListAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_matchInstructionBranchListAST result ;
  const GALGAS_matchInstructionBranchListAST * p = (const GALGAS_matchInstructionBranchListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_matchInstructionBranchListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("matchInstructionBranchListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

