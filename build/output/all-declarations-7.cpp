#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@ruleDeclarationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_ruleDeclarationList : public cCollectionElement {
  public: GALGAS_ruleDeclarationList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_ruleDeclarationList (const GALGAS_string & in_mNonterminalName,
                                                  const GALGAS_uint & in_mRuleIndex,
                                                  const GALGAS_ruleLabelImplementationList & in_mLabelImplementationList
                                                  COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_ruleDeclarationList (const GALGAS_ruleDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_ruleDeclarationList::cCollectionElement_ruleDeclarationList (const GALGAS_string & in_mNonterminalName,
                                                                                const GALGAS_uint & in_mRuleIndex,
                                                                                const GALGAS_ruleLabelImplementationList & in_mLabelImplementationList
                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mNonterminalName, in_mRuleIndex, in_mLabelImplementationList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_ruleDeclarationList::cCollectionElement_ruleDeclarationList (const GALGAS_ruleDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mNonterminalName, inElement.mProperty_mRuleIndex, inElement.mProperty_mLabelImplementationList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_ruleDeclarationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_ruleDeclarationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_ruleDeclarationList (mObject.mProperty_mNonterminalName, mObject.mProperty_mRuleIndex, mObject.mProperty_mLabelImplementationList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_ruleDeclarationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNonterminalName" ":" ;
  mObject.mProperty_mNonterminalName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRuleIndex" ":" ;
  mObject.mProperty_mRuleIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLabelImplementationList" ":" ;
  mObject.mProperty_mLabelImplementationList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_ruleDeclarationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_ruleDeclarationList * operand = (cCollectionElement_ruleDeclarationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_ruleDeclarationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ruleDeclarationList::GALGAS_ruleDeclarationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ruleDeclarationList::GALGAS_ruleDeclarationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ruleDeclarationList GALGAS_ruleDeclarationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_ruleDeclarationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ruleDeclarationList GALGAS_ruleDeclarationList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                  const GALGAS_uint & inOperand1,
                                                                                  const GALGAS_ruleLabelImplementationList & inOperand2
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ruleDeclarationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_ruleDeclarationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_ruleDeclarationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ruleDeclarationList::addAssign_operation (const GALGAS_string & inOperand0,
                                                      const GALGAS_uint & inOperand1,
                                                      const GALGAS_ruleLabelImplementationList & inOperand2
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_ruleDeclarationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ruleDeclarationList::setter_append (GALGAS_ruleDeclarationList_2D_element inElement,
                                                C_Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_ruleDeclarationList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ruleDeclarationList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                       const GALGAS_uint inOperand1,
                                                       const GALGAS_ruleLabelImplementationList inOperand2,
                                                       const GALGAS_uint inInsertionIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_ruleDeclarationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ruleDeclarationList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                       GALGAS_uint & outOperand1,
                                                       GALGAS_ruleLabelImplementationList & outOperand2,
                                                       const GALGAS_uint inRemoveIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
        outOperand0 = p->mObject.mProperty_mNonterminalName ;
        outOperand1 = p->mObject.mProperty_mRuleIndex ;
        outOperand2 = p->mObject.mProperty_mLabelImplementationList ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ruleDeclarationList::setter_popFirst (GALGAS_string & outOperand0,
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
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mRuleIndex ;
    outOperand2 = p->mObject.mProperty_mLabelImplementationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ruleDeclarationList::setter_popLast (GALGAS_string & outOperand0,
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
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mRuleIndex ;
    outOperand2 = p->mObject.mProperty_mLabelImplementationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mRuleIndex ;
    outOperand2 = p->mObject.mProperty_mLabelImplementationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mRuleIndex ;
    outOperand2 = p->mObject.mProperty_mLabelImplementationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ruleDeclarationList GALGAS_ruleDeclarationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_ruleDeclarationList result = GALGAS_ruleDeclarationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ruleDeclarationList GALGAS_ruleDeclarationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_ruleDeclarationList result = GALGAS_ruleDeclarationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ruleDeclarationList GALGAS_ruleDeclarationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_ruleDeclarationList result = GALGAS_ruleDeclarationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ruleDeclarationList::plusAssign_operation (const GALGAS_ruleDeclarationList inOperand,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ruleDeclarationList::setter_setMNonterminalNameAtIndex (GALGAS_string inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mNonterminalName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_ruleDeclarationList::getter_mNonterminalNameAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    result = p->mObject.mProperty_mNonterminalName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ruleDeclarationList::setter_setMRuleIndexAtIndex (GALGAS_uint inOperand,
                                                              GALGAS_uint inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRuleIndex = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ruleDeclarationList::getter_mRuleIndexAtIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    result = p->mObject.mProperty_mRuleIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ruleDeclarationList::setter_setMLabelImplementationListAtIndex (GALGAS_ruleLabelImplementationList inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLabelImplementationList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ruleLabelImplementationList GALGAS_ruleDeclarationList::getter_mLabelImplementationListAtIndex (const GALGAS_uint & inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  GALGAS_ruleLabelImplementationList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    result = p->mObject.mProperty_mLabelImplementationList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_ruleDeclarationList::cEnumerator_ruleDeclarationList (const GALGAS_ruleDeclarationList & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ruleDeclarationList_2D_element cEnumerator_ruleDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_ruleDeclarationList * p = (const cCollectionElement_ruleDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_ruleDeclarationList::current_mNonterminalName (LOCATION_ARGS) const {
  const cCollectionElement_ruleDeclarationList * p = (const cCollectionElement_ruleDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
  return p->mObject.mProperty_mNonterminalName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_ruleDeclarationList::current_mRuleIndex (LOCATION_ARGS) const {
  const cCollectionElement_ruleDeclarationList * p = (const cCollectionElement_ruleDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
  return p->mObject.mProperty_mRuleIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ruleLabelImplementationList cEnumerator_ruleDeclarationList::current_mLabelImplementationList (LOCATION_ARGS) const {
  const cCollectionElement_ruleDeclarationList * p = (const cCollectionElement_ruleDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
  return p->mObject.mProperty_mLabelImplementationList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@ruleDeclarationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ruleDeclarationList ("ruleDeclarationList",
                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ruleDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ruleDeclarationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ruleDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ruleDeclarationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_syntaxDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_syntaxDeclarationForGeneration * p = (const cPtr_syntaxDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSyntaxComponentName.objectCompare (p->mProperty_mSyntaxComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexiqueName.objectCompare (p->mProperty_mLexiqueName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNonterminalDeclarationMap.objectCompare (p->mProperty_mNonterminalDeclarationMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRuleDeclarationList.objectCompare (p->mProperty_mRuleDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSelectMethodCount.objectCompare (p->mProperty_mSelectMethodCount) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasIndexing.objectCompare (p->mProperty_mHasIndexing) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasTranslateFeature.objectCompare (p->mProperty_mHasTranslateFeature) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_syntaxDeclarationForGeneration::objectCompare (const GALGAS_syntaxDeclarationForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxDeclarationForGeneration::GALGAS_syntaxDeclarationForGeneration (void) :
GALGAS_semanticDeclarationForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxDeclarationForGeneration GALGAS_syntaxDeclarationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_syntaxDeclarationForGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                                 GALGAS_string::constructor_default (HERE),
                                                                 GALGAS_nonterminalMap::constructor_emptyMap (HERE),
                                                                 GALGAS_ruleDeclarationList::constructor_emptyList (HERE),
                                                                 GALGAS_uint::constructor_default (HERE),
                                                                 GALGAS_bool::constructor_default (HERE),
                                                                 GALGAS_bool::constructor_default (HERE)
                                                                 COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxDeclarationForGeneration::GALGAS_syntaxDeclarationForGeneration (const cPtr_syntaxDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syntaxDeclarationForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxDeclarationForGeneration GALGAS_syntaxDeclarationForGeneration::constructor_new (const GALGAS_string & inAttribute_mSyntaxComponentName,
                                                                                              const GALGAS_string & inAttribute_mLexiqueName,
                                                                                              const GALGAS_nonterminalMap & inAttribute_mNonterminalDeclarationMap,
                                                                                              const GALGAS_ruleDeclarationList & inAttribute_mRuleDeclarationList,
                                                                                              const GALGAS_uint & inAttribute_mSelectMethodCount,
                                                                                              const GALGAS_bool & inAttribute_mHasIndexing,
                                                                                              const GALGAS_bool & inAttribute_mHasTranslateFeature
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_syntaxDeclarationForGeneration result ;
  if (inAttribute_mSyntaxComponentName.isValid () && inAttribute_mLexiqueName.isValid () && inAttribute_mNonterminalDeclarationMap.isValid () && inAttribute_mRuleDeclarationList.isValid () && inAttribute_mSelectMethodCount.isValid () && inAttribute_mHasIndexing.isValid () && inAttribute_mHasTranslateFeature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_syntaxDeclarationForGeneration (inAttribute_mSyntaxComponentName, inAttribute_mLexiqueName, inAttribute_mNonterminalDeclarationMap, inAttribute_mRuleDeclarationList, inAttribute_mSelectMethodCount, inAttribute_mHasIndexing, inAttribute_mHasTranslateFeature COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_syntaxDeclarationForGeneration::getter_mSyntaxComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_syntaxDeclarationForGeneration * p = (const cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    result = p->mProperty_mSyntaxComponentName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_syntaxDeclarationForGeneration::getter_mSyntaxComponentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSyntaxComponentName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_syntaxDeclarationForGeneration::getter_mLexiqueName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_syntaxDeclarationForGeneration * p = (const cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    result = p->mProperty_mLexiqueName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_syntaxDeclarationForGeneration::getter_mLexiqueName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexiqueName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalMap GALGAS_syntaxDeclarationForGeneration::getter_mNonterminalDeclarationMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_nonterminalMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_syntaxDeclarationForGeneration * p = (const cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    result = p->mProperty_mNonterminalDeclarationMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalMap cPtr_syntaxDeclarationForGeneration::getter_mNonterminalDeclarationMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNonterminalDeclarationMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ruleDeclarationList GALGAS_syntaxDeclarationForGeneration::getter_mRuleDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_ruleDeclarationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_syntaxDeclarationForGeneration * p = (const cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    result = p->mProperty_mRuleDeclarationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ruleDeclarationList cPtr_syntaxDeclarationForGeneration::getter_mRuleDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRuleDeclarationList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_syntaxDeclarationForGeneration::getter_mSelectMethodCount (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_syntaxDeclarationForGeneration * p = (const cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    result = p->mProperty_mSelectMethodCount ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_syntaxDeclarationForGeneration::getter_mSelectMethodCount (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectMethodCount ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_syntaxDeclarationForGeneration::getter_mHasIndexing (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_syntaxDeclarationForGeneration * p = (const cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    result = p->mProperty_mHasIndexing ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_syntaxDeclarationForGeneration::getter_mHasIndexing (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasIndexing ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_syntaxDeclarationForGeneration::getter_mHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_syntaxDeclarationForGeneration * p = (const cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    result = p->mProperty_mHasTranslateFeature ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_syntaxDeclarationForGeneration::getter_mHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasTranslateFeature ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxDeclarationForGeneration::setter_setMSyntaxComponentName (GALGAS_string inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    p->mProperty_mSyntaxComponentName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_syntaxDeclarationForGeneration::setter_setMSyntaxComponentName (GALGAS_string inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSyntaxComponentName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxDeclarationForGeneration::setter_setMLexiqueName (GALGAS_string inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    p->mProperty_mLexiqueName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_syntaxDeclarationForGeneration::setter_setMLexiqueName (GALGAS_string inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLexiqueName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxDeclarationForGeneration::setter_setMNonterminalDeclarationMap (GALGAS_nonterminalMap inValue
                                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    p->mProperty_mNonterminalDeclarationMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_syntaxDeclarationForGeneration::setter_setMNonterminalDeclarationMap (GALGAS_nonterminalMap inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mNonterminalDeclarationMap = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxDeclarationForGeneration::setter_setMRuleDeclarationList (GALGAS_ruleDeclarationList inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    p->mProperty_mRuleDeclarationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_syntaxDeclarationForGeneration::setter_setMRuleDeclarationList (GALGAS_ruleDeclarationList inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRuleDeclarationList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxDeclarationForGeneration::setter_setMSelectMethodCount (GALGAS_uint inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    p->mProperty_mSelectMethodCount = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_syntaxDeclarationForGeneration::setter_setMSelectMethodCount (GALGAS_uint inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSelectMethodCount = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxDeclarationForGeneration::setter_setMHasIndexing (GALGAS_bool inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    p->mProperty_mHasIndexing = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_syntaxDeclarationForGeneration::setter_setMHasIndexing (GALGAS_bool inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mHasIndexing = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxDeclarationForGeneration::setter_setMHasTranslateFeature (GALGAS_bool inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    p->mProperty_mHasTranslateFeature = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_syntaxDeclarationForGeneration::setter_setMHasTranslateFeature (GALGAS_bool inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mHasTranslateFeature = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @syntaxDeclarationForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_syntaxDeclarationForGeneration::cPtr_syntaxDeclarationForGeneration (const GALGAS_string & in_mSyntaxComponentName,
                                                                          const GALGAS_string & in_mLexiqueName,
                                                                          const GALGAS_nonterminalMap & in_mNonterminalDeclarationMap,
                                                                          const GALGAS_ruleDeclarationList & in_mRuleDeclarationList,
                                                                          const GALGAS_uint & in_mSelectMethodCount,
                                                                          const GALGAS_bool & in_mHasIndexing,
                                                                          const GALGAS_bool & in_mHasTranslateFeature
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationForGeneration (THERE),
mProperty_mSyntaxComponentName (in_mSyntaxComponentName),
mProperty_mLexiqueName (in_mLexiqueName),
mProperty_mNonterminalDeclarationMap (in_mNonterminalDeclarationMap),
mProperty_mRuleDeclarationList (in_mRuleDeclarationList),
mProperty_mSelectMethodCount (in_mSelectMethodCount),
mProperty_mHasIndexing (in_mHasIndexing),
mProperty_mHasTranslateFeature (in_mHasTranslateFeature) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_syntaxDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration ;
}

void cPtr_syntaxDeclarationForGeneration::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@syntaxDeclarationForGeneration:" ;
  mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mNonterminalDeclarationMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRuleDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSelectMethodCount.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHasIndexing.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_syntaxDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_syntaxDeclarationForGeneration (mProperty_mSyntaxComponentName, mProperty_mLexiqueName, mProperty_mNonterminalDeclarationMap, mProperty_mRuleDeclarationList, mProperty_mSelectMethodCount, mProperty_mHasIndexing, mProperty_mHasTranslateFeature COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@syntaxDeclarationForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration ("syntaxDeclarationForGeneration",
                                                       & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxDeclarationForGeneration GALGAS_syntaxDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_syntaxDeclarationForGeneration result ;
  const GALGAS_syntaxDeclarationForGeneration * p = (const GALGAS_syntaxDeclarationForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@syntaxInstructionAST analyzeSyntaxInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_syntaxInstructionAST_analyzeSyntaxInstruction> gExtensionMethodTable_syntaxInstructionAST_analyzeSyntaxInstruction ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeSyntaxInstruction (const int32_t inClassIndex,
                                                    extensionMethodSignature_syntaxInstructionAST_analyzeSyntaxInstruction inMethod) {
  gExtensionMethodTable_syntaxInstructionAST_analyzeSyntaxInstruction.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_syntaxInstructionAST_analyzeSyntaxInstruction (void) {
  gExtensionMethodTable_syntaxInstructionAST_analyzeSyntaxInstruction.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_syntaxInstructionAST_analyzeSyntaxInstruction (NULL,
                                                                          freeExtensionMethod_syntaxInstructionAST_analyzeSyntaxInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                   const GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                                   GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                   const GALGAS_analysisContext constin_inAnalysisContext,
                                                   const GALGAS_bool constin_inHasTranslateFeature,
                                                   const GALGAS_terminalMap constin_inTerminalMap,
                                                   const GALGAS_string constin_inLexiqueName,
                                                   const GALGAS_nonterminalMap constin_inNonterminalMap,
                                                   const GALGAS_string constin_inComponentName,
                                                   const GALGAS_stringset constin_inIndexNameSet,
                                                   GALGAS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                   GALGAS_localVarManager & io_ioVariableMap,
                                                   GALGAS_uint & io_ioSelectMethodCount,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_syntaxInstructionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_syntaxInstructionAST_analyzeSyntaxInstruction f = NULL ;
    if (classIndex < gExtensionMethodTable_syntaxInstructionAST_analyzeSyntaxInstruction.count ()) {
      f = gExtensionMethodTable_syntaxInstructionAST_analyzeSyntaxInstruction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_syntaxInstructionAST_analyzeSyntaxInstruction.count ()) {
          f = gExtensionMethodTable_syntaxInstructionAST_analyzeSyntaxInstruction (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_syntaxInstructionAST_analyzeSyntaxInstruction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inAnalysisContext, constin_inHasTranslateFeature, constin_inTerminalMap, constin_inLexiqueName, constin_inNonterminalMap, constin_inComponentName, constin_inIndexNameSet, io_ioInstructionListForGeneration, io_ioVariableMap, io_ioSelectMethodCount, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractInputParameter analyzeInputParameter'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_abstractInputParameter_analyzeInputParameter> gExtensionMethodTable_abstractInputParameter_analyzeInputParameter ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeInputParameter (const int32_t inClassIndex,
                                                 extensionMethodSignature_abstractInputParameter_analyzeInputParameter inMethod) {
  gExtensionMethodTable_abstractInputParameter_analyzeInputParameter.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_abstractInputParameter_analyzeInputParameter (void) {
  gExtensionMethodTable_abstractInputParameter_analyzeInputParameter.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractInputParameter_analyzeInputParameter (NULL,
                                                                         freeExtensionMethod_abstractInputParameter_analyzeInputParameter) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeInputParameter (const cPtr_abstractInputParameter * inObject,
                                                const GALGAS_analysisContext constin_inAnalysisContext,
                                                const GALGAS_lexicalTypeEnum constin_inRequiredLexicalType,
                                                const GALGAS_string constin_inLexicalAttributeName,
                                                GALGAS_terminalCheckAssignementList & io_ioTerminalCheckAssignementList,
                                                GALGAS_localVarManager & io_ioVariableMap,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractInputParameter) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractInputParameter_analyzeInputParameter f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractInputParameter_analyzeInputParameter.count ()) {
      f = gExtensionMethodTable_abstractInputParameter_analyzeInputParameter (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractInputParameter_analyzeInputParameter.count ()) {
          f = gExtensionMethodTable_abstractInputParameter_analyzeInputParameter (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractInputParameter_analyzeInputParameter.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAnalysisContext, constin_inRequiredLexicalType, constin_inLexicalAttributeName, io_ioTerminalCheckAssignementList, io_ioVariableMap, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult analyzeSDT'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT> gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeSDT (const int32_t inClassIndex,
                                      extensionMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT inMethod) {
  gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT (void) {
  gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT (NULL,
                                                                                                 freeExtensionMethod_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                     const GALGAS_analysisContext constin_inAnalysisContext,
                                     const GALGAS_bool constin_inHasTranslateFeature,
                                     GALGAS_localVarManager & io_ioVariableMap,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT.count ()) {
      f = gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT.count ()) {
          f = gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeSDT.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAnalysisContext, constin_inHasTranslateFeature, io_ioVariableMap, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode> gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateCode (const int32_t inClassIndex,
                                        extensionMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode inMethod) {
  gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode (void) {
  gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode (NULL,
                                                                                                   freeExtensionMethod_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                       const GALGAS_bool constin_inGenerateSyntaxDirectedTranslationString,
                                       const GALGAS_string constin_inAccessMethodName,
                                       GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                       GALGAS_string & io_ioGeneratedCode,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode.count ()) {
      f = gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode.count ()) {
          f = gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_generateCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inGenerateSyntaxDirectedTranslationString, constin_inAccessMethodName, io_ioUnusedVariableCppNameSet, io_ioGeneratedCode, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@keySortedList' sorted list
//
//----------------------------------------------------------------------------------------------------------------------

class cSortedListElement_keySortedList : public cSortedListElement {
  public: GALGAS_keySortedList_2D_element mObject ;

//--- Constructor
  public: cSortedListElement_keySortedList (const GALGAS_string & in_mKey,
                                            const GALGAS_uint & in_mOrder
                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public: virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cSortedListElement_keySortedList::cSortedListElement_keySortedList (const GALGAS_string & in_mKey,
                                                                    const GALGAS_uint & in_mOrder
                                                                    COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mKey, in_mOrder) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cSortedListElement_keySortedList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cSortedListElement * cSortedListElement_keySortedList::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_keySortedList (mObject.mProperty_mKey, mObject.mProperty_mOrder COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cSortedListElement_keySortedList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mKey" ":" ;
  mObject.mProperty_mKey.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOrder" ":" ;
  mObject.mProperty_mOrder.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cSortedListElement_keySortedList::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_keySortedList * operand = (cSortedListElement_keySortedList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_keySortedList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_keySortedList::GALGAS_keySortedList (void) :
AC_GALGAS_sortedlist () {
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cSortedListElement_keySortedList::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_keySortedList * operand = (const cSortedListElement_keySortedList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_keySortedList) ;
  if (result == kOperandEqual) {
    result = mObject.mProperty_mOrder.objectCompare (operand->mObject.mProperty_mOrder) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_keySortedList GALGAS_keySortedList::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_keySortedList result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_keySortedList GALGAS_keySortedList::constructor_sortedListWithValue (const GALGAS_string & inOperand0,
                                                                            const GALGAS_uint & inOperand1
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_keySortedList result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_keySortedList (inOperand0, inOperand1 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_keySortedList::addAssign_operation (const GALGAS_string & inOperand0,
                                                const GALGAS_uint & inOperand1
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_keySortedList (inOperand0, inOperand1 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_keySortedList::plusAssign_operation (const GALGAS_keySortedList inOperand,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_keySortedList::setter_popSmallest (GALGAS_string & outOperand0,
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
    outOperand0 = p->mObject.mProperty_mKey ;
    outOperand1 = p->mObject.mProperty_mOrder ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_keySortedList::setter_popGreatest (GALGAS_string & outOperand0,
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
    outOperand0 = p->mObject.mProperty_mKey ;
    outOperand1 = p->mObject.mProperty_mOrder ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mKey ;
    outOperand1 = p->mObject.mProperty_mOrder ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mKey ;
    outOperand1 = p->mObject.mProperty_mOrder ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_keySortedList::cEnumerator_keySortedList (const GALGAS_keySortedList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_keySortedList_2D_element cEnumerator_keySortedList::current (LOCATION_ARGS) const {
  const cSortedListElement_keySortedList * p = (const cSortedListElement_keySortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_keySortedList) ;
  return p->mObject ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_keySortedList::current_mKey (LOCATION_ARGS) const {
  const cSortedListElement_keySortedList * p = (const cSortedListElement_keySortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_keySortedList) ;
  return p->mObject.mProperty_mKey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_keySortedList::current_mOrder (LOCATION_ARGS) const {
  const cSortedListElement_keySortedList * p = (const cSortedListElement_keySortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_keySortedList) ;
  return p->mObject.mProperty_mOrder ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@keySortedList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_keySortedList ("keySortedList",
                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_keySortedList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_keySortedList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_keySortedList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_keySortedList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//'@usefulEntitiesGraph' graph
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_usefulEntitiesGraph::GALGAS_usefulEntitiesGraph (void) :
AC_GALGAS_graph () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_usefulEntitiesGraph GALGAS_usefulEntitiesGraph::constructor_emptyGraph (LOCATION_ARGS) {
  GALGAS_usefulEntitiesGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_usefulEntitiesGraph::setter_addNode (GALGAS_lstring inKey,
                                                 GALGAS_lstring inArgument_0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  GALGAS_lstringlist::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' entity is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}


//----------------------------------------------------------------------------------------------------------------------

void GALGAS_usefulEntitiesGraph::method_topologicalSort (GALGAS_lstringlist & outSortedList,
                                                         GALGAS_lstringlist & outSortedKeyList,
                                                         GALGAS_lstringlist & outUnsortedList,
                                                         GALGAS_lstringlist & outUnsortedKeyList,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_lstringlist (sortedList) ;
  outUnsortedList = GALGAS_lstringlist (unsortedList) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_usefulEntitiesGraph::method_depthFirstTopologicalSort (GALGAS_lstringlist & outSortedList,
                                                                   GALGAS_lstringlist & outSortedKeyList,
                                                                   GALGAS_lstringlist & outUnsortedList,
                                                                   GALGAS_lstringlist & outUnsortedKeyList,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_lstringlist (sortedList) ;
  outUnsortedList = GALGAS_lstringlist (unsortedList) ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_usefulEntitiesGraph GALGAS_usefulEntitiesGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GALGAS_usefulEntitiesGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_usefulEntitiesGraph::method_circularities (GALGAS_lstringlist & outInfoList,
                                                       GALGAS_lstringlist & outKeyList
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_lstringlist (infoList) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_usefulEntitiesGraph::method_nodesWithNoSuccessor (GALGAS_lstringlist & outInfoList,
                                                              GALGAS_lstringlist & outKeyList
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_lstringlist (infoList) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_usefulEntitiesGraph::method_nodesWithNoPredecessor (GALGAS_lstringlist & outInfoList,
                                                                GALGAS_lstringlist & outKeyList
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_lstringlist (infoList) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_usefulEntitiesGraph GALGAS_usefulEntitiesGraph::getter_subgraphFromNodes (const GALGAS_lstringlist & inStartKeyList,
                                                                                 const GALGAS_stringset & inKeysToExclude,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_usefulEntitiesGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_usefulEntitiesGraph::getter_accessibleNodesFrom (const GALGAS_lstringlist & inStartKeyList,
                                                                           const GALGAS_stringset & inNodesToExclude,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  GALGAS_usefulEntitiesGraph resultingGraph ;
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

//----------------------------------------------------------------------------------------------------------------------
//
//@usefulEntitiesGraph type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_usefulEntitiesGraph ("usefulEntitiesGraph",
                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_usefulEntitiesGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_usefulEntitiesGraph ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_usefulEntitiesGraph::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_usefulEntitiesGraph (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_usefulEntitiesGraph GALGAS_usefulEntitiesGraph::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_usefulEntitiesGraph result ;
  const GALGAS_usefulEntitiesGraph * p = (const GALGAS_usefulEntitiesGraph *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_usefulEntitiesGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("usefulEntitiesGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_uselessEntityLocationMap::cMapElement_uselessEntityLocationMap (const GALGAS_lstring & inKey,
                                                                            const GALGAS_location & in_mLocation
                                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mLocation (in_mLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_uselessEntityLocationMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLocation.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_uselessEntityLocationMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_uselessEntityLocationMap (mProperty_lkey, mProperty_mLocation COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_uselessEntityLocationMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLocation" ":" ;
  mProperty_mLocation.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_uselessEntityLocationMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_uselessEntityLocationMap * operand = (cMapElement_uselessEntityLocationMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (operand->mProperty_mLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uselessEntityLocationMap::GALGAS_uselessEntityLocationMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uselessEntityLocationMap::GALGAS_uselessEntityLocationMap (const GALGAS_uselessEntityLocationMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uselessEntityLocationMap & GALGAS_uselessEntityLocationMap::operator = (const GALGAS_uselessEntityLocationMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uselessEntityLocationMap GALGAS_uselessEntityLocationMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_uselessEntityLocationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uselessEntityLocationMap GALGAS_uselessEntityLocationMap::constructor_mapWithMapToOverride (const GALGAS_uselessEntityLocationMap & inMapToOverride
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_uselessEntityLocationMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uselessEntityLocationMap GALGAS_uselessEntityLocationMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_uselessEntityLocationMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_uselessEntityLocationMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                           const GALGAS_location & inArgument0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_uselessEntityLocationMap * p = NULL ;
  macroMyNew (p, cMapElement_uselessEntityLocationMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@uselessEntityLocationMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_uselessEntityLocationMap::setter_insertKey (GALGAS_lstring inKey,
                                                        GALGAS_location inArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_uselessEntityLocationMap * p = NULL ;
  macroMyNew (p, cMapElement_uselessEntityLocationMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "--- %K INTERNAL ERROR ---" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_uselessEntityLocationMap::getter_mLocationForKey (const GALGAS_string & inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_uselessEntityLocationMap * p = (const cMapElement_uselessEntityLocationMap *) attributes ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_uselessEntityLocationMap) ;
    result = p->mProperty_mLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_uselessEntityLocationMap::setter_setMLocationForKey (GALGAS_location inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_uselessEntityLocationMap * p = (cMapElement_uselessEntityLocationMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_uselessEntityLocationMap) ;
    p->mProperty_mLocation = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_uselessEntityLocationMap * GALGAS_uselessEntityLocationMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                           const GALGAS_string & inKey
                                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_uselessEntityLocationMap * result = (cMapElement_uselessEntityLocationMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_uselessEntityLocationMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_uselessEntityLocationMap::cEnumerator_uselessEntityLocationMap (const GALGAS_uselessEntityLocationMap & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uselessEntityLocationMap_2D_element cEnumerator_uselessEntityLocationMap::current (LOCATION_ARGS) const {
  const cMapElement_uselessEntityLocationMap * p = (const cMapElement_uselessEntityLocationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_uselessEntityLocationMap) ;
  return GALGAS_uselessEntityLocationMap_2D_element (p->mProperty_lkey, p->mProperty_mLocation) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_uselessEntityLocationMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_uselessEntityLocationMap::current_mLocation (LOCATION_ARGS) const {
  const cMapElement_uselessEntityLocationMap * p = (const cMapElement_uselessEntityLocationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_uselessEntityLocationMap) ;
  return p->mProperty_mLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_uselessEntityLocationMap::optional_searchKey (const GALGAS_string & inKey,
                                                          GALGAS_location & outArgument0) const {
  const cMapElement_uselessEntityLocationMap * p = (const cMapElement_uselessEntityLocationMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_uselessEntityLocationMap) ;
    outArgument0 = p->mProperty_mLocation ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@uselessEntityLocationMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uselessEntityLocationMap ("uselessEntityLocationMap",
                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_uselessEntityLocationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uselessEntityLocationMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_uselessEntityLocationMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uselessEntityLocationMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uselessEntityLocationMap GALGAS_uselessEntityLocationMap::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_uselessEntityLocationMap result ;
  const GALGAS_uselessEntityLocationMap * p = (const GALGAS_uselessEntityLocationMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uselessEntityLocationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uselessEntityLocationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_localVarManager::cMapElement_localVarManager (const GALGAS_lstring & inKey,
                                                          const GALGAS_unifiedTypeMap_2D_entry & in_mType,
                                                          const GALGAS_string & in_mCppName,
                                                          const GALGAS_string & in_mNameForCheckingFormalParameterUsing
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mType (in_mType),
mProperty_mCppName (in_mCppName),
mProperty_mNameForCheckingFormalParameterUsing (in_mNameForCheckingFormalParameterUsing) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_localVarManager::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mType.isValid () && mProperty_mCppName.isValid () && mProperty_mNameForCheckingFormalParameterUsing.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_localVarManager::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_localVarManager (mProperty_lkey, mProperty_mType, mProperty_mCppName, mProperty_mNameForCheckingFormalParameterUsing COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_localVarManager::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mProperty_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCppName" ":" ;
  mProperty_mCppName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNameForCheckingFormalParameterUsing" ":" ;
  mProperty_mNameForCheckingFormalParameterUsing.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_localVarManager::compare (const cCollectionElement * inOperand) const {
  cMapElement_localVarManager * operand = (cMapElement_localVarManager *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mType.objectCompare (operand->mProperty_mType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCppName.objectCompare (operand->mProperty_mCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNameForCheckingFormalParameterUsing.objectCompare (operand->mProperty_mNameForCheckingFormalParameterUsing) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVarManager::GALGAS_localVarManager (void) :
AC_GALGAS_uniqueMap (kMapAutomatonNoIssue, "") {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVarManager::GALGAS_localVarManager (const GALGAS_localVarManager & inSource) :
AC_GALGAS_uniqueMap (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVarManager & GALGAS_localVarManager::operator = (const GALGAS_localVarManager & inSource) {
  * ((AC_GALGAS_uniqueMap *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVarManager GALGAS_localVarManager::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_localVarManager result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//  Map automaton states                                                                         
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  static const uint32_t kMapStateCount_localVarManager = 24 ;
#endif
static const uint32_t kMapState_localVarManager_constantInputFormalArgument = 14 ;
static const uint32_t kMapState_localVarManager_constantInputFormalArgumentDeclaredAsUnused = 16 ;
static const uint32_t kMapState_localVarManager_currentInstanceDroppedPropertyInModifier = 23 ;
static const uint32_t kMapState_localVarManager_currentInstanceProperty = 21 ;
static const uint32_t kMapState_localVarManager_currentInstancePropertyInModifier = 22 ;
static const uint32_t kMapState_localVarManager_definedLocalVariable = 5 ;
static const uint32_t kMapState_localVarManager_definedOutputFormalArgument = 9 ;
static const uint32_t kMapState_localVarManager_droppedInputFormalArgument = 19 ;
static const uint32_t kMapState_localVarManager_droppedInputOutputFormalArgument = 12 ;
static const uint32_t kMapState_localVarManager_droppedLocalConstant = 3 ;
static const uint32_t kMapState_localVarManager_droppedLocalVariable = 7 ;
static const uint32_t kMapState_localVarManager_inputFormalArgumentDeclaredAsUnused = 20 ;
static const uint32_t kMapState_localVarManager_inputFormalParameter = 17 ;
static const uint32_t kMapState_localVarManager_inputOutputFormalArgumentDeclaredAsUnused = 13 ;
static const uint32_t kMapState_localVarManager_localConstant = 1 ;
static const uint32_t kMapState_localVarManager_readLocalConstant = 0 ;
static const uint32_t kMapState_localVarManager_undefinedLocalConstant = 2 ;
static const uint32_t kMapState_localVarManager_undefinedLocalVariable = 4 ;
static const uint32_t kMapState_localVarManager_undefinedOutputFormalArgument = 8 ;
static const uint32_t kMapState_localVarManager_unusedInputOutputFormalArgument = 10 ;
static const uint32_t kMapState_localVarManager_usedConstantInputFormalArgument = 15 ;
static const uint32_t kMapState_localVarManager_usedInputFormalArgument = 18 ;
static const uint32_t kMapState_localVarManager_usedInputOutputFormalArgument = 11 ;
static const uint32_t kMapState_localVarManager_usedLocalVariable = 6 ;

//----------------------------------------------------------------------------------------------------------------------
//  Map automaton state names                                                                    
//----------------------------------------------------------------------------------------------------------------------

static const char * kMapStateNames_localVarManager [24] = {
  "readLocalConstant",
  "localConstant",
  "undefinedLocalConstant",
  "droppedLocalConstant",
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
  "currentInstanceProperty",
  "currentInstancePropertyInModifier",
  "currentInstanceDroppedPropertyInModifier"
} ;

//----------------------------------------------------------------------------------------------------------------------
//  Map automaton actions                                                                        
//----------------------------------------------------------------------------------------------------------------------

static const uint32_t kMapActionCount_localVarManager = 5 ;
static const uint32_t kMapAction_localVarManager_dropAccess = 3 ;
static const uint32_t kMapAction_localVarManager_neutralAccess = 4 ;
static const uint32_t kMapAction_localVarManager_readAccess = 0 ;
static const uint32_t kMapAction_localVarManager_readWriteAccess = 2 ;
static const uint32_t kMapAction_localVarManager_writeAccess = 1 ;

//----------------------------------------------------------------------------------------------------------------------
//  Map automaton transitions                                                                    
//----------------------------------------------------------------------------------------------------------------------

static const cMapAutomatonTransition kMapTransitions_localVarManager [24 * 5] = {
// State 'readLocalConstant', index 0 
  {kMapState_localVarManager_readLocalConstant /* 0 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_localVarManager_readLocalConstant /* 0 */, kMapAutomatonIssueError, "a constant cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_localVarManager_readLocalConstant /* 0 */, kMapAutomatonIssueError, "a constant cannot be written"}, // for action 'readWriteAccess', (index 2)
  {kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_localVarManager_readLocalConstant /* 0 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'localConstant', index 1 
  {kMapState_localVarManager_readLocalConstant /* 0 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_localVarManager_readLocalConstant /* 0 */, kMapAutomatonIssueError, "a constant cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_localVarManager_readLocalConstant /* 0 */, kMapAutomatonIssueError, "a constant cannot be written"}, // for action 'readWriteAccess', (index 2)
  {kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapAutomatonIssueWarning, "the '%K' constant value is unused"}, // for action 'dropAccess', (index 3)
  {kMapState_localVarManager_localConstant /* 1 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'undefinedLocalConstant', index 2 
  {kMapState_localVarManager_undefinedLocalConstant /* 2 */, kMapAutomatonIssueError, "the constant is undefined"}, // for action 'readAccess', (index 0)
  {kMapState_localVarManager_localConstant /* 1 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_localVarManager_undefinedLocalConstant /* 2 */, kMapAutomatonIssueError, "the constant is undefined"}, // for action 'readWriteAccess', (index 2)
  {kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapAutomatonIssueWarning, "the dropped constant is undefined"}, // for action 'dropAccess', (index 3)
  {kMapState_localVarManager_undefinedLocalConstant /* 2 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'droppedLocalConstant', index 3 
  {kMapState_localVarManager_undefinedLocalConstant /* 2 */, kMapAutomatonIssueError, "the constant has been dropped"}, // for action 'readAccess', (index 0)
  {kMapState_localVarManager_localConstant /* 1 */, kMapAutomatonIssueError, "the constant has been dropped"}, // for action 'writeAccess', (index 1)
  {kMapState_localVarManager_undefinedLocalConstant /* 2 */, kMapAutomatonIssueError, "the constant has been dropped"}, // for action 'readWriteAccess', (index 2)
  {kMapState_localVarManager_undefinedLocalConstant /* 2 */, kMapAutomatonIssueWarning, "the constant has been dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'undefinedLocalVariable', index 4 
  {kMapState_localVarManager_undefinedLocalVariable /* 4 */, kMapAutomatonIssueError, "an undefined local variable cannot be read"}, // for action 'readAccess', (index 0)
  {kMapState_localVarManager_definedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_localVarManager_undefinedLocalVariable /* 4 */, kMapAutomatonIssueError, "an undefined local variable cannot be read"}, // for action 'readWriteAccess', (index 2)
  {kMapState_localVarManager_undefinedLocalVariable /* 4 */, kMapAutomatonIssueWarning, "the local variable has no value"}, // for action 'dropAccess', (index 3)
  {kMapState_localVarManager_undefinedLocalVariable /* 4 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'definedLocalVariable', index 5 
  {kMapState_localVarManager_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_localVarManager_definedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_localVarManager_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapAutomatonIssueWarning, "the local variable has been dropped without any read"}, // for action 'dropAccess', (index 3)
  {kMapState_localVarManager_definedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'usedLocalVariable', index 6 
  {kMapState_localVarManager_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_localVarManager_definedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_localVarManager_definedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_localVarManager_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'droppedLocalVariable', index 7 
  {kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapAutomatonIssueError, "a dropped local variable cannot be read"}, // for action 'readAccess', (index 0)
  {kMapState_localVarManager_definedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_localVarManager_definedLocalVariable /* 5 */, kMapAutomatonIssueError, "a dropped local variable cannot be read"}, // for action 'readWriteAccess', (index 2)
  {kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapAutomatonIssueWarning, "the local variable is already dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'undefinedOutputFormalArgument', index 8 
  {kMapState_localVarManager_undefinedOutputFormalArgument /* 8 */, kMapAutomatonIssueError, "an undefined output formal parameter cannot be read"}, // for action 'readAccess', (index 0)
  {kMapState_localVarManager_definedOutputFormalArgument /* 9 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_localVarManager_undefinedOutputFormalArgument /* 8 */, kMapAutomatonIssueError, "an undefined output formal parameter cannot be read"}, // for action 'readWriteAccess', (index 2)
  {kMapState_localVarManager_undefinedOutputFormalArgument /* 8 */, kMapAutomatonIssueWarning, "the output formal parameter has no value"}, // for action 'dropAccess', (index 3)
  {kMapState_localVarManager_undefinedOutputFormalArgument /* 8 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'definedOutputFormalArgument', index 9 
  {kMapState_localVarManager_definedOutputFormalArgument /* 9 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_localVarManager_definedOutputFormalArgument /* 9 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_localVarManager_definedOutputFormalArgument /* 9 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_localVarManager_undefinedOutputFormalArgument /* 8 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_localVarManager_definedOutputFormalArgument /* 9 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'unusedInputOutputFormalArgument', index 10 
  {kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_localVarManager_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_localVarManager_unusedInputOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'usedInputOutputFormalArgument', index 11 
  {kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_localVarManager_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'droppedInputOutputFormalArgument', index 12 
  {kMapState_localVarManager_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonIssueError, "a dropped input/output formal argument cannot be read"}, // for action 'readAccess', (index 0)
  {kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_localVarManager_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonIssueError, "a dropped input/output formal argument cannot be read"}, // for action 'readWriteAccess', (index 2)
  {kMapState_localVarManager_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonIssueWarning, "the input/output formal argument is already dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_localVarManager_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'inputOutputFormalArgumentDeclaredAsUnused', index 13 
  {kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapAutomatonIssueWarning, "the input/output formal parameter has been declared as unused"}, // for action 'readAccess', (index 0)
  {kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapAutomatonIssueWarning, "the input/output formal parameter has been declared as unused"}, // for action 'writeAccess', (index 1)
  {kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapAutomatonIssueWarning, "the input/output formal parameter has been declared as unused"}, // for action 'readWriteAccess', (index 2)
  {kMapState_localVarManager_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonIssueWarning, "the input/output formal parameter has been declared as unused"}, // for action 'dropAccess', (index 3)
  {kMapState_localVarManager_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'constantInputFormalArgument', index 14 
  {kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be written"}, // for action 'readWriteAccess', (index 2)
  {kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_localVarManager_constantInputFormalArgument /* 14 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'usedConstantInputFormalArgument', index 15 
  {kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be written"}, // for action 'readWriteAccess', (index 2)
  {kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'constantInputFormalArgumentDeclaredAsUnused', index 16 
  {kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapAutomatonIssueWarning, "the constant input formal parameter is declared as unused"}, // for action 'readAccess', (index 0)
  {kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be written"}, // for action 'readWriteAccess', (index 2)
  {kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_localVarManager_constantInputFormalArgumentDeclaredAsUnused /* 16 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'inputFormalParameter', index 17 
  {kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_localVarManager_droppedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_localVarManager_inputFormalParameter /* 17 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'usedInputFormalArgument', index 18 
  {kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_localVarManager_droppedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'droppedInputFormalArgument', index 19 
  {kMapState_localVarManager_droppedInputFormalArgument /* 19 */, kMapAutomatonIssueError, "a dropped input formal parameter cannot be read"}, // for action 'readAccess', (index 0)
  {kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_localVarManager_droppedInputFormalArgument /* 19 */, kMapAutomatonIssueError, "a dropped input formal parameter cannot be read"}, // for action 'readWriteAccess', (index 2)
  {kMapState_localVarManager_droppedInputFormalArgument /* 19 */, kMapAutomatonIssueWarning, "the input formal parameter is already dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_localVarManager_droppedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'inputFormalArgumentDeclaredAsUnused', index 20 
  {kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapAutomatonIssueWarning, "the input formal parameter is declared as unused"}, // for action 'readAccess', (index 0)
  {kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapAutomatonIssueWarning, "the input formal parameter is declared as unused"}, // for action 'writeAccess', (index 1)
  {kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapAutomatonIssueWarning, "the input formal parameter is declared as unused"}, // for action 'readWriteAccess', (index 2)
  {kMapState_localVarManager_droppedInputFormalArgument /* 19 */, kMapAutomatonIssueWarning, "the input formal parameter is declared as unused"}, // for action 'dropAccess', (index 3)
  {kMapState_localVarManager_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'currentInstanceProperty', index 21 
  {kMapState_localVarManager_currentInstanceProperty /* 21 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_localVarManager_currentInstanceProperty /* 21 */, kMapAutomatonIssueError, "a property cannot be written within a method or a getter"}, // for action 'writeAccess', (index 1)
  {kMapState_localVarManager_currentInstanceProperty /* 21 */, kMapAutomatonIssueError, "a property cannot be modified within a method or a getter"}, // for action 'readWriteAccess', (index 2)
  {kMapState_localVarManager_currentInstanceProperty /* 21 */, kMapAutomatonIssueError, "a property cannot be dropped within a method or a getter"}, // for action 'dropAccess', (index 3)
  {kMapState_localVarManager_currentInstanceProperty /* 21 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'currentInstancePropertyInModifier', index 22 
  {kMapState_localVarManager_currentInstancePropertyInModifier /* 22 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_localVarManager_currentInstancePropertyInModifier /* 22 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_localVarManager_currentInstancePropertyInModifier /* 22 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_localVarManager_currentInstanceDroppedPropertyInModifier /* 23 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_localVarManager_currentInstancePropertyInModifier /* 22 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'currentInstanceDroppedPropertyInModifier', index 23 
  {kMapState_localVarManager_currentInstanceDroppedPropertyInModifier /* 23 */, kMapAutomatonIssueError, "the property cannot be read, it has been dropped"}, // for action 'readAccess', (index 0)
  {kMapState_localVarManager_currentInstancePropertyInModifier /* 22 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_localVarManager_currentInstanceDroppedPropertyInModifier /* 23 */, kMapAutomatonIssueError, "the property cannot be read/written, it has been dropped"}, // for action 'readWriteAccess', (index 2)
  {kMapState_localVarManager_currentInstanceDroppedPropertyInModifier /* 23 */, kMapAutomatonIssueWarning, "the property is already dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_localVarManager_currentInstanceDroppedPropertyInModifier /* 23 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
} ;

//----------------------------------------------------------------------------------------------------------------------
//  Map automaton final state issues                                                             
//----------------------------------------------------------------------------------------------------------------------

static const cMapAutomatonFinalIssue kMapAutomatonFinalIssue_localVarManager [24] = {
  {kMapAutomatonNoIssue, ""},// state 'readLocalConstant' (index 0)
  {kMapAutomatonIssueWarning, "the '%K' constant value is unused"},// state 'localConstant' (index 1)
  {kMapAutomatonIssueWarning, "the '%K' constant value is unused"},// state 'undefinedLocalConstant' (index 2)
  {kMapAutomatonNoIssue, ""},// state 'droppedLocalConstant' (index 3)
  {kMapAutomatonIssueWarning, "the '%K' local variable is unused"},// state 'undefinedLocalVariable' (index 4)
  {kMapAutomatonNoIssue, ""},// state 'definedLocalVariable' (index 5)
  {kMapAutomatonNoIssue, ""},// state 'usedLocalVariable' (index 6)
  {kMapAutomatonNoIssue, ""},// state 'droppedLocalVariable' (index 7)
  {kMapAutomatonIssueError, "the '%K' output formal parameter is undefined"},// state 'undefinedOutputFormalArgument' (index 8)
  {kMapAutomatonNoIssue, ""},// state 'definedOutputFormalArgument' (index 9)
  {kMapAutomatonIssueWarning, "the '%K' input/output formal parameter is unused"},// state 'unusedInputOutputFormalArgument' (index 10)
  {kMapAutomatonNoIssue, ""},// state 'usedInputOutputFormalArgument' (index 11)
  {kMapAutomatonIssueError, "the '%K' input/ouput formal argument should be valuated at the end of the routine"},// state 'droppedInputOutputFormalArgument' (index 12)
  {kMapAutomatonNoIssue, ""},// state 'inputOutputFormalArgumentDeclaredAsUnused' (index 13)
  {kMapAutomatonIssueWarning, "the constant '%K' input formal parameter is not used and is not declared as unused"},// state 'constantInputFormalArgument' (index 14)
  {kMapAutomatonNoIssue, ""},// state 'usedConstantInputFormalArgument' (index 15)
  {kMapAutomatonNoIssue, ""},// state 'constantInputFormalArgumentDeclaredAsUnused' (index 16)
  {kMapAutomatonIssueWarning, "the '%K' input formal parameter is not used and is not declared as unused"},// state 'inputFormalParameter' (index 17)
  {kMapAutomatonNoIssue, ""},// state 'usedInputFormalArgument' (index 18)
  {kMapAutomatonNoIssue, ""},// state 'droppedInputFormalArgument' (index 19)
  {kMapAutomatonNoIssue, ""},// state 'inputFormalArgumentDeclaredAsUnused' (index 20)
  {kMapAutomatonNoIssue, ""},// state 'currentInstanceProperty' (index 21)
  {kMapAutomatonNoIssue, ""},// state 'currentInstancePropertyInModifier' (index 22)
  {kMapAutomatonIssueWarning, "the '%K' property is in the dropped state at the end of the setter"},// state 'currentInstanceDroppedPropertyInModifier' (index 23)
} ;
//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::setter_closeBranch (GALGAS_location inErrorLocation,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  closeBranch (inErrorLocation,
               kMapAutomatonFinalIssue_localVarManager,
               #ifndef DO_NOT_GENERATE_CHECKINGS
                 kMapStateCount_localVarManager,
               #endif
               inCompiler COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::method_checkAutomatonStates (GALGAS_location inErrorLocation,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  checkAutomatonStates (inErrorLocation, kMapAutomatonFinalIssue_localVarManager, inCompiler COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------
//map override 'selectBlock'
//----------------------------------------------------------------------------------------------------------------------

static const cBranchOverrideTransformationDescriptor kBranchBehaviourForOverride_localVarManager_selectBlock [39] = {
  {kMapState_localVarManager_readLocalConstant /* 0 */, kMapState_localVarManager_localConstant /* 1 */, kMapState_localVarManager_readLocalConstant /* 0 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_readLocalConstant /* 0 */, kMapState_localVarManager_undefinedLocalConstant /* 2 */, kMapState_localVarManager_undefinedLocalConstant /* 2 */, kMapAutomatonIssueError, "this branch lets the '%K' constant defined, while previous ones do not define it"},
  {kMapState_localVarManager_readLocalConstant /* 0 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "this branch lets the '%K' constant defined, while previous ones drop it"},
  {kMapState_localVarManager_localConstant /* 1 */, kMapState_localVarManager_readLocalConstant /* 0 */, kMapState_localVarManager_readLocalConstant /* 0 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_localConstant /* 1 */, kMapState_localVarManager_undefinedLocalConstant /* 2 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapAutomatonIssueWarning, "this branch defines the '%K' constant, while previous ones let it undefined"},
  {kMapState_localVarManager_localConstant /* 1 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "this branch let the '%K' constant defined, while previous ones drop it"},
  {kMapState_localVarManager_undefinedLocalConstant /* 2 */, kMapState_localVarManager_readLocalConstant /* 0 */, kMapState_localVarManager_undefinedLocalConstant /* 2 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones let it undefined"},
  {kMapState_localVarManager_undefinedLocalConstant /* 2 */, kMapState_localVarManager_localConstant /* 1 */, kMapState_localVarManager_undefinedLocalConstant /* 2 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones let it undefined"},
  {kMapState_localVarManager_undefinedLocalConstant /* 2 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapAutomatonIssueWarning, "this branch lets the '%K' undefined, while previous ones drop it"},
  {kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapState_localVarManager_readLocalConstant /* 0 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "this branch drops the '%K' constant, while previous ones let it defined"},
  {kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapState_localVarManager_localConstant /* 1 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "this branch drops the '%K' constant, while previous ones let it defined"},
  {kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapState_localVarManager_undefinedLocalConstant /* 2 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapAutomatonIssueWarning, "this branch drops the '%K' constant, while previous ones let it undefined"},
  {kMapState_localVarManager_undefinedLocalVariable /* 4 */, kMapState_localVarManager_definedLocalVariable /* 5 */, kMapState_localVarManager_definedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_undefinedLocalVariable /* 4 */, kMapState_localVarManager_usedLocalVariable /* 6 */, kMapState_localVarManager_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_undefinedLocalVariable /* 4 */, kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_definedLocalVariable /* 5 */, kMapState_localVarManager_usedLocalVariable /* 6 */, kMapState_localVarManager_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_definedLocalVariable /* 5 */, kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_usedLocalVariable /* 6 */, kMapState_localVarManager_definedLocalVariable /* 5 */, kMapState_localVarManager_definedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_usedLocalVariable /* 6 */, kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapState_localVarManager_definedLocalVariable /* 5 */, kMapState_localVarManager_definedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapState_localVarManager_usedLocalVariable /* 6 */, kMapState_localVarManager_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_undefinedOutputFormalArgument /* 8 */, kMapState_localVarManager_definedOutputFormalArgument /* 9 */, kMapState_localVarManager_definedOutputFormalArgument /* 9 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_definedOutputFormalArgument /* 9 */, kMapState_localVarManager_undefinedOutputFormalArgument /* 8 */, kMapState_localVarManager_undefinedOutputFormalArgument /* 8 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_unusedInputOutputFormalArgument /* 10 */, kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_unusedInputOutputFormalArgument /* 10 */, kMapState_localVarManager_droppedInputOutputFormalArgument /* 12 */, kMapState_localVarManager_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapState_localVarManager_droppedInputOutputFormalArgument /* 12 */, kMapState_localVarManager_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_droppedInputOutputFormalArgument /* 12 */, kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapState_localVarManager_droppedInputOutputFormalArgument /* 12 */, kMapState_localVarManager_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_constantInputFormalArgument /* 14 */, kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_constantInputFormalArgumentDeclaredAsUnused /* 16 */, kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_inputFormalParameter /* 17 */, kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_inputFormalParameter /* 17 */, kMapState_localVarManager_droppedInputFormalArgument /* 19 */, kMapState_localVarManager_droppedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapState_localVarManager_droppedInputFormalArgument /* 19 */, kMapState_localVarManager_droppedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_droppedInputFormalArgument /* 19 */, kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapState_localVarManager_droppedInputFormalArgument /* 19 */, kMapState_localVarManager_droppedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_currentInstancePropertyInModifier /* 22 */, kMapState_localVarManager_currentInstanceDroppedPropertyInModifier /* 23 */, kMapState_localVarManager_currentInstanceDroppedPropertyInModifier /* 23 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_currentInstanceDroppedPropertyInModifier /* 23 */, kMapState_localVarManager_currentInstancePropertyInModifier /* 22 */, kMapState_localVarManager_currentInstancePropertyInModifier /* 22 */, kMapAutomatonNoIssue, ""},
} ;

//----------------------------------------------------------------------------------------------------------------------

static const cBranchOverrideCompatibilityDescriptor kBranchCombinationForOverride_localVarManager_selectBlock [50] = {
  {kMapState_localVarManager_readLocalConstant /* 0 */, kMapState_localVarManager_localConstant /* 1 */, kMapState_localVarManager_readLocalConstant /* 0 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_readLocalConstant /* 0 */, kMapState_localVarManager_undefinedLocalConstant /* 2 */, kMapState_localVarManager_undefinedLocalConstant /* 2 */, kMapAutomatonIssueError, "this branch lets the '%K' constant defined, while previous ones do not define it"},
  {kMapState_localVarManager_readLocalConstant /* 0 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "this branch lets the '%K' constant defined, while previous ones drop it"},
  {kMapState_localVarManager_localConstant /* 1 */, kMapState_localVarManager_readLocalConstant /* 0 */, kMapState_localVarManager_readLocalConstant /* 0 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_localConstant /* 1 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "this branch let the '%K' constant defined, while previous ones drop it"},
  {kMapState_localVarManager_undefinedLocalConstant /* 2 */, kMapState_localVarManager_readLocalConstant /* 0 */, kMapState_localVarManager_undefinedLocalConstant /* 2 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones let it undefined"},
  {kMapState_localVarManager_undefinedLocalConstant /* 2 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapAutomatonIssueWarning, "this branch lets the '%K' undefined, while previous ones drop it"},
  {kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapState_localVarManager_readLocalConstant /* 0 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "this branch drops the '%K' constant, while previous ones let it defined"},
  {kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapState_localVarManager_localConstant /* 1 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "this branch drops the '%K' constant, while previous ones let it defined"},
  {kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapState_localVarManager_undefinedLocalConstant /* 2 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapAutomatonIssueWarning, "this branch drops the '%K' constant, while previous ones let it undefined"},
  {kMapState_localVarManager_undefinedLocalVariable /* 4 */, kMapState_localVarManager_definedLocalVariable /* 5 */, kMapState_localVarManager_definedLocalVariable /* 5 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones let it undefined"},
  {kMapState_localVarManager_undefinedLocalVariable /* 4 */, kMapState_localVarManager_usedLocalVariable /* 6 */, kMapState_localVarManager_undefinedLocalVariable /* 4 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones let it undefined"},
  {kMapState_localVarManager_undefinedLocalVariable /* 4 */, kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_definedLocalVariable /* 5 */, kMapState_localVarManager_undefinedLocalVariable /* 4 */, kMapState_localVarManager_definedLocalVariable /* 5 */, kMapAutomatonIssueError, "this branch lets the '%K' variable undefined, while previous ones define it"},
  {kMapState_localVarManager_definedLocalVariable /* 5 */, kMapState_localVarManager_usedLocalVariable /* 6 */, kMapState_localVarManager_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_definedLocalVariable /* 5 */, kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapState_localVarManager_definedLocalVariable /* 5 */, kMapAutomatonIssueError, "this branch drops the '%K' variable, while previous ones let it defined"},
  {kMapState_localVarManager_usedLocalVariable /* 6 */, kMapState_localVarManager_undefinedLocalVariable /* 4 */, kMapState_localVarManager_usedLocalVariable /* 6 */, kMapAutomatonIssueError, "this branch lets the '%K' variable undefined, while previous defines let it"},
  {kMapState_localVarManager_usedLocalVariable /* 6 */, kMapState_localVarManager_definedLocalVariable /* 5 */, kMapState_localVarManager_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_usedLocalVariable /* 6 */, kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapState_localVarManager_usedLocalVariable /* 6 */, kMapAutomatonIssueError, "this branch drops the '%K' variable, while previous ones let it defined"},
  {kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapState_localVarManager_undefinedLocalVariable /* 4 */, kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapState_localVarManager_definedLocalVariable /* 5 */, kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones drop it"},
  {kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapState_localVarManager_usedLocalVariable /* 6 */, kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones drop it"},
  {kMapState_localVarManager_undefinedOutputFormalArgument /* 8 */, kMapState_localVarManager_definedOutputFormalArgument /* 9 */, kMapState_localVarManager_definedOutputFormalArgument /* 9 */, kMapAutomatonIssueError, "this branch defines the '%K' output formal argument, while previous ones let it undefined"},
  {kMapState_localVarManager_definedOutputFormalArgument /* 9 */, kMapState_localVarManager_undefinedOutputFormalArgument /* 8 */, kMapState_localVarManager_definedOutputFormalArgument /* 9 */, kMapAutomatonIssueError, "this branch lets the '%K' variable undefined, while previous ones define it"},
  {kMapState_localVarManager_unusedInputOutputFormalArgument /* 10 */, kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_unusedInputOutputFormalArgument /* 10 */, kMapState_localVarManager_droppedInputOutputFormalArgument /* 12 */, kMapState_localVarManager_unusedInputOutputFormalArgument /* 10 */, kMapAutomatonIssueError, "this branch drops the '%K' input/output formal argument, while previous ones let it undefined"},
  {kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapState_localVarManager_unusedInputOutputFormalArgument /* 10 */, kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapState_localVarManager_droppedInputOutputFormalArgument /* 12 */, kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapAutomatonIssueError, "this branch drops the '%K' input/output formal argument, while previous ones let it defined"},
  {kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapState_localVarManager_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapState_localVarManager_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_droppedInputOutputFormalArgument /* 12 */, kMapState_localVarManager_unusedInputOutputFormalArgument /* 10 */, kMapState_localVarManager_unusedInputOutputFormalArgument /* 10 */, kMapAutomatonIssueError, "this branch lets the '%K' input/output formal argument defined, while previous ones drop it"},
  {kMapState_localVarManager_droppedInputOutputFormalArgument /* 12 */, kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapAutomatonIssueError, "this branch lets the '%K' input/output formal argument defined, while previous ones drop it"},
  {kMapState_localVarManager_droppedInputOutputFormalArgument /* 12 */, kMapState_localVarManager_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapState_localVarManager_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapAutomatonIssueError, "this branch lets the '%K' input formal argument defined, while previous ones drop it"},
  {kMapState_localVarManager_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapState_localVarManager_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapState_localVarManager_droppedInputOutputFormalArgument /* 12 */, kMapState_localVarManager_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapAutomatonIssueError, "this branch drops the '%K' input formal argument defined, while previous ones let it defined"},
  {kMapState_localVarManager_constantInputFormalArgument /* 14 */, kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapState_localVarManager_constantInputFormalArgument /* 14 */, kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapState_localVarManager_constantInputFormalArgumentDeclaredAsUnused /* 16 */, kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_constantInputFormalArgumentDeclaredAsUnused /* 16 */, kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_inputFormalParameter /* 17 */, kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_inputFormalParameter /* 17 */, kMapState_localVarManager_droppedInputFormalArgument /* 19 */, kMapState_localVarManager_inputFormalParameter /* 17 */, kMapAutomatonIssueError, "this branch drops the '%K' input formal argument, while previous let it defined"},
  {kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapState_localVarManager_inputFormalParameter /* 17 */, kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapState_localVarManager_droppedInputFormalArgument /* 19 */, kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapAutomatonIssueError, "this branch drops the '%K' input formal argument, while previous ones let it defined"},
  {kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapState_localVarManager_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_droppedInputFormalArgument /* 19 */, kMapState_localVarManager_inputFormalParameter /* 17 */, kMapState_localVarManager_droppedInputFormalArgument /* 19 */, kMapAutomatonIssueError, "this branch drops the '%K' input formal argument, while previous ones let it defined"},
  {kMapState_localVarManager_droppedInputFormalArgument /* 19 */, kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapAutomatonIssueError, "this branch defines the '%K' input formal argument, while previous ones let it dropped"},
  {kMapState_localVarManager_droppedInputFormalArgument /* 19 */, kMapState_localVarManager_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapState_localVarManager_droppedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapState_localVarManager_droppedInputFormalArgument /* 19 */, kMapState_localVarManager_droppedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_currentInstancePropertyInModifier /* 22 */, kMapState_localVarManager_currentInstanceDroppedPropertyInModifier /* 23 */, kMapState_localVarManager_currentInstancePropertyInModifier /* 22 */, kMapAutomatonIssueError, "this branch drops the '%K' property, while previous ones let it defined"},
  {kMapState_localVarManager_currentInstanceDroppedPropertyInModifier /* 23 */, kMapState_localVarManager_currentInstancePropertyInModifier /* 22 */, kMapState_localVarManager_currentInstancePropertyInModifier /* 22 */, kMapAutomatonIssueError, "this branch lets the '%K' property defined, while previous ones drop it"},
} ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::setter_openOverrideForSelectBlock (C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  openOverride (kBranchBehaviourForOverride_localVarManager_selectBlock, 39,
                kBranchCombinationForOverride_localVarManager_selectBlock, 50,
                "selectBlock",
                inCompiler
                COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------
//map override 'repeatBlock'
//----------------------------------------------------------------------------------------------------------------------

static const cBranchOverrideTransformationDescriptor kBranchBehaviourForOverride_localVarManager_repeatBlock [39] = {
  {kMapState_localVarManager_readLocalConstant /* 0 */, kMapState_localVarManager_localConstant /* 1 */, kMapState_localVarManager_readLocalConstant /* 0 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_readLocalConstant /* 0 */, kMapState_localVarManager_undefinedLocalConstant /* 2 */, kMapState_localVarManager_readLocalConstant /* 0 */, kMapAutomatonIssueError, "a branch lets the '%K' constant undefined"},
  {kMapState_localVarManager_readLocalConstant /* 0 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "a branch lets the '%K' constant dropped"},
  {kMapState_localVarManager_localConstant /* 1 */, kMapState_localVarManager_readLocalConstant /* 0 */, kMapState_localVarManager_readLocalConstant /* 0 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_localConstant /* 1 */, kMapState_localVarManager_undefinedLocalConstant /* 2 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "a branch lets the '%K' constant undefined"},
  {kMapState_localVarManager_localConstant /* 1 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "a branch lets the '%K' constant dropped"},
  {kMapState_localVarManager_undefinedLocalConstant /* 2 */, kMapState_localVarManager_readLocalConstant /* 0 */, kMapState_localVarManager_undefinedLocalConstant /* 2 */, kMapAutomatonIssueError, "the repeated branch should not define the '%K' variable"},
  {kMapState_localVarManager_undefinedLocalConstant /* 2 */, kMapState_localVarManager_localConstant /* 1 */, kMapState_localVarManager_undefinedLocalConstant /* 2 */, kMapAutomatonIssueError, "the repeated branch should not define the '%K' variable"},
  {kMapState_localVarManager_undefinedLocalConstant /* 2 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapState_localVarManager_readLocalConstant /* 0 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "a branch lets the '%K' constant dropped"},
  {kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapState_localVarManager_localConstant /* 1 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "a branch lets the '%K' constant dropped"},
  {kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapState_localVarManager_undefinedLocalConstant /* 2 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_undefinedLocalVariable /* 4 */, kMapState_localVarManager_definedLocalVariable /* 5 */, kMapState_localVarManager_undefinedLocalVariable /* 4 */, kMapAutomatonIssueError, "the repeated branch should not define the '%K' variable"},
  {kMapState_localVarManager_undefinedLocalVariable /* 4 */, kMapState_localVarManager_usedLocalVariable /* 6 */, kMapState_localVarManager_undefinedLocalVariable /* 4 */, kMapAutomatonIssueError, "the repeated branch should not define the '%K' variable"},
  {kMapState_localVarManager_undefinedLocalVariable /* 4 */, kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_definedLocalVariable /* 5 */, kMapState_localVarManager_usedLocalVariable /* 6 */, kMapState_localVarManager_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_definedLocalVariable /* 5 */, kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapState_localVarManager_definedLocalVariable /* 5 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' variable"},
  {kMapState_localVarManager_usedLocalVariable /* 6 */, kMapState_localVarManager_definedLocalVariable /* 5 */, kMapState_localVarManager_definedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_usedLocalVariable /* 6 */, kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapState_localVarManager_usedLocalVariable /* 6 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' variable"},
  {kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapState_localVarManager_definedLocalVariable /* 5 */, kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' variable"},
  {kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapState_localVarManager_usedLocalVariable /* 6 */, kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapAutomatonIssueError, "the repeated branch should not define the dropped '%K' variable"},
  {kMapState_localVarManager_undefinedOutputFormalArgument /* 8 */, kMapState_localVarManager_definedOutputFormalArgument /* 9 */, kMapState_localVarManager_undefinedOutputFormalArgument /* 8 */, kMapAutomatonIssueError, "the repeated branch should not define the '%K' output formal argument"},
  {kMapState_localVarManager_definedOutputFormalArgument /* 9 */, kMapState_localVarManager_undefinedOutputFormalArgument /* 8 */, kMapState_localVarManager_definedOutputFormalArgument /* 9 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' output formal argument"},
  {kMapState_localVarManager_unusedInputOutputFormalArgument /* 10 */, kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_unusedInputOutputFormalArgument /* 10 */, kMapState_localVarManager_droppedInputOutputFormalArgument /* 12 */, kMapState_localVarManager_unusedInputOutputFormalArgument /* 10 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input/output formal argument"},
  {kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapState_localVarManager_droppedInputOutputFormalArgument /* 12 */, kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input/output formal argument"},
  {kMapState_localVarManager_droppedInputOutputFormalArgument /* 12 */, kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapState_localVarManager_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonIssueError, "the repeated branch should define the '%K' input formal argument"},
  {kMapState_localVarManager_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapState_localVarManager_droppedInputOutputFormalArgument /* 12 */, kMapState_localVarManager_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input/output formal argument"},
  {kMapState_localVarManager_constantInputFormalArgument /* 14 */, kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_constantInputFormalArgumentDeclaredAsUnused /* 16 */, kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_inputFormalParameter /* 17 */, kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_inputFormalParameter /* 17 */, kMapState_localVarManager_droppedInputFormalArgument /* 19 */, kMapState_localVarManager_inputFormalParameter /* 17 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input formal argument"},
  {kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapState_localVarManager_droppedInputFormalArgument /* 19 */, kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input formal argument"},
  {kMapState_localVarManager_droppedInputFormalArgument /* 19 */, kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapState_localVarManager_droppedInputFormalArgument /* 19 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input formal argument"},
  {kMapState_localVarManager_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapState_localVarManager_droppedInputFormalArgument /* 19 */, kMapState_localVarManager_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input formal argument"},
  {kMapState_localVarManager_currentInstancePropertyInModifier /* 22 */, kMapState_localVarManager_currentInstanceDroppedPropertyInModifier /* 23 */, kMapState_localVarManager_currentInstancePropertyInModifier /* 22 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' property"},
  {kMapState_localVarManager_currentInstanceDroppedPropertyInModifier /* 23 */, kMapState_localVarManager_currentInstancePropertyInModifier /* 22 */, kMapState_localVarManager_currentInstancePropertyInModifier /* 22 */, kMapAutomatonNoIssue, ""},
} ;

//----------------------------------------------------------------------------------------------------------------------

static const cBranchOverrideCompatibilityDescriptor kBranchCombinationForOverride_localVarManager_repeatBlock [26] = {
  {kMapState_localVarManager_readLocalConstant /* 0 */, kMapState_localVarManager_localConstant /* 1 */, kMapState_localVarManager_readLocalConstant /* 0 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_readLocalConstant /* 0 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "a branch lets the '%K' constant dropped"},
  {kMapState_localVarManager_localConstant /* 1 */, kMapState_localVarManager_readLocalConstant /* 0 */, kMapState_localVarManager_readLocalConstant /* 0 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_localConstant /* 1 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "a branch lets the '%K' constant dropped"},
  {kMapState_localVarManager_undefinedLocalConstant /* 2 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapAutomatonIssueWarning, "a branch drops the '%K' constant, while other one lets it undefined"},
  {kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapState_localVarManager_readLocalConstant /* 0 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "a branch lets the '%K' constant dropped"},
  {kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapState_localVarManager_localConstant /* 1 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapAutomatonIssueError, "a branch lets the '%K' constant dropped"},
  {kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapState_localVarManager_undefinedLocalConstant /* 2 */, kMapState_localVarManager_droppedLocalConstant /* 3 */, kMapAutomatonIssueWarning, "a branch drops the '%K' constant, while other one lets it undefined"},
  {kMapState_localVarManager_undefinedLocalVariable /* 4 */, kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_definedLocalVariable /* 5 */, kMapState_localVarManager_usedLocalVariable /* 6 */, kMapState_localVarManager_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_usedLocalVariable /* 6 */, kMapState_localVarManager_definedLocalVariable /* 5 */, kMapState_localVarManager_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapState_localVarManager_undefinedLocalVariable /* 4 */, kMapState_localVarManager_droppedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_unusedInputOutputFormalArgument /* 10 */, kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapState_localVarManager_unusedInputOutputFormalArgument /* 10 */, kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapState_localVarManager_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapState_localVarManager_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_constantInputFormalArgument /* 14 */, kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapState_localVarManager_constantInputFormalArgument /* 14 */, kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapState_localVarManager_constantInputFormalArgumentDeclaredAsUnused /* 16 */, kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_constantInputFormalArgumentDeclaredAsUnused /* 16 */, kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapState_localVarManager_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_inputFormalParameter /* 17 */, kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapState_localVarManager_inputFormalParameter /* 17 */, kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapState_localVarManager_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapState_localVarManager_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_currentInstancePropertyInModifier /* 22 */, kMapState_localVarManager_currentInstanceDroppedPropertyInModifier /* 23 */, kMapState_localVarManager_currentInstancePropertyInModifier /* 22 */, kMapAutomatonNoIssue, ""},
  {kMapState_localVarManager_currentInstanceDroppedPropertyInModifier /* 23 */, kMapState_localVarManager_currentInstancePropertyInModifier /* 22 */, kMapState_localVarManager_currentInstancePropertyInModifier /* 22 */, kMapAutomatonNoIssue, ""},
} ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::setter_openOverrideForRepeatBlock (C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  openOverride (kBranchBehaviourForOverride_localVarManager_repeatBlock, 39,
                kBranchCombinationForOverride_localVarManager_repeatBlock, 26,
                "repeatBlock",
                inCompiler
                COMMA_THERE) ;
}


//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::setter_insertMutableProperty (GALGAS_lstring inKey,
                                                           GALGAS_unifiedTypeMap_2D_entry inArgument0,
                                                           GALGAS_string inArgument1,
                                                           GALGAS_string inArgument2,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_localVarManager * p = NULL ;
  macroMyNew (p, cMapElement_localVarManager (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' property (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_localVarManager_currentInstancePropertyInModifier,
                     kMapStateNames_localVarManager [kMapState_localVarManager_currentInstancePropertyInModifier],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::setter_insertNonMutableProperty (GALGAS_lstring inKey,
                                                              GALGAS_unifiedTypeMap_2D_entry inArgument0,
                                                              GALGAS_string inArgument1,
                                                              GALGAS_string inArgument2,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_localVarManager * p = NULL ;
  macroMyNew (p, cMapElement_localVarManager (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' property (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_localVarManager_currentInstanceProperty,
                     kMapStateNames_localVarManager [kMapState_localVarManager_currentInstanceProperty],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::setter_insertUndefinedLocalVariable (GALGAS_lstring inKey,
                                                                  GALGAS_unifiedTypeMap_2D_entry inArgument0,
                                                                  GALGAS_string inArgument1,
                                                                  GALGAS_string inArgument2,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_localVarManager * p = NULL ;
  macroMyNew (p, cMapElement_localVarManager (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_localVarManager_undefinedLocalVariable,
                     kMapStateNames_localVarManager [kMapState_localVarManager_undefinedLocalVariable],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::setter_insertDefinedLocalVariable (GALGAS_lstring inKey,
                                                                GALGAS_unifiedTypeMap_2D_entry inArgument0,
                                                                GALGAS_string inArgument1,
                                                                GALGAS_string inArgument2,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cMapElement_localVarManager * p = NULL ;
  macroMyNew (p, cMapElement_localVarManager (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_localVarManager_definedLocalVariable,
                     kMapStateNames_localVarManager [kMapState_localVarManager_definedLocalVariable],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::setter_insertUndefinedLocalConstant (GALGAS_lstring inKey,
                                                                  GALGAS_unifiedTypeMap_2D_entry inArgument0,
                                                                  GALGAS_string inArgument1,
                                                                  GALGAS_string inArgument2,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_localVarManager * p = NULL ;
  macroMyNew (p, cMapElement_localVarManager (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_localVarManager_undefinedLocalConstant,
                     kMapStateNames_localVarManager [kMapState_localVarManager_undefinedLocalConstant],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::setter_insertLocalConstant (GALGAS_lstring inKey,
                                                         GALGAS_unifiedTypeMap_2D_entry inArgument0,
                                                         GALGAS_string inArgument1,
                                                         GALGAS_string inArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cMapElement_localVarManager * p = NULL ;
  macroMyNew (p, cMapElement_localVarManager (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_localVarManager_localConstant,
                     kMapStateNames_localVarManager [kMapState_localVarManager_localConstant],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::setter_insertUsedLocalConstant (GALGAS_lstring inKey,
                                                             GALGAS_unifiedTypeMap_2D_entry inArgument0,
                                                             GALGAS_string inArgument1,
                                                             GALGAS_string inArgument2,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cMapElement_localVarManager * p = NULL ;
  macroMyNew (p, cMapElement_localVarManager (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_localVarManager_readLocalConstant,
                     kMapStateNames_localVarManager [kMapState_localVarManager_readLocalConstant],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::setter_insertInputFormalArgument (GALGAS_lstring inKey,
                                                               GALGAS_unifiedTypeMap_2D_entry inArgument0,
                                                               GALGAS_string inArgument1,
                                                               GALGAS_string inArgument2,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cMapElement_localVarManager * p = NULL ;
  macroMyNew (p, cMapElement_localVarManager (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_localVarManager_inputFormalParameter,
                     kMapStateNames_localVarManager [kMapState_localVarManager_inputFormalParameter],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::setter_insertInputFormalArgumentDeclaredAsUnused (GALGAS_lstring inKey,
                                                                               GALGAS_unifiedTypeMap_2D_entry inArgument0,
                                                                               GALGAS_string inArgument1,
                                                                               GALGAS_string inArgument2,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_localVarManager * p = NULL ;
  macroMyNew (p, cMapElement_localVarManager (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_localVarManager_inputFormalArgumentDeclaredAsUnused,
                     kMapStateNames_localVarManager [kMapState_localVarManager_inputFormalArgumentDeclaredAsUnused],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::setter_insertConstantInputFormalArgument (GALGAS_lstring inKey,
                                                                       GALGAS_unifiedTypeMap_2D_entry inArgument0,
                                                                       GALGAS_string inArgument1,
                                                                       GALGAS_string inArgument2,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_localVarManager * p = NULL ;
  macroMyNew (p, cMapElement_localVarManager (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_localVarManager_constantInputFormalArgument,
                     kMapStateNames_localVarManager [kMapState_localVarManager_constantInputFormalArgument],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::setter_insertConstantInputFormalArgumentDeclaredAsUnused (GALGAS_lstring inKey,
                                                                                       GALGAS_unifiedTypeMap_2D_entry inArgument0,
                                                                                       GALGAS_string inArgument1,
                                                                                       GALGAS_string inArgument2,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_localVarManager * p = NULL ;
  macroMyNew (p, cMapElement_localVarManager (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_localVarManager_constantInputFormalArgumentDeclaredAsUnused,
                     kMapStateNames_localVarManager [kMapState_localVarManager_constantInputFormalArgumentDeclaredAsUnused],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::setter_insertOutputFormalArgument (GALGAS_lstring inKey,
                                                                GALGAS_unifiedTypeMap_2D_entry inArgument0,
                                                                GALGAS_string inArgument1,
                                                                GALGAS_string inArgument2,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cMapElement_localVarManager * p = NULL ;
  macroMyNew (p, cMapElement_localVarManager (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_localVarManager_undefinedOutputFormalArgument,
                     kMapStateNames_localVarManager [kMapState_localVarManager_undefinedOutputFormalArgument],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::setter_insertInputOutputFormalArgument (GALGAS_lstring inKey,
                                                                     GALGAS_unifiedTypeMap_2D_entry inArgument0,
                                                                     GALGAS_string inArgument1,
                                                                     GALGAS_string inArgument2,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_localVarManager * p = NULL ;
  macroMyNew (p, cMapElement_localVarManager (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_localVarManager_unusedInputOutputFormalArgument,
                     kMapStateNames_localVarManager [kMapState_localVarManager_unusedInputOutputFormalArgument],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::setter_insertInputOutputFormalArgumentDeclaredAsUnused (GALGAS_lstring inKey,
                                                                                     GALGAS_unifiedTypeMap_2D_entry inArgument0,
                                                                                     GALGAS_string inArgument1,
                                                                                     GALGAS_string inArgument2,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_localVarManager * p = NULL ;
  macroMyNew (p, cMapElement_localVarManager (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_localVarManager_inputOutputFormalArgumentDeclaredAsUnused,
                     kMapStateNames_localVarManager [kMapState_localVarManager_inputOutputFormalArgumentDeclaredAsUnused],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_localVarManager_searchForReadAccess = "the '%K' variable is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::setter_searchForReadAccess (GALGAS_lstring inKey,
                                                         GALGAS_unifiedTypeMap_2D_entry & outArgument0,
                                                         GALGAS_string & outArgument1,
                                                         GALGAS_string & outArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  const cMapElement_localVarManager * p = (const cMapElement_localVarManager *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kMapAction_localVarManager_readAccess,
                                                                                                 kMapTransitions_localVarManager,
                                                                                                 kMapActionCount_localVarManager,
                                                                                                 #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                                   kMapStateCount_localVarManager,
                                                                                                 #endif
                                                                                                 kSearchErrorMessage_localVarManager_searchForReadAccess
                                                                                                 COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_localVarManager) ;
    outArgument0 = p->mProperty_mType ;
    outArgument1 = p->mProperty_mCppName ;
    outArgument2 = p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_localVarManager_searchForWriteAccess = "the '%K' variable is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::setter_searchForWriteAccess (GALGAS_lstring inKey,
                                                          GALGAS_unifiedTypeMap_2D_entry & outArgument0,
                                                          GALGAS_string & outArgument1,
                                                          GALGAS_string & outArgument2,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  const cMapElement_localVarManager * p = (const cMapElement_localVarManager *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kMapAction_localVarManager_writeAccess,
                                                                                                 kMapTransitions_localVarManager,
                                                                                                 kMapActionCount_localVarManager,
                                                                                                 #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                                   kMapStateCount_localVarManager,
                                                                                                 #endif
                                                                                                 kSearchErrorMessage_localVarManager_searchForWriteAccess
                                                                                                 COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_localVarManager) ;
    outArgument0 = p->mProperty_mType ;
    outArgument1 = p->mProperty_mCppName ;
    outArgument2 = p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_localVarManager_searchForReadWriteAccess = "the '%K' variable is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::setter_searchForReadWriteAccess (GALGAS_lstring inKey,
                                                              GALGAS_unifiedTypeMap_2D_entry & outArgument0,
                                                              GALGAS_string & outArgument1,
                                                              GALGAS_string & outArgument2,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  const cMapElement_localVarManager * p = (const cMapElement_localVarManager *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kMapAction_localVarManager_readWriteAccess,
                                                                                                 kMapTransitions_localVarManager,
                                                                                                 kMapActionCount_localVarManager,
                                                                                                 #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                                   kMapStateCount_localVarManager,
                                                                                                 #endif
                                                                                                 kSearchErrorMessage_localVarManager_searchForReadWriteAccess
                                                                                                 COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_localVarManager) ;
    outArgument0 = p->mProperty_mType ;
    outArgument1 = p->mProperty_mCppName ;
    outArgument2 = p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_localVarManager_searchForDropAccess = "the '%K' variable is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::setter_searchForDropAccess (GALGAS_lstring inKey,
                                                         GALGAS_unifiedTypeMap_2D_entry & outArgument0,
                                                         GALGAS_string & outArgument1,
                                                         GALGAS_string & outArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  const cMapElement_localVarManager * p = (const cMapElement_localVarManager *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kMapAction_localVarManager_dropAccess,
                                                                                                 kMapTransitions_localVarManager,
                                                                                                 kMapActionCount_localVarManager,
                                                                                                 #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                                   kMapStateCount_localVarManager,
                                                                                                 #endif
                                                                                                 kSearchErrorMessage_localVarManager_searchForDropAccess
                                                                                                 COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_localVarManager) ;
    outArgument0 = p->mProperty_mType ;
    outArgument1 = p->mProperty_mCppName ;
    outArgument2 = p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_localVarManager_neutralAccess = "the '%K' variable is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::setter_neutralAccess (GALGAS_lstring inKey,
                                                   GALGAS_unifiedTypeMap_2D_entry & outArgument0,
                                                   GALGAS_string & outArgument1,
                                                   GALGAS_string & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  const cMapElement_localVarManager * p = (const cMapElement_localVarManager *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kMapAction_localVarManager_neutralAccess,
                                                                                                 kMapTransitions_localVarManager,
                                                                                                 kMapActionCount_localVarManager,
                                                                                                 #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                                   kMapStateCount_localVarManager,
                                                                                                 #endif
                                                                                                 kSearchErrorMessage_localVarManager_neutralAccess
                                                                                                 COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_localVarManager) ;
    outArgument0 = p->mProperty_mType ;
    outArgument1 = p->mProperty_mCppName ;
    outArgument2 = p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_localVarManager::getter_mTypeForKey (const GALGAS_string & inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_localVarManager * p = (const cMapElement_localVarManager *) attributes ;
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_localVarManager) ;
    result = p->mProperty_mType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_localVarManager::getter_mCppNameForKey (const GALGAS_string & inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_localVarManager * p = (const cMapElement_localVarManager *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_localVarManager) ;
    result = p->mProperty_mCppName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_localVarManager::getter_mNameForCheckingFormalParameterUsingForKey (const GALGAS_string & inKey,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_localVarManager * p = (const cMapElement_localVarManager *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_localVarManager) ;
    result = p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::setter_setMTypeForKey (GALGAS_unifiedTypeMap_2D_entry inAttributeValue,
                                                    GALGAS_string inKey,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_localVarManager * p = (cMapElement_localVarManager *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_localVarManager) ;
    p->mProperty_mType = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::setter_setMCppNameForKey (GALGAS_string inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_localVarManager * p = (cMapElement_localVarManager *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_localVarManager) ;
    p->mProperty_mCppName = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::setter_setMNameForCheckingFormalParameterUsingForKey (GALGAS_string inAttributeValue,
                                                                                   GALGAS_string inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_localVarManager * p = (cMapElement_localVarManager *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_localVarManager) ;
    p->mProperty_mNameForCheckingFormalParameterUsing = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_localVarManager * GALGAS_localVarManager::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_localVarManager * result = (cMapElement_localVarManager *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_localVarManager) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_localVarManager::cEnumerator_localVarManager (const GALGAS_localVarManager & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_localVarManager::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry cEnumerator_localVarManager::current_mType (LOCATION_ARGS) const {
  const cMapElement_localVarManager * p = (const cMapElement_localVarManager *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_localVarManager) ;
  return p->mProperty_mType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_localVarManager::current_mCppName (LOCATION_ARGS) const {
  const cMapElement_localVarManager * p = (const cMapElement_localVarManager *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_localVarManager) ;
  return p->mProperty_mCppName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_localVarManager::current_mNameForCheckingFormalParameterUsing (LOCATION_ARGS) const {
  const cMapElement_localVarManager * p = (const cMapElement_localVarManager *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_localVarManager) ;
  return p->mProperty_mNameForCheckingFormalParameterUsing ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@localVarManager type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVarManager ("localVarManager",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVarManager::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVarManager ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVarManager::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVarManager (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVarManager GALGAS_localVarManager::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_localVarManager result ;
  const GALGAS_localVarManager * p = (const GALGAS_localVarManager *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localVarManager *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVarManager", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVarManager_2D_entry::GALGAS_localVarManager_2D_entry (void) :
AC_GALGAS_sharedMapEntry () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVarManager_2D_entry GALGAS_localVarManager_2D_entry::constructor_null (LOCATION_ARGS) {
  GALGAS_localVarManager_2D_entry result ;
  result.makeNullEntry (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager_2D_entry::class_method_makeOptionalEntry (GALGAS_localVarManager & ioMap,
                                                                      GALGAS_lstring inKey,
                                                                      GALGAS_localVarManager_2D_entry & outEntry
                                                                      COMMA_LOCATION_ARGS) {
  outEntry.internalMakeOptionalEntry (ioMap, inKey COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager_2D_entry::class_method_makeEntry (GALGAS_localVarManager & ioMap,
                                                              GALGAS_lstring inKey,
                                                              GALGAS_localVarManager_2D_entry & outEntry
                                                              COMMA_LOCATION_ARGS) {
  outEntry.internalMakeEntry (ioMap, inKey COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager_2D_entry::class_method_makeEntryFromString (GALGAS_localVarManager & ioMap,
                                                                        GALGAS_string inKey,
                                                                        GALGAS_localVarManager_2D_entry & outEntry
                                                                        COMMA_LOCATION_ARGS) {
  outEntry.internalMakeEntryFromString (ioMap, inKey COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_localVarManager_2D_entry::getter_mType (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  const cMapElement_localVarManager * p = (const cMapElement_localVarManager *) getAttributeListPointer (inCompiler, "mType" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_localVarManager) ;
    result = p->mProperty_mType;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_localVarManager_2D_entry::getter_mCppName (C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  const cMapElement_localVarManager * p = (const cMapElement_localVarManager *) getAttributeListPointer (inCompiler, "mCppName" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_localVarManager) ;
    result = p->mProperty_mCppName;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_localVarManager_2D_entry::getter_mNameForCheckingFormalParameterUsing (C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  const cMapElement_localVarManager * p = (const cMapElement_localVarManager *) getAttributeListPointer (inCompiler, "mNameForCheckingFormalParameterUsing" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_localVarManager) ;
    result = p->mProperty_mNameForCheckingFormalParameterUsing;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVarManager_2D_entry GALGAS_localVarManager_2D_entry::constructor_searchForReadAccess (const GALGAS_localVarManager & inMap,
                                                                                                  const GALGAS_lstring & inKey,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_localVarManager_2D_entry result ;
  result.internalMakeRegularEntryBySearchingKey (inMap, inKey, kSearchErrorMessage_localVarManager_searchForReadAccess, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVarManager_2D_entry GALGAS_localVarManager_2D_entry::constructor_searchForWriteAccess (const GALGAS_localVarManager & inMap,
                                                                                                   const GALGAS_lstring & inKey,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_localVarManager_2D_entry result ;
  result.internalMakeRegularEntryBySearchingKey (inMap, inKey, kSearchErrorMessage_localVarManager_searchForWriteAccess, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVarManager_2D_entry GALGAS_localVarManager_2D_entry::constructor_searchForReadWriteAccess (const GALGAS_localVarManager & inMap,
                                                                                                       const GALGAS_lstring & inKey,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_localVarManager_2D_entry result ;
  result.internalMakeRegularEntryBySearchingKey (inMap, inKey, kSearchErrorMessage_localVarManager_searchForReadWriteAccess, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVarManager_2D_entry GALGAS_localVarManager_2D_entry::constructor_searchForDropAccess (const GALGAS_localVarManager & inMap,
                                                                                                  const GALGAS_lstring & inKey,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_localVarManager_2D_entry result ;
  result.internalMakeRegularEntryBySearchingKey (inMap, inKey, kSearchErrorMessage_localVarManager_searchForDropAccess, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVarManager_2D_entry GALGAS_localVarManager_2D_entry::constructor_neutralAccess (const GALGAS_localVarManager & inMap,
                                                                                            const GALGAS_lstring & inKey,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_localVarManager_2D_entry result ;
  result.internalMakeRegularEntryBySearchingKey (inMap, inKey, kSearchErrorMessage_localVarManager_neutralAccess, inCompiler COMMA_THERE) ;
  return result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@localVarManager-entry type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVarManager_2D_entry ("localVarManager-entry",
                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVarManager_2D_entry::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVarManager_2D_entry ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVarManager_2D_entry::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVarManager_2D_entry (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVarManager_2D_entry GALGAS_localVarManager_2D_entry::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_localVarManager_2D_entry result ;
  const GALGAS_localVarManager_2D_entry * p = (const GALGAS_localVarManager_2D_entry *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localVarManager_2D_entry *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVarManager-entry", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ifExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ifExpressionAST * p = (const cPtr_ifExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ifExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIfExpression.objectCompare (p->mProperty_mIfExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mThenExpression.objectCompare (p->mProperty_mThenExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseExpression.objectCompare (p->mProperty_mElseExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ifExpressionAST::objectCompare (const GALGAS_ifExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifExpressionAST::GALGAS_ifExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifExpressionAST::GALGAS_ifExpressionAST (const cPtr_ifExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifExpressionAST GALGAS_ifExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                const GALGAS_semanticExpressionAST & inAttribute_mIfExpression,
                                                                const GALGAS_semanticExpressionAST & inAttribute_mThenExpression,
                                                                const GALGAS_semanticExpressionAST & inAttribute_mElseExpression
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mIfExpression.isValid () && inAttribute_mThenExpression.isValid () && inAttribute_mElseExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ifExpressionAST (inAttribute_mOperatorLocation, inAttribute_mIfExpression, inAttribute_mThenExpression, inAttribute_mElseExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_ifExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifExpressionAST * p = (const cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_ifExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_ifExpressionAST::getter_mIfExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifExpressionAST * p = (const cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    result = p->mProperty_mIfExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_ifExpressionAST::getter_mIfExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIfExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_ifExpressionAST::getter_mThenExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifExpressionAST * p = (const cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    result = p->mProperty_mThenExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_ifExpressionAST::getter_mThenExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mThenExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_ifExpressionAST::getter_mElseExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifExpressionAST * p = (const cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    result = p->mProperty_mElseExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_ifExpressionAST::getter_mElseExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElseExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionAST::setter_setMIfExpression (GALGAS_semanticExpressionAST inValue
                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    p->mProperty_mIfExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::setter_setMIfExpression (GALGAS_semanticExpressionAST inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIfExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionAST::setter_setMThenExpression (GALGAS_semanticExpressionAST inValue
                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    p->mProperty_mThenExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::setter_setMThenExpression (GALGAS_semanticExpressionAST inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mThenExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionAST::setter_setMElseExpression (GALGAS_semanticExpressionAST inValue
                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    p->mProperty_mElseExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::setter_setMElseExpression (GALGAS_semanticExpressionAST inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mElseExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ifExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ifExpressionAST::cPtr_ifExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                            const GALGAS_semanticExpressionAST & in_mIfExpression,
                                            const GALGAS_semanticExpressionAST & in_mThenExpression,
                                            const GALGAS_semanticExpressionAST & in_mElseExpression
                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mIfExpression (in_mIfExpression),
mProperty_mThenExpression (in_mThenExpression),
mProperty_mElseExpression (in_mElseExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ifExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionAST ;
}

void cPtr_ifExpressionAST::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@ifExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIfExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mThenExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElseExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ifExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ifExpressionAST (mProperty_mOperatorLocation, mProperty_mIfExpression, mProperty_mThenExpression, mProperty_mElseExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ifExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ifExpressionAST ("ifExpressionAST",
                                        & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifExpressionAST GALGAS_ifExpressionAST::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionAST result ;
  const GALGAS_ifExpressionAST * p = (const GALGAS_ifExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ifExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_unaryPlusExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_unaryPlusExpressionAST * p = (const cPtr_unaryPlusExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_unaryPlusExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_unaryPlusExpressionAST::objectCompare (const GALGAS_unaryPlusExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryPlusExpressionAST::GALGAS_unaryPlusExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryPlusExpressionAST::GALGAS_unaryPlusExpressionAST (const cPtr_unaryPlusExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unaryPlusExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryPlusExpressionAST GALGAS_unaryPlusExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                              const GALGAS_semanticExpressionAST & inAttribute_mExpression
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_unaryPlusExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_unaryPlusExpressionAST (inAttribute_mOperatorLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_unaryPlusExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_unaryPlusExpressionAST * p = (const cPtr_unaryPlusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryPlusExpressionAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_unaryPlusExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_unaryPlusExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_unaryPlusExpressionAST * p = (const cPtr_unaryPlusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryPlusExpressionAST) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_unaryPlusExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unaryPlusExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_unaryPlusExpressionAST * p = (cPtr_unaryPlusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryPlusExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_unaryPlusExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unaryPlusExpressionAST::setter_setMExpression (GALGAS_semanticExpressionAST inValue
                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_unaryPlusExpressionAST * p = (cPtr_unaryPlusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryPlusExpressionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_unaryPlusExpressionAST::setter_setMExpression (GALGAS_semanticExpressionAST inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @unaryPlusExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_unaryPlusExpressionAST::cPtr_unaryPlusExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                          const GALGAS_semanticExpressionAST & in_mExpression
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_unaryPlusExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryPlusExpressionAST ;
}

void cPtr_unaryPlusExpressionAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@unaryPlusExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_unaryPlusExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_unaryPlusExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@unaryPlusExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unaryPlusExpressionAST ("unaryPlusExpressionAST",
                                               & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unaryPlusExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryPlusExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unaryPlusExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unaryPlusExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryPlusExpressionAST GALGAS_unaryPlusExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_unaryPlusExpressionAST result ;
  const GALGAS_unaryPlusExpressionAST * p = (const GALGAS_unaryPlusExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unaryPlusExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryPlusExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_unaryMinusExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_unaryMinusExpressionAST * p = (const cPtr_unaryMinusExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_unaryMinusExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_unaryMinusExpressionAST::objectCompare (const GALGAS_unaryMinusExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryMinusExpressionAST::GALGAS_unaryMinusExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryMinusExpressionAST::GALGAS_unaryMinusExpressionAST (const cPtr_unaryMinusExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unaryMinusExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryMinusExpressionAST GALGAS_unaryMinusExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                const GALGAS_semanticExpressionAST & inAttribute_mExpression
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_unaryMinusExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_unaryMinusExpressionAST (inAttribute_mOperatorLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_unaryMinusExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_unaryMinusExpressionAST * p = (const cPtr_unaryMinusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryMinusExpressionAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_unaryMinusExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_unaryMinusExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_unaryMinusExpressionAST * p = (const cPtr_unaryMinusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryMinusExpressionAST) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_unaryMinusExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unaryMinusExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_unaryMinusExpressionAST * p = (cPtr_unaryMinusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryMinusExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unaryMinusExpressionAST::setter_setMExpression (GALGAS_semanticExpressionAST inValue
                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_unaryMinusExpressionAST * p = (cPtr_unaryMinusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryMinusExpressionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionAST::setter_setMExpression (GALGAS_semanticExpressionAST inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @unaryMinusExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_unaryMinusExpressionAST::cPtr_unaryMinusExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                            const GALGAS_semanticExpressionAST & in_mExpression
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_unaryMinusExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryMinusExpressionAST ;
}

void cPtr_unaryMinusExpressionAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@unaryMinusExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_unaryMinusExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_unaryMinusExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@unaryMinusExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unaryMinusExpressionAST ("unaryMinusExpressionAST",
                                                & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unaryMinusExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryMinusExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unaryMinusExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unaryMinusExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryMinusExpressionAST GALGAS_unaryMinusExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_unaryMinusExpressionAST result ;
  const GALGAS_unaryMinusExpressionAST * p = (const GALGAS_unaryMinusExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unaryMinusExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryMinusExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@actualOutputExpressionList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_actualOutputExpressionList : public cCollectionElement {
  public: GALGAS_actualOutputExpressionList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_actualOutputExpressionList (const GALGAS_lstring & in_mActualSelector,
                                                         const GALGAS_semanticExpressionAST & in_mExpression,
                                                         const GALGAS_location & in_mEndOfExpressionLocation
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_actualOutputExpressionList (const GALGAS_actualOutputExpressionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_actualOutputExpressionList::cCollectionElement_actualOutputExpressionList (const GALGAS_lstring & in_mActualSelector,
                                                                                              const GALGAS_semanticExpressionAST & in_mExpression,
                                                                                              const GALGAS_location & in_mEndOfExpressionLocation
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mActualSelector, in_mExpression, in_mEndOfExpressionLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_actualOutputExpressionList::cCollectionElement_actualOutputExpressionList (const GALGAS_actualOutputExpressionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mActualSelector, inElement.mProperty_mExpression, inElement.mProperty_mEndOfExpressionLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_actualOutputExpressionList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_actualOutputExpressionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_actualOutputExpressionList (mObject.mProperty_mActualSelector, mObject.mProperty_mExpression, mObject.mProperty_mEndOfExpressionLocation COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_actualOutputExpressionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActualSelector" ":" ;
  mObject.mProperty_mActualSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfExpressionLocation" ":" ;
  mObject.mProperty_mEndOfExpressionLocation.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_actualOutputExpressionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_actualOutputExpressionList * operand = (cCollectionElement_actualOutputExpressionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_actualOutputExpressionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualOutputExpressionList::GALGAS_actualOutputExpressionList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualOutputExpressionList::GALGAS_actualOutputExpressionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualOutputExpressionList GALGAS_actualOutputExpressionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_actualOutputExpressionList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualOutputExpressionList GALGAS_actualOutputExpressionList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_semanticExpressionAST & inOperand1,
                                                                                                const GALGAS_location & inOperand2
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_actualOutputExpressionList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_actualOutputExpressionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_actualOutputExpressionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualOutputExpressionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_lstring & in_mActualSelector,
                                                                   const GALGAS_semanticExpressionAST & in_mExpression,
                                                                   const GALGAS_location & in_mEndOfExpressionLocation
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_actualOutputExpressionList * p = NULL ;
  macroMyNew (p, cCollectionElement_actualOutputExpressionList (in_mActualSelector,
                                                                in_mExpression,
                                                                in_mEndOfExpressionLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualOutputExpressionList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                             const GALGAS_semanticExpressionAST & inOperand1,
                                                             const GALGAS_location & inOperand2
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_actualOutputExpressionList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualOutputExpressionList::setter_append (GALGAS_actualOutputExpressionList_2D_element inElement,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_actualOutputExpressionList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualOutputExpressionList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                              const GALGAS_semanticExpressionAST inOperand1,
                                                              const GALGAS_location inOperand2,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_actualOutputExpressionList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualOutputExpressionList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                              GALGAS_semanticExpressionAST & outOperand1,
                                                              GALGAS_location & outOperand2,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_actualOutputExpressionList * p = (cCollectionElement_actualOutputExpressionList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_actualOutputExpressionList) ;
        outOperand0 = p->mObject.mProperty_mActualSelector ;
        outOperand1 = p->mObject.mProperty_mExpression ;
        outOperand2 = p->mObject.mProperty_mEndOfExpressionLocation ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualOutputExpressionList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                         GALGAS_semanticExpressionAST & outOperand1,
                                                         GALGAS_location & outOperand2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualOutputExpressionList * p = (cCollectionElement_actualOutputExpressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualOutputExpressionList) ;
    outOperand0 = p->mObject.mProperty_mActualSelector ;
    outOperand1 = p->mObject.mProperty_mExpression ;
    outOperand2 = p->mObject.mProperty_mEndOfExpressionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualOutputExpressionList::setter_popLast (GALGAS_lstring & outOperand0,
                                                        GALGAS_semanticExpressionAST & outOperand1,
                                                        GALGAS_location & outOperand2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualOutputExpressionList * p = (cCollectionElement_actualOutputExpressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualOutputExpressionList) ;
    outOperand0 = p->mObject.mProperty_mActualSelector ;
    outOperand1 = p->mObject.mProperty_mExpression ;
    outOperand2 = p->mObject.mProperty_mEndOfExpressionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualOutputExpressionList::method_first (GALGAS_lstring & outOperand0,
                                                      GALGAS_semanticExpressionAST & outOperand1,
                                                      GALGAS_location & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualOutputExpressionList * p = (cCollectionElement_actualOutputExpressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualOutputExpressionList) ;
    outOperand0 = p->mObject.mProperty_mActualSelector ;
    outOperand1 = p->mObject.mProperty_mExpression ;
    outOperand2 = p->mObject.mProperty_mEndOfExpressionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualOutputExpressionList::method_last (GALGAS_lstring & outOperand0,
                                                     GALGAS_semanticExpressionAST & outOperand1,
                                                     GALGAS_location & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualOutputExpressionList * p = (cCollectionElement_actualOutputExpressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualOutputExpressionList) ;
    outOperand0 = p->mObject.mProperty_mActualSelector ;
    outOperand1 = p->mObject.mProperty_mExpression ;
    outOperand2 = p->mObject.mProperty_mEndOfExpressionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualOutputExpressionList GALGAS_actualOutputExpressionList::add_operation (const GALGAS_actualOutputExpressionList & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_actualOutputExpressionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualOutputExpressionList GALGAS_actualOutputExpressionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_actualOutputExpressionList result = GALGAS_actualOutputExpressionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualOutputExpressionList GALGAS_actualOutputExpressionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_actualOutputExpressionList result = GALGAS_actualOutputExpressionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualOutputExpressionList GALGAS_actualOutputExpressionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_actualOutputExpressionList result = GALGAS_actualOutputExpressionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualOutputExpressionList::plusAssign_operation (const GALGAS_actualOutputExpressionList inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualOutputExpressionList::setter_setMActualSelectorAtIndex (GALGAS_lstring inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_actualOutputExpressionList * p = (cCollectionElement_actualOutputExpressionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actualOutputExpressionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mActualSelector = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_actualOutputExpressionList::getter_mActualSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actualOutputExpressionList * p = (cCollectionElement_actualOutputExpressionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actualOutputExpressionList) ;
    result = p->mObject.mProperty_mActualSelector ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualOutputExpressionList::setter_setMExpressionAtIndex (GALGAS_semanticExpressionAST inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_actualOutputExpressionList * p = (cCollectionElement_actualOutputExpressionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actualOutputExpressionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExpression = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_actualOutputExpressionList::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actualOutputExpressionList * p = (cCollectionElement_actualOutputExpressionList *) attributes.ptr () ;
  GALGAS_semanticExpressionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actualOutputExpressionList) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualOutputExpressionList::setter_setMEndOfExpressionLocationAtIndex (GALGAS_location inOperand,
                                                                                   GALGAS_uint inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_actualOutputExpressionList * p = (cCollectionElement_actualOutputExpressionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actualOutputExpressionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfExpressionLocation = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_actualOutputExpressionList::getter_mEndOfExpressionLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actualOutputExpressionList * p = (cCollectionElement_actualOutputExpressionList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actualOutputExpressionList) ;
    result = p->mObject.mProperty_mEndOfExpressionLocation ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_actualOutputExpressionList::cEnumerator_actualOutputExpressionList (const GALGAS_actualOutputExpressionList & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualOutputExpressionList_2D_element cEnumerator_actualOutputExpressionList::current (LOCATION_ARGS) const {
  const cCollectionElement_actualOutputExpressionList * p = (const cCollectionElement_actualOutputExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualOutputExpressionList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_actualOutputExpressionList::current_mActualSelector (LOCATION_ARGS) const {
  const cCollectionElement_actualOutputExpressionList * p = (const cCollectionElement_actualOutputExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualOutputExpressionList) ;
  return p->mObject.mProperty_mActualSelector ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cEnumerator_actualOutputExpressionList::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_actualOutputExpressionList * p = (const cCollectionElement_actualOutputExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualOutputExpressionList) ;
  return p->mObject.mProperty_mExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_actualOutputExpressionList::current_mEndOfExpressionLocation (LOCATION_ARGS) const {
  const cCollectionElement_actualOutputExpressionList * p = (const cCollectionElement_actualOutputExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualOutputExpressionList) ;
  return p->mObject.mProperty_mEndOfExpressionLocation ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@actualOutputExpressionList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualOutputExpressionList ("actualOutputExpressionList",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actualOutputExpressionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualOutputExpressionList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actualOutputExpressionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualOutputExpressionList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualOutputExpressionList GALGAS_actualOutputExpressionList::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_actualOutputExpressionList result ;
  const GALGAS_actualOutputExpressionList * p = (const GALGAS_actualOutputExpressionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actualOutputExpressionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualOutputExpressionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@actualOutputExpressionList enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_enterInSemanticContext (const GALGAS_actualOutputExpressionList inObject,
                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_actualOutputExpressionList temp_0 = inObject ;
  cEnumerator_actualOutputExpressionList enumerator_1579 (temp_0, kENUMERATION_UP) ;
  while (enumerator_1579.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_1579.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 41)) ;
    enumerator_1579.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_trueExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_trueExpressionAST * p = (const cPtr_trueExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_trueExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_trueExpressionAST::objectCompare (const GALGAS_trueExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpressionAST::GALGAS_trueExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpressionAST GALGAS_trueExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_trueExpressionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                    COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpressionAST::GALGAS_trueExpressionAST (const cPtr_trueExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_trueExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpressionAST GALGAS_trueExpressionAST::constructor_new (const GALGAS_location & inAttribute_mLocation
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_trueExpressionAST result ;
  if (inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_trueExpressionAST (inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_trueExpressionAST::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_trueExpressionAST * p = (const cPtr_trueExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_trueExpressionAST) ;
    result = p->mProperty_mLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_trueExpressionAST::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_trueExpressionAST::setter_setMLocation (GALGAS_location inValue
                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_trueExpressionAST * p = (cPtr_trueExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_trueExpressionAST) ;
    p->mProperty_mLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_trueExpressionAST::setter_setMLocation (GALGAS_location inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @trueExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_trueExpressionAST::cPtr_trueExpressionAST (const GALGAS_location & in_mLocation
                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mLocation (in_mLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_trueExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpressionAST ;
}

void cPtr_trueExpressionAST::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@trueExpressionAST:" ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_trueExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_trueExpressionAST (mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@trueExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_trueExpressionAST ("trueExpressionAST",
                                          & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_trueExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_trueExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_trueExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpressionAST GALGAS_trueExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_trueExpressionAST result ;
  const GALGAS_trueExpressionAST * p = (const GALGAS_trueExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_trueExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("trueExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_falseExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_falseExpressionAST * p = (const cPtr_falseExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_falseExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_falseExpressionAST::objectCompare (const GALGAS_falseExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpressionAST::GALGAS_falseExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpressionAST GALGAS_falseExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_falseExpressionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpressionAST::GALGAS_falseExpressionAST (const cPtr_falseExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_falseExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpressionAST GALGAS_falseExpressionAST::constructor_new (const GALGAS_location & inAttribute_mLocation
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_falseExpressionAST result ;
  if (inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_falseExpressionAST (inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_falseExpressionAST::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_falseExpressionAST * p = (const cPtr_falseExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_falseExpressionAST) ;
    result = p->mProperty_mLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_falseExpressionAST::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_falseExpressionAST::setter_setMLocation (GALGAS_location inValue
                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_falseExpressionAST * p = (cPtr_falseExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_falseExpressionAST) ;
    p->mProperty_mLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_falseExpressionAST::setter_setMLocation (GALGAS_location inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @falseExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_falseExpressionAST::cPtr_falseExpressionAST (const GALGAS_location & in_mLocation
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mLocation (in_mLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_falseExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpressionAST ;
}

void cPtr_falseExpressionAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@falseExpressionAST:" ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_falseExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_falseExpressionAST (mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@falseExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_falseExpressionAST ("falseExpressionAST",
                                           & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_falseExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_falseExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_falseExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpressionAST GALGAS_falseExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_falseExpressionAST result ;
  const GALGAS_falseExpressionAST * p = (const GALGAS_falseExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_falseExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("falseExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalStringExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalStringExpressionAST * p = (const cPtr_literalStringExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalStringExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStringSequence.objectCompare (p->mProperty_mStringSequence) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalStringExpressionAST::objectCompare (const GALGAS_literalStringExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringExpressionAST::GALGAS_literalStringExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringExpressionAST GALGAS_literalStringExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalStringExpressionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                             GALGAS_stringlist::constructor_emptyList (HERE)
                                                             COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringExpressionAST::GALGAS_literalStringExpressionAST (const cPtr_literalStringExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalStringExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringExpressionAST GALGAS_literalStringExpressionAST::constructor_new (const GALGAS_location & inAttribute_mLocation,
                                                                                      const GALGAS_stringlist & inAttribute_mStringSequence
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_literalStringExpressionAST result ;
  if (inAttribute_mLocation.isValid () && inAttribute_mStringSequence.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalStringExpressionAST (inAttribute_mLocation, inAttribute_mStringSequence COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_literalStringExpressionAST::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalStringExpressionAST * p = (const cPtr_literalStringExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringExpressionAST) ;
    result = p->mProperty_mLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_literalStringExpressionAST::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_literalStringExpressionAST::getter_mStringSequence (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalStringExpressionAST * p = (const cPtr_literalStringExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringExpressionAST) ;
    result = p->mProperty_mStringSequence ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_literalStringExpressionAST::getter_mStringSequence (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStringSequence ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_literalStringExpressionAST::setter_setMLocation (GALGAS_location inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_literalStringExpressionAST * p = (cPtr_literalStringExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringExpressionAST) ;
    p->mProperty_mLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionAST::setter_setMLocation (GALGAS_location inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_literalStringExpressionAST::setter_setMStringSequence (GALGAS_stringlist inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_literalStringExpressionAST * p = (cPtr_literalStringExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringExpressionAST) ;
    p->mProperty_mStringSequence = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionAST::setter_setMStringSequence (GALGAS_stringlist inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mStringSequence = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalStringExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalStringExpressionAST::cPtr_literalStringExpressionAST (const GALGAS_location & in_mLocation,
                                                                  const GALGAS_stringlist & in_mStringSequence
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mLocation (in_mLocation),
mProperty_mStringSequence (in_mStringSequence) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalStringExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringExpressionAST ;
}

void cPtr_literalStringExpressionAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@literalStringExpressionAST:" ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStringSequence.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalStringExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalStringExpressionAST (mProperty_mLocation, mProperty_mStringSequence COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@literalStringExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalStringExpressionAST ("literalStringExpressionAST",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalStringExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalStringExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalStringExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringExpressionAST GALGAS_literalStringExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalStringExpressionAST result ;
  const GALGAS_literalStringExpressionAST * p = (const GALGAS_literalStringExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalStringExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStringExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparison::GALGAS_comparison (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparison::constructor_equal (UNUSED_LOCATION_ARGS) {
  GALGAS_comparison result ;
  result.mEnum = kEnum_equal ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparison::constructor_notEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_comparison result ;
  result.mEnum = kEnum_notEqual ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparison::constructor_lowerOrEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_comparison result ;
  result.mEnum = kEnum_lowerOrEqual ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparison::constructor_lowerThan (UNUSED_LOCATION_ARGS) {
  GALGAS_comparison result ;
  result.mEnum = kEnum_lowerThan ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparison::constructor_greaterOrEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_comparison result ;
  result.mEnum = kEnum_greaterOrEqual ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparison::constructor_greaterThan (UNUSED_LOCATION_ARGS) {
  GALGAS_comparison result ;
  result.mEnum = kEnum_greaterThan ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_comparison::optional_equal () const {
  const bool ok = mEnum == kEnum_equal ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_comparison::optional_notEqual () const {
  const bool ok = mEnum == kEnum_notEqual ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_comparison::optional_lowerOrEqual () const {
  const bool ok = mEnum == kEnum_lowerOrEqual ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_comparison::optional_lowerThan () const {
  const bool ok = mEnum == kEnum_lowerThan ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_comparison::optional_greaterOrEqual () const {
  const bool ok = mEnum == kEnum_greaterOrEqual ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_comparison::optional_greaterThan () const {
  const bool ok = mEnum == kEnum_greaterThan ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_comparison [7] = {
  "(not built)",
  "equal",
  "notEqual",
  "lowerOrEqual",
  "lowerThan",
  "greaterOrEqual",
  "greaterThan"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_comparison::getter_isEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_equal == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_comparison::getter_isNotEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_notEqual == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_comparison::getter_isLowerOrEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lowerOrEqual == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_comparison::getter_isLowerThan (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lowerThan == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_comparison::getter_isGreaterOrEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_greaterOrEqual == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_comparison::getter_isGreaterThan (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_greaterThan == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparison::description (C_String & ioString,
                                     const int32_t /* inIndentation */) const {
  ioString << "<enum @comparison: " << gEnumNameArrayFor_comparison [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_comparison::objectCompare (const GALGAS_comparison & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------
//
//@comparison type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_comparison ("comparison",
                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_comparison::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparison ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_comparison::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparison (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparison::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_comparison result ;
  const GALGAS_comparison * p = (const GALGAS_comparison *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_comparison *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparison", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_comparisonExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_comparisonExpressionAST * p = (const cPtr_comparisonExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_comparisonExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mComparison.objectCompare (p->mProperty_mComparison) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_comparisonExpressionAST::objectCompare (const GALGAS_comparisonExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonExpressionAST::GALGAS_comparisonExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonExpressionAST::GALGAS_comparisonExpressionAST (const cPtr_comparisonExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonExpressionAST GALGAS_comparisonExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                                const GALGAS_comparison & inAttribute_mComparison,
                                                                                const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_comparisonExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mComparison.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_comparisonExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mComparison, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_comparisonExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonExpressionAST * p = (const cPtr_comparisonExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_comparisonExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_comparisonExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonExpressionAST * p = (const cPtr_comparisonExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_comparisonExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparisonExpressionAST::getter_mComparison (UNUSED_LOCATION_ARGS) const {
  GALGAS_comparison result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonExpressionAST * p = (const cPtr_comparisonExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionAST) ;
    result = p->mProperty_mComparison ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparison cPtr_comparisonExpressionAST::getter_mComparison (UNUSED_LOCATION_ARGS) const {
  return mProperty_mComparison ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_comparisonExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonExpressionAST * p = (const cPtr_comparisonExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_comparisonExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparisonExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_comparisonExpressionAST * p = (cPtr_comparisonExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparisonExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_comparisonExpressionAST * p = (cPtr_comparisonExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparisonExpressionAST::setter_setMComparison (GALGAS_comparison inValue
                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_comparisonExpressionAST * p = (cPtr_comparisonExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionAST) ;
    p->mProperty_mComparison = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionAST::setter_setMComparison (GALGAS_comparison inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mComparison = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparisonExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_comparisonExpressionAST * p = (cPtr_comparisonExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @comparisonExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_comparisonExpressionAST::cPtr_comparisonExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                            const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                            const GALGAS_comparison & in_mComparison,
                                                            const GALGAS_semanticExpressionAST & in_mRightExpression
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mComparison (in_mComparison),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_comparisonExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonExpressionAST ;
}

void cPtr_comparisonExpressionAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@comparisonExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mComparison.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_comparisonExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_comparisonExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mComparison, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@comparisonExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_comparisonExpressionAST ("comparisonExpressionAST",
                                                & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_comparisonExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_comparisonExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparisonExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonExpressionAST GALGAS_comparisonExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_comparisonExpressionAST result ;
  const GALGAS_comparisonExpressionAST * p = (const GALGAS_comparisonExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_comparisonExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_rightShiftExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_rightShiftExpressionAST * p = (const cPtr_rightShiftExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_rightShiftExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_rightShiftExpressionAST::objectCompare (const GALGAS_rightShiftExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rightShiftExpressionAST::GALGAS_rightShiftExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rightShiftExpressionAST::GALGAS_rightShiftExpressionAST (const cPtr_rightShiftExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_rightShiftExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rightShiftExpressionAST GALGAS_rightShiftExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                                const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_rightShiftExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_rightShiftExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_rightShiftExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_rightShiftExpressionAST * p = (const cPtr_rightShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_rightShiftExpressionAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_rightShiftExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_rightShiftExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_rightShiftExpressionAST * p = (const cPtr_rightShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_rightShiftExpressionAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_rightShiftExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_rightShiftExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_rightShiftExpressionAST * p = (const cPtr_rightShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_rightShiftExpressionAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_rightShiftExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_rightShiftExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_rightShiftExpressionAST * p = (cPtr_rightShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_rightShiftExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_rightShiftExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_rightShiftExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_rightShiftExpressionAST * p = (cPtr_rightShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_rightShiftExpressionAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_rightShiftExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_rightShiftExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_rightShiftExpressionAST * p = (cPtr_rightShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_rightShiftExpressionAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_rightShiftExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @rightShiftExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_rightShiftExpressionAST::cPtr_rightShiftExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                            const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                            const GALGAS_semanticExpressionAST & in_mRightExpression
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_rightShiftExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_rightShiftExpressionAST ;
}

void cPtr_rightShiftExpressionAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@rightShiftExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_rightShiftExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_rightShiftExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@rightShiftExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_rightShiftExpressionAST ("rightShiftExpressionAST",
                                                & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_rightShiftExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_rightShiftExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_rightShiftExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_rightShiftExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rightShiftExpressionAST GALGAS_rightShiftExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_rightShiftExpressionAST result ;
  const GALGAS_rightShiftExpressionAST * p = (const GALGAS_rightShiftExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_rightShiftExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("rightShiftExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_leftShiftExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_leftShiftExpressionAST * p = (const cPtr_leftShiftExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_leftShiftExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_leftShiftExpressionAST::objectCompare (const GALGAS_leftShiftExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_leftShiftExpressionAST::GALGAS_leftShiftExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_leftShiftExpressionAST::GALGAS_leftShiftExpressionAST (const cPtr_leftShiftExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_leftShiftExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_leftShiftExpressionAST GALGAS_leftShiftExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                              const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                              const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_leftShiftExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_leftShiftExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_leftShiftExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_leftShiftExpressionAST * p = (const cPtr_leftShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftExpressionAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_leftShiftExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_leftShiftExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_leftShiftExpressionAST * p = (const cPtr_leftShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftExpressionAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_leftShiftExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_leftShiftExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_leftShiftExpressionAST * p = (const cPtr_leftShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftExpressionAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_leftShiftExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_leftShiftExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_leftShiftExpressionAST * p = (cPtr_leftShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_leftShiftExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_leftShiftExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_leftShiftExpressionAST * p = (cPtr_leftShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftExpressionAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_leftShiftExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_leftShiftExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_leftShiftExpressionAST * p = (cPtr_leftShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftExpressionAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_leftShiftExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @leftShiftExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_leftShiftExpressionAST::cPtr_leftShiftExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                          const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                          const GALGAS_semanticExpressionAST & in_mRightExpression
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_leftShiftExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_leftShiftExpressionAST ;
}

void cPtr_leftShiftExpressionAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@leftShiftExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_leftShiftExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_leftShiftExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@leftShiftExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_leftShiftExpressionAST ("leftShiftExpressionAST",
                                               & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_leftShiftExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_leftShiftExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_leftShiftExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_leftShiftExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_leftShiftExpressionAST GALGAS_leftShiftExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_leftShiftExpressionAST result ;
  const GALGAS_leftShiftExpressionAST * p = (const GALGAS_leftShiftExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_leftShiftExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("leftShiftExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_addExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_addExpressionAST * p = (const cPtr_addExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_addExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_addExpressionAST::objectCompare (const GALGAS_addExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_addExpressionAST::GALGAS_addExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_addExpressionAST::GALGAS_addExpressionAST (const cPtr_addExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_addExpressionAST GALGAS_addExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                  const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                  const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_addExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_addExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_addExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_addExpressionAST * p = (const cPtr_addExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_addExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_addExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_addExpressionAST * p = (const cPtr_addExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_addExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_addExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_addExpressionAST * p = (const cPtr_addExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_addExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_addExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_addExpressionAST * p = (cPtr_addExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_addExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_addExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_addExpressionAST * p = (cPtr_addExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_addExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_addExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_addExpressionAST * p = (cPtr_addExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_addExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @addExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_addExpressionAST::cPtr_addExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                              const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                              const GALGAS_semanticExpressionAST & in_mRightExpression
                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_addExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionAST ;
}

void cPtr_addExpressionAST::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@addExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_addExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_addExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@addExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_addExpressionAST ("addExpressionAST",
                                         & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_addExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_addExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_addExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_addExpressionAST GALGAS_addExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_addExpressionAST result ;
  const GALGAS_addExpressionAST * p = (const GALGAS_addExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_addExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_addExpressionNoOverflowAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_addExpressionNoOverflowAST * p = (const cPtr_addExpressionNoOverflowAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_addExpressionNoOverflowAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_addExpressionNoOverflowAST::objectCompare (const GALGAS_addExpressionNoOverflowAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_addExpressionNoOverflowAST::GALGAS_addExpressionNoOverflowAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_addExpressionNoOverflowAST::GALGAS_addExpressionNoOverflowAST (const cPtr_addExpressionNoOverflowAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addExpressionNoOverflowAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_addExpressionNoOverflowAST GALGAS_addExpressionNoOverflowAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                      const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                                      const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_addExpressionNoOverflowAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_addExpressionNoOverflowAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_addExpressionNoOverflowAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_addExpressionNoOverflowAST * p = (const cPtr_addExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionNoOverflowAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_addExpressionNoOverflowAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_addExpressionNoOverflowAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_addExpressionNoOverflowAST * p = (const cPtr_addExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionNoOverflowAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_addExpressionNoOverflowAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_addExpressionNoOverflowAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_addExpressionNoOverflowAST * p = (const cPtr_addExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionNoOverflowAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_addExpressionNoOverflowAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_addExpressionNoOverflowAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_addExpressionNoOverflowAST * p = (cPtr_addExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionNoOverflowAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_addExpressionNoOverflowAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_addExpressionNoOverflowAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_addExpressionNoOverflowAST * p = (cPtr_addExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionNoOverflowAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_addExpressionNoOverflowAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_addExpressionNoOverflowAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_addExpressionNoOverflowAST * p = (cPtr_addExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionNoOverflowAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_addExpressionNoOverflowAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @addExpressionNoOverflowAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_addExpressionNoOverflowAST::cPtr_addExpressionNoOverflowAST (const GALGAS_location & in_mOperatorLocation,
                                                                  const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                                  const GALGAS_semanticExpressionAST & in_mRightExpression
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_addExpressionNoOverflowAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionNoOverflowAST ;
}

void cPtr_addExpressionNoOverflowAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@addExpressionNoOverflowAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_addExpressionNoOverflowAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_addExpressionNoOverflowAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@addExpressionNoOverflowAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_addExpressionNoOverflowAST ("addExpressionNoOverflowAST",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_addExpressionNoOverflowAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionNoOverflowAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_addExpressionNoOverflowAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_addExpressionNoOverflowAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_addExpressionNoOverflowAST GALGAS_addExpressionNoOverflowAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_addExpressionNoOverflowAST result ;
  const GALGAS_addExpressionNoOverflowAST * p = (const GALGAS_addExpressionNoOverflowAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_addExpressionNoOverflowAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addExpressionNoOverflowAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_subExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_subExpressionAST * p = (const cPtr_subExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_subExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_subExpressionAST::objectCompare (const GALGAS_subExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_subExpressionAST::GALGAS_subExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_subExpressionAST::GALGAS_subExpressionAST (const cPtr_subExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_subExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_subExpressionAST GALGAS_subExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                  const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                  const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_subExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_subExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_subExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_subExpressionAST * p = (const cPtr_subExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_subExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_subExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_subExpressionAST * p = (const cPtr_subExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_subExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_subExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_subExpressionAST * p = (const cPtr_subExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_subExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_subExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_subExpressionAST * p = (cPtr_subExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_subExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_subExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_subExpressionAST * p = (cPtr_subExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_subExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_subExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_subExpressionAST * p = (cPtr_subExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_subExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @subExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_subExpressionAST::cPtr_subExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                              const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                              const GALGAS_semanticExpressionAST & in_mRightExpression
                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_subExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionAST ;
}

void cPtr_subExpressionAST::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@subExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_subExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_subExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@subExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_subExpressionAST ("subExpressionAST",
                                         & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_subExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_subExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_subExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_subExpressionAST GALGAS_subExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_subExpressionAST result ;
  const GALGAS_subExpressionAST * p = (const GALGAS_subExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_subExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_subExpressionNoOverflowAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_subExpressionNoOverflowAST * p = (const cPtr_subExpressionNoOverflowAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_subExpressionNoOverflowAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_subExpressionNoOverflowAST::objectCompare (const GALGAS_subExpressionNoOverflowAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_subExpressionNoOverflowAST::GALGAS_subExpressionNoOverflowAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_subExpressionNoOverflowAST::GALGAS_subExpressionNoOverflowAST (const cPtr_subExpressionNoOverflowAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_subExpressionNoOverflowAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_subExpressionNoOverflowAST GALGAS_subExpressionNoOverflowAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                      const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                                      const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_subExpressionNoOverflowAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_subExpressionNoOverflowAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_subExpressionNoOverflowAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_subExpressionNoOverflowAST * p = (const cPtr_subExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionNoOverflowAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_subExpressionNoOverflowAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_subExpressionNoOverflowAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_subExpressionNoOverflowAST * p = (const cPtr_subExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionNoOverflowAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_subExpressionNoOverflowAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_subExpressionNoOverflowAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_subExpressionNoOverflowAST * p = (const cPtr_subExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionNoOverflowAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_subExpressionNoOverflowAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_subExpressionNoOverflowAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_subExpressionNoOverflowAST * p = (cPtr_subExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionNoOverflowAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_subExpressionNoOverflowAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_subExpressionNoOverflowAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_subExpressionNoOverflowAST * p = (cPtr_subExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionNoOverflowAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_subExpressionNoOverflowAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_subExpressionNoOverflowAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_subExpressionNoOverflowAST * p = (cPtr_subExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionNoOverflowAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_subExpressionNoOverflowAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @subExpressionNoOverflowAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_subExpressionNoOverflowAST::cPtr_subExpressionNoOverflowAST (const GALGAS_location & in_mOperatorLocation,
                                                                  const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                                  const GALGAS_semanticExpressionAST & in_mRightExpression
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_subExpressionNoOverflowAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionNoOverflowAST ;
}

void cPtr_subExpressionNoOverflowAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@subExpressionNoOverflowAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_subExpressionNoOverflowAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_subExpressionNoOverflowAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@subExpressionNoOverflowAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_subExpressionNoOverflowAST ("subExpressionNoOverflowAST",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_subExpressionNoOverflowAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionNoOverflowAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_subExpressionNoOverflowAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_subExpressionNoOverflowAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_subExpressionNoOverflowAST GALGAS_subExpressionNoOverflowAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_subExpressionNoOverflowAST result ;
  const GALGAS_subExpressionNoOverflowAST * p = (const GALGAS_subExpressionNoOverflowAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_subExpressionNoOverflowAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subExpressionNoOverflowAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator::GALGAS_binaryOperator (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator GALGAS_binaryOperator::constructor_rightShift (UNUSED_LOCATION_ARGS) {
  GALGAS_binaryOperator result ;
  result.mEnum = kEnum_rightShift ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator GALGAS_binaryOperator::constructor_leftShift (UNUSED_LOCATION_ARGS) {
  GALGAS_binaryOperator result ;
  result.mEnum = kEnum_leftShift ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator GALGAS_binaryOperator::constructor_add (UNUSED_LOCATION_ARGS) {
  GALGAS_binaryOperator result ;
  result.mEnum = kEnum_add ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator GALGAS_binaryOperator::constructor_addNoOverflow (UNUSED_LOCATION_ARGS) {
  GALGAS_binaryOperator result ;
  result.mEnum = kEnum_addNoOverflow ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator GALGAS_binaryOperator::constructor_sub (UNUSED_LOCATION_ARGS) {
  GALGAS_binaryOperator result ;
  result.mEnum = kEnum_sub ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator GALGAS_binaryOperator::constructor_subNoOverflow (UNUSED_LOCATION_ARGS) {
  GALGAS_binaryOperator result ;
  result.mEnum = kEnum_subNoOverflow ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator GALGAS_binaryOperator::constructor_operator_5F_and (UNUSED_LOCATION_ARGS) {
  GALGAS_binaryOperator result ;
  result.mEnum = kEnum_operator_5F_and ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator GALGAS_binaryOperator::constructor_operator_5F_or (UNUSED_LOCATION_ARGS) {
  GALGAS_binaryOperator result ;
  result.mEnum = kEnum_operator_5F_or ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator GALGAS_binaryOperator::constructor_operator_5F_xor (UNUSED_LOCATION_ARGS) {
  GALGAS_binaryOperator result ;
  result.mEnum = kEnum_operator_5F_xor ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator GALGAS_binaryOperator::constructor_multiply_5F_operation_5F_no_5F_ovf (UNUSED_LOCATION_ARGS) {
  GALGAS_binaryOperator result ;
  result.mEnum = kEnum_multiply_5F_operation_5F_no_5F_ovf ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator GALGAS_binaryOperator::constructor_multiply_5F_operation (UNUSED_LOCATION_ARGS) {
  GALGAS_binaryOperator result ;
  result.mEnum = kEnum_multiply_5F_operation ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator GALGAS_binaryOperator::constructor_divide_5F_operation (UNUSED_LOCATION_ARGS) {
  GALGAS_binaryOperator result ;
  result.mEnum = kEnum_divide_5F_operation ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator GALGAS_binaryOperator::constructor_divide_5F_operation_5F_no_5F_ovf (UNUSED_LOCATION_ARGS) {
  GALGAS_binaryOperator result ;
  result.mEnum = kEnum_divide_5F_operation_5F_no_5F_ovf ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator GALGAS_binaryOperator::constructor_modulo_5F_operation (UNUSED_LOCATION_ARGS) {
  GALGAS_binaryOperator result ;
  result.mEnum = kEnum_modulo_5F_operation ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_binaryOperator::optional_rightShift () const {
  const bool ok = mEnum == kEnum_rightShift ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_binaryOperator::optional_leftShift () const {
  const bool ok = mEnum == kEnum_leftShift ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_binaryOperator::optional_add () const {
  const bool ok = mEnum == kEnum_add ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_binaryOperator::optional_addNoOverflow () const {
  const bool ok = mEnum == kEnum_addNoOverflow ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_binaryOperator::optional_sub () const {
  const bool ok = mEnum == kEnum_sub ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_binaryOperator::optional_subNoOverflow () const {
  const bool ok = mEnum == kEnum_subNoOverflow ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_binaryOperator::optional_operator_5F_and () const {
  const bool ok = mEnum == kEnum_operator_5F_and ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_binaryOperator::optional_operator_5F_or () const {
  const bool ok = mEnum == kEnum_operator_5F_or ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_binaryOperator::optional_operator_5F_xor () const {
  const bool ok = mEnum == kEnum_operator_5F_xor ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_binaryOperator::optional_multiply_5F_operation_5F_no_5F_ovf () const {
  const bool ok = mEnum == kEnum_multiply_5F_operation_5F_no_5F_ovf ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_binaryOperator::optional_multiply_5F_operation () const {
  const bool ok = mEnum == kEnum_multiply_5F_operation ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_binaryOperator::optional_divide_5F_operation () const {
  const bool ok = mEnum == kEnum_divide_5F_operation ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_binaryOperator::optional_divide_5F_operation_5F_no_5F_ovf () const {
  const bool ok = mEnum == kEnum_divide_5F_operation_5F_no_5F_ovf ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_binaryOperator::optional_modulo_5F_operation () const {
  const bool ok = mEnum == kEnum_modulo_5F_operation ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_binaryOperator [15] = {
  "(not built)",
  "rightShift",
  "leftShift",
  "add",
  "addNoOverflow",
  "sub",
  "subNoOverflow",
  "operator_and",
  "operator_or",
  "operator_xor",
  "multiply_operation_no_ovf",
  "multiply_operation",
  "divide_operation",
  "divide_operation_no_ovf",
  "modulo_operation"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_binaryOperator::getter_isRightShift (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_rightShift == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_binaryOperator::getter_isLeftShift (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_leftShift == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_binaryOperator::getter_isAdd (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_add == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_binaryOperator::getter_isAddNoOverflow (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_addNoOverflow == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_binaryOperator::getter_isSub (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sub == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_binaryOperator::getter_isSubNoOverflow (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_subNoOverflow == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_binaryOperator::getter_isOperator_5F_and (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_operator_5F_and == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_binaryOperator::getter_isOperator_5F_or (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_operator_5F_or == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_binaryOperator::getter_isOperator_5F_xor (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_operator_5F_xor == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_binaryOperator::getter_isMultiply_5F_operation_5F_no_5F_ovf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_multiply_5F_operation_5F_no_5F_ovf == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_binaryOperator::getter_isMultiply_5F_operation (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_multiply_5F_operation == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_binaryOperator::getter_isDivide_5F_operation (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_divide_5F_operation == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_binaryOperator::getter_isDivide_5F_operation_5F_no_5F_ovf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_divide_5F_operation_5F_no_5F_ovf == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_binaryOperator::getter_isModulo_5F_operation (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_modulo_5F_operation == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_binaryOperator::description (C_String & ioString,
                                         const int32_t /* inIndentation */) const {
  ioString << "<enum @binaryOperator: " << gEnumNameArrayFor_binaryOperator [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_binaryOperator::objectCompare (const GALGAS_binaryOperator & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------
//
//@binaryOperator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_binaryOperator ("binaryOperator",
                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_binaryOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryOperator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_binaryOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_binaryOperator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator GALGAS_binaryOperator::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_binaryOperator result ;
  const GALGAS_binaryOperator * p = (const GALGAS_binaryOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_binaryOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binaryOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@collectionValueElementList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_collectionValueElementList : public cCollectionElement {
  public: GALGAS_collectionValueElementList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_collectionValueElementList (const GALGAS_abstractCollectionValueElement & in_mElement
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_collectionValueElementList (const GALGAS_collectionValueElementList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_collectionValueElementList::cCollectionElement_collectionValueElementList (const GALGAS_abstractCollectionValueElement & in_mElement
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_collectionValueElementList::cCollectionElement_collectionValueElementList (const GALGAS_collectionValueElementList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mElement) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_collectionValueElementList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_collectionValueElementList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_collectionValueElementList (mObject.mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_collectionValueElementList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mElement" ":" ;
  mObject.mProperty_mElement.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_collectionValueElementList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_collectionValueElementList * operand = (cCollectionElement_collectionValueElementList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_collectionValueElementList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementList::GALGAS_collectionValueElementList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementList::GALGAS_collectionValueElementList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementList GALGAS_collectionValueElementList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_collectionValueElementList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementList GALGAS_collectionValueElementList::constructor_listWithValue (const GALGAS_abstractCollectionValueElement & inOperand0
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_collectionValueElementList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_collectionValueElementList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_collectionValueElementList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_abstractCollectionValueElement & in_mElement
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_collectionValueElementList * p = NULL ;
  macroMyNew (p, cCollectionElement_collectionValueElementList (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementList::addAssign_operation (const GALGAS_abstractCollectionValueElement & inOperand0
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_collectionValueElementList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementList::setter_append (GALGAS_collectionValueElementList_2D_element inElement,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_collectionValueElementList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementList::setter_insertAtIndex (const GALGAS_abstractCollectionValueElement inOperand0,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_collectionValueElementList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementList::setter_removeAtIndex (GALGAS_abstractCollectionValueElement & outOperand0,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_collectionValueElementList * p = (cCollectionElement_collectionValueElementList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_collectionValueElementList) ;
        outOperand0 = p->mObject.mProperty_mElement ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementList::setter_popFirst (GALGAS_abstractCollectionValueElement & outOperand0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementList * p = (cCollectionElement_collectionValueElementList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_collectionValueElementList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementList::setter_popLast (GALGAS_abstractCollectionValueElement & outOperand0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementList * p = (cCollectionElement_collectionValueElementList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_collectionValueElementList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementList::method_first (GALGAS_abstractCollectionValueElement & outOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementList * p = (cCollectionElement_collectionValueElementList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_collectionValueElementList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementList::method_last (GALGAS_abstractCollectionValueElement & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementList * p = (cCollectionElement_collectionValueElementList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_collectionValueElementList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementList GALGAS_collectionValueElementList::add_operation (const GALGAS_collectionValueElementList & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_collectionValueElementList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementList GALGAS_collectionValueElementList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_collectionValueElementList result = GALGAS_collectionValueElementList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementList GALGAS_collectionValueElementList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_collectionValueElementList result = GALGAS_collectionValueElementList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementList GALGAS_collectionValueElementList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_collectionValueElementList result = GALGAS_collectionValueElementList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementList::plusAssign_operation (const GALGAS_collectionValueElementList inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementList::setter_setMElementAtIndex (GALGAS_abstractCollectionValueElement inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_collectionValueElementList * p = (cCollectionElement_collectionValueElementList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_collectionValueElementList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mElement = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractCollectionValueElement GALGAS_collectionValueElementList::getter_mElementAtIndex (const GALGAS_uint & inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementList * p = (cCollectionElement_collectionValueElementList *) attributes.ptr () ;
  GALGAS_abstractCollectionValueElement result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_collectionValueElementList) ;
    result = p->mObject.mProperty_mElement ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_collectionValueElementList::cEnumerator_collectionValueElementList (const GALGAS_collectionValueElementList & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementList_2D_element cEnumerator_collectionValueElementList::current (LOCATION_ARGS) const {
  const cCollectionElement_collectionValueElementList * p = (const cCollectionElement_collectionValueElementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_collectionValueElementList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractCollectionValueElement cEnumerator_collectionValueElementList::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_collectionValueElementList * p = (const cCollectionElement_collectionValueElementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_collectionValueElementList) ;
  return p->mObject.mProperty_mElement ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@collectionValueElementList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_collectionValueElementList ("collectionValueElementList",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_collectionValueElementList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueElementList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_collectionValueElementList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_collectionValueElementList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementList GALGAS_collectionValueElementList::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_collectionValueElementList result ;
  const GALGAS_collectionValueElementList * p = (const GALGAS_collectionValueElementList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_collectionValueElementList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("collectionValueElementList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_abstractCollectionValueElement::objectCompare (const GALGAS_abstractCollectionValueElement & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractCollectionValueElement::GALGAS_abstractCollectionValueElement (void) :
AC_GALGAS_class (false) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractCollectionValueElement::GALGAS_abstractCollectionValueElement (const cPtr_abstractCollectionValueElement * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractCollectionValueElement) ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractCollectionValueElement class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractCollectionValueElement::cPtr_abstractCollectionValueElement (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractCollectionValueElement type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractCollectionValueElement ("abstractCollectionValueElement",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractCollectionValueElement::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractCollectionValueElement ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractCollectionValueElement::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractCollectionValueElement (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractCollectionValueElement GALGAS_abstractCollectionValueElement::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_abstractCollectionValueElement result ;
  const GALGAS_abstractCollectionValueElement * p = (const GALGAS_abstractCollectionValueElement *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractCollectionValueElement *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractCollectionValueElement", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_expressionCollectionValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_expressionCollectionValue * p = (const cPtr_expressionCollectionValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_expressionCollectionValue) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressionLocation.objectCompare (p->mProperty_mExpressionLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_expressionCollectionValue::objectCompare (const GALGAS_expressionCollectionValue & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionCollectionValue::GALGAS_expressionCollectionValue (void) :
GALGAS_abstractCollectionValueElement () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionCollectionValue::GALGAS_expressionCollectionValue (const cPtr_expressionCollectionValue * inSourcePtr) :
GALGAS_abstractCollectionValueElement (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_expressionCollectionValue) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionCollectionValue GALGAS_expressionCollectionValue::constructor_new (const GALGAS_semanticExpressionAST & inAttribute_mExpression,
                                                                                    const GALGAS_location & inAttribute_mExpressionLocation
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_expressionCollectionValue result ;
  if (inAttribute_mExpression.isValid () && inAttribute_mExpressionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_expressionCollectionValue (inAttribute_mExpression, inAttribute_mExpressionLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_expressionCollectionValue::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_expressionCollectionValue * p = (const cPtr_expressionCollectionValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionCollectionValue) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_expressionCollectionValue::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_expressionCollectionValue::getter_mExpressionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_expressionCollectionValue * p = (const cPtr_expressionCollectionValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionCollectionValue) ;
    result = p->mProperty_mExpressionLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_expressionCollectionValue::getter_mExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpressionLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_expressionCollectionValue::setter_setMExpression (GALGAS_semanticExpressionAST inValue
                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_expressionCollectionValue * p = (cPtr_expressionCollectionValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionCollectionValue) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionValue::setter_setMExpression (GALGAS_semanticExpressionAST inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_expressionCollectionValue::setter_setMExpressionLocation (GALGAS_location inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_expressionCollectionValue * p = (cPtr_expressionCollectionValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionCollectionValue) ;
    p->mProperty_mExpressionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionValue::setter_setMExpressionLocation (GALGAS_location inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpressionLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @expressionCollectionValue class
//----------------------------------------------------------------------------------------------------------------------

cPtr_expressionCollectionValue::cPtr_expressionCollectionValue (const GALGAS_semanticExpressionAST & in_mExpression,
                                                                const GALGAS_location & in_mExpressionLocation
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractCollectionValueElement (THERE),
mProperty_mExpression (in_mExpression),
mProperty_mExpressionLocation (in_mExpressionLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_expressionCollectionValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionCollectionValue ;
}

void cPtr_expressionCollectionValue::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@expressionCollectionValue:" ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_expressionCollectionValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_expressionCollectionValue (mProperty_mExpression, mProperty_mExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@expressionCollectionValue type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_expressionCollectionValue ("expressionCollectionValue",
                                                  & kTypeDescriptor_GALGAS_abstractCollectionValueElement) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_expressionCollectionValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionCollectionValue ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_expressionCollectionValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expressionCollectionValue (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionCollectionValue GALGAS_expressionCollectionValue::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_expressionCollectionValue result ;
  const GALGAS_expressionCollectionValue * p = (const GALGAS_expressionCollectionValue *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_expressionCollectionValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expressionCollectionValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_expressionListCollectionValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_expressionListCollectionValue * p = (const cPtr_expressionListCollectionValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_expressionListCollectionValue) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpressionList.objectCompare (p->mProperty_mExpressionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfExpressionLocation.objectCompare (p->mProperty_mEndOfExpressionLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_expressionListCollectionValue::objectCompare (const GALGAS_expressionListCollectionValue & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionListCollectionValue::GALGAS_expressionListCollectionValue (void) :
GALGAS_abstractCollectionValueElement () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionListCollectionValue GALGAS_expressionListCollectionValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_expressionListCollectionValue::constructor_new (GALGAS_actualOutputExpressionList::constructor_emptyList (HERE),
                                                                GALGAS_location::constructor_nowhere (HERE)
                                                                COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionListCollectionValue::GALGAS_expressionListCollectionValue (const cPtr_expressionListCollectionValue * inSourcePtr) :
GALGAS_abstractCollectionValueElement (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_expressionListCollectionValue) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionListCollectionValue GALGAS_expressionListCollectionValue::constructor_new (const GALGAS_actualOutputExpressionList & inAttribute_mExpressionList,
                                                                                            const GALGAS_location & inAttribute_mEndOfExpressionLocation
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_expressionListCollectionValue result ;
  if (inAttribute_mExpressionList.isValid () && inAttribute_mEndOfExpressionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_expressionListCollectionValue (inAttribute_mExpressionList, inAttribute_mEndOfExpressionLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualOutputExpressionList GALGAS_expressionListCollectionValue::getter_mExpressionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualOutputExpressionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_expressionListCollectionValue * p = (const cPtr_expressionListCollectionValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionListCollectionValue) ;
    result = p->mProperty_mExpressionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualOutputExpressionList cPtr_expressionListCollectionValue::getter_mExpressionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpressionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_expressionListCollectionValue::getter_mEndOfExpressionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_expressionListCollectionValue * p = (const cPtr_expressionListCollectionValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionListCollectionValue) ;
    result = p->mProperty_mEndOfExpressionLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_expressionListCollectionValue::getter_mEndOfExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfExpressionLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_expressionListCollectionValue::setter_setMExpressionList (GALGAS_actualOutputExpressionList inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_expressionListCollectionValue * p = (cPtr_expressionListCollectionValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionListCollectionValue) ;
    p->mProperty_mExpressionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_expressionListCollectionValue::setter_setMExpressionList (GALGAS_actualOutputExpressionList inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpressionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_expressionListCollectionValue::setter_setMEndOfExpressionLocation (GALGAS_location inValue
                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_expressionListCollectionValue * p = (cPtr_expressionListCollectionValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionListCollectionValue) ;
    p->mProperty_mEndOfExpressionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_expressionListCollectionValue::setter_setMEndOfExpressionLocation (GALGAS_location inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfExpressionLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @expressionListCollectionValue class
//----------------------------------------------------------------------------------------------------------------------

cPtr_expressionListCollectionValue::cPtr_expressionListCollectionValue (const GALGAS_actualOutputExpressionList & in_mExpressionList,
                                                                        const GALGAS_location & in_mEndOfExpressionLocation
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractCollectionValueElement (THERE),
mProperty_mExpressionList (in_mExpressionList),
mProperty_mEndOfExpressionLocation (in_mEndOfExpressionLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_expressionListCollectionValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionListCollectionValue ;
}

void cPtr_expressionListCollectionValue::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@expressionListCollectionValue:" ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_expressionListCollectionValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_expressionListCollectionValue (mProperty_mExpressionList, mProperty_mEndOfExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@expressionListCollectionValue type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_expressionListCollectionValue ("expressionListCollectionValue",
                                                      & kTypeDescriptor_GALGAS_abstractCollectionValueElement) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_expressionListCollectionValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionListCollectionValue ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_expressionListCollectionValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expressionListCollectionValue (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionListCollectionValue GALGAS_expressionListCollectionValue::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_expressionListCollectionValue result ;
  const GALGAS_expressionListCollectionValue * p = (const GALGAS_expressionListCollectionValue *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_expressionListCollectionValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expressionListCollectionValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractCollectionValueElement enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_abstractCollectionValueElement_enterInSemanticContext> gExtensionMethodTable_abstractCollectionValueElement_enterInSemanticContext ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_enterInSemanticContext (const int32_t inClassIndex,
                                                  extensionMethodSignature_abstractCollectionValueElement_enterInSemanticContext inMethod) {
  gExtensionMethodTable_abstractCollectionValueElement_enterInSemanticContext.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_abstractCollectionValueElement_enterInSemanticContext (void) {
  gExtensionMethodTable_abstractCollectionValueElement_enterInSemanticContext.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractCollectionValueElement_enterInSemanticContext (NULL,
                                                                                  freeExtensionMethod_abstractCollectionValueElement_enterInSemanticContext) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInSemanticContext (const cPtr_abstractCollectionValueElement * inObject,
                                                 GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractCollectionValueElement) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractCollectionValueElement_enterInSemanticContext f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractCollectionValueElement_enterInSemanticContext.count ()) {
      f = gExtensionMethodTable_abstractCollectionValueElement_enterInSemanticContext (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractCollectionValueElement_enterInSemanticContext.count ()) {
          f = gExtensionMethodTable_abstractCollectionValueElement_enterInSemanticContext (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractCollectionValueElement_enterInSemanticContext.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioTypeMap, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractCollectionValueElement analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_abstractCollectionValueElement_analyze> gExtensionMethodTable_abstractCollectionValueElement_analyze ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyze (const int32_t inClassIndex,
                                   extensionMethodSignature_abstractCollectionValueElement_analyze inMethod) {
  gExtensionMethodTable_abstractCollectionValueElement_analyze.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_abstractCollectionValueElement_analyze (void) {
  gExtensionMethodTable_abstractCollectionValueElement_analyze.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractCollectionValueElement_analyze (NULL,
                                                                   freeExtensionMethod_abstractCollectionValueElement_analyze) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyze (const cPtr_abstractCollectionValueElement * inObject,
                                  const GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                  GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                  const GALGAS_analysisContext constin_inAnalysisContext,
                                  const GALGAS_unifiedTypeMap_2D_entry constin_inElementType,
                                  GALGAS_localVarManager & io_ioVariableMap,
                                  GALGAS_collectionValueElementListForGeneration & io_ioCollectionValueElementListForGeneration,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractCollectionValueElement) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractCollectionValueElement_analyze f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractCollectionValueElement_analyze.count ()) {
      f = gExtensionMethodTable_abstractCollectionValueElement_analyze (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractCollectionValueElement_analyze.count ()) {
          f = gExtensionMethodTable_abstractCollectionValueElement_analyze (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractCollectionValueElement_analyze.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inAnalysisContext, constin_inElementType, io_ioVariableMap, io_ioCollectionValueElementListForGeneration, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@collectionValueElementListForGeneration' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_collectionValueElementListForGeneration : public cCollectionElement {
  public: GALGAS_collectionValueElementListForGeneration_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_collectionValueElementListForGeneration (const GALGAS_abstractCollectionValueElementForGeneration & in_mElement
                                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_collectionValueElementListForGeneration (const GALGAS_collectionValueElementListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_collectionValueElementListForGeneration::cCollectionElement_collectionValueElementListForGeneration (const GALGAS_abstractCollectionValueElementForGeneration & in_mElement
                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_collectionValueElementListForGeneration::cCollectionElement_collectionValueElementListForGeneration (const GALGAS_collectionValueElementListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mElement) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_collectionValueElementListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_collectionValueElementListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_collectionValueElementListForGeneration (mObject.mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_collectionValueElementListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mElement" ":" ;
  mObject.mProperty_mElement.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_collectionValueElementListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_collectionValueElementListForGeneration * operand = (cCollectionElement_collectionValueElementListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_collectionValueElementListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementListForGeneration::GALGAS_collectionValueElementListForGeneration (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementListForGeneration::GALGAS_collectionValueElementListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementListForGeneration GALGAS_collectionValueElementListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_collectionValueElementListForGeneration  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementListForGeneration GALGAS_collectionValueElementListForGeneration::constructor_listWithValue (const GALGAS_abstractCollectionValueElementForGeneration & inOperand0
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_collectionValueElementListForGeneration result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_collectionValueElementListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_collectionValueElementListForGeneration::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                const GALGAS_abstractCollectionValueElementForGeneration & in_mElement
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_collectionValueElementListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_collectionValueElementListForGeneration (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementListForGeneration::addAssign_operation (const GALGAS_abstractCollectionValueElementForGeneration & inOperand0
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_collectionValueElementListForGeneration (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementListForGeneration::setter_append (GALGAS_collectionValueElementListForGeneration_2D_element inElement,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_collectionValueElementListForGeneration (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementListForGeneration::setter_insertAtIndex (const GALGAS_abstractCollectionValueElementForGeneration inOperand0,
                                                                           const GALGAS_uint inInsertionIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_collectionValueElementListForGeneration (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementListForGeneration::setter_removeAtIndex (GALGAS_abstractCollectionValueElementForGeneration & outOperand0,
                                                                           const GALGAS_uint inRemoveIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_collectionValueElementListForGeneration * p = (cCollectionElement_collectionValueElementListForGeneration *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_collectionValueElementListForGeneration) ;
        outOperand0 = p->mObject.mProperty_mElement ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementListForGeneration::setter_popFirst (GALGAS_abstractCollectionValueElementForGeneration & outOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementListForGeneration * p = (cCollectionElement_collectionValueElementListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_collectionValueElementListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementListForGeneration::setter_popLast (GALGAS_abstractCollectionValueElementForGeneration & outOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementListForGeneration * p = (cCollectionElement_collectionValueElementListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_collectionValueElementListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementListForGeneration GALGAS_collectionValueElementListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_collectionValueElementListForGeneration result = GALGAS_collectionValueElementListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementListForGeneration GALGAS_collectionValueElementListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_collectionValueElementListForGeneration result = GALGAS_collectionValueElementListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementListForGeneration GALGAS_collectionValueElementListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_collectionValueElementListForGeneration result = GALGAS_collectionValueElementListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementListForGeneration::plusAssign_operation (const GALGAS_collectionValueElementListForGeneration inOperand,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementListForGeneration::setter_setMElementAtIndex (GALGAS_abstractCollectionValueElementForGeneration inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_collectionValueElementListForGeneration * p = (cCollectionElement_collectionValueElementListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_collectionValueElementListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mElement = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractCollectionValueElementForGeneration GALGAS_collectionValueElementListForGeneration::getter_mElementAtIndex (const GALGAS_uint & inIndex,
                                                                                                                           C_Compiler * inCompiler
                                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementListForGeneration * p = (cCollectionElement_collectionValueElementListForGeneration *) attributes.ptr () ;
  GALGAS_abstractCollectionValueElementForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_collectionValueElementListForGeneration) ;
    result = p->mObject.mProperty_mElement ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_collectionValueElementListForGeneration::cEnumerator_collectionValueElementListForGeneration (const GALGAS_collectionValueElementListForGeneration & inEnumeratedObject,
                                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementListForGeneration_2D_element cEnumerator_collectionValueElementListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_collectionValueElementListForGeneration * p = (const cCollectionElement_collectionValueElementListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_collectionValueElementListForGeneration) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractCollectionValueElementForGeneration cEnumerator_collectionValueElementListForGeneration::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_collectionValueElementListForGeneration * p = (const cCollectionElement_collectionValueElementListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_collectionValueElementListForGeneration) ;
  return p->mObject.mProperty_mElement ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@collectionValueElementListForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_collectionValueElementListForGeneration ("collectionValueElementListForGeneration",
                                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_collectionValueElementListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueElementListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_collectionValueElementListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_collectionValueElementListForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_abstractCollectionValueElementForGeneration::objectCompare (const GALGAS_abstractCollectionValueElementForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractCollectionValueElementForGeneration::GALGAS_abstractCollectionValueElementForGeneration (void) :
AC_GALGAS_class (false) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractCollectionValueElementForGeneration::GALGAS_abstractCollectionValueElementForGeneration (const cPtr_abstractCollectionValueElementForGeneration * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractCollectionValueElementForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_abstractCollectionValueElementForGeneration::getter_mExpressionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractCollectionValueElementForGeneration * p = (const cPtr_abstractCollectionValueElementForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractCollectionValueElementForGeneration) ;
    result = p->mProperty_mExpressionLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_abstractCollectionValueElementForGeneration::getter_mExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpressionLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_abstractCollectionValueElementForGeneration::setter_setMExpressionLocation (GALGAS_location inValue
                                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_abstractCollectionValueElementForGeneration * p = (cPtr_abstractCollectionValueElementForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractCollectionValueElementForGeneration) ;
    p->mProperty_mExpressionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractCollectionValueElementForGeneration::setter_setMExpressionLocation (GALGAS_location inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpressionLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractCollectionValueElementForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractCollectionValueElementForGeneration::cPtr_abstractCollectionValueElementForGeneration (const GALGAS_location & in_mExpressionLocation
                                                                                                    COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_mExpressionLocation (in_mExpressionLocation) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractCollectionValueElementForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractCollectionValueElementForGeneration ("abstractCollectionValueElementForGeneration",
                                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractCollectionValueElementForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractCollectionValueElementForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractCollectionValueElementForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractCollectionValueElementForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractCollectionValueElementForGeneration GALGAS_abstractCollectionValueElementForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_abstractCollectionValueElementForGeneration result ;
  const GALGAS_abstractCollectionValueElementForGeneration * p = (const GALGAS_abstractCollectionValueElementForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractCollectionValueElementForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractCollectionValueElementForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractCollectionValueElementForGeneration generateCollectionElementCode'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_abstractCollectionValueElementForGeneration_generateCollectionElementCode> gExtensionMethodTable_abstractCollectionValueElementForGeneration_generateCollectionElementCode ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateCollectionElementCode (const int32_t inClassIndex,
                                                         extensionMethodSignature_abstractCollectionValueElementForGeneration_generateCollectionElementCode inMethod) {
  gExtensionMethodTable_abstractCollectionValueElementForGeneration_generateCollectionElementCode.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_abstractCollectionValueElementForGeneration_generateCollectionElementCode (void) {
  gExtensionMethodTable_abstractCollectionValueElementForGeneration_generateCollectionElementCode.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractCollectionValueElementForGeneration_generateCollectionElementCode (NULL,
                                                                                                      freeExtensionMethod_abstractCollectionValueElementForGeneration_generateCollectionElementCode) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCollectionElementCode (const cPtr_abstractCollectionValueElementForGeneration * inObject,
                                                        const GALGAS_unifiedTypeMap_2D_entry constin_inTargetType,
                                                        GALGAS_string & io_ioGeneratedCode,
                                                        GALGAS_stringset & io_ioInclusionSet,
                                                        GALGAS_uint & io_ioTemporaryVariableIndex,
                                                        GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                                        const GALGAS_string constin_inCppTargetVar,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractCollectionValueElementForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractCollectionValueElementForGeneration_generateCollectionElementCode f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractCollectionValueElementForGeneration_generateCollectionElementCode.count ()) {
      f = gExtensionMethodTable_abstractCollectionValueElementForGeneration_generateCollectionElementCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractCollectionValueElementForGeneration_generateCollectionElementCode.count ()) {
          f = gExtensionMethodTable_abstractCollectionValueElementForGeneration_generateCollectionElementCode (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractCollectionValueElementForGeneration_generateCollectionElementCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inTargetType, io_ioGeneratedCode, io_ioInclusionSet, io_ioTemporaryVariableIndex, io_ioUnusedVariableCppNameSet, constin_inCppTargetVar, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_expressionListCollectionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_expressionListCollectionForGeneration * p = (const cPtr_expressionListCollectionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_expressionListCollectionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpressionLocation.objectCompare (p->mProperty_mExpressionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressionList.objectCompare (p->mProperty_mExpressionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_expressionListCollectionForGeneration::objectCompare (const GALGAS_expressionListCollectionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionListCollectionForGeneration::GALGAS_expressionListCollectionForGeneration (void) :
GALGAS_abstractCollectionValueElementForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionListCollectionForGeneration GALGAS_expressionListCollectionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_expressionListCollectionForGeneration::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                        GALGAS_semanticExpressionListForGeneration::constructor_emptyList (HERE)
                                                                        COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionListCollectionForGeneration::GALGAS_expressionListCollectionForGeneration (const cPtr_expressionListCollectionForGeneration * inSourcePtr) :
GALGAS_abstractCollectionValueElementForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_expressionListCollectionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionListCollectionForGeneration GALGAS_expressionListCollectionForGeneration::constructor_new (const GALGAS_location & inAttribute_mExpressionLocation,
                                                                                                            const GALGAS_semanticExpressionListForGeneration & inAttribute_mExpressionList
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_expressionListCollectionForGeneration result ;
  if (inAttribute_mExpressionLocation.isValid () && inAttribute_mExpressionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_expressionListCollectionForGeneration (inAttribute_mExpressionLocation, inAttribute_mExpressionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration GALGAS_expressionListCollectionForGeneration::getter_mExpressionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_expressionListCollectionForGeneration * p = (const cPtr_expressionListCollectionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionListCollectionForGeneration) ;
    result = p->mProperty_mExpressionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration cPtr_expressionListCollectionForGeneration::getter_mExpressionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpressionList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_expressionListCollectionForGeneration::setter_setMExpressionList (GALGAS_semanticExpressionListForGeneration inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_expressionListCollectionForGeneration * p = (cPtr_expressionListCollectionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionListCollectionForGeneration) ;
    p->mProperty_mExpressionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_expressionListCollectionForGeneration::setter_setMExpressionList (GALGAS_semanticExpressionListForGeneration inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpressionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @expressionListCollectionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_expressionListCollectionForGeneration::cPtr_expressionListCollectionForGeneration (const GALGAS_location & in_mExpressionLocation,
                                                                                        const GALGAS_semanticExpressionListForGeneration & in_mExpressionList
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractCollectionValueElementForGeneration (in_mExpressionLocation COMMA_THERE),
mProperty_mExpressionList (in_mExpressionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_expressionListCollectionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionListCollectionForGeneration ;
}

void cPtr_expressionListCollectionForGeneration::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@expressionListCollectionForGeneration:" ;
  mProperty_mExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_expressionListCollectionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_expressionListCollectionForGeneration (mProperty_mExpressionLocation, mProperty_mExpressionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@expressionListCollectionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_expressionListCollectionForGeneration ("expressionListCollectionForGeneration",
                                                              & kTypeDescriptor_GALGAS_abstractCollectionValueElementForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_expressionListCollectionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionListCollectionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_expressionListCollectionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expressionListCollectionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionListCollectionForGeneration GALGAS_expressionListCollectionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_expressionListCollectionForGeneration result ;
  const GALGAS_expressionListCollectionForGeneration * p = (const GALGAS_expressionListCollectionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_expressionListCollectionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expressionListCollectionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_selfInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selfInExpressionAST * p = (const cPtr_selfInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selfInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfLocation.objectCompare (p->mProperty_mSelfLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_selfInExpressionAST::objectCompare (const GALGAS_selfInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfInExpressionAST::GALGAS_selfInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfInExpressionAST GALGAS_selfInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_selfInExpressionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfInExpressionAST::GALGAS_selfInExpressionAST (const cPtr_selfInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfInExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfInExpressionAST GALGAS_selfInExpressionAST::constructor_new (const GALGAS_location & inAttribute_mSelfLocation
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_selfInExpressionAST result ;
  if (inAttribute_mSelfLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selfInExpressionAST (inAttribute_mSelfLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_selfInExpressionAST::getter_mSelfLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_selfInExpressionAST * p = (const cPtr_selfInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfInExpressionAST) ;
    result = p->mProperty_mSelfLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_selfInExpressionAST::getter_mSelfLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelfLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selfInExpressionAST::setter_setMSelfLocation (GALGAS_location inValue
                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_selfInExpressionAST * p = (cPtr_selfInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfInExpressionAST) ;
    p->mProperty_mSelfLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionAST::setter_setMSelfLocation (GALGAS_location inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSelfLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @selfInExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_selfInExpressionAST::cPtr_selfInExpressionAST (const GALGAS_location & in_mSelfLocation
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mSelfLocation (in_mSelfLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selfInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfInExpressionAST ;
}

void cPtr_selfInExpressionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@selfInExpressionAST:" ;
  mProperty_mSelfLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selfInExpressionAST (mProperty_mSelfLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@selfInExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selfInExpressionAST ("selfInExpressionAST",
                                            & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfInExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfInExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfInExpressionAST GALGAS_selfInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_selfInExpressionAST result ;
  const GALGAS_selfInExpressionAST * p = (const GALGAS_selfInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selfInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_notExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_notExpressionAST * p = (const cPtr_notExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_notExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_notExpressionAST::objectCompare (const GALGAS_notExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_notExpressionAST::GALGAS_notExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_notExpressionAST::GALGAS_notExpressionAST (const cPtr_notExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_notExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_notExpressionAST GALGAS_notExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                  const GALGAS_semanticExpressionAST & inAttribute_mExpression
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_notExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_notExpressionAST (inAttribute_mOperatorLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_notExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_notExpressionAST * p = (const cPtr_notExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_notExpressionAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_notExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_notExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_notExpressionAST * p = (const cPtr_notExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_notExpressionAST) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_notExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_notExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_notExpressionAST * p = (cPtr_notExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_notExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_notExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_notExpressionAST::setter_setMExpression (GALGAS_semanticExpressionAST inValue
                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_notExpressionAST * p = (cPtr_notExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_notExpressionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_notExpressionAST::setter_setMExpression (GALGAS_semanticExpressionAST inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @notExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_notExpressionAST::cPtr_notExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                              const GALGAS_semanticExpressionAST & in_mExpression
                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_notExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notExpressionAST ;
}

void cPtr_notExpressionAST::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@notExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_notExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_notExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@notExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_notExpressionAST ("notExpressionAST",
                                         & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_notExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_notExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_notExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_notExpressionAST GALGAS_notExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_notExpressionAST result ;
  const GALGAS_notExpressionAST * p = (const GALGAS_notExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_notExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("notExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_tildeExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_tildeExpressionAST * p = (const cPtr_tildeExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_tildeExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_tildeExpressionAST::objectCompare (const GALGAS_tildeExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tildeExpressionAST::GALGAS_tildeExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tildeExpressionAST::GALGAS_tildeExpressionAST (const cPtr_tildeExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_tildeExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tildeExpressionAST GALGAS_tildeExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                      const GALGAS_semanticExpressionAST & inAttribute_mExpression
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_tildeExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_tildeExpressionAST (inAttribute_mOperatorLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_tildeExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_tildeExpressionAST * p = (const cPtr_tildeExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tildeExpressionAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_tildeExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_tildeExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_tildeExpressionAST * p = (const cPtr_tildeExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tildeExpressionAST) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_tildeExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tildeExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_tildeExpressionAST * p = (cPtr_tildeExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tildeExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tildeExpressionAST::setter_setMExpression (GALGAS_semanticExpressionAST inValue
                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_tildeExpressionAST * p = (cPtr_tildeExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tildeExpressionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionAST::setter_setMExpression (GALGAS_semanticExpressionAST inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @tildeExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_tildeExpressionAST::cPtr_tildeExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                  const GALGAS_semanticExpressionAST & in_mExpression
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_tildeExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tildeExpressionAST ;
}

void cPtr_tildeExpressionAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@tildeExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_tildeExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_tildeExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@tildeExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tildeExpressionAST ("tildeExpressionAST",
                                           & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tildeExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tildeExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tildeExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tildeExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tildeExpressionAST GALGAS_tildeExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_tildeExpressionAST result ;
  const GALGAS_tildeExpressionAST * p = (const GALGAS_tildeExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tildeExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tildeExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_unaryWrappingMinusExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_unaryWrappingMinusExpressionAST * p = (const cPtr_unaryWrappingMinusExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_unaryWrappingMinusExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_unaryWrappingMinusExpressionAST::objectCompare (const GALGAS_unaryWrappingMinusExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryWrappingMinusExpressionAST::GALGAS_unaryWrappingMinusExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryWrappingMinusExpressionAST::GALGAS_unaryWrappingMinusExpressionAST (const cPtr_unaryWrappingMinusExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unaryWrappingMinusExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryWrappingMinusExpressionAST GALGAS_unaryWrappingMinusExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                                const GALGAS_semanticExpressionAST & inAttribute_mExpression
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_unaryWrappingMinusExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_unaryWrappingMinusExpressionAST (inAttribute_mOperatorLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_unaryWrappingMinusExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_unaryWrappingMinusExpressionAST * p = (const cPtr_unaryWrappingMinusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryWrappingMinusExpressionAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_unaryWrappingMinusExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_unaryWrappingMinusExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_unaryWrappingMinusExpressionAST * p = (const cPtr_unaryWrappingMinusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryWrappingMinusExpressionAST) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_unaryWrappingMinusExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unaryWrappingMinusExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_unaryWrappingMinusExpressionAST * p = (cPtr_unaryWrappingMinusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryWrappingMinusExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unaryWrappingMinusExpressionAST::setter_setMExpression (GALGAS_semanticExpressionAST inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_unaryWrappingMinusExpressionAST * p = (cPtr_unaryWrappingMinusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryWrappingMinusExpressionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionAST::setter_setMExpression (GALGAS_semanticExpressionAST inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @unaryWrappingMinusExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_unaryWrappingMinusExpressionAST::cPtr_unaryWrappingMinusExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                                            const GALGAS_semanticExpressionAST & in_mExpression
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_unaryWrappingMinusExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST ;
}

void cPtr_unaryWrappingMinusExpressionAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@unaryWrappingMinusExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_unaryWrappingMinusExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_unaryWrappingMinusExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@unaryWrappingMinusExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST ("unaryWrappingMinusExpressionAST",
                                                        & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unaryWrappingMinusExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unaryWrappingMinusExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unaryWrappingMinusExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryWrappingMinusExpressionAST GALGAS_unaryWrappingMinusExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_unaryWrappingMinusExpressionAST result ;
  const GALGAS_unaryWrappingMinusExpressionAST * p = (const GALGAS_unaryWrappingMinusExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unaryWrappingMinusExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryWrappingMinusExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_orExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_orExpressionAST * p = (const cPtr_orExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_orExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_orExpressionAST::objectCompare (const GALGAS_orExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orExpressionAST::GALGAS_orExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orExpressionAST::GALGAS_orExpressionAST (const cPtr_orExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orExpressionAST GALGAS_orExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_orExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_orExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_orExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_orExpressionAST * p = (const cPtr_orExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpressionAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_orExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_orExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_orExpressionAST * p = (const cPtr_orExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpressionAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_orExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_orExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_orExpressionAST * p = (const cPtr_orExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpressionAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_orExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_orExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_orExpressionAST * p = (cPtr_orExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_orExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_orExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_orExpressionAST * p = (cPtr_orExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpressionAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_orExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_orExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_orExpressionAST * p = (cPtr_orExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpressionAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_orExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @orExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_orExpressionAST::cPtr_orExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                            const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                            const GALGAS_semanticExpressionAST & in_mRightExpression
                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_orExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orExpressionAST ;
}

void cPtr_orExpressionAST::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@orExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_orExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_orExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@orExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_orExpressionAST ("orExpressionAST",
                                        & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_orExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_orExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orExpressionAST GALGAS_orExpressionAST::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_orExpressionAST result ;
  const GALGAS_orExpressionAST * p = (const GALGAS_orExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_orExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_orShortExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_orShortExpressionAST * p = (const cPtr_orShortExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_orShortExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_orShortExpressionAST::objectCompare (const GALGAS_orShortExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orShortExpressionAST::GALGAS_orShortExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orShortExpressionAST::GALGAS_orShortExpressionAST (const cPtr_orShortExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orShortExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orShortExpressionAST GALGAS_orShortExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                          const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                          const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_orShortExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_orShortExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_orShortExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_orShortExpressionAST * p = (const cPtr_orShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orShortExpressionAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_orShortExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_orShortExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_orShortExpressionAST * p = (const cPtr_orShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orShortExpressionAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_orShortExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_orShortExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_orShortExpressionAST * p = (const cPtr_orShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orShortExpressionAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_orShortExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_orShortExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_orShortExpressionAST * p = (cPtr_orShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orShortExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_orShortExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_orShortExpressionAST * p = (cPtr_orShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orShortExpressionAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_orShortExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_orShortExpressionAST * p = (cPtr_orShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orShortExpressionAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @orShortExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_orShortExpressionAST::cPtr_orShortExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                      const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                      const GALGAS_semanticExpressionAST & in_mRightExpression
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_orShortExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orShortExpressionAST ;
}

void cPtr_orShortExpressionAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@orShortExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_orShortExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_orShortExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@orShortExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_orShortExpressionAST ("orShortExpressionAST",
                                             & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_orShortExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orShortExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_orShortExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orShortExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orShortExpressionAST GALGAS_orShortExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_orShortExpressionAST result ;
  const GALGAS_orShortExpressionAST * p = (const GALGAS_orShortExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_orShortExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orShortExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_xorExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_xorExpressionAST * p = (const cPtr_xorExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_xorExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_xorExpressionAST::objectCompare (const GALGAS_xorExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorExpressionAST::GALGAS_xorExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorExpressionAST::GALGAS_xorExpressionAST (const cPtr_xorExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_xorExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorExpressionAST GALGAS_xorExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                  const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                  const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_xorExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_xorExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_xorExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_xorExpressionAST * p = (const cPtr_xorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpressionAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_xorExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_xorExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_xorExpressionAST * p = (const cPtr_xorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpressionAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_xorExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_xorExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_xorExpressionAST * p = (const cPtr_xorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpressionAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_xorExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xorExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_xorExpressionAST * p = (cPtr_xorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_xorExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xorExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_xorExpressionAST * p = (cPtr_xorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpressionAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_xorExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xorExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_xorExpressionAST * p = (cPtr_xorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpressionAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_xorExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @xorExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_xorExpressionAST::cPtr_xorExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                              const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                              const GALGAS_semanticExpressionAST & in_mRightExpression
                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_xorExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorExpressionAST ;
}

void cPtr_xorExpressionAST::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@xorExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_xorExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_xorExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@xorExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_xorExpressionAST ("xorExpressionAST",
                                         & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_xorExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_xorExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_xorExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorExpressionAST GALGAS_xorExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_xorExpressionAST result ;
  const GALGAS_xorExpressionAST * p = (const GALGAS_xorExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_xorExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xorExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_closedSliceExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_closedSliceExpressionAST * p = (const cPtr_closedSliceExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_closedSliceExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_closedSliceExpressionAST::objectCompare (const GALGAS_closedSliceExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_closedSliceExpressionAST::GALGAS_closedSliceExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_closedSliceExpressionAST::GALGAS_closedSliceExpressionAST (const cPtr_closedSliceExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_closedSliceExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_closedSliceExpressionAST GALGAS_closedSliceExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                  const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                                  const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_closedSliceExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_closedSliceExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_closedSliceExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_closedSliceExpressionAST * p = (const cPtr_closedSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_closedSliceExpressionAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_closedSliceExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_closedSliceExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_closedSliceExpressionAST * p = (const cPtr_closedSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_closedSliceExpressionAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_closedSliceExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_closedSliceExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_closedSliceExpressionAST * p = (const cPtr_closedSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_closedSliceExpressionAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_closedSliceExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_closedSliceExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_closedSliceExpressionAST * p = (cPtr_closedSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_closedSliceExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_closedSliceExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_closedSliceExpressionAST * p = (cPtr_closedSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_closedSliceExpressionAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_closedSliceExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_closedSliceExpressionAST * p = (cPtr_closedSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_closedSliceExpressionAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @closedSliceExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_closedSliceExpressionAST::cPtr_closedSliceExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                              const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                              const GALGAS_semanticExpressionAST & in_mRightExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_closedSliceExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_closedSliceExpressionAST ;
}

void cPtr_closedSliceExpressionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@closedSliceExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_closedSliceExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_closedSliceExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@closedSliceExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_closedSliceExpressionAST ("closedSliceExpressionAST",
                                                 & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_closedSliceExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_closedSliceExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_closedSliceExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_closedSliceExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_closedSliceExpressionAST GALGAS_closedSliceExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_closedSliceExpressionAST result ;
  const GALGAS_closedSliceExpressionAST * p = (const GALGAS_closedSliceExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_closedSliceExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("closedSliceExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_openedSliceExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_openedSliceExpressionAST * p = (const cPtr_openedSliceExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_openedSliceExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_openedSliceExpressionAST::objectCompare (const GALGAS_openedSliceExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_openedSliceExpressionAST::GALGAS_openedSliceExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_openedSliceExpressionAST::GALGAS_openedSliceExpressionAST (const cPtr_openedSliceExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_openedSliceExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_openedSliceExpressionAST GALGAS_openedSliceExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                  const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                                  const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_openedSliceExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_openedSliceExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_openedSliceExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_openedSliceExpressionAST * p = (const cPtr_openedSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_openedSliceExpressionAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_openedSliceExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_openedSliceExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_openedSliceExpressionAST * p = (const cPtr_openedSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_openedSliceExpressionAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_openedSliceExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_openedSliceExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_openedSliceExpressionAST * p = (const cPtr_openedSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_openedSliceExpressionAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_openedSliceExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_openedSliceExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_openedSliceExpressionAST * p = (cPtr_openedSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_openedSliceExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_openedSliceExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_openedSliceExpressionAST * p = (cPtr_openedSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_openedSliceExpressionAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_openedSliceExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_openedSliceExpressionAST * p = (cPtr_openedSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_openedSliceExpressionAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @openedSliceExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_openedSliceExpressionAST::cPtr_openedSliceExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                              const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                              const GALGAS_semanticExpressionAST & in_mRightExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_openedSliceExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_openedSliceExpressionAST ;
}

void cPtr_openedSliceExpressionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@openedSliceExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_openedSliceExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_openedSliceExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@openedSliceExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_openedSliceExpressionAST ("openedSliceExpressionAST",
                                                 & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_openedSliceExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_openedSliceExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_openedSliceExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_openedSliceExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_openedSliceExpressionAST GALGAS_openedSliceExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_openedSliceExpressionAST result ;
  const GALGAS_openedSliceExpressionAST * p = (const GALGAS_openedSliceExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_openedSliceExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("openedSliceExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_andShortExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_andShortExpressionAST * p = (const cPtr_andShortExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_andShortExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_andShortExpressionAST::objectCompare (const GALGAS_andShortExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionAST::GALGAS_andShortExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionAST::GALGAS_andShortExpressionAST (const cPtr_andShortExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andShortExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionAST GALGAS_andShortExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                            const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                            const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_andShortExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_andShortExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_andShortExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_andShortExpressionAST * p = (const cPtr_andShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_andShortExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_andShortExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_andShortExpressionAST * p = (const cPtr_andShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_andShortExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_andShortExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_andShortExpressionAST * p = (const cPtr_andShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_andShortExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_andShortExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_andShortExpressionAST * p = (cPtr_andShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_andShortExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_andShortExpressionAST * p = (cPtr_andShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_andShortExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_andShortExpressionAST * p = (cPtr_andShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @andShortExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_andShortExpressionAST::cPtr_andShortExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                        const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                        const GALGAS_semanticExpressionAST & in_mRightExpression
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_andShortExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andShortExpressionAST ;
}

void cPtr_andShortExpressionAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@andShortExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_andShortExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_andShortExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@andShortExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_andShortExpressionAST ("andShortExpressionAST",
                                              & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_andShortExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andShortExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_andShortExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andShortExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionAST GALGAS_andShortExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_andShortExpressionAST result ;
  const GALGAS_andShortExpressionAST * p = (const GALGAS_andShortExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_andShortExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andShortExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_andExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_andExpressionAST * p = (const cPtr_andExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_andExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_andExpressionAST::objectCompare (const GALGAS_andExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andExpressionAST::GALGAS_andExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andExpressionAST::GALGAS_andExpressionAST (const cPtr_andExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andExpressionAST GALGAS_andExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                  const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                  const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_andExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_andExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_andExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_andExpressionAST * p = (const cPtr_andExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpressionAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_andExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_andExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_andExpressionAST * p = (const cPtr_andExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpressionAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_andExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_andExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_andExpressionAST * p = (const cPtr_andExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpressionAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_andExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_andExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_andExpressionAST * p = (cPtr_andExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_andExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_andExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_andExpressionAST * p = (cPtr_andExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpressionAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_andExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_andExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_andExpressionAST * p = (cPtr_andExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpressionAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_andExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @andExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_andExpressionAST::cPtr_andExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                              const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                              const GALGAS_semanticExpressionAST & in_mRightExpression
                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_andExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andExpressionAST ;
}

void cPtr_andExpressionAST::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@andExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_andExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_andExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@andExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_andExpressionAST ("andExpressionAST",
                                         & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_andExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_andExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andExpressionAST GALGAS_andExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_andExpressionAST result ;
  const GALGAS_andExpressionAST * p = (const GALGAS_andExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_andExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_multiplicationExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_multiplicationExpressionAST * p = (const cPtr_multiplicationExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_multiplicationExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_multiplicationExpressionAST::objectCompare (const GALGAS_multiplicationExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multiplicationExpressionAST::GALGAS_multiplicationExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multiplicationExpressionAST::GALGAS_multiplicationExpressionAST (const cPtr_multiplicationExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_multiplicationExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multiplicationExpressionAST GALGAS_multiplicationExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                        const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                                        const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_multiplicationExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_multiplicationExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_multiplicationExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_multiplicationExpressionAST * p = (const cPtr_multiplicationExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_multiplicationExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_multiplicationExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_multiplicationExpressionAST * p = (const cPtr_multiplicationExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_multiplicationExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_multiplicationExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_multiplicationExpressionAST * p = (const cPtr_multiplicationExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_multiplicationExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_multiplicationExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_multiplicationExpressionAST * p = (cPtr_multiplicationExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_multiplicationExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_multiplicationExpressionAST * p = (cPtr_multiplicationExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_multiplicationExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_multiplicationExpressionAST * p = (cPtr_multiplicationExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @multiplicationExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_multiplicationExpressionAST::cPtr_multiplicationExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                                    const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                                    const GALGAS_semanticExpressionAST & in_mRightExpression
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_multiplicationExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multiplicationExpressionAST ;
}

void cPtr_multiplicationExpressionAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@multiplicationExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_multiplicationExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_multiplicationExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@multiplicationExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_multiplicationExpressionAST ("multiplicationExpressionAST",
                                                    & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_multiplicationExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multiplicationExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_multiplicationExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multiplicationExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multiplicationExpressionAST GALGAS_multiplicationExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_multiplicationExpressionAST result ;
  const GALGAS_multiplicationExpressionAST * p = (const GALGAS_multiplicationExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_multiplicationExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multiplicationExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_multiplicationExpressionNoOverflowAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_multiplicationExpressionNoOverflowAST * p = (const cPtr_multiplicationExpressionNoOverflowAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_multiplicationExpressionNoOverflowAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_multiplicationExpressionNoOverflowAST::objectCompare (const GALGAS_multiplicationExpressionNoOverflowAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multiplicationExpressionNoOverflowAST::GALGAS_multiplicationExpressionNoOverflowAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multiplicationExpressionNoOverflowAST::GALGAS_multiplicationExpressionNoOverflowAST (const cPtr_multiplicationExpressionNoOverflowAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_multiplicationExpressionNoOverflowAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multiplicationExpressionNoOverflowAST GALGAS_multiplicationExpressionNoOverflowAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                                            const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                                                            const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_multiplicationExpressionNoOverflowAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_multiplicationExpressionNoOverflowAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_multiplicationExpressionNoOverflowAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_multiplicationExpressionNoOverflowAST * p = (const cPtr_multiplicationExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionNoOverflowAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_multiplicationExpressionNoOverflowAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_multiplicationExpressionNoOverflowAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_multiplicationExpressionNoOverflowAST * p = (const cPtr_multiplicationExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionNoOverflowAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_multiplicationExpressionNoOverflowAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_multiplicationExpressionNoOverflowAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_multiplicationExpressionNoOverflowAST * p = (const cPtr_multiplicationExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionNoOverflowAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_multiplicationExpressionNoOverflowAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_multiplicationExpressionNoOverflowAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_multiplicationExpressionNoOverflowAST * p = (cPtr_multiplicationExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionNoOverflowAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionNoOverflowAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_multiplicationExpressionNoOverflowAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_multiplicationExpressionNoOverflowAST * p = (cPtr_multiplicationExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionNoOverflowAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionNoOverflowAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_multiplicationExpressionNoOverflowAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_multiplicationExpressionNoOverflowAST * p = (cPtr_multiplicationExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionNoOverflowAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionNoOverflowAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @multiplicationExpressionNoOverflowAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_multiplicationExpressionNoOverflowAST::cPtr_multiplicationExpressionNoOverflowAST (const GALGAS_location & in_mOperatorLocation,
                                                                                        const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                                                        const GALGAS_semanticExpressionAST & in_mRightExpression
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_multiplicationExpressionNoOverflowAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST ;
}

void cPtr_multiplicationExpressionNoOverflowAST::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@multiplicationExpressionNoOverflowAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_multiplicationExpressionNoOverflowAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_multiplicationExpressionNoOverflowAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@multiplicationExpressionNoOverflowAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST ("multiplicationExpressionNoOverflowAST",
                                                              & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_multiplicationExpressionNoOverflowAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_multiplicationExpressionNoOverflowAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multiplicationExpressionNoOverflowAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multiplicationExpressionNoOverflowAST GALGAS_multiplicationExpressionNoOverflowAST::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_multiplicationExpressionNoOverflowAST result ;
  const GALGAS_multiplicationExpressionNoOverflowAST * p = (const GALGAS_multiplicationExpressionNoOverflowAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_multiplicationExpressionNoOverflowAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multiplicationExpressionNoOverflowAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_divisionExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_divisionExpressionAST * p = (const cPtr_divisionExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_divisionExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_divisionExpressionAST::objectCompare (const GALGAS_divisionExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_divisionExpressionAST::GALGAS_divisionExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_divisionExpressionAST::GALGAS_divisionExpressionAST (const cPtr_divisionExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_divisionExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_divisionExpressionAST GALGAS_divisionExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                            const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                            const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_divisionExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_divisionExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_divisionExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_divisionExpressionAST * p = (const cPtr_divisionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_divisionExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_divisionExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_divisionExpressionAST * p = (const cPtr_divisionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_divisionExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_divisionExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_divisionExpressionAST * p = (const cPtr_divisionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_divisionExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_divisionExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_divisionExpressionAST * p = (cPtr_divisionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_divisionExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_divisionExpressionAST * p = (cPtr_divisionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_divisionExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_divisionExpressionAST * p = (cPtr_divisionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @divisionExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_divisionExpressionAST::cPtr_divisionExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                        const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                        const GALGAS_semanticExpressionAST & in_mRightExpression
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_divisionExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divisionExpressionAST ;
}

void cPtr_divisionExpressionAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@divisionExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_divisionExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_divisionExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@divisionExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_divisionExpressionAST ("divisionExpressionAST",
                                              & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_divisionExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divisionExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_divisionExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_divisionExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_divisionExpressionAST GALGAS_divisionExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_divisionExpressionAST result ;
  const GALGAS_divisionExpressionAST * p = (const GALGAS_divisionExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_divisionExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("divisionExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_divisionExpressionNoOverflowAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_divisionExpressionNoOverflowAST * p = (const cPtr_divisionExpressionNoOverflowAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_divisionExpressionNoOverflowAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_divisionExpressionNoOverflowAST::objectCompare (const GALGAS_divisionExpressionNoOverflowAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_divisionExpressionNoOverflowAST::GALGAS_divisionExpressionNoOverflowAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_divisionExpressionNoOverflowAST::GALGAS_divisionExpressionNoOverflowAST (const cPtr_divisionExpressionNoOverflowAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_divisionExpressionNoOverflowAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_divisionExpressionNoOverflowAST GALGAS_divisionExpressionNoOverflowAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                                const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                                                const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_divisionExpressionNoOverflowAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_divisionExpressionNoOverflowAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_divisionExpressionNoOverflowAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_divisionExpressionNoOverflowAST * p = (const cPtr_divisionExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionNoOverflowAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_divisionExpressionNoOverflowAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_divisionExpressionNoOverflowAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_divisionExpressionNoOverflowAST * p = (const cPtr_divisionExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionNoOverflowAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_divisionExpressionNoOverflowAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_divisionExpressionNoOverflowAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_divisionExpressionNoOverflowAST * p = (const cPtr_divisionExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionNoOverflowAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_divisionExpressionNoOverflowAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_divisionExpressionNoOverflowAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_divisionExpressionNoOverflowAST * p = (cPtr_divisionExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionNoOverflowAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionNoOverflowAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_divisionExpressionNoOverflowAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_divisionExpressionNoOverflowAST * p = (cPtr_divisionExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionNoOverflowAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionNoOverflowAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_divisionExpressionNoOverflowAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_divisionExpressionNoOverflowAST * p = (cPtr_divisionExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionNoOverflowAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionNoOverflowAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @divisionExpressionNoOverflowAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_divisionExpressionNoOverflowAST::cPtr_divisionExpressionNoOverflowAST (const GALGAS_location & in_mOperatorLocation,
                                                                            const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                                            const GALGAS_semanticExpressionAST & in_mRightExpression
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_divisionExpressionNoOverflowAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST ;
}

void cPtr_divisionExpressionNoOverflowAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@divisionExpressionNoOverflowAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_divisionExpressionNoOverflowAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_divisionExpressionNoOverflowAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@divisionExpressionNoOverflowAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST ("divisionExpressionNoOverflowAST",
                                                        & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_divisionExpressionNoOverflowAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_divisionExpressionNoOverflowAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_divisionExpressionNoOverflowAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_divisionExpressionNoOverflowAST GALGAS_divisionExpressionNoOverflowAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_divisionExpressionNoOverflowAST result ;
  const GALGAS_divisionExpressionNoOverflowAST * p = (const GALGAS_divisionExpressionNoOverflowAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_divisionExpressionNoOverflowAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("divisionExpressionNoOverflowAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_moduloExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_moduloExpressionAST * p = (const cPtr_moduloExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_moduloExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_moduloExpressionAST::objectCompare (const GALGAS_moduloExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_moduloExpressionAST::GALGAS_moduloExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_moduloExpressionAST::GALGAS_moduloExpressionAST (const cPtr_moduloExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_moduloExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_moduloExpressionAST GALGAS_moduloExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                        const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                        const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_moduloExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_moduloExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_moduloExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_moduloExpressionAST * p = (const cPtr_moduloExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_moduloExpressionAST) ;
    result = p->mProperty_mOperatorLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_moduloExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperatorLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_moduloExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_moduloExpressionAST * p = (const cPtr_moduloExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_moduloExpressionAST) ;
    result = p->mProperty_mLeftExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_moduloExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_moduloExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_moduloExpressionAST * p = (const cPtr_moduloExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_moduloExpressionAST) ;
    result = p->mProperty_mRightExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_moduloExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_moduloExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_moduloExpressionAST * p = (cPtr_moduloExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_moduloExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_moduloExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperatorLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_moduloExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_moduloExpressionAST * p = (cPtr_moduloExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_moduloExpressionAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_moduloExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_moduloExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_moduloExpressionAST * p = (cPtr_moduloExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_moduloExpressionAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_moduloExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @moduloExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_moduloExpressionAST::cPtr_moduloExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                    const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                    const GALGAS_semanticExpressionAST & in_mRightExpression
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_moduloExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduloExpressionAST ;
}

void cPtr_moduloExpressionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@moduloExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_moduloExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_moduloExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@moduloExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_moduloExpressionAST ("moduloExpressionAST",
                                            & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_moduloExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduloExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_moduloExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_moduloExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_moduloExpressionAST GALGAS_moduloExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_moduloExpressionAST result ;
  const GALGAS_moduloExpressionAST * p = (const GALGAS_moduloExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_moduloExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("moduloExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_semanticExpressionAST_analyzeSemanticExpression> gExtensionMethodTable_semanticExpressionAST_analyzeSemanticExpression ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeSemanticExpression (const int32_t inClassIndex,
                                                     extensionMethodSignature_semanticExpressionAST_analyzeSemanticExpression inMethod) {
  gExtensionMethodTable_semanticExpressionAST_analyzeSemanticExpression.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_semanticExpressionAST_analyzeSemanticExpression (void) {
  gExtensionMethodTable_semanticExpressionAST_analyzeSemanticExpression.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_semanticExpressionAST_analyzeSemanticExpression (NULL,
                                                                            freeExtensionMethod_semanticExpressionAST_analyzeSemanticExpression) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                    const GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                                    GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                    const GALGAS_unifiedTypeMap_2D_entry constin_inType,
                                                    const GALGAS_analysisContext constin_inAnalysisContext,
                                                    GALGAS_localVarManager & io_ioVariableMap,
                                                    GALGAS_semanticExpressionForGeneration & out_outExpression,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outExpression.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticExpressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_semanticExpressionAST_analyzeSemanticExpression f = NULL ;
    if (classIndex < gExtensionMethodTable_semanticExpressionAST_analyzeSemanticExpression.count ()) {
      f = gExtensionMethodTable_semanticExpressionAST_analyzeSemanticExpression (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_semanticExpressionAST_analyzeSemanticExpression.count ()) {
          f = gExtensionMethodTable_semanticExpressionAST_analyzeSemanticExpression (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_semanticExpressionAST_analyzeSemanticExpression.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inType, constin_inAnalysisContext, io_ioVariableMap, out_outExpression, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@castInstructionBranchListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_castInstructionBranchListAST : public cCollectionElement {
  public: GALGAS_castInstructionBranchListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_castInstructionBranchListAST (const GALGAS_lstring & in_mTypeName,
                                                           const GALGAS_lstring & in_mConstantVarName,
                                                           const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                           const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                           const GALGAS_location & in_mEndOfInstructions
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_castInstructionBranchListAST (const GALGAS_castInstructionBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_castInstructionBranchListAST::cCollectionElement_castInstructionBranchListAST (const GALGAS_lstring & in_mTypeName,
                                                                                                  const GALGAS_lstring & in_mConstantVarName,
                                                                                                  const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                                                                  const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                                  const GALGAS_location & in_mEndOfInstructions
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeName, in_mConstantVarName, in_mInstructionList, in_mTypeComparisonKind, in_mEndOfInstructions) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_castInstructionBranchListAST::cCollectionElement_castInstructionBranchListAST (const GALGAS_castInstructionBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTypeName, inElement.mProperty_mConstantVarName, inElement.mProperty_mInstructionList, inElement.mProperty_mTypeComparisonKind, inElement.mProperty_mEndOfInstructions) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_castInstructionBranchListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_castInstructionBranchListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_castInstructionBranchListAST (mObject.mProperty_mTypeName, mObject.mProperty_mConstantVarName, mObject.mProperty_mInstructionList, mObject.mProperty_mTypeComparisonKind, mObject.mProperty_mEndOfInstructions COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_castInstructionBranchListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeName" ":" ;
  mObject.mProperty_mTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstantVarName" ":" ;
  mObject.mProperty_mConstantVarName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeComparisonKind" ":" ;
  mObject.mProperty_mTypeComparisonKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfInstructions" ":" ;
  mObject.mProperty_mEndOfInstructions.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_castInstructionBranchListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_castInstructionBranchListAST * operand = (cCollectionElement_castInstructionBranchListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_castInstructionBranchListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST::GALGAS_castInstructionBranchListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST::GALGAS_castInstructionBranchListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_castInstructionBranchListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1,
                                                                                                    const GALGAS_semanticInstructionListAST & inOperand2,
                                                                                                    const GALGAS_dynamicTypeComparisonKind & inOperand3,
                                                                                                    const GALGAS_location & inOperand4
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_castInstructionBranchListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_castInstructionBranchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                               const GALGAS_lstring & inOperand1,
                                                               const GALGAS_semanticInstructionListAST & inOperand2,
                                                               const GALGAS_dynamicTypeComparisonKind & inOperand3,
                                                               const GALGAS_location & inOperand4
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_castInstructionBranchListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::setter_append (GALGAS_castInstructionBranchListAST_2D_element inElement,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_castInstructionBranchListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                const GALGAS_lstring inOperand1,
                                                                const GALGAS_semanticInstructionListAST inOperand2,
                                                                const GALGAS_dynamicTypeComparisonKind inOperand3,
                                                                const GALGAS_location inOperand4,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_castInstructionBranchListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                GALGAS_lstring & outOperand1,
                                                                GALGAS_semanticInstructionListAST & outOperand2,
                                                                GALGAS_dynamicTypeComparisonKind & outOperand3,
                                                                GALGAS_location & outOperand4,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
        outOperand0 = p->mObject.mProperty_mTypeName ;
        outOperand1 = p->mObject.mProperty_mConstantVarName ;
        outOperand2 = p->mObject.mProperty_mInstructionList ;
        outOperand3 = p->mObject.mProperty_mTypeComparisonKind ;
        outOperand4 = p->mObject.mProperty_mEndOfInstructions ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::setter_popFirst (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mConstantVarName ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand4 = p->mObject.mProperty_mEndOfInstructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::setter_popLast (GALGAS_lstring & outOperand0,
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
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mConstantVarName ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand4 = p->mObject.mProperty_mEndOfInstructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mConstantVarName ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand4 = p->mObject.mProperty_mEndOfInstructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mConstantVarName ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand4 = p->mObject.mProperty_mEndOfInstructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListAST result = GALGAS_castInstructionBranchListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListAST result = GALGAS_castInstructionBranchListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListAST result = GALGAS_castInstructionBranchListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::plusAssign_operation (const GALGAS_castInstructionBranchListAST inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::setter_setMTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_castInstructionBranchListAST::getter_mTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    result = p->mObject.mProperty_mTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::setter_setMConstantVarNameAtIndex (GALGAS_lstring inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mConstantVarName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_castInstructionBranchListAST::getter_mConstantVarNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    result = p->mObject.mProperty_mConstantVarName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::setter_setMInstructionListAtIndex (GALGAS_semanticInstructionListAST inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_castInstructionBranchListAST::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_semanticInstructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::setter_setMTypeComparisonKindAtIndex (GALGAS_dynamicTypeComparisonKind inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTypeComparisonKind = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicTypeComparisonKind GALGAS_castInstructionBranchListAST::getter_mTypeComparisonKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_dynamicTypeComparisonKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    result = p->mObject.mProperty_mTypeComparisonKind ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::setter_setMEndOfInstructionsAtIndex (GALGAS_location inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfInstructions = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_castInstructionBranchListAST::getter_mEndOfInstructionsAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    result = p->mObject.mProperty_mEndOfInstructions ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_castInstructionBranchListAST::cEnumerator_castInstructionBranchListAST (const GALGAS_castInstructionBranchListAST & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST_2D_element cEnumerator_castInstructionBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_castInstructionBranchListAST::current_mTypeName (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mProperty_mTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_castInstructionBranchListAST::current_mConstantVarName (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mProperty_mConstantVarName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST cEnumerator_castInstructionBranchListAST::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mProperty_mInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicTypeComparisonKind cEnumerator_castInstructionBranchListAST::current_mTypeComparisonKind (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mProperty_mTypeComparisonKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_castInstructionBranchListAST::current_mEndOfInstructions (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mProperty_mEndOfInstructions ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@castInstructionBranchListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_castInstructionBranchListAST ("castInstructionBranchListAST",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_castInstructionBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInstructionBranchListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_castInstructionBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_castInstructionBranchListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_structuredCastInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structuredCastInstructionAST * p = (const cPtr_structuredCastInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCastExpression.objectCompare (p->mProperty_mCastExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCastInstructionBranchList.objectCompare (p->mProperty_mCastInstructionBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseInstructionList.objectCompare (p->mProperty_mElseInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfCastInstruction.objectCompare (p->mProperty_mEndOfCastInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_structuredCastInstructionAST::objectCompare (const GALGAS_structuredCastInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionAST::GALGAS_structuredCastInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionAST::GALGAS_structuredCastInstructionAST (const cPtr_structuredCastInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structuredCastInstructionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionAST GALGAS_structuredCastInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                          const GALGAS_semanticExpressionAST & inAttribute_mCastExpression,
                                                                                          const GALGAS_castInstructionBranchListAST & inAttribute_mCastInstructionBranchList,
                                                                                          const GALGAS_semanticInstructionListAST & inAttribute_mElseInstructionList,
                                                                                          const GALGAS_location & inAttribute_mEndOfCastInstruction
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_structuredCastInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mCastExpression.isValid () && inAttribute_mCastInstructionBranchList.isValid () && inAttribute_mElseInstructionList.isValid () && inAttribute_mEndOfCastInstruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structuredCastInstructionAST (inAttribute_mInstructionLocation, inAttribute_mCastExpression, inAttribute_mCastInstructionBranchList, inAttribute_mElseInstructionList, inAttribute_mEndOfCastInstruction COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_structuredCastInstructionAST::getter_mCastExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_structuredCastInstructionAST * p = (const cPtr_structuredCastInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
    result = p->mProperty_mCastExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_structuredCastInstructionAST::getter_mCastExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCastExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST GALGAS_structuredCastInstructionAST::getter_mCastInstructionBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_structuredCastInstructionAST * p = (const cPtr_structuredCastInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
    result = p->mProperty_mCastInstructionBranchList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST cPtr_structuredCastInstructionAST::getter_mCastInstructionBranchList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCastInstructionBranchList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_structuredCastInstructionAST::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_structuredCastInstructionAST * p = (const cPtr_structuredCastInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
    result = p->mProperty_mElseInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST cPtr_structuredCastInstructionAST::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElseInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_structuredCastInstructionAST::getter_mEndOfCastInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_structuredCastInstructionAST * p = (const cPtr_structuredCastInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
    result = p->mProperty_mEndOfCastInstruction ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_structuredCastInstructionAST::getter_mEndOfCastInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfCastInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structuredCastInstructionAST::setter_setMCastExpression (GALGAS_semanticExpressionAST inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_structuredCastInstructionAST * p = (cPtr_structuredCastInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
    p->mProperty_mCastExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_structuredCastInstructionAST::setter_setMCastExpression (GALGAS_semanticExpressionAST inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mCastExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structuredCastInstructionAST::setter_setMCastInstructionBranchList (GALGAS_castInstructionBranchListAST inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_structuredCastInstructionAST * p = (cPtr_structuredCastInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
    p->mProperty_mCastInstructionBranchList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_structuredCastInstructionAST::setter_setMCastInstructionBranchList (GALGAS_castInstructionBranchListAST inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mCastInstructionBranchList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structuredCastInstructionAST::setter_setMElseInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_structuredCastInstructionAST * p = (cPtr_structuredCastInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
    p->mProperty_mElseInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_structuredCastInstructionAST::setter_setMElseInstructionList (GALGAS_semanticInstructionListAST inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mElseInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structuredCastInstructionAST::setter_setMEndOfCastInstruction (GALGAS_location inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_structuredCastInstructionAST * p = (cPtr_structuredCastInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
    p->mProperty_mEndOfCastInstruction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_structuredCastInstructionAST::setter_setMEndOfCastInstruction (GALGAS_location inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfCastInstruction = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @structuredCastInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_structuredCastInstructionAST::cPtr_structuredCastInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_semanticExpressionAST & in_mCastExpression,
                                                                      const GALGAS_castInstructionBranchListAST & in_mCastInstructionBranchList,
                                                                      const GALGAS_semanticInstructionListAST & in_mElseInstructionList,
                                                                      const GALGAS_location & in_mEndOfCastInstruction
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mCastExpression (in_mCastExpression),
mProperty_mCastInstructionBranchList (in_mCastInstructionBranchList),
mProperty_mElseInstructionList (in_mElseInstructionList),
mProperty_mEndOfCastInstruction (in_mEndOfCastInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_structuredCastInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structuredCastInstructionAST ;
}

void cPtr_structuredCastInstructionAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@structuredCastInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCastExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCastInstructionBranchList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfCastInstruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_structuredCastInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structuredCastInstructionAST (mProperty_mInstructionLocation, mProperty_mCastExpression, mProperty_mCastInstructionBranchList, mProperty_mElseInstructionList, mProperty_mEndOfCastInstruction COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@structuredCastInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structuredCastInstructionAST ("structuredCastInstructionAST",
                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structuredCastInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structuredCastInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structuredCastInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structuredCastInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionAST GALGAS_structuredCastInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_structuredCastInstructionAST result ;
  const GALGAS_structuredCastInstructionAST * p = (const GALGAS_structuredCastInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structuredCastInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structuredCastInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@castInstructionBranchListForGeneration' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_castInstructionBranchListForGeneration : public cCollectionElement {
  public: GALGAS_castInstructionBranchListForGeneration_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_castInstructionBranchListForGeneration (const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                     const GALGAS_unifiedTypeMap_2D_entry & in_mType,
                                                                     const GALGAS_string & in_mCastedVarCppName,
                                                                     const GALGAS_semanticInstructionListForGeneration & in_mInstructionList
                                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_castInstructionBranchListForGeneration (const GALGAS_castInstructionBranchListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_castInstructionBranchListForGeneration::cCollectionElement_castInstructionBranchListForGeneration (const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                                                      const GALGAS_unifiedTypeMap_2D_entry & in_mType,
                                                                                                                      const GALGAS_string & in_mCastedVarCppName,
                                                                                                                      const GALGAS_semanticInstructionListForGeneration & in_mInstructionList
                                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeComparisonKind, in_mType, in_mCastedVarCppName, in_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_castInstructionBranchListForGeneration::cCollectionElement_castInstructionBranchListForGeneration (const GALGAS_castInstructionBranchListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTypeComparisonKind, inElement.mProperty_mType, inElement.mProperty_mCastedVarCppName, inElement.mProperty_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_castInstructionBranchListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_castInstructionBranchListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_castInstructionBranchListForGeneration (mObject.mProperty_mTypeComparisonKind, mObject.mProperty_mType, mObject.mProperty_mCastedVarCppName, mObject.mProperty_mInstructionList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_castInstructionBranchListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeComparisonKind" ":" ;
  mObject.mProperty_mTypeComparisonKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCastedVarCppName" ":" ;
  mObject.mProperty_mCastedVarCppName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_castInstructionBranchListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_castInstructionBranchListForGeneration * operand = (cCollectionElement_castInstructionBranchListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_castInstructionBranchListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration::GALGAS_castInstructionBranchListForGeneration (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration::GALGAS_castInstructionBranchListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_castInstructionBranchListForGeneration  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::constructor_listWithValue (const GALGAS_dynamicTypeComparisonKind & inOperand0,
                                                                                                                        const GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                                                                        const GALGAS_string & inOperand2,
                                                                                                                        const GALGAS_semanticInstructionListForGeneration & inOperand3
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_castInstructionBranchListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_castInstructionBranchListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                               const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                               const GALGAS_unifiedTypeMap_2D_entry & in_mType,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::addAssign_operation (const GALGAS_dynamicTypeComparisonKind & inOperand0,
                                                                         const GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                         const GALGAS_string & inOperand2,
                                                                         const GALGAS_semanticInstructionListForGeneration & inOperand3
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_castInstructionBranchListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::setter_append (GALGAS_castInstructionBranchListForGeneration_2D_element inElement,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_castInstructionBranchListForGeneration (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::setter_insertAtIndex (const GALGAS_dynamicTypeComparisonKind inOperand0,
                                                                          const GALGAS_unifiedTypeMap_2D_entry inOperand1,
                                                                          const GALGAS_string inOperand2,
                                                                          const GALGAS_semanticInstructionListForGeneration inOperand3,
                                                                          const GALGAS_uint inInsertionIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_castInstructionBranchListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::setter_removeAtIndex (GALGAS_dynamicTypeComparisonKind & outOperand0,
                                                                          GALGAS_unifiedTypeMap_2D_entry & outOperand1,
                                                                          GALGAS_string & outOperand2,
                                                                          GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                                          const GALGAS_uint inRemoveIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
        outOperand0 = p->mObject.mProperty_mTypeComparisonKind ;
        outOperand1 = p->mObject.mProperty_mType ;
        outOperand2 = p->mObject.mProperty_mCastedVarCppName ;
        outOperand3 = p->mObject.mProperty_mInstructionList ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::setter_popFirst (GALGAS_dynamicTypeComparisonKind & outOperand0,
                                                                     GALGAS_unifiedTypeMap_2D_entry & outOperand1,
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
    outOperand0 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mCastedVarCppName ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::setter_popLast (GALGAS_dynamicTypeComparisonKind & outOperand0,
                                                                    GALGAS_unifiedTypeMap_2D_entry & outOperand1,
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
    outOperand0 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mCastedVarCppName ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::method_first (GALGAS_dynamicTypeComparisonKind & outOperand0,
                                                                  GALGAS_unifiedTypeMap_2D_entry & outOperand1,
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
    outOperand0 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mCastedVarCppName ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::method_last (GALGAS_dynamicTypeComparisonKind & outOperand0,
                                                                 GALGAS_unifiedTypeMap_2D_entry & outOperand1,
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
    outOperand0 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mCastedVarCppName ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListForGeneration result = GALGAS_castInstructionBranchListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListForGeneration result = GALGAS_castInstructionBranchListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListForGeneration result = GALGAS_castInstructionBranchListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::plusAssign_operation (const GALGAS_castInstructionBranchListForGeneration inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::setter_setMTypeComparisonKindAtIndex (GALGAS_dynamicTypeComparisonKind inOperand,
                                                                                          GALGAS_uint inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTypeComparisonKind = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicTypeComparisonKind GALGAS_castInstructionBranchListForGeneration::getter_mTypeComparisonKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  GALGAS_dynamicTypeComparisonKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    result = p->mObject.mProperty_mTypeComparisonKind ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::setter_setMTypeAtIndex (GALGAS_unifiedTypeMap_2D_entry inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mType = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_castInstructionBranchListForGeneration::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::setter_setMCastedVarCppNameAtIndex (GALGAS_string inOperand,
                                                                                        GALGAS_uint inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCastedVarCppName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_castInstructionBranchListForGeneration::getter_mCastedVarCppNameAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    result = p->mObject.mProperty_mCastedVarCppName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::setter_setMInstructionListAtIndex (GALGAS_semanticInstructionListForGeneration inOperand,
                                                                                       GALGAS_uint inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_castInstructionBranchListForGeneration::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                           C_Compiler * inCompiler
                                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_castInstructionBranchListForGeneration::cEnumerator_castInstructionBranchListForGeneration (const GALGAS_castInstructionBranchListForGeneration & inEnumeratedObject,
                                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration_2D_element cEnumerator_castInstructionBranchListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicTypeComparisonKind cEnumerator_castInstructionBranchListForGeneration::current_mTypeComparisonKind (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject.mProperty_mTypeComparisonKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry cEnumerator_castInstructionBranchListForGeneration::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject.mProperty_mType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_castInstructionBranchListForGeneration::current_mCastedVarCppName (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject.mProperty_mCastedVarCppName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration cEnumerator_castInstructionBranchListForGeneration::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject.mProperty_mInstructionList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@castInstructionBranchListForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_castInstructionBranchListForGeneration ("castInstructionBranchListForGeneration",
                                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_castInstructionBranchListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInstructionBranchListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_castInstructionBranchListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_castInstructionBranchListForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

